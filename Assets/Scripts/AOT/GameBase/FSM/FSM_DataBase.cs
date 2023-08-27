using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.FSM
{
    public class FSM_DataBase : MonoBehaviour
    {
        //data列表和key列表时一一对应的关系
        private readonly List<object> m_DataBase = new List<object>();

        private readonly List<string> m_DataName = new List<string>();

        /// <summary>
        /// 获取这个key在列表中的id
        /// </summary>
        /// <param name="dataName"></param>
        /// <returns></returns>
        private int GetIndexOfDataId(string dataName)
        {
            for (int i = 0; i < m_DataName.Count; i++)
            {
                if (m_DataName[i].Equals(dataName))
                    return i;
            }

            return -1;
        }

        /// <summary>
        /// 尝试获取这个key的id 没有就创建一个
        /// </summary>
        /// <param name="dataName"></param>
        /// <returns></returns>
        public int TryGetDataId(string dataName)
        {
            int dataId = GetIndexOfDataId(dataName);
            if (dataId == -1)
            {
                m_DataName.Add(dataName);
                m_DataBase.Add(null);
                dataId = m_DataName.Count - 1;
            }
            return dataId;
        }

        /// <summary>
        /// 通过string Key取数据
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="name"></param>
        /// <returns></returns>
        public T GetData<T>(string name)
        {
            int dataId = GetIndexOfDataId(name);
            if (dataId == -1)
            {
                Debug.LogError("DataBase中不存在name为：" + name + "的key");
                return default(T);
            }

            return (T)m_DataBase[dataId];
        }

        /// <summary>
        /// 通过下标取数据
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="dataId"></param>
        /// <returns></returns>
        public T GetData<T>(int dataId)
        {
            return (T)m_DataBase[dataId];
        }

        /// <summary>
        /// 存放一个数据
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="dataName"></param>
        /// <param name="data"></param>
        public void SetData<T>(string dataName, T data)
        {
            int dataId = TryGetDataId(dataName);
            m_DataBase[dataId] = data;
        }

        /// <summary>
        /// 存放一个数据
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="dataId"></param>
        /// <param name="data"></param>
        public void SetData<T>(int dataId, T data)
        {
            m_DataBase[dataId] = data;
        }

        /// <summary>
        /// 列表中是否有这个数据
        /// </summary>
        /// <param name="dataName"></param>
        /// <returns></returns>
        public bool Contains(string dataName)
        {
            return GetIndexOfDataId(dataName) != -1;
        }
    }
}