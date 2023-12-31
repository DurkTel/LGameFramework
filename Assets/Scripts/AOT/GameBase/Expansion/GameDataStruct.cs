using System;

namespace LGameFramework.GameBase
{

    /// <summary>
    /// ��Ϸ���ݱ���
    /// </summary>
    public class DataVariable : IDisposable
    {
        /// <summary>
        /// ��������
        /// </summary>
        private Type m_Type;
        public Type Type { get { return m_Type; } }
        /// <summary>
        /// ����
        /// </summary>
        private object m_Data;

        /// <summary>
        /// ��ȡ����
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <returns>����ֵ</returns>
        public T GetData<T>()
        {
            return (T)m_Data;
        }

        /// <summary>
        /// ��������
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <param name="value">����ֵ</param>
        public void SetData<T>(T value)
        {
            m_Type = typeof(T);
            m_Data = value;
        }

        /// <summary>
        /// �ͷ�
        /// </summary>
        public void Dispose()
        {
            m_Type = null;
            m_Data = null;
        }
    }

}
