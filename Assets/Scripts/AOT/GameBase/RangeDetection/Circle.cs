using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// 圆形范围检测
    /// </summary>
    public class Circle
    {
        /// <summary>
        /// 中心点
        /// </summary>
        public Transform m_Center;
        public Transform Center { get { return m_Center; } }  
        /// <summary>
        /// 半径
        /// </summary>
        public float m_Radius;
        public float Radius { get { return m_Radius; } }

        public Circle(Transform center, float radius)
        {
            m_Center = center;
            m_Radius = radius;
        }

        /// <summary>
        /// 是否在范围内
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public bool IsInZone(Vector3 position)
        {
            Vector3 offset = position - m_Center.position;
            return offset.sqrMagnitude <= m_Radius * m_Radius;
        }
    }
}
