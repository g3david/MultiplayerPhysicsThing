using System;
using TMPro;
using UnityEngine;

public class CurrentTime : MonoBehaviour
{
    [SerializeField] private TMP_Text Clock;
    [SerializeField] private String ZuluTimeFormat="HHmmZ";
    [SerializeField] private String LocalTimeFormat="HHmmL";
    [SerializeField] private bool local=false;
    void LateUpdate()
    {
        if(local)
        {
            Clock.text = DateTime.Now.ToString(LocalTimeFormat);
        }
        else
        {
            Clock.text = DateTime.UtcNow.ToString(ZuluTimeFormat);
        }
    }
}
