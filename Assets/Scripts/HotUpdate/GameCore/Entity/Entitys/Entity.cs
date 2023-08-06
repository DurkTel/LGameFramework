using System.Collections.Generic;
using UnityEngine;
using static GameCore.Entity.FMEntityManager;

namespace GameCore.Entity
{
    public partial class Entity
    {
        /// <summary>
        /// 实体id
        /// </summary>
        private int m_EntityId;
        public int EntityId { get { return m_EntityId; } }
        /// <summary>
        /// 实体类型
        /// </summary>
        private EntityType m_EntityType;
        public EntityType EntityType { get { return m_EntityType; } }
        /// <summary>
        /// 实体状态
        /// </summary>
        private EntityStatus m_Status;
        public EntityStatus Status { get { return m_Status; } }
        /// <summary>
        /// 所属实体组
        /// </summary>
        private EntityGroup m_EntityGroup;
        public EntityGroup EntityGroup { get { return m_EntityGroup; } }
        /// <summary>
        /// 生成时间戳
        /// </summary>
        private float m_CreateTimeStamp;
        public float CreateTimeStamp { get { return m_CreateTimeStamp; } }
        /// <summary>
        /// 回事时间戳
        /// </summary>
        private float m_ReleaseTimeStamp;
        public float ReleaseTimesStamp { get { return m_ReleaseTimeStamp; } }
        /// <summary>
        /// 当前游戏对象
        /// </summary>
        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }
        /// <summary>
        /// 当前变换组件
        /// </summary>
        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }
        /// <summary>
        /// 脏状态
        /// </summary>
        private bool m_Dirty;
        public bool Dirty { get { return m_Dirty; } }
        /// <summary>
        /// 是否可见
        /// </summary>
        private bool m_Visible;
        public bool Visible
        {
            set
            {
                m_Visible = value;
                SetStatus(m_Visible ? EntityStatus.Showed : EntityStatus.Hidden);
            }
            get { return m_Visible; }
        }
        /// <summary>
        /// 实体组件
        /// </summary>
        private DictionaryEx<System.Type, IEntityComponent> m_EntityComponents;
        public DictionaryEx<System.Type, IEntityComponent> EntityComponents { get { return m_EntityComponents; } }

        public void OnInit(int eid, EntityType etype, EntityGroup egroup)
        {
            m_EntityId = eid;
            m_EntityType = etype;
            m_Status = EntityStatus.Inited;
            m_EntityGroup = egroup;

            CreateContainer();
        }

        public void Update(float deltaTime, float unscaledTime)
        {
            if (m_EntityComponents != null && m_EntityComponents.Count > 0)
            {
                IEntityComponent component;
                foreach (var componentType in m_EntityComponents.keyList)
                {
                    component = m_EntityComponents[componentType];
                    component.Update(deltaTime, unscaledTime);
                }
            }    
        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            if (m_EntityComponents != null && m_EntityComponents.Count > 0)
            {
                IEntityComponent component;
                foreach (var componentType in m_EntityComponents.keyList)
                {
                    component = m_EntityComponents[componentType];
                    component.FixedUpdate(fixedDeltaTime, unscaledTime);
                }
            }
        }

        /// <summary>
        /// 生成载体容器
        /// </summary>
        public void CreateContainer()
        {
            Debug.Log("实例化实体容器");
            m_GameObject ??= new GameObject();
            m_GameObject.name = string.Format("Entity_{0}_{1}", m_EntityType, m_EntityId);
            m_Transform = m_GameObject.transform;
            m_CreateTimeStamp = Time.unscaledTime;
            m_Transform.SetParentZero(m_EntityGroup.EntityManager.EnableContainer);

            Visible = true;
            SetStatus(EntityStatus.Created);
        }

        public void SetStatus(EntityStatus status)
        {
            m_Status = status;
        }

        public void Release()
        {
            if (m_EntityComponents != null && m_EntityComponents.Count > 0)
            {
                IEntityComponent component;
                foreach (var componentType in m_EntityComponents.keyList)
                {
                    component = m_EntityComponents[componentType];
                    component.Release();
                }
                m_EntityComponents.Clear();
            }

            m_EntityGroup.ReleaseEntity(this);
            m_ReleaseTimeStamp = Time.unscaledTime;
        }


        public void Dispose()
        {
            Object.Destroy(m_GameObject);
        }

        /// <summary>
        /// 添加实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddComponent<T>() where T : IEntityComponent, new()
        {
            m_EntityComponents ??= new DictionaryEx<System.Type, IEntityComponent>();
            IEntityComponent entityComponent = new T();
            entityComponent.OnInit(this);
            m_EntityComponents.Add(typeof(T), entityComponent);
            m_EntityComponents.keyList.Sort(delegate (System.Type a, System.Type b) { return m_EntityComponents[a].Priority - m_EntityComponents[b].Priority; });
        }

        /// <summary>
        /// 尝试获取实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="component"></param>
        public bool TryGetComponent<T>(out T component) where T : class, IEntityComponent
        {
            component = default(T);
            if (m_EntityComponents == null || m_EntityComponents.Count == 0) return false;
            bool has = m_EntityComponents.TryGetValue(typeof(T), out IEntityComponent icomponent);
            component = icomponent as T;
            return has;
        }
    }
}