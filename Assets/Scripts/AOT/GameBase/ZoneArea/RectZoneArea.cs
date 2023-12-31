using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.ZoneArea
{
    /// <summary>
    /// 矩形范围
    /// </summary>
    public class RectZoneArea : IZoneArea
    {
        public ZoneShape Shape { get { return ZoneShape.Rect; } }

        private int m_Id;
        public int Id { get { return m_Id; } }

        private int m_ZoneType;
        public int ZoneType { get { return m_ZoneType; } }


        private Bounds m_Bounds;

        public void OnInit(int zoneType, int uid, ZoneAreaData data)
        { 
            m_ZoneType = zoneType;
            m_Id = uid;
            m_Bounds = new Bounds(data.vector1, data.vector2);
        }

        public bool InZone(Vector3 point)
        {
            return m_Bounds.Contains(point);    
        }
    }
}
