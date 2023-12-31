using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// 扇形范围检测
    /// </summary>
    public class Fanshaped
    {
        /// <summary>
        /// 起始点
        /// </summary>
        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }
        /// <summary>
        /// 角度
        /// </summary>
        private float m_Angel;
        public float Angel { get { return m_Angel; } }
        /// <summary>
        /// 半径
        /// </summary>
        private float m_Radius;
        public float Radius { get { return m_Radius; } }

        public Fanshaped(Transform transform, float angel, float radius)
        {
            m_Transform = transform;
            m_Angel = angel;
            m_Radius = radius;
        }

        /// <summary>
        /// 是否在范围内
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public bool IsInZone(Vector3 position)
        {
            //计算方向
            Vector3 direction = position - m_Transform.position;
            float dot = Vector3.Dot(direction.normalized, m_Transform.forward);
            //计算角度
            float angle = Mathf.Acos(dot) * Mathf.Rad2Deg;
            return angle < m_Angel * 0.5f && direction.magnitude < m_Radius;
        }
    }
}
