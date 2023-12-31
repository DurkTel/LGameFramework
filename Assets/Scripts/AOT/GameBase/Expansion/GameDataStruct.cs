using System;

namespace LGameFramework.GameBase
{

    /// <summary>
    /// 游戏数据变量
    /// </summary>
    public class DataVariable : IDisposable
    {
        /// <summary>
        /// 数据类型
        /// </summary>
        private Type m_Type;
        public Type Type { get { return m_Type; } }
        /// <summary>
        /// 数据
        /// </summary>
        private object m_Data;

        /// <summary>
        /// 获取数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <returns>数据值</returns>
        public T GetData<T>()
        {
            return (T)m_Data;
        }

        /// <summary>
        /// 设置数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <param name="value">数据值</param>
        public void SetData<T>(T value)
        {
            m_Type = typeof(T);
            m_Data = value;
        }

        /// <summary>
        /// 释放
        /// </summary>
        public void Dispose()
        {
            m_Type = null;
            m_Data = null;
        }
    }

}
