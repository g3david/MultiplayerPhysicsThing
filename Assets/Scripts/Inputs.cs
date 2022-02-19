using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using TMPro;
using UnityEngine.XR;

public class Inputs : MonoBehaviour
{
    [SerializeField] Transform rightStickBall, leftStickBall;
    [SerializeField] TMP_Text leftOutputText, rightOutputText;
    public Vector2 leftStick, rightStick;
    public float rightBatLvl, leftBatLvl;
    public bool leftPriBtn, leftSecBtn,rightPriBtn, rightSecBtn;
    [Range(0f,1.0f)]
    public float leftGrip, leftTrig, rightGrip, rightTrig;
    private List<InputDevice> hands = new List<InputDevice>();
    private InputDevice leftHand;
    private InputDevice rightHand;
    void Start()
    {
        if (XRSettings.isDeviceActive)
        {
            InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.HeldInHand,hands);
            leftHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Left));
            rightHand = hands.FirstOrDefault(h => h.characteristics.HasFlag(InputDeviceCharacteristics.Right));
        }
    }

    void FixedUpdate()
    {
        CheckInputs();
    }
    private void CheckInputs()
    {
        //Get Values

        leftHand.TryGetFeatureValue(CommonUsages.primaryButton, out leftPriBtn);
        leftHand.TryGetFeatureValue(CommonUsages.secondaryButton, out leftSecBtn);
        leftHand.TryGetFeatureValue(CommonUsages.primary2DAxis, out leftStick);
        leftHand.TryGetFeatureValue(CommonUsages.trigger, out leftTrig);
        leftHand.TryGetFeatureValue(CommonUsages.grip, out leftGrip);
        leftHand.TryGetFeatureValue(CommonUsages.batteryLevel, out leftBatLvl);

        rightHand.TryGetFeatureValue(CommonUsages.primaryButton, out rightPriBtn);
        rightHand.TryGetFeatureValue(CommonUsages.secondaryButton, out rightSecBtn);
        rightHand.TryGetFeatureValue(CommonUsages.primary2DAxis, out rightStick);
        rightHand.TryGetFeatureValue(CommonUsages.trigger, out rightTrig);
        rightHand.TryGetFeatureValue(CommonUsages.grip, out rightGrip);
        rightHand.TryGetFeatureValue(CommonUsages.batteryLevel, out rightBatLvl);

        //Set Values
        if (rightStickBall != null) rightStickBall.localPosition = new Vector3(rightStick.x * 0.25f, rightStick.y * 0.25f, 0);
        if (leftStickBall != null) leftStickBall.localPosition = new Vector3(leftStick.x * 0.25f, 0, leftStick.y * 0.25f);

        if (leftOutputText != null) leftOutputText.text = $"Left\n{leftBatLvl}%\n{leftPriBtn}\n{leftSecBtn}\n{leftTrig}\n{leftGrip}\n{leftStick.x}\n{leftStick.y}";
        if (rightOutputText != null) rightOutputText.text = $"Right\n{rightBatLvl}%\n{rightPriBtn}\n{rightSecBtn}\n{rightTrig}\n{rightGrip}\n{rightStick.x}\n{rightStick.y}";
    }
}
