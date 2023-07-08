using UnityEngine;

//继承Mono的单例基类
public class SingletonMono<T> : MonoBehaviour where T : MonoBehaviour
{
    private static T m_Instance;

    public static T instance
    {
        get
        {
            return m_Instance;
        }
    }

    protected virtual void Awake()
    {
        m_Instance = this as T;
    }
}
