using UnityEngine;
using Mirror;

public class PhysicsHand : MonoBehaviour
{
    public bool freezeYOffset=false;
    [Header("PID")]
    [SerializeField] float frequency = 50f;
    [SerializeField] NetworkIdentity NetID;
    [SerializeField] float damping = 1f;
    [SerializeField] float rotFrequency = 100f;
    [SerializeField] float rotDamping = 0.9f;
    [SerializeField] private Rigidbody playerRigidbody;
    [SerializeField] Transform target;
    public Vector3 offset = Vector3.zero;
    public bool trackPos = true;
    public bool trackRot = true;
    [Space]
    [Header("Springs")]
    [SerializeField] float climbForce = 1000f;
    [SerializeField] float climbDrag = 500f;

    Rigidbody _rigidbody;
    Vector3 _previousPosition;
    bool _isColliding = false;

    void Start()
    {
        transform.position = target.position;
        transform.rotation = target.rotation;
        _rigidbody = GetComponent<Rigidbody>();
        _rigidbody.maxAngularVelocity = float.PositiveInfinity;
        _previousPosition = transform.position;
    }
    void FixedUpdate()
    {
        if(trackPos) {PIDMovement();}
        if(trackRot) {PIDRotation();}
        if(_isColliding&&NetID.hasAuthority) {HookesLaw();}
    }
    void PIDMovement()
    {
        float dT = Time.fixedDeltaTime;
        float kp = (6f * frequency) * (6f *frequency) * 0.25f;
        float kd = 4.5f * frequency * damping;
        float g = 1/(1+kd * dT + kp * dT * dT);
        float ksg = kp * g;
        float kdg = (kd + kp * dT) * g;
        Vector3 force = ((target.position + offset) - transform.position) * ksg + (playerRigidbody.velocity - _rigidbody.velocity) * kdg;
        _rigidbody.AddForce(force,ForceMode.Acceleration);
    }
    void PIDRotation()
    {
        float dT = Time.fixedDeltaTime;
        float kp = (6f * rotFrequency) * (6f * rotFrequency) * 0.25f;
        float kd = 4.5f * rotFrequency * rotDamping;
        float g = 1 / (1 + kd * dT +kp * dT * dT);
        float ksg = kp * g;
        float kdg = (kd +kp * dT) * g;
        Quaternion q = target.rotation * Quaternion.Inverse(transform.rotation);
        if(q.w < 0)
        {
            q.x = -q.x;
            q.y = -q.y;
            q.z = -q.z;
            q.w = -q.w;
        }
        q.ToAngleAxis(out float angle, out Vector3 axis);
        axis.Normalize();
        axis *= Mathf.Deg2Rad;
        Vector3 torque = ksg * axis * angle + -_rigidbody.angularVelocity * kdg;
        _rigidbody.AddTorque(torque,ForceMode.Acceleration);
    }
    void HookesLaw()
    {
        Vector3 displacementFromResting = transform.position - (target.position+offset);
        Vector3 force = displacementFromResting * climbForce;
        float drag = GetDrag();
        playerRigidbody.AddForce(force,ForceMode.Acceleration);
        playerRigidbody.AddForce(drag * -playerRigidbody.velocity * climbDrag, ForceMode.Acceleration);
    }

    float GetDrag()
    {
        Vector3 handVelocity = (target.position - _previousPosition) / Time.fixedDeltaTime;
        float drag = 1 / handVelocity.magnitude + .01f;
        drag = Mathf.Clamp(drag,0.03f,1f);
        _previousPosition = transform.position;
        return drag;
    }
    void OnCollisionEnter(Collision cEvent)
    {
        if(transform.root == cEvent.collider.transform.root) { return; }
        _isColliding = true;
    }
    void OnCollisionExit(Collision cEvent)
    {
        if(transform.root == cEvent.collider.transform.root) { return; }
        _isColliding = false; 
    }
}
