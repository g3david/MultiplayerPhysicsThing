using Mirror;
using UnityEngine;
using UnityEngine.Events;

public class hasAuthorityToggles : NetworkBehaviour
{
    [SerializeField] private UnityEvent actionList;
    [SerializeField] private Behaviour[] destroyComponentList = new Behaviour[0];
    [SerializeField] private GameObject[] destroyGameobjectList = new GameObject[0];
    [SerializeField] private bool runOnMyStuff=false;
    void LateUpdate()
    {
        if(hasAuthority==runOnMyStuff)
        {
            actionList?.Invoke();
            foreach(GameObject g in destroyGameobjectList)
            {
                foreach (Transform child in g.transform)
                {
                    child.gameObject.SetActive(false);
                }
                g.SetActive(false);
            }
            foreach(Behaviour c in destroyComponentList)
            {
                c.enabled=false;
            }
        }
        Destroy(this);
    }
}
