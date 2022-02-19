using UnityEngine;

public class JetPack : MonoBehaviour
{
    [SerializeField] Inputs inputBits;
    [SerializeField] Rigidbody body;
    [SerializeField] float packPower;
    [SerializeField] AudioSource thrustAudio;
    private Vector3 thrustDirection;
    private float thrust;
    private void FixedUpdate()
    {
        thrustDirection.x = inputBits.leftStick.x;
        thrustDirection.y = inputBits.rightStick.y;
        thrustDirection.z = inputBits.leftStick.y;
        thrust = inputBits.leftTrig;
        thrustAudio.volume = thrust;
        body.AddForce(thrustDirection * (thrust * packPower));
    }
}
