
//using System.Collections.Generic;
//using TMPro;
//using UnityEngine;
//using Oculus.Platform;
//using Oculus.Platform.Models;
//using UnityEngine.UI;
//using LightReflectiveMirror;

//namespace Mirror.Discovery
//{
//    [DisallowMultipleComponent]
//    [AddComponentMenu("Network/NetworkDiscoveryVRHUDLRM")]
//    [RequireComponent(typeof(LightReflectiveMirrorTransport))]
//    [RequireComponent(typeof(NetworkDiscovery))]
//    public class NetworkDiscoveryVRHUDLRM : MonoBehaviour
//    {
//        [SerializeField] SaveLoad svLoad;
//        [SerializeField] public Color playerColor;
//        [SerializeField] Slider rColor, gColor, bColor;
//        [SerializeField] private TMP_Text WelcomeMessage;
//        [SerializeField] private TMP_Text ColorValues;
//        [SerializeField] private string userName, userID, displayName;
//        [SerializeField] private User user;
//        [SerializeField] private GameObject serverButtonPrefab;
//        [SerializeField] private GameObject serverContent;
//        [SerializeField] private List<GameObject> serverButtons = new List<GameObject>();
//        [SerializeField] private TMP_Text serverCountText;
//        [SerializeField] private Dictionary<long, ServerResponse> discoveredServers = new Dictionary<long, ServerResponse>();
//        Vector2 scrollViewPos = Vector2.zero;
//        [SerializeField] private Renderer previewRender;
//        [SerializeField] private Renderer[] colorRenderers = new Renderer[0];
//        public NetworkDiscovery networkDiscovery;
//        private LightReflectiveMirrorTransport relayServer;
//        private bool ColorSaved;
//        private Color tempColor;
//        [SerializeField] float elapsed, SaveInterval = 5;

//        public LightReflectiveMirrorTransport RelayServer { get => relayServer; set => relayServer = value; }

//        public void ColorChanged()
//        {
//            tempColor = new Color(rColor.value, gColor.value, bColor.value);
//            ColorSaved = false;
//            elapsed = 0;
//            previewRender.material.SetColor("_Color", tempColor);
//            ColorValues.text = $"R,G,B\n{tempColor.r * 255},{tempColor.g * 255},{tempColor.b * 255}";
//        }

//        private void applyColor()
//        {
//            playerColor = tempColor;
//            foreach (Renderer renderer in colorRenderers)
//            {
//                renderer.material.SetColor("_Color", playerColor);
//            }
//        }
//        private void LateUpdate()
//        {
//            if (!ColorSaved)
//            {
//                elapsed += Time.deltaTime;
//                if (elapsed > SaveInterval)
//                {
//                    applyColor();
//                    svLoad.saveColor(playerColor, "pColor");
//                    ColorSaved = true;
//                }
//            }
//        }
//        private void Awake()
//        {
//            Core.Initialize();
//            Users.GetLoggedInUser().OnComplete(OnGetUser);
//            playerColor = svLoad.loadColor("pColor");
//            rColor.value = playerColor.r;
//            gColor.value = playerColor.g;
//            bColor.value = playerColor.b;
//            applyColor();
//            FindServers();
//            relayServer.RequestServerList();
//        }

//#if UNITY_EDITOR
//        void OnValidate()
//        {
//            if (relayServer == null)
//            {
//                relayServer = GetComponent<LightReflectiveMirrorTransport>();
//                UnityEditor.Events.UnityEventTools.AddPersistentListener(networkDiscovery.OnServerFound, OnDiscoveredServer);
//                UnityEditor.Undo.RecordObjects(new Object[] { this, networkDiscovery }, "Set NetworkDiscovery");
//            }
//        }
//#endif
//        public void FindServers()
//        {
//            discoveredServers.Clear();
//            relayServer.RequestServerList();
//            UpdateServerUI();
//        }
//        public void StartHost()
//        {
//            discoveredServers.Clear();
//            NetworkManager.singleton.StartHost();
//            networkDiscovery.AdvertiseServer();
//        }
//        public void StartServer()
//        {
//            discoveredServers.Clear();
//            NetworkManager.singleton.StartServer();
//            networkDiscovery.AdvertiseServer();
//        }
//        private void UpdateServerUI()
//        {
//            foreach (GameObject btn in serverButtons)
//            {
//                foreach (GameObject bn in btn.GetComponentsInChildren<GameObject>())
//                {
//                    Destroy(bn);
//                }
//                Destroy(btn);
//                serverButtons.Remove(btn);
//            }
//            int pos = -2;
//            int ServID = 1;
//            serverCountText.text = $"{discoveredServers.Count} Servers Found";
//            foreach (ServerResponse info in relayServer.relayServerList())
//            {
//                GameObject btn = Instantiate(serverButtonPrefab, serverContent.transform, true) as GameObject;
//                btn.transform.localScale = new Vector3(1, 1, 1);
//                btn.transform.localPosition = new Vector3(46.5f, pos, 0);
//                ServerButton btninfo = btn.GetComponentInChildren<ServerButton>();
//                btninfo.connectionID = info.serverId;
//                btninfo.hud = this;
//                serverButtons.Add(btn);
//                btn.GetComponentInChildren<TMP_Text>().text = $"{ServID}. {info.EndPoint.Address.ToString()}";
//                pos -= 12;
//                ServID += 1;
//            }
//        }
//        public void Exit()
//        {
//            if (NetworkServer.active && NetworkClient.isConnected)
//            {
//                NetworkManager.singleton.StopHost();
//                networkDiscovery.StopDiscovery();
//            }
//            else if (NetworkClient.isConnected)
//            {
//                NetworkManager.singleton.StopClient();
//                networkDiscovery.StopDiscovery();
//            }
//            else if (NetworkServer.active)
//            {
//                NetworkManager.singleton.StopServer();
//                networkDiscovery.StopDiscovery();
//            }
//        }

//        public void Connect(ServerResponse info)
//        {
//            networkDiscovery.StopDiscovery();
//            NetworkManager.singleton.StartClient(info.uri);
//        }
//        public void Connect(long info)
//        {
//            Connect(discoveredServers[info]);
//        }
//        private void OnGetUser(Message<User> message)
//        {
//            if (message.Data != null)
//            {
//                var id = message.Data.ID;
//                Debug.Log("My id is " + id);

//                var ID = message.Data.ID;
//                userID = ID.ToString();

//                displayName = message.Data.OculusID;
//                Debug.Log("My OculusID is " + displayName);
//                WelcomeMessage.text = displayName;

//            }
//        }
//    }
//}