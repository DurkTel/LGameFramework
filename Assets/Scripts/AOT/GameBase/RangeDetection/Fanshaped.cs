using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// ���η�Χ���
    /// </summary>
    public class Fanshaped
    {
        /// <summary>
        /// ��ʼ��
        /// </summary>
        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }
        /// <summary>
        /// �Ƕ�
        /// </summary>
        private float m_Angel;
        public float Angel { get { return m_Angel; } }
        /// <summary>
        /// �뾶
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
        /// �Ƿ��ڷ�Χ��
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public bool IsInZone(Vector3 position)
        {
            //���㷽��
            Vector3 direction = position - m_Transform.position;
            float dot = Vector3.Dot(direction.normalized, m_Transform.forward);
            //����Ƕ�
            float angle = Mathf.Acos(dot) * Mathf.Rad2Deg;
            return angle < m_Angel * 0.5f && direction.magnitude < m_Radius;
        }
    }
}
