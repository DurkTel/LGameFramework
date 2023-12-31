using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    public partial class Pool
    {
        /// <summary>
        /// 总对象池计数
        /// </summary>
        private static readonly Dictionary<Type, IPool> s_SubPools = new Dictionary<Type, IPool>();
        public static Dictionary<Type, IPool> SubPools { get { return s_SubPools; } }
        public interface IPool
        {
            Type ReferenceType { get; }
            ICollection Collection { get; }
            int UsingCount { get; }
            int GetCount { get; }
            int ReleaseCount { get; }
            int AddCount { get; }
            int RemoveCount { get; }
            int Count { get; }
        }

        public sealed class SubPool : IPool
        {
            private readonly Type m_ReferenceType;
            private readonly Stack m_Stack;
            private int m_UsingCount;
            private int m_GetCount;
            private int m_ReleaseCount;
            private int m_AddCount;
            private int m_RemoveCount;

            public Type ReferenceType { get { return m_ReferenceType; } }
            public ICollection Collection { get { return m_Stack; } }
            public int UsingCount { get { return m_UsingCount; } }
            public int GetCount { get { return m_GetCount; } }
            public int ReleaseCount { get { return m_ReleaseCount; } }
            public int AddCount { get { return m_AddCount; } }
            public int RemoveCount { get { return m_RemoveCount; } }
            public int Count { get { return m_Stack.Count; } }  

            public SubPool(Type type)
            {
                m_Stack = new Stack();
                m_ReferenceType = type;
                m_UsingCount = 0;
                m_GetCount = 0;
                m_ReleaseCount = 0;
                m_AddCount = 0;
                m_RemoveCount = 0;
                s_SubPools.Add(m_ReferenceType, this);
            }

            public object Get(Type type)
            {
                m_UsingCount++;
                m_GetCount++;

                if (m_Stack.Count > 0)
                    return m_Stack.Pop();

                m_AddCount++;
                return InstanceCreator.Get(type);
            }

            public T Get<T>() where T : class, new()
            {
                m_UsingCount++;
                m_GetCount++;

                if (m_Stack.Count > 0)
                    return m_Stack.Pop() as T;

                m_AddCount++;
                return new T();
            }

            public void Release<T>(T item) where T : class, new()
            {
                //if (m_Stack.Count > 0 && m_Stack.Contains(item))
                //{
                //    Debug.LogErrorFormat("{0}该对象池以存在此对象{1}", typeof(T).Name, item.ToString());
                //    return;
                //}
                m_Stack.Push(item);
                m_ReleaseCount++;
                m_UsingCount--;
            }

            public void Remove(int count)
            {
                if(m_Stack.Count <=  0) return; 

                if (count > m_Stack.Count || count < 0)
                    count = m_Stack.Count;

                m_RemoveCount += count;
                while (count-- > 0)
                {
                    m_Stack.Pop();
                }
            }
        }
    }
}
