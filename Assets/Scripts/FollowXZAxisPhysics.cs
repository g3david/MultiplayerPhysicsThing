using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(Rigidbody))]
public class FollowXZAxisPhysics : MonoBehaviour
{
    public Transform Follow;
    [SerializeField] private Rigidbody rb;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }
    // Update is called once per frame
    void FixedUpdate()
    {
        Vector3 pos;
        pos.x = Follow.position.x;
        pos.z = Follow.position.z;
        pos.y = transform.position.y;
        rb.MovePosition(pos);
    }
}
