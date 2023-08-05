using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.Pool
{
    public partial class Pool
    {
        /// <summary>
        /// �ܶ���ؼ���
        /// </summary>
        private static readonly Dictionary<Type, IPool> s_SubPools = new Dictionary<Type, IPool>();
        private interface IPool
        {
            Type ReferenceType { get; }
            ICollection Collection { get; }
            int UsingCount { get; }
            int GetCount { get; }
            int ReleaseCount { get; }
            int AddCount { get; }
            int RemoveCount { get; }
        }

        public sealed class SubPool<T> : IPool where T : class, new()
        {
            private readonly Type m_ReferenceType;
            private readonly Stack<T> m_Stack;
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

            public SubPool()
            {
                m_Stack = new Stack<T>();
                m_ReferenceType = typeof(T);
                m_UsingCount = 0;
                m_GetCount = 0;
                m_ReleaseCount = 0;
                m_AddCount = 0;
                m_RemoveCount = 0;
                s_SubPools.Add(m_ReferenceType, this);
            }

            public T Get()
            {
                m_UsingCount++;
                m_GetCount++;

                if (m_Stack.Count > 0)
                    return m_Stack.Pop();

                m_AddCount++;
                return new T();
            }

            public void Release(T item)
            {
                if (m_Stack.Count > 0 && m_Stack.Contains(item))
                {
                    Debug.LogErrorFormat("{0}�ö�����Դ��ڴ˶���{1}", typeof(T).Name, item.ToString());
                    return;
                }
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