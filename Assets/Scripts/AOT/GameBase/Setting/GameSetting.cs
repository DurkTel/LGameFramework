using UnityEngine;

public class GameSetting<T> : ScriptableObject where T : ScriptableObject
{
    protected static T m_Value;
    public static T Get()
    {
        if (m_Value == null)
            m_Value = CreateInstance<T>();

        return m_Value;
    }

    public static void Init(T instance)
    {
        m_Value = instance;
    }
}
