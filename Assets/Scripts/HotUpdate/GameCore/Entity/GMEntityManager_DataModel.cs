using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {

    }

    /// <summary>
    /// ����ģ�ͽӿ�
    /// </summary>
    public interface IDataModel : IDisposable
    {
        public void OnInit();
        public bool TryGetProperty(string name, out IBindableProperty property);
        public IBindableProperty GetProperty(string name);

    }

    /// <summary>
    /// ��������ģ��
    /// </summary>
    public abstract class AbstractDataModel : IDataModel
    {
        private Dictionary<string, IBindableProperty> m_Propertys;
        public abstract void OnInit();

        protected bool AddProperty<T>(string name, T value)
        {
            m_Propertys ??= new Dictionary<string, IBindableProperty>();

            if (m_Propertys.ContainsKey(name))
                return false;

            BindableProperty<T> property = Pool.Get<BindableProperty<T>>();
            property.Modify(value);

            m_Propertys.Add(name, property);
            return true;
        }

        public IBindableProperty GetProperty(string name)
        {
            if (m_Propertys == null) return null;
            return m_Propertys.GetValueOrDefault(name);
        }

        public bool TryGetProperty(string name, out IBindableProperty property)
        {
            if (m_Propertys == null)
            {
                property = null;
                return false;
            }
            return m_Propertys.TryGetValue(name, out property);
        }

        public virtual void Dispose()
        {
            if (m_Propertys != null)
            {
                foreach (var property in m_Propertys.Values)
                    property.Dispose();

                m_Propertys.Clear();
                m_Propertys = null;
            }

            // ע������Ƕ���ػ�ȡ �ǵ����������
        }
    }
}
