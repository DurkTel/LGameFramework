using GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Entity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        private static int m_GUID = 0;
        internal override int Priority => 3;
        internal override GameObject GameObject { get; set; }
        internal override Transform Transform { get; set; }

        private EntityCullingGroup m_CullingGroup;
        public EntityCullingGroup CullingGroup { get { return m_CullingGroup; } }

        private Dictionary<int, Entity> m_EntityMap;

        private Dictionary<EntityType, EntityGroup> m_EntityGroupMap;

        private Transform m_EnableContainer;
        public Transform EnableContainer { get { return m_EnableContainer; } }

        private Transform m_DisableContainer;
        public Transform DisableContainer { get { return m_DisableContainer; } }

        internal override void OnInit()
        {
            m_CullingGroup = new EntityCullingGroup();
            m_CullingGroup.TargetCamera = OrbitCamera.Camera;
            m_EntityMap = new Dictionary<int, Entity>();
            m_EntityGroupMap = new Dictionary<EntityType, EntityGroup>();
            m_EnableContainer = new GameObject("EnableEntitys").transform;
            m_DisableContainer = new GameObject("DisableEntitys").transform;
            m_EnableContainer.SetParentZero(Transform);
            m_DisableContainer.SetParentZero(Transform);
        }

        internal override void Update(float deltaTime, float unscaledTime)
        {
            if (m_EntityGroupMap.Count <= 0) return;

            foreach (EntityGroup group in m_EntityGroupMap.Values)
                group.Update(deltaTime, unscaledTime);

        }

        internal override void LateUpdate(float deltaTime, float unscaleDeltaTime)
        {
            if (m_EntityGroupMap.Count <= 0) return;

            foreach (EntityGroup group in m_EntityGroupMap.Values)
                group.LateUpdate();
            
        }

        internal override void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            if (m_EntityGroupMap.Count <= 0) return;

            foreach (EntityGroup group in m_EntityGroupMap.Values)
                group.FixedUpdate(fixedDeltaTime, unscaledTime);
        }

        internal EntityGroup AddEntityGroup(EntityType etype)
        {
            EntityGroup group;
            if (!m_EntityGroupMap.TryGetValue(etype, out group))
            {
                group = new EntityGroup(etype, this);
                m_EntityGroupMap.Add(etype, group);
            }
            return group;
        }

        public bool RemoveEntityGroup(EntityType etype)
        {
            EntityGroup group;
            if (!m_EntityGroupMap.TryGetValue(etype, out group))
                return false;

            m_EntityGroupMap.Remove(etype);
            return true;
        }

        public Entity AddEntity(EntityType etype)
        {
            EntityGroup group = AddEntityGroup(etype);
            Entity entity = group.AddEntity();

            int eid = ++m_GUID;
            entity.OnInit(eid, etype, group);
            m_EntityMap.Add(eid, entity);
            return entity;
        }

        public bool ReleaseEntity(int entityId)
        {
            Entity entity;
            if (m_EntityMap.TryGetValue(entityId, out entity))
            {
                entity.SetStatus(EntityStatus.WillRelease);
                entity.Release();
                entity.Transform.SetParent(m_DisableContainer);
                entity.Transform.localPosition = new Vector3(0, -99999, 0);
                return true;
            }

            return false;
        }

        public Entity GetEntity(int entityId)
        {
            m_EntityMap.TryGetValue(entityId, out Entity entity);
            return entity;
        }

        public bool TryGetEntity(int entityId, out Entity entity)
        {
            return m_EntityMap.TryGetValue(entityId, out entity);
        }

        internal override void OnDestroy()
        {
            m_CullingGroup.Dispose();
        }
    }
}