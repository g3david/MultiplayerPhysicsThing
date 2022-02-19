using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using Mirror;
using UnityEngine.XR;

public class HeadFloorOffsetSetter : MonoBehaviour
{
    [SerializeField] private NetworkIdentity NetID;
    [Header("Feet")]
    [SerializeField] private PhysFoot leftFoot;
    [SerializeField] private PhysFoot rightFoot;
    private bool pLSB, pRSB;
    private InputDevice leftHand, rightHand;
    private List<InputDevice> hands = new List<InputDevice>();
    void Start()
    {
        if (XRSettings.isDeviceActive)
        {
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeldInHand, hands);
            leftHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Left));
            rightHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Right));
        }
    }
    
    void FixedUpdate()
    {
        if (!NetID.hasAuthority) Destroy(this);
        CheckInputs();
    }
    private void CheckInputs()
    {
        //Get Values
        leftHand.TryGetFeatureValue(CommonUsages.primaryButton, out bool LPB);
        leftHand.TryGetFeatureValue(CommonUsages.secondaryButton, out bool LSB);
        leftHand.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 leftStick);
        rightHand.TryGetFeatureValue(CommonUsages.primaryButton, out bool RPB);
        rightHand.TryGetFeatureValue(CommonUsages.secondaryButton, out bool RSB);
        rightHand.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 rightStick);
        //Set Values
        leftFoot.freezeYOffset = LPB;
        rightFoot.freezeYOffset = RPB;
        if (LSB && !pLSB) leftFoot.footPlant = !leftFoot.footPlant;
        if (RSB && !pRSB) rightFoot.footPlant = !rightFoot.footPlant;
        pLSB = LSB;
        pRSB = RSB;
    }
}