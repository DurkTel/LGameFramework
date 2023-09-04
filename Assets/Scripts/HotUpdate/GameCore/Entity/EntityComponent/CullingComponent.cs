using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// 相机剔除实体组件
    /// 拥有该组件可实现相机视线外的剔除
    /// </summary>
    public class CullingComponent : AbstractComponent
    {
        public override int Priority => 1;
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


        public override void OnInit(Entity entity)
        {
            base.OnInit(entity);
            CullingGroup = entity.EntityGroup.EntityManager.CullingGroup;
            m_CullingRadius = 0.5f;

            m_CullingLod = CullingGroup.GetDistance(this);
            OnCullingVisible(CullingGroup.IsVisible(this));
            CullingGroup.AddCullingObject(this);

        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            CullingGroup.UpdateBoundingSphere(this, Transform.position, CullingRadius);
        }


        public override void Release()
        {
            base.Release();
            CullingGroup.RemoveCullingObject(this);
            CullingGroup = null;
        }


        public void OnCullingVisible(bool value)
        {
            if (!Enabled) return;
            Entity.Visible = value;
        }

        public void OnCullingDistance(int lod, int lodMax)
        {
            m_CullingLod = lod;
        }

    }
}
