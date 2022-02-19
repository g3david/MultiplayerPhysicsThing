using Mirror;
using UnityEngine;
public class PhysNetFollow : PhysicsFollow
{
    [Header("Net Stuff")]
    public NetworkIdentity NetID;
    [SerializeField] private Transform playerTarget, fallbackTarget;

    public override void Begin()
    {
        target = fallbackTarget;
        if (NetID.hasAuthority) target = playerTarget;
        base.Begin();
    }
    public override void FixedUpdate()
    {
        base.FixedUpdate();
        if (NetID.hasAuthority)
        {
            fallbackTarget.position = targetPos;
            fallbackTarget.rotation = targetRot;
        }
    }
}