using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class TeamColorSetter : NetworkBehaviour
{
    [SerializeField] private Renderer[] colorRenderers = new Renderer[0];
    [SerializeField] VRPlayer player;
    [SyncVar(hook = nameof(HandleTeamColorUpdated))]
    [SerializeField] Color teamColor;
    private Color _pColor;
    public void colorUpdate()
    {
        teamColor = player.GetTeamColor();
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