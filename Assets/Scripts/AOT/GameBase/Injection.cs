using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Injection : UIBehaviour
{
    public List<InjectionObject> injectionObjects = new List<InjectionObject>();

    protected Dictionary<string, Component> m_Components;

    public Component this[string name]
    { 
        get 
        {
            if (m_Components == null)
            { 
                m_Components = new Dictionary<string, Component>(injectionObjects.Count);
                foreach (InjectionObject obj in injectionObjects)
                {
                    m_Components.Add(obj.Name, obj.Component);
                }
            }
            return m_Components[name]; 
        }
    }

    public T Get<T>(string name) where T : Component
    {
        return this[name] as T;
    }
}

[System.Serializable]
public class InjectionObject
{
    [SerializeField]
    private string m_Name;
    public string Name { get { return m_Name; } }
    [SerializeField]
    private Object m_Target;
    public Object Target { get { return m_Target; } }
    [SerializeField]
    private Component m_Component;
    public Component Component { get { return m_Component; } }
}
