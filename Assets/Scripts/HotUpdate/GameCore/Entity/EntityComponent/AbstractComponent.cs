using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// ʵ�������� �������������Ĳ���
    /// </summary>
    public abstract class AbstractComponent : IComponent
    {
        /// <summary>
        /// ������ȼ�
        /// </summary>
        public abstract int Priority { get; }

        private Transform m_Transform;
        /// <summary>
        /// �任���
        /// </summary>
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
        private Entity m_Entity;
        /// <summary>
        /// ����ʵ��
        /// </summary>
        public Entity Entity { get { return m_Entity; } }
        /// <summary>
        /// ��ʼ��
        /// </summary>
        public virtual void OnInit(Entity entity)
        {
            m_Enabled = true;
            m_Entity = entity;
            m_GameObject = m_Entity.GameObject;
            m_Transform = m_Entity.Transform;
        }
        /// <summary>
        /// ֡����
        /// </summary>
        /// <param name="deltaTime">֡���¼��</param>
        /// <param name="unscaledTime">֡���¼��������ʱ�����ű���Ӱ��</param>
        public virtual void Update(float deltaTime, float unscaledTime)
        {

        }
        /// <summary>
        /// �̶�����
        /// </summary>
        /// <param name="fixedDeltaTime">�̶����¼��</param>
        /// <param name="unscaledTime">��Ϸ��ʼ�������е�ʱ�䣬����ʱ�����ű���Ӱ��</param>
        public virtual void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            
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
            m_Entity = null;
            m_GameObject = null;
            m_Transform = null;
        }

    }
}
