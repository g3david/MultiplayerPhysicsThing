using Mirror;
using UnityEngine;

public class MatchTransform : MonoBehaviour
{
    [SerializeField] Transform target=null;
    [SerializeField] NetworkIdentity NetID;
    // Start is called before the first frame update
    void Start()
    {
        transform.position=target.position;
        transform.rotation=target.rotation;
    }
    void FixedUpdate()
    {
        if(!NetID.hasAuthority) Destroy(this);
        transform.position=target.position;
        transform.rotation=target.rotation;
    }
}
