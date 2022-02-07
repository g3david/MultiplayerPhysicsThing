using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;
using Mirror;
using UnityEngine.XR;

public class HeadFloorOffsetSetter : MonoBehaviour
{
    [Header("Feet")]
    [SerializeField] private NetworkIdentity NetID;
    [SerializeField] private PhysicsHand leftFoot;
    [SerializeField] private PhysicsHand rightFoot;
    [SerializeField] private Transform leftFootTracker;
    [SerializeField] private Transform rightFootTracker;
    [Header("Left Hand")]
    [SerializeField] private Transform LeftHand;
    [Header("Right Hand")]
    [SerializeField] private Transform RightHand;
    private List<InputDevice> hands = new List<InputDevice>();
    private InputDevice leftHand;
    private InputDevice rightHand;
    [Header("Settings")]
    [SerializeField] private Transform head;
    [SerializeField] private Transform floor;
    [SerializeField] private float updateInterval;
    private float delay;
    

    void Start()
    {
        if (XRSettings.isDeviceActive)
        {
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeldInHand, hands);
            leftHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Left));
            rightHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Right));
        }
    }
    void UpdateFeetHeight()
    {
        Vector3 _offset=new Vector3(0f,floor.position.y-head.position.y,0f); 
        float lowest=500f;
        float hOffset=0f;
        foreach(Transform hand in new List<Transform>{LeftHand,RightHand})
        {  
            float check = hand.position.y-floor.position.y;
            if(check<lowest) 
            {
                lowest=check;
                hOffset=head.position.y-hand.position.y;
            }
        }
        _offset.y+=hOffset;
        foreach(PhysicsHand foot in new List<PhysicsHand>{leftFoot,rightFoot})
        {
            if(!foot.freezeOffset) foot.offset.y=_offset.y;
            foot.offset.x=_offset.x;
            foot.offset.z=_offset.z;
        }
    }
    void FixedUpdate()
    {
        if(!NetID.hasAuthority) Destroy(this);
        CheckInputs();
        delay+=Time.fixedDeltaTime;
        if(delay>updateInterval) UpdateFeetHeight();
    }
    private void LateUpdate()
    {
        leftFootTracker.transform.position=leftFoot.transform.position;
        leftFootTracker.transform.rotation=leftFoot.transform.rotation;
        rightFootTracker.transform.position=rightFoot.transform.position;
        rightFootTracker.transform.rotation=rightFoot.transform.rotation;
    }
    private void CheckInputs()
    {
        //Get Values
        leftHand.TryGetFeatureValue(CommonUsages.primaryButton, out bool LPB);
        leftHand.TryGetFeatureValue(CommonUsages.secondaryButton, out bool LSB);
        rightHand.TryGetFeatureValue(CommonUsages.primaryButton, out bool RPB);
        rightHand.TryGetFeatureValue(CommonUsages.secondaryButton, out bool RSB);
        //Set Values
        leftFoot.freezeOffset=LPB;
        rightFoot.freezeOffset=RPB;
    }
}