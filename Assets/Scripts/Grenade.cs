using UnityEngine;
using Mirror;
public class Grenade : NetworkBehaviour
{
    [SerializeField] private GameObject explosivePrefab;
    [SerializeField] private float fuse = 5f;
    [SerializeField] private bool pinPulled = false;
    [SerializeField] private bool cooking = false;
    [SerializeField] private Joint pinJoint, tripJoint;
    private bool held = false;
    private float fuseLeft = 0f;
    public void Start()
    {
        fuseLeft = fuse;
    }
    public void Update()
    {
        if (cooking)
        {
            fuseLeft -= Time.deltaTime;
            if (fuseLeft <= 0f)
            {
                Explode();
            }
        }
    }
    public void pullPin()
    {
        Destroy(pinJoint);
        pinPulled = true;
        if (!held)
        {
            Destroy(tripJoint);
            cooking = true;
        }
    }
    public void trip()
    {
        if (pinPulled)
        {
            Destroy(tripJoint);
            cooking = true;
        }
    }
    public void Explode()
    {
        var nadeSpawn = Instantiate(explosivePrefab, transform.position, transform.rotation);
        NetworkServer.Spawn(nadeSpawn, connectionToClient);
        NetworkServer.Destroy(gameObject);
    }
}
