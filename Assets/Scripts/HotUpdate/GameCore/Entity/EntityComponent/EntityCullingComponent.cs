using System.Xml;
using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// 相机剔除实体组件
    /// 拥有该组件可实现相机视线外的剔除
    /// </summary>
    public class EntityCullingComponent : IEntityComponent
    {
        public int Priority => 1;

        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }

        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }

        private bool m_Enabled;
        public bool Enabled { get { return m_Enabled; } set { m_Enabled = value; } }
        /// <summary>
        /// 挂载实体
        /// </summary>
        private Entity m_Entity;
        public Entity Entity { get { return m_Entity; } }
        /// <summary>
        /// 相机裁切半径
        /// </summary>
        private float m_CullingRadius;
        public float CullingRadius { get { return m_CullingRadius; } }
        /// <summary>
        /// 裁切lod
        /// </summary>
        private int m_CullingLod;
        public int CullingLod { get { return m_CullingLod; } }
        public GMEntityManager.EntityCullingGroup CullingGroup { get; set; }


        public void OnInit(Entity entity)
        {
            m_Enabled = true;
            m_Entity = entity;
            CullingGroup = entity.EntityGroup.EntityManager.CullingGroup;
            m_Transform = entity.Transform;
            m_GameObject = entity.GameObject;
            m_CullingRadius = 0.5f;

            m_CullingLod = CullingGroup.GetDistance(this);
            OnCullingVisible(CullingGroup.IsVisible(this));
            CullingGroup.AddCullingObject(this);

        }

        public void Update(float deltaTime, float unscaledTime)
        {
            if (!m_Enabled)
                return;

            CullingGroup.UpdateBoundingSphere(this, Transform.position, CullingRadius);
        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            
        }

        public void Release()
        {
            m_Enabled = false;
            m_Transform = null;
            m_GameObject = null;
            CullingGroup.RemoveCullingObject(this);
            CullingGroup = null;
        }

        public void Dispose()
        {
            
        }

        public void OnCullingVisible(bool value)
        {
            if (!m_Enabled) return;
            m_Entity.Visible = value;
        }

        public void OnCullingDistance(int lod, int lodMax)
        {
            m_CullingLod = lod;
        }

    }
}
