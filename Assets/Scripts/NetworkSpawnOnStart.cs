using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

public class NetworkSpawnOnStart : NetworkBehaviour
{
    [SerializeField] private GameObject networkSpawn;
    void Start()
    {
        var netSpawn = Instantiate(networkSpawn, transform.position, transform.rotation);
        NetworkServer.Spawn(netSpawn, connectionToClient);
        Destroy(gameObject);
    }
}