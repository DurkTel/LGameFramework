using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.Data
{
    public partial class DataNodeTree
    {
        public sealed class DataNode
        {
            /// <summary>
            /// ��������
            /// </summary>
            private DataVariable m_Data;
            /// <summary>
            /// �ڵ�����
            /// </summary>
            private string m_Name;
            public string Name { get {  return m_Name; } }
            /// <summary>
            /// ���ڵ�
            /// </summary>
            private DataNode m_Parent;
            public DataNode Parent { get { return m_Parent; } 
                set 
                { 
                    m_Parent = value;
                    if (m_Parent != null)
                        m_Parent.Childs[m_Name] = this;
                } 
            } 
            /// <summary>
            /// �����ӽڵ�
            /// </summary>
            private Dictionary<string, DataNode> m_Childs;
            public Dictionary<string, DataNode> Childs { get {  return m_Childs; } }

            public static DataNode Create(string name, DataNode parent)
            {
                DataNode node = Pool.Get<DataNode>();
                node.m_Name = name;
                node.m_Childs = DictionaryPool<string, DataNode>.Get();
                node.Parent = parent;

                return node;
            }

            /// <summary>
            /// ��ȡ����
            /// </summary>
            /// <typeparam name="T">��������</typeparam>
            /// <returns>����ֵ</returns>
            public T GetData<T>()
            {
                if (m_Data == null) return default(T);
                return m_Data.GetData<T>();
            }

            /// <summary>
            /// ��������
            /// </summary>
            /// <typeparam name="T">��������</typeparam>
            /// <param name="value">����ֵ</param>
            public void SetData<T>(T value)
            {
                m_Data ??= Pool.Get<DataVariable>();
                m_Data.SetData<T>(value);
            }

            /// <summary>
            /// �������
            /// </summary>
            public void Clear()
            {
                if (m_Data != null)
                {
                    m_Data.Dispose();
                    Pool.Release(m_Data);
                    m_Data = null;
                }
                if (m_Childs != null)
                {
                    foreach (var child in m_Childs.Values)
                        child.Clear();

                    DictionaryPool<string, DataNode>.Release(m_Childs);
                    m_Childs = null;
                }
                Pool.Release(this);
                Parent = null;
            }

            /// <summary>
            /// ��ȡ�����ݽڵ�
            /// </summary>
            /// <param name="index">�±�</param>
            /// <returns></returns>
            public DataNode GetChildNode(string name)
            {
                m_Childs.TryGetValue(name, out var child);
                return child;
            }

        }
    }
}
