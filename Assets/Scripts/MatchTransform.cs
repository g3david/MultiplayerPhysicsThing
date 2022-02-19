using Mirror;
using UnityEngine;

public class MatchTransform : MonoBehaviour
{
    [SerializeField] Transform targetX, targetY, targetZ, targetRot;
    [SerializeField] NetworkIdentity NetID;
    // Start is called before the first frame update
    void Start()
    {
        transform.position = new Vector3(targetX.position.x, targetY.position.y, targetZ.position.z);
        transform.rotation = targetRot.rotation;
    }
    void FixedUpdate()
    {
        if (!NetID.hasAuthority) Destroy(this);
        transform.position = new Vector3(targetX.position.x, targetY.position.y, targetZ.position.z);
        transform.rotation = targetRot.rotation;
    }
}
