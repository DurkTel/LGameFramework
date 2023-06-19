using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class LJsonUtility
{
    public static string ToJason<T>(List<T> list)
    { 
        return JsonUtility.ToJson(new Serialization<T>(list));
    }

    public static string ToJason<T, V>(Dictionary<T, V> dictionary)
    {
        return JsonUtility.ToJson(new Serialization<T, V>(dictionary));
    }

    public static string ToJason(object obj)
    {
        return JsonUtility.ToJson(obj);
    }

    public static List<T> FromJsonToList<T>(string json)
    {
        return JsonUtility.FromJson<Serialization<T>>(json).Reduction();
    }

    public static Dictionary<T, V> FromJsonToDictionary<T, V>(string json)
    {
        return JsonUtility.FromJson<Serialization<T, V>>(json).Reduction();
    }

    public static T FromJson<T>(string json)
    {
        return JsonUtility.FromJson<T>(json);
    }

    public static object FromJson(string json, System.Type type)
    {
        return JsonUtility.FromJson(json, type);
    }

    public static void FromJsonOverwrite(string json, object objectToOverwrite)
    {
        JsonUtility.FromJsonOverwrite(json, objectToOverwrite);
    }

    [System.Serializable]
    public class Serialization<T>
    {
        [SerializeField]
        private List<T> m_Target;

        public Serialization(List<T> target)
        {
            m_Target = target;
        }

        public List<T> Reduction()
        { 
            return m_Target;    
        }
    }

    [System.Serializable]
    public class Serialization<T, V> : ISerializationCallbackReceiver
    {
        [SerializeField]
        private List<T> m_Keys;

        [SerializeField]
        private List<V> m_Values;

        private Dictionary<T, V> m_Target;

        public Serialization(Dictionary<T, V> target)
        {
            m_Target = target;
        }

        public Dictionary<T, V> Reduction()
        {
            return m_Target;
        }

        public void OnAfterDeserialize()
        {
            int count = Mathf.Min(m_Keys.Count, m_Values.Count);
            m_Target = new Dictionary<T, V>(count);
            for (int i = 0; i < count; i++) 
            {
                m_Target.Add(m_Keys[i], m_Values[i]);
            }
        }

        public void OnBeforeSerialize()
        {
            m_Keys = new List<T>(m_Target.Keys);
            m_Values = new List<V>(m_Target.Values);
        }

    }
}

