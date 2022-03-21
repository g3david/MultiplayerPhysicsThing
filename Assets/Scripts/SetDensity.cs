using UnityEngine;
[RequireComponent(typeof(Rigidbody))]
[ExecuteInEditMode]
public class SetDensity : MonoBehaviour
{
    [SerializeReference] Rigidbody target;
    [SerializeField] float density = 1f;
    private void Reset()
    {
        target = GetComponent<Rigidbody>();
    }
    private void OnValidate()
    {
        target.SetDensity(density);
        target.mass = target.mass;
    }
}