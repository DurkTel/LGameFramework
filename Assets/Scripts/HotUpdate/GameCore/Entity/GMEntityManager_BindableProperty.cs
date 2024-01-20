using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        #region 实体属性

        /// <summary>
        /// 获取实体属性
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <param name="etype"></param>
        /// <returns></returns>
        internal IPropertyGet<T> GetEntityProperty<T>(int entity, EEntityAttribute etype)
        {
            if (!m_EntityAttributes.TryGetValue(entity, out var attribute))
            {
                GameLogger.WARNING_FORMAT("获取实体属性失败！没有注册该属性！属性名：{0}", attribute);
                return null;
            }

            return attribute.GetValueOrDefault(etype, null) as IPropertyGet<T>;
        }

        /// <summary>
        /// 注册属性事件调用
        /// </summary>
        /// <param name="action"></param>
        internal void RegisterPropertyActionInvoke(UnityAction action)
        {
            //如果已经存在刷新事件 移到最后
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
    /// 属性绑定
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
                //数据当前帧更新
                m_Value = value;
                //事件下一帧更新
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
