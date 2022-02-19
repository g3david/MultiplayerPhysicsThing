using UnityEngine;

public class PhysicsFollow : MonoBehaviour
{
    [Header("PID")]
    [SerializeField] float frequency = 50f;
    [SerializeField] float damping = 1f;
    [SerializeField] float rotFrequency = 100f;
    [SerializeField] float rotDamping = 0.9f;
    [Header("Rig Info")]
    [SerializeField] Rigidbody playerRigidbody;
    [SerializeField] bool rigExists = true;
    [Header("Target Info")]
    public Transform target;
    public Vector3 targetPos;
    public Quaternion targetRot;
    [Space]
    [Header("Springs")]
    [SerializeField] float climbForce = 1000f;
    [SerializeField] float climbDrag = 500f;

    Rigidbody _rigidbody;
    Vector3 _previousPosition, _previousTgtPos;
    [SerializeField] private bool _isColliding = false;
    private void Start()
    {
        Begin();
    }
    public virtual void Begin()
    {
        transform.position = target.position;
        transform.rotation = target.rotation;
        _rigidbody = GetComponent<Rigidbody>();
        _rigidbody.maxAngularVelocity = float.PositiveInfinity;
        _previousPosition = transform.position;
        if (playerRigidbody == null) rigExists = false;
    }

    public virtual void GetPosition()
    {
        targetPos = target.position;
    }
    public virtual void GetRotation()
    {
        targetRot = target.rotation;
    }
    public virtual void FixedUpdate()
    {
        GetPosition();
        GetRotation();
        PIDMovement();
        PIDRotation();
        if (_isColliding && rigExists) { HookesLaw(); }
        _previousPosition = transform.position;
    }
    void PIDMovement()
    {
        float dT = Time.fixedDeltaTime;
        float kp = (6f * frequency) * (6f * frequency) * 0.25f;
        float kd = 4.5f * frequency * damping;
        float g = 1 / (1 + kd * dT + kp * dT * dT);
        float ksg = kp * g;
        float kdg = (kd + kp * dT) * g;
        Vector3 force = ((targetPos) - transform.position) * ksg + (playerRigidbody.velocity - _rigidbody.velocity) * kdg;
        _rigidbody.AddForce(force);
    }
    void PIDRotation()
    {
        float dT = Time.fixedDeltaTime;
        float kp = (6f * rotFrequency) * (6f * rotFrequency) * 0.25f;
        float kd = 4.5f * rotFrequency * rotDamping;
        float g = 1 / (1 + kd * dT + kp * dT * dT);
        float ksg = kp * g;
        float kdg = (kd + kp * dT) * g;
        Quaternion q = targetRot * Quaternion.Inverse(transform.rotation);
        if (q.w < 0)
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
        _rigidbody.AddTorque(torque);
    }
    void HookesLaw()
    {
        Vector3 displacementFromResting = transform.position - (targetPos);
        Vector3 force = displacementFromResting * climbForce;
        float drag = GetDrag();
        playerRigidbody.AddForce(force, ForceMode.Acceleration);
        playerRigidbody.AddForce(drag * -playerRigidbody.velocity * climbDrag);
    }

    float GetDrag()
    {
        Vector3 handVelocity = (targetPos - _previousPosition) / Time.fixedDeltaTime;
        float drag = 1 / handVelocity.magnitude + .01f;
        drag = Mathf.Clamp(drag, 0.03f, 1f);
        return drag;
    }
    void OnCollisionEnter(Collision cEvent)
    {
        if (cEvent.body == null)
        {
            _isColliding = true;
            return;
        }
        if (_rigidbody.transform.parent == cEvent.rigidbody.transform.parent) return;
        _isColliding = true;
    }
    void OnCollisionExit(Collision cEvent)
    {
        if (cEvent.body == null)
        {
            _isColliding = false;
            return;
        }
        if (_rigidbody.transform.parent == cEvent.rigidbody.transform.parent) return;
        _isColliding = false;
    }
}