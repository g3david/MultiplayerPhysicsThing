using UnityEngine;

public class PhysFoot : PhysNetFollow
{
    [Header("Foot Stuff")]
    public bool footPlant;
    public bool freezeYOffset;
    [SerializeField] Transform floor, head, hand, otherHand;
    Quaternion _pRotation;
    private Vector3 midpoint;
    private Vector3 _offset;
    private float yOffset;
    public override void Begin()
    {
        base.Begin();
        GetPosition();
        GetRotation();
        transform.position = targetPos;
        transform.rotation = targetRot;
    }
    public override void GetPosition()
    {
        base.GetPosition();
        if (!NetID.hasAuthority) return;
        if (!footPlant)
        {
            Transform lowY = hand;
            if (otherHand.position.y - floor.position.y < hand.position.y - floor.position.y) lowY = otherHand;
            _offset.x = hand.position.x - floor.position.x;
            _offset.z = hand.position.z - floor.position.z;
            if (!freezeYOffset) yOffset = (lowY.position.y - floor.position.y);
            _offset.y = (hand.position.y - yOffset) - floor.position.y;
            midpoint = (hand.position + otherHand.position) / 2;
        }
        targetPos = floor.position + _offset;
    }
    public override void GetRotation()
    {
        base.GetRotation();
        //targetRot = _pRotation;
        //if (!NetID.hasAuthority || footPlant) return;
        //Quaternion oldRot = transform.rotation;
        //transform.LookAt(midpoint);
        //transform.Rotate(-90, 0, 0);
        //transform.rotation = oldRot;
        //targetRot = transform.rotation;
    }
}