using UnityEngine;

namespace Mirror.Discovery
{
    public class ServerButton : MonoBehaviour
    {
        public long connectionID;
        public NetworkDiscoveryVRHUD hud;

        public void Connect()
        {
            hud.Connect(connectionID);
        }
    }
}