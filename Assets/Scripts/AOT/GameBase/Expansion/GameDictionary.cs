using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public class GameDictionary<TKey, TValue> : Dictionary<TKey, TValue>
    {
        public List<TKey> keyList;

        public GameDictionary()
        {
            keyList = new List<TKey>();
        }

        public GameDictionary(int capacity) : base(capacity)
        {
            keyList = new List<TKey>(capacity);
        }

        public new TValue this[TKey k]
        {
            get 
            { 
                return base[k]; 
            }
            set 
            {
                if (ContainsKey(k))
                    base[k] = value;
                else
                    Add(k, value);
            }
        }

        public new void Add(TKey key, TValue value)
        {
            keyList.Add(key);
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

            return false;
        }

        public new void Clear()
        {
            keyList.Clear();
            base.Clear();
        }

        public void Sort()
        { 
            keyList.Sort();
        }

        public void Sort(IComparer<TKey> comparer)
        {
            keyList.Sort(comparer);
        }

        public void Sort(Comparison<TKey> comparer)
        {
            keyList.Sort(comparer);
        }
    }
}