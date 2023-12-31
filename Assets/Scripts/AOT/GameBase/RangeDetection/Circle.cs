using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// Բ�η�Χ���
    /// </summary>
    public class Circle
    {
        /// <summary>
        /// ���ĵ�
        /// </summary>
        public Transform m_Center;
        public Transform Center { get { return m_Center; } }  
        /// <summary>
        /// �뾶
        /// </summary>
        public float m_Radius;
        public float Radius { get { return m_Radius; } }

        public Circle(Transform center, float radius)
        {
            m_Center = center;
            m_Radius = radius;
        }

        /// <summary>
        /// �Ƿ��ڷ�Χ��
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
