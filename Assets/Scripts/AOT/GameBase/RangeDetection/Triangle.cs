using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.RangeDetection
{
    /// <summary>
    /// Èý½ÇÐÎ·¶Î§¼ì²â
    /// </summary>
    public class Triangle
    {
        /// <summary>
        /// ½Ç1
        /// </summary>
        private Vector3 m_Corner1;
        public Vector3 Corner1 { get {  return m_Corner1; } }
        /// <summary>
        /// ½Ç2
        /// </summary>
        private Vector3 m_Corner2;
        public Vector3 Corner2 { get { return m_Corner2; } }
        /// <summary>
        /// ½Ç3
        /// </summary>
        private Vector3 m_Corner3;
        public Vector3 Corner3 { get { return m_Corner3; } }

        public Triangle(Vector3 point0, Vector3 point1, Vector3 point2)
        {
            m_Corner1 = point0;
            m_Corner2 = point1;
            m_Corner3 = point2;
        }

        /// <summary>
        /// ÊÇ·ñÔÚ·¶Î§ÄÚ
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public bool IsInZone(Vector3 position)
        {
            Vector3 v0 = m_Corner2 - m_Corner1;
            Vector3 v1 = m_Corner3 - m_Corner1;
            Vector3 v2 = position - m_Corner1;

            float _00 = Vector3.Dot(v0, v0);
            float _01 = Vector3.Dot(v0, v1);
            float _02 = Vector3.Dot(v0, v2);
            float _11 = Vector3.Dot(v1, v1);
            float _12 = Vector3.Dot(v1, v2);

            float inver = 1 / (_00 * _11 - _01 * _01);
            float u = (_11 * _02 - _01 * _12) * inver;
            if (u < 0 || u > 1)
                return false;

            float v = (_00 * _12 - _01 * _02) * inver;
            if (v < 0 || v > 1)
                return false;

            return u + v < 1;
        }
    }
}
