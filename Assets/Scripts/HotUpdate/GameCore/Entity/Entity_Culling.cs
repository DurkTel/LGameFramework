using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Entity
{
    public partial class Entity : FMEntityManager.ICulling
    {
        /// <summary>
        /// 相机裁切是否开启
        /// </summary>
        private bool m_CullingGroupEnabled;
        public bool CullingGroupEnabled { get { return m_CullingGroupEnabled; } }
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
        public FMEntityManager.EntityCullingGroup CullingGroup { get; set; }

        private void CullGroupInit()
        {
            m_CullingGroupEnabled = true;
            m_CullingRadius = 0.5f;
            if (CullingGroup != null)
            {
                m_CullingLod = CullingGroup.GetDistance(this);
                OnCullingVisible(CullingGroup.IsVisible(this));
            }
        }

        public void OnCullingDistance(int lod, int lodMax)
        {
            m_CullingLod = lod;
        }

        public void OnCullingVisible(bool value)
        {
            if (!m_CullingGroupEnabled) return;

            Visible = value;
        }

        public void CullGroupUpdate(float deltaTime)
        {
            if (!m_CullingGroupEnabled)
                return;

            CullingGroup.UpdateBoundingSphere(this, Transform.position, CullingRadius);
        }

        private void ReleaseCullGroup()
        {
            m_CullingGroupEnabled = false;
            m_CullingRadius = 0;
        }
    }
}