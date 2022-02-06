using UnityEngine;

public class RandomRotationOnStart : MonoBehaviour
{
    [SerializeField] private float minRotationSpeed=0.1f;
    [SerializeField] private float maxRotationSpeed=0.3f;
    [SerializeField] private bool disableAngularDrag=true;
    void Update()
    {
        if (TryGetComponent(out Rigidbody rotater))
        {
            if(disableAngularDrag) {rotater.angularDrag=0f;}
            rotater.angularVelocity = Random.onUnitSphere*Random.Range(minRotationSpeed,maxRotationSpeed);
        }
        Destroy(this);
    }
}
