using System;
using System.Collections.Generic;
using UnityEngine;
using Mirror;
using Mirror.Discovery;

public class VRPlayer : NetworkBehaviour
{
    [SyncVar(hook = nameof(ClientHandleResourceUpdated))]
    private int money = 500;
    public event Action<int> ClientOnResourcesUpdated;
    [SerializeReference] private Color teamColor = new Color();
    [SerializeField] TeamColorSetter colorSetter;
    private void Start()
    {
        if (hasAuthority)
        {
            teamColor = GameObject.Find("NetworkStuff").GetComponent<NetworkDiscoveryVRHUD>().playerColor;
            colorSetter.colorUpdate();
        }
    }
    public Color GetTeamColor()
    {
        return teamColor;
    }
    public int GetResources()
    {
        return money;
    }
    public void SetTeamColor(Color newTeamColor)
    {
        teamColor = newTeamColor;
    }
    private void ClientHandleResourceUpdated(int oldResources, int newResources)
    {
        ClientOnResourcesUpdated?.Invoke(newResources);
    }
}