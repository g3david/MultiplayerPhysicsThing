using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

[ExecuteInEditMode]
public class NetworkTransformControl : MonoBehaviour
{
    [SerializeField] float sendInterval=.1f;
    [SerializeField] float positionalSensitivity=.01f;
    [SerializeField] float rotationalSensitivity=.01f;
    void Update()
    {
        foreach(NetworkTransformChild netTransform in gameObject.GetComponents<NetworkTransformChild>())
        {
            netTransform.sendInterval=sendInterval;
            netTransform.rotationSensitivity=rotationalSensitivity;
            netTransform.positionSensitivity=positionalSensitivity;
        }
    }  
}
