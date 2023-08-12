using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DictionaryEx<TKey, TValue> : Dictionary<TKey, TValue>
{
    public List<TKey> keyList;

    public DictionaryEx()
    {
        keyList = new List<TKey>();
    }

    public DictionaryEx(int capacity) : base(capacity)
    { 
        keyList = new List<TKey>(capacity);
    }

    public new void Add(TKey key, TValue value)
    {
        if (!keyList.Contains(key))
            keyList.Add(key);
        else
        { 
            Debug.LogError("字典中已有相同Key值");
            return;
        }

        base.Add(key, value);
    }

    public new bool Remove(TKey key)
    {
        keyList.Remove(key);
        return base.Remove(key);
    }

    public bool RemoveAt(int index)
    {
        if (index > 0 && index < keyList.Count - 1)
        {
            TKey key = keyList[index];
            if (key != null && keyList.Remove(key))
            {
                return base.Remove(key);
            }
        }
        else
            Debug.LogError("索引不存在");

        return false;
    }

    public new bool ContainsKey(TKey key)
    {
        if (keyList.Contains(key) && base.ContainsKey(key))
            return true;

        return false;
    }

    public new void Clear()
    {
        keyList.Clear();
        base.Clear();
    }
}
