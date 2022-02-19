using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Oculus.Platform;
using Oculus.Platform.Models;
using UnityEngine.UI;

namespace Mirror.Discovery
{
    [DisallowMultipleComponent]
    [AddComponentMenu("Network/NetworkDiscoveryVRHUD")]
    [RequireComponent(typeof(NetworkDiscovery))]
    public class NetworkDiscoveryVRHUD : MonoBehaviour
    {
        [SerializeField] public Color playerColor;
        [SerializeField] Slider rColor, gColor, bColor;
        [SerializeField] private TMP_Text WelcomeMessage;
        [SerializeField] private string userName;
        [SerializeField] private string displayName;
        [SerializeField] private User user;
        [SerializeField] private GameObject serverButtonPrefab;
        [SerializeField] private GameObject serverContent;
        [SerializeField] private List<GameObject> serverButtons = new List<GameObject>();
        [SerializeField] private TMP_Text serverCountText;
        [SerializeField] private Dictionary<long, ServerResponse> discoveredServers = new Dictionary<long, ServerResponse>();
        Vector2 scrollViewPos = Vector2.zero;
        [SerializeField] private Renderer[] colorRenderers = new Renderer[0];
        public NetworkDiscovery networkDiscovery;

        public void applyColor()
        {
            playerColor = new Color(rColor.value, gColor.value, bColor.value);
            foreach (Renderer renderer in colorRenderers)
            {
                renderer.material.SetColor("_Color", playerColor);
            }
        }
        private void Start()
        {
            applyColor();
            Core.Initialize();
            Users.GetLoggedInUser();
            GetUserName();
            FindServers();
        }
#if UNITY_EDITOR
        void OnValidate()
        {
            if (networkDiscovery == null)
            {
                networkDiscovery = GetComponent<NetworkDiscovery>();
                UnityEditor.Events.UnityEventTools.AddPersistentListener(networkDiscovery.OnServerFound, OnDiscoveredServer);
                UnityEditor.Undo.RecordObjects(new Object[] { this, networkDiscovery }, "Set NetworkDiscovery");
            }
        }
#endif
        public void FindServers()
        {
            discoveredServers.Clear();
            networkDiscovery.StartDiscovery();
            UpdateServerUI();
        }
        public void StartHost()
        {
            discoveredServers.Clear();
            NetworkManager.singleton.StartHost();
            networkDiscovery.AdvertiseServer();
        }
        public void StartServer()
        {
            discoveredServers.Clear();
            NetworkManager.singleton.StartServer();
            networkDiscovery.AdvertiseServer();
        }
        private void UpdateServerUI()
        {
            foreach (GameObject btn in serverButtons)
            {
                foreach (GameObject bn in btn.GetComponentsInChildren<GameObject>())
                {
                    Destroy(bn);
                }
                Destroy(btn);
                serverButtons.Remove(btn);
            }
            int pos = -2;
            int ServID = 1;
            serverCountText.text = $"{discoveredServers.Count} Servers Found";
            foreach (ServerResponse info in discoveredServers.Values)
            {
                GameObject btn = Instantiate(serverButtonPrefab, serverContent.transform, true) as GameObject;
                btn.transform.localScale = new Vector3(1, 1, 1);
                btn.transform.localPosition = new Vector3(46.5f, pos, 0);
                ServerButton btninfo = btn.GetComponentInChildren<ServerButton>();
                btninfo.connectionID = info.serverId;
                btninfo.hud = this;
                serverButtons.Add(btn);
                btn.GetComponentInChildren<TMP_Text>().text = $"{ServID}. {info.EndPoint.Address.ToString()}";
                pos -= 12;
                ServID += 1;
            }
        }
        public void Exit()
        {
            if (NetworkServer.active && NetworkClient.isConnected)
            {
                NetworkManager.singleton.StopHost();
                networkDiscovery.StopDiscovery();
            }
            else if (NetworkClient.isConnected)
            {
                NetworkManager.singleton.StopClient();
                networkDiscovery.StopDiscovery();
            }
            else if (NetworkServer.active)
            {
                NetworkManager.singleton.StopServer();
                networkDiscovery.StopDiscovery();
            }
        }

        public void Connect(ServerResponse info)
        {
            networkDiscovery.StopDiscovery();
            NetworkManager.singleton.StartClient(info.uri);
        }
        public void Connect(long info)
        {
            Connect(discoveredServers[info]);
        }

        public void OnDiscoveredServer(ServerResponse info)
        {
            // Note that you can check the versioning to decide if you can connect to the server or not using this method
            discoveredServers[info.serverId] = info;
            UpdateServerUI();
        }
        private void GetUserName()
        {
            Users.GetLoggedInUser().OnComplete(GetLoggedInUserCallback);
        }

        private void GetLoggedInUserCallback(Message msg)
        {
            if (!msg.IsError)
            {
                user = msg.GetUser();
                userName = user.OculusID;
                displayName = user.DisplayName;
                WelcomeMessage.text = displayName + " " + userName;
            }
        }
    }
}