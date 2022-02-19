using UnityEngine;

public class JetPack : MonoBehaviour
{
    [SerializeField] Inputs inputBits;
    [SerializeField] Rigidbody body;
    [SerializeField] float packPower;
    [SerializeField] Transform head;
    [SerializeField] AudioSource thrustAudio;
    private Vector3 thrustDirection;
    private float thrust;
    private void FixedUpdate()
    {
        thrustDirection = head.forward * inputBits.leftStick.y + head.right * inputBits.leftStick.x;
        thrustDirection.y = inputBits.rightStick.y;
        thrust = inputBits.leftTrig;
        thrustAudio.volume = thrust;
        body.AddForce(thrustDirection * (thrust * packPower));
    }
}
