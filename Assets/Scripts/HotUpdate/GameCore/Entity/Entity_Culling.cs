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
        public bool cullingGroupEnabled { get { return m_CullingGroupEnabled; } }
        /// <summary>
        /// 相机裁切半径
        /// </summary>
        private float m_CullingRadius;
        public float cullingRadius { get { return m_CullingRadius; } }
        /// <summary>
        /// 裁切lod
        /// </summary>
        private int m_CullingLod;
        public int cullingLod { get { return m_CullingLod; } }
        public FMEntityManager.EntityCullingGroup cullingGroup { get; set; }

        private void CullGroupInit()
        {
            m_CullingGroupEnabled = true;
            m_CullingRadius = 0.5f;
            if (cullingGroup != null)
            {
                m_CullingLod = cullingGroup.GetDistance(this);
                OnCullingVisible(cullingGroup.IsVisible(this));
            }
        }

        public void OnCullingDistance(int lod, int lodMax)
        {
            m_CullingLod = lod;
        }

        public void OnCullingVisible(bool value)
        {
            if (!m_CullingGroupEnabled) return;

            visible = value;
        }

        public void CullGroupUpdate(float deltaTime)
        {
            if (!m_CullingGroupEnabled)
                return;

            cullingGroup.UpdateBoundingSphere(this, transform.position, cullingRadius);
        }

        private void ReleaseCullGroup()
        {
            m_CullingGroupEnabled = false;
            m_CullingRadius = 0;
        }
    }
}