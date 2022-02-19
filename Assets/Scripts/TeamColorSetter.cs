using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class TeamColorSetter : NetworkBehaviour
{
    [SerializeField] private Renderer[] colorRenderers = new Renderer[0];
    [SerializeField] VRPlayer player;
    [SyncVar(hook = nameof(HandleTeamColorUpdated))]
    private Color teamColor = new Color();
    private void Start()
    {
        teamColor = player.GetTeamColor();
        applyColor();
    }
    private void LateUpdate()
    {
        applyColor();
    }
    private void applyColor()
    {
        foreach (Renderer renderer in colorRenderers)
        {
            renderer.material.SetColor("_Color", teamColor);
        }
    }
    private void HandleTeamColorUpdated(Color oldColor, Color newColor)
    {
        teamColor = newColor;
        applyColor();
    }
}