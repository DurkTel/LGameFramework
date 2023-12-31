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
            /// 引用数据
            /// </summary>
            private DataVariable m_Data;
            /// <summary>
            /// 节点名称
            /// </summary>
            private string m_Name;
            public string Name { get {  return m_Name; } }
            /// <summary>
            /// 父节点
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
            /// 所有子节点
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
            /// 获取数据
            /// </summary>
            /// <typeparam name="T">数据类型</typeparam>
            /// <returns>数据值</returns>
            public T GetData<T>()
            {
                if (m_Data == null) return default(T);
                return m_Data.GetData<T>();
            }

            /// <summary>
            /// 设置数据
            /// </summary>
            /// <typeparam name="T">数据类型</typeparam>
            /// <param name="value">数据值</param>
            public void SetData<T>(T value)
            {
                m_Data ??= Pool.Get<DataVariable>();
                m_Data.SetData<T>(value);
            }

            /// <summary>
            /// 清除数据
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
            /// 获取子数据节点
            /// </summary>
            /// <param name="index">下标</param>
            /// <returns></returns>
            public DataNode GetChildNode(string name)
            {
                m_Childs.TryGetValue(name, out var child);
                return child;
            }

        }
    }
}
