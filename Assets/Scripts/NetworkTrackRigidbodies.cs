using UnityEngine;
using UnityEditor;
using Mirror.Experimental;

public class NetworkTrackRigidbodies : MonoBehaviour
{
    [SerializeField] private bool clientAuthority=false;
    public void updateTLRs()
    {
        foreach(Component TLR in gameObject.GetComponents<NetworkLerpRigidbody>())
            {
                DestroyImmediate(TLR,true);
            }
        foreach(Component TLR in gameObject.GetComponentsInChildren<NetworkLerpRigidbody>())
            {
                DestroyImmediate(TLR,true);
            }
        foreach(Rigidbody rb in gameObject.GetComponentsInChildren<Rigidbody>())
            {
                NetworkLerpRigidbody TLR=gameObject.AddComponent<NetworkLerpRigidbody>();
                TLR.target=rb;
                TLR.clientAuthority=clientAuthority;
            }
    }
}