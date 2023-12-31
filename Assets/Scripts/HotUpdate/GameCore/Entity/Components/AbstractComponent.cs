using LGameFramework.GameBase;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ʵ�������� �������������Ĳ���
    /// </summary>
    public abstract class AbstractComponent : IComponent
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
        /// ��ʼ��
        /// </summary>
        public virtual void OnInit(int entity)
        {
            m_Enabled = true;
            m_Entity = entity;
            m_GameObject = EntityUtility.GetGameObject(entity);
            m_Transform = EntityUtility.GetTransform(entity);
        }
        /// <summary>
        /// ע������ģ��
        /// </summary>
        public IDataModel RegisterModel<T>() where T : class, IDataModel, new()
        {
            return EntityUtility.RegisterDataModel<T>(Entity);
        }
        /// <summary>
        /// ��ȡ����ģ������
        /// </summary>
        public V GetPropertyValue<T, V>(string property) where T : class, IDataModel, new()
        {
            return EntityUtility.GetDataModelProperty<T, V>(Entity, property);
        }
        /// <summary>
        /// ����
        /// </summary>
        public virtual void Release()
        {
            m_Enabled = false;
        }
        /// <summary>
        /// ����
        /// </summary>
        public virtual void Dispose()
        {
            m_GameObject = null;
            m_Transform = null;

            // ע������Ƕ���ػ�ȡ �ǵ����������
        }
    }
}
