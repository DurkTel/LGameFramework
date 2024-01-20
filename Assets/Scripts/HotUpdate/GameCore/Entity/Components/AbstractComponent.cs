using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ʵ�������� �������������Ĳ���
    /// </summary>
    public abstract class AbstractComponent : IComponent, ISetAttribute, IRegisterAttribute
    {
        /// <summary>
        /// �任���
        /// </summary>
        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }

        /// <summary>
        /// ��Ϸ����
        /// </summary>
        private GameObject m_GameObject;

        /// <summary>
        /// ��Ϸ����
        /// </summary>
        public GameObject GameObject { get { return m_GameObject; } }

        /// <summary>
        /// �������
        /// </summary>
        private bool m_Enabled;

        /// <summary>
        /// �������
        /// </summary>
        public bool Enabled { get { return m_Enabled; } set { m_Enabled = value; } }

        /// <summary>
        /// ����ʵ��
        /// </summary>
        private int m_Entity;

        /// <summary>
        /// ����ʵ��
        /// </summary>
        public int Entity { get { return m_Entity; } }

        /// <summary>
        /// ʵ������
        /// </summary>
        private Dictionary<EEntityAttribute, IProperty> m_AttributeProperty;
        public Dictionary<EEntityAttribute, IProperty> AttributeProperty { get { return m_AttributeProperty; } }

        /// <summary>
        /// ��ʼ��
        /// </summary>
        public virtual void OnInit(int entity, Dictionary<EEntityAttribute, IProperty> attribute)
        {
            m_Enabled = true;
            m_Entity = entity;
            m_GameObject = EntityUtility.GetGameObject(entity);
            m_Transform = EntityUtility.GetTransform(entity);
            m_AttributeProperty = attribute;
            RegisterProperty();
        }

        /// <summary>
        /// ����
        /// </summary>
        public virtual void Release()
        {
            UnregisterProperty();
            m_Enabled = false;
            m_AttributeProperty = null;
        }

        /// <summary>
        /// ����
        /// </summary>
        public virtual void Dispose()
        {
            m_GameObject = null;
            m_Transform = null;
        }

        /// <summary>
        /// ע������
        /// </summary>
        public virtual void RegisterProperty()
        { 
            this.RegisterProperty<int>(EEntityAttribute.End);
        }

        /// <summary>
        /// �Ƴ�����
        /// </summary>
        public virtual void UnregisterProperty()
        {

        }

    }
}
