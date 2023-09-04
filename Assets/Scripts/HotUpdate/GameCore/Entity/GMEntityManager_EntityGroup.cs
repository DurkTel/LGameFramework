using System.Collections;
using System.Collections.Generic;
using System.Security.Principal;
using UnityEngine;
using UnityEngine.Rendering;
using LGameFramework.GameBase.Pool;
using System;
using System.Reflection;

namespace LGameFramework.GameCore.Entity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        /// <summary>
        /// 实体组
        /// </summary>
        public sealed class EntityGroup
        {
            private readonly float m_DestroyTime = 5f;

            private readonly EntityType m_EntityGroupType;
            public EntityType EntityGroupType { get { return m_EntityGroupType; } } 

            private List<Entity> m_Entitys; 
            public List<Entity> Entitys { get { return m_Entitys; } }

            private readonly List<SkinComponent> m_WaitCreateSkinList;

            private readonly List<Entity> m_ReleaseList;

            private readonly List<Entity> m_DestroyList;

            private readonly GMEntityManager m_EntityManager;
            public GMEntityManager EntityManager { get { return m_EntityManager; } }
            public int Count { get {  return m_Entitys.Count; } }

            public EntityGroup(EntityType groupType, GMEntityManager entityManager)
            {
                m_EntityGroupType = groupType;
                m_EntityManager = entityManager;
                m_Entitys = new List<Entity>();
                m_DestroyList = new List<Entity>();
                m_WaitCreateSkinList = new List<SkinComponent>();
                m_ReleaseList = new List<Entity>();
            }

            public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
            {
                if (m_Entitys.Count < 0) return;

                foreach (Entity entity in m_Entitys)
                {
                    if (entity.EntityData.Status == EntityStatus.Showed)
                        entity.FixedUpdate(fixedDeltaTime, unscaledTime);
                }
            }

            public void Update(float deltaTime, float unscaledTime)
            {
                if (m_Entitys.Count > 0)
                {
                    foreach (Entity entity in m_Entitys)
                    {
                        if (entity.Visible && entity.TryGetComponent(out SkinComponent skin) && !skin.SkinIsInit)
                        {
                            skin.SkinIsInit = true;
                            m_WaitCreateSkinList.Add(skin);
                            continue;
                        }

                        entity.Update(deltaTime, unscaledTime);
                    }
                }


                //一帧调一次生成
                if (m_WaitCreateSkinList.Count > 0 && Time.frameCount % 2 == 0)
                {
                    m_WaitCreateSkinList[0].LoadSkin();
                    m_WaitCreateSkinList.RemoveAt(0);
                }
            }

            public void LateUpdate()
            {
                Entity entity;
                if (m_ReleaseList.Count > 0)
                {
                    for (int i = m_ReleaseList.Count - 1; i >= 0; i--)
                    {
                        entity = m_ReleaseList[i];
                        //如果有等待加载外观的 移除掉
                        if (entity.TryGetComponent(out SkinComponent skin))
                        {
                            if (m_WaitCreateSkinList.Contains(skin))
                                m_WaitCreateSkinList.Remove(skin);

                            skin.StopLoadSkin();
                        }


                        entity.SetStatus(EntityStatus.Released);
                        m_DestroyList.Add(entity);
                        m_ReleaseList.RemoveAt(i);
                    }
                }

                if (m_DestroyList.Count > 0)
                {
                    for (int i = m_DestroyList.Count - 1; i >= 0; i--)
                    {
                        entity = m_DestroyList[i];
                        if (Time.unscaledTime < entity.EntityData.ReleaseTimeStamp + m_DestroyTime)
                            continue;

                        Pool<Entity>.Release(entity);
                        Pool<EntityData>.Release(entity.EntityData);
                        entity.Dispose();
                        m_DestroyList.RemoveAt(i);
                    }
                }

            }

            public Entity AddEntity()
            {
                m_Entitys ??= new List<Entity>();
                Entity entity;
                if (m_DestroyList.Count > 0)
                {
                    entity = m_DestroyList[0];
                    m_DestroyList.RemoveAt(0);
                }
                else
                    entity = EntityUtility.GetEntityByType(m_EntityGroupType);

                m_Entitys.Add(entity);
                return entity;
            }

            public void ReleaseEntity(Entity entity)
            {
                if (m_ReleaseList.Contains(entity)) return;

                m_ReleaseList.Add(entity);
                m_Entitys.Remove(entity);
            }

        }
    }
}
