using System.Collections;
using System.Collections.Generic;
using System.Security.Principal;
using UnityEngine;
using UnityEngine.Rendering;
using LGameFramework.GameBase.Pool;

namespace GameCore.Entity
{
    public sealed partial class FMEntityManager : FrameworkModule
    {
        /// <summary>
        /// 实体组
        /// </summary>
        public sealed class EntityGroup
        {
            private readonly float m_DestroyTime = 60f;

            private readonly EntityType m_EntityGroupType;
            public EntityType EntityGroupType { get { return m_EntityGroupType; } } 

            private List<Entity> m_Entitys; 
            public List<Entity> Entitys { get { return m_Entitys; } }

            private readonly List<Entity> m_WaitCreateList;

            private readonly List<Entity> m_WaitReleaseList;

            private readonly List<Entity> m_ReleaseList;
            public int Count { get {  return m_Entitys.Count; } }

            public EntityGroup(EntityType groupType)
            {
                m_EntityGroupType = groupType;
                m_Entitys = new List<Entity>();
                m_ReleaseList = new List<Entity>();
                m_WaitCreateList = new List<Entity>();
                m_WaitReleaseList = new List<Entity>();
            }

            public void Update(float deltaTime, float unscaledTime)
            {
                if (m_Entitys.Count < 0) return;

                foreach (Entity entity in m_Entitys)
                {
                    entity.CullGroupUpdate(deltaTime);
                    if (entity.Visible && !entity.SkinInstantiate && !entity.SkinLoading)
                    {
                        entity.SetStatus(EntityStatus.WillCreate);
                        m_WaitCreateList.Add(entity);
                        continue;
                    }
                    if (entity.Status == EntityStatus.Showed)
                        entity.Update();
                }

                //一帧调一次生成
                if (m_WaitCreateList.Count > 0 && Time.frameCount % 2 == 0)
                {
                    m_WaitCreateList[0].CreateSkin();
                    m_WaitCreateList.RemoveAt(0);
                }
            }

            public void LateUpdate()
            {
                if (m_WaitReleaseList.Count <= 0) return;

                Entity entity;
                for (int i = m_WaitReleaseList.Count - 1; i >= 0; i--)
                {
                    entity = m_WaitReleaseList[i];
                    if (m_WaitCreateList.Contains(entity))
                        m_WaitCreateList.Remove(entity);

                    m_WaitReleaseList.Remove(entity);
                    m_ReleaseList.Add(entity);
                    entity.SetStatus(EntityStatus.Released);
                }

                if (m_ReleaseList.Count <= 0) return;

                for (int i = m_ReleaseList.Count - 1; i >= 0; i--)
                {
                    entity = m_WaitReleaseList[i];
                    if (entity.ReleaseTimesStamp + m_DestroyTime < Time.unscaledTime)
                        continue;

                    entity.Dispose();
                    m_WaitReleaseList.Remove(entity);
                    Pool<Entity>.Release(entity);
                }
            }

            public Entity AddEntity()
            {
                m_Entitys ??= new List<Entity>();
                Entity entity;
                if (m_ReleaseList.Count > 0)
                {
                    entity = m_ReleaseList[0];
                    m_ReleaseList.RemoveAt(0);
                }
                else
                    entity = Pool<Entity>.Get();

                m_Entitys.Add(entity);
                return entity;
            }

            public void ReleaseEntity(Entity entity)
            {
                if (m_WaitReleaseList.Contains(entity)) return;

                m_WaitReleaseList.Add(entity);
            }

            public void DestroyEntity()
            { 
                
            }
        }
    }
}
