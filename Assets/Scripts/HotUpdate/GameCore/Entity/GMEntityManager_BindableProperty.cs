using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        #region ʵ������

        /// <summary>
        /// ��ȡʵ������
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <param name="etype"></param>
        /// <returns></returns>
        internal IPropertyGet<T> GetEntityProperty<T>(int entity, EEntityAttribute etype)
        {
            if (!m_EntityAttributes.TryGetValue(entity, out var attribute))
            {
                GameLogger.WARNING_FORMAT("��ȡʵ������ʧ�ܣ�û��ע������ԣ���������{0}", attribute);
                return null;
            }

            return attribute.GetValueOrDefault(etype, null) as IPropertyGet<T>;
        }

        /// <summary>
        /// ע�������¼�����
        /// </summary>
        /// <param name="action"></param>
        internal void RegisterPropertyActionInvoke(UnityAction action)
        {
            //����Ѿ�����ˢ���¼� �Ƶ����
            if (m_AllWaitAction.Contains(action))
                m_AllWaitAction.Remove(action);

            m_AllWaitAction.AddLast(action);
        }

    }

    public interface IProperty : IDisposable
    {
        public int DependentCount { get; set; }
        public void AddEvent(UnityAction onValueChanged);
        public void RemoveEvent(UnityAction onValueChanged);
        public void RemoveAllEvent();

    }

    public interface IPropertyGet<T> : IProperty
    { 
        public T Value { get; }

    }

    public interface IPropertySet<T> : IProperty
    {
        public T Value { set; }

    }

    /// <summary>
    /// ���԰�
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class BindableProperty<T> : IPropertySet<T>, IPropertyGet<T>
    {
        private UnityAction m_OnValueChanged = delegate { };
        public int DependentCount { get; set; }

        private T m_Value;
        public T Value
        {
            set
            {
                if (m_Value != null && value.Equals(m_Value)) return;
                //���ݵ�ǰ֡����
                m_Value = value;
                //�¼���һ֡����
                EntityUtility.RegisterPropertyActionInvoke(m_OnValueChanged);
                //m_OnValueChanged.Invoke();
            }
            get
            {
                return m_Value;
            }
        }

        public void AddEvent(UnityAction onValueChanged)
        {
            m_OnValueChanged += onValueChanged;
        }

        public void RemoveEvent(UnityAction onValueChanged)
        {
            m_OnValueChanged -= onValueChanged;
        }

        public void RemoveAllEvent()
        {
            m_OnValueChanged = delegate { };
        }

        public void Dispose()
        {
            m_Value = default(T);
            RemoveAllEvent();
        }
    }

    #endregion
}
