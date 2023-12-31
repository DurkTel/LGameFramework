using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.ZoneArea
{
    /// <summary>
    /// 球形区域
    /// </summary>
    /// 
    [System.Serializable]
    public class SphereZoneArea : IZoneArea
    {
        public ZoneShape Shape { get { return ZoneShape.Sphere; } }

        private int m_Id;
        public int Id { get { return m_Id; } }

        private int m_ZoneType;
        public int ZoneType { get { return m_ZoneType; } }

        private Vector3 m_Center;

        private float m_Radius;

        public void OnInit(int zoneType, int uid, ZoneAreaData data)
        {
            m_ZoneType = zoneType;
            m_Id = uid;
            m_Center = data.vector1;
            m_Radius = data.x1;
        }

        public bool InZone(Vector3 point)
        {
            float r = Mathf.Pow(m_Radius, 2);
            float d = Mathf.Pow(m_Center.x - point.x, 2) / r +
                      Mathf.Pow(m_Center.y - point.y, 2) / r +
                      Mathf.Pow(m_Center.z - point.z, 2) / r;
            return d <= 1f;
        }

    }

}
