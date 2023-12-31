using LGameFramework.GameBase;
using System;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {

    }

    public interface IBindableProperty : IDisposable
    {
        public void AddEvent(UnityAction onValueChanged);
        public void RemoveEvent(UnityAction onValueChanged);
        public void RemoveAllEvent();

    }

    public interface IGetBindableProperty<T> : IBindableProperty
    {
        public T Get();
    }


    public interface IModifyBindableProperty<T> : IBindableProperty
    {
        public void Modify(T value);
    }

    /// <summary>
    ///  Ù–‘∞Û∂®
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public class BindableProperty<T> : IGetBindableProperty<T>, IModifyBindableProperty<T>
    {
        private T m_Value;

        private UnityAction m_OnValueChanged = delegate { };

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

        public T Get()
        {
            return m_Value;
        }

        public void Modify(T value)
        {
            if (m_Value != null && value.Equals(m_Value)) return;
                m_Value = value;
            m_OnValueChanged.Invoke();
        }

        public void Dispose()
        {
            m_Value = default(T);
            m_OnValueChanged = delegate { };
            Pool.Release(this);
        }
    }
}
