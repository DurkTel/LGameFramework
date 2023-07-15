using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Injection : MonoBehaviour
{

    public List<InjectionObject> injectionObjects = new List<InjectionObject>();

    public Component Get(string name)
    {
        foreach (var item in injectionObjects)
            if (item.name == name)
                return item.component;
        return null;
    }
}

[System.Serializable]
public class InjectionObject
{
    [SerializeField]
    private string m_Name;
    public string name { get { return m_Name; } }
    [SerializeField]
    private Object m_Target;
    public Object target { get { return m_Target; } }
    [SerializeField]
    private Component m_Component;
    public Component component { get { return m_Component; } }
}
