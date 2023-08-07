﻿using System.Collections.Generic;
using UnityEngine;
using static GameCore.Entity.FMEntityManager;

namespace GameCore.Entity
{
    public partial class Entity
    {
        /// <summary>
        /// 实体数据
        /// </summary>
        private EntityData m_EntityData;
        public EntityData EntityData { get { return m_EntityData; } }
        /// <summary>
        /// 所属实体组
        /// </summary>
        private EntityGroup m_EntityGroup;
        public EntityGroup EntityGroup { get { return m_EntityGroup; } }
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
        /// 容器
        /// </summary>
        private Transform m_Container;
        public Transform Container { get { return m_Container; } }
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
            m_EntityData.EntityId = eid;
            m_EntityData.EntityType = etype;
            m_EntityData.Status = EntityStatus.Inited;
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
            m_GameObject.name = string.Format("Entity_{0}_{1}", m_EntityData.EntityType, m_EntityData.EntityId);
            m_Transform = m_GameObject.transform;
            m_EntityData.CreateTimeStamp = Time.unscaledTime;
            m_Transform.SetParentZero(m_EntityGroup.EntityManager.EnableContainer);

            if (m_Container == null)
            { 
                m_Container = new GameObject("Container").transform;
                m_Container.SetParentZero(m_Transform);
            }

            Visible = true;
            SetStatus(EntityStatus.Created);
        }

        public void SetStatus(EntityStatus status)
        {
            m_EntityData.Status = status;
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
            m_EntityData.ReleaseTimeStamp = Time.unscaledTime;
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