using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;

public class HeadFloorOffsetSetter : MonoBehaviour
{
    [Header("Feet")]
    [SerializeField] private PhysicsHand leftFoot;
    [SerializeField] private PhysicsHand rightFoot;
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
    [SerializeField] private bool centerFeetUnderHead = true;
    

    void Start()
    {
        if (XRSettings.isDeviceActive)
        {
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeldInHand, hands);
            leftHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Left));
            rightHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Right));
        }
    }
    void LateUpdate()
    {
        bool oldCFUH=centerFeetUnderHead;
        CheckInputs();
        Vector3 _offset=new Vector3(0f,floor.position.y-head.position.y,0f); 
        float lowest=500f;
        float hOffset=0f;
        float xC=0f;
        float zC=0f;
        foreach(Transform hand in new List<Transform>{LeftHand,RightHand})
        {  
            float check = hand.position.y-floor.position.y;
            if(check<lowest) 
            {
                lowest=check;
                hOffset=head.position.y-hand.position.y;
            }
            if(centerFeetUnderHead)
            {
                xC+=hand.position.x;
                zC+=hand.position.z;
            }
        }
        if(centerFeetUnderHead)
        {
            xC=xC/2;
            zC=zC/2;
            _offset.x-=(xC-head.position.x);
            _offset.z-=(zC-head.position.z);
        }
        centerFeetUnderHead=oldCFUH;
        _offset.y+=hOffset;
        foreach(PhysicsHand foot in new List<PhysicsHand>{leftFoot,rightFoot})
        {
            if(!foot.freezeYOffset) foot.offset.y=_offset.y;
            foot.offset.x=_offset.x;
            foot.offset.z=_offset.z;
        }
    }
    private void CheckInputs()
    {
        //Get Values
        leftHand.TryGetFeatureValue(CommonUsages.primaryButton, out bool LPB);
        leftHand.TryGetFeatureValue(CommonUsages.secondaryButton, out bool LSB);
        rightHand.TryGetFeatureValue(CommonUsages.primaryButton, out bool RPB);
        rightHand.TryGetFeatureValue(CommonUsages.secondaryButton, out bool RSB);
        //Set Values
        leftFoot.freezeYOffset=LPB;
        rightFoot.freezeYOffset=RPB;
        if(RSB&&LSB) { centerFeetUnderHead=true; }
        leftFoot.trackRot=!LSB;
        //leftFoot.ignoreHookesLaw=LSB;
        rightFoot.trackRot=!RSB;
        //rightFoot.ignoreHookesLaw=RSB;
    }
}