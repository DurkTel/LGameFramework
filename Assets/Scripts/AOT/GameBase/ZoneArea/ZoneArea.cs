using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.ZoneArea
{
    public enum ZoneShape
    {
        /// <summary>
        /// 矩形
        /// </summary>
        Rect,
        /// <summary>
        /// 球形
        /// </summary>
        Sphere
    }

    /// <summary>
    /// 构建所需区域数据
    /// </summary>
    [System.Serializable]
    public struct ZoneAreaData
    {
        public Vector3 vector1, vector2, vector3;

        public float x1, x2, x3;
    }

    /// <summary>
    /// 用于保存序列化区域数据
    /// </summary>
    [System.Serializable]
    public class SerializableZoneAreaData
    {
        public ZoneShape shape;

        public int zoneType;

        public ZoneAreaData data;
    }


    public class ZoneArea : MonoBehaviour
    {
        /// <summary>
        /// 序列化保存
        /// </summary>
        [HideInInspector]
        public List<SerializableZoneAreaData> zoneAreaData = new List<SerializableZoneAreaData>();
        /// <summary>
        /// 所有的区域
        /// </summary>
        private List<IZoneArea> m_AllZoneAreas;
        public List<IZoneArea> AllZoneAreas { get { return m_AllZoneAreas; } }
        /// <summary>
        /// 所有需要检测的元素
        /// </summary>
        private List<IZoneAreaElement> m_AllElement;
        public List<IZoneAreaElement> AllElement { get { return m_AllElement; } }

        public void Awake()
        {
            m_AllZoneAreas = new List<IZoneArea>();
            m_AllElement = new List<IZoneAreaElement>();
        }

        public void Start()
        {
            OnInit();
        }

        public void Update()
        {
            foreach (var area in m_AllZoneAreas)
            {
                foreach (var element in m_AllElement)
                {
                    bool inZone = area.InZone(element.Position);
                    
                    if (inZone && !OnZoneArea(element.CurrentArea, area.ZoneType)) //新进入
                    {
                        element.CurrentArea = AddZoneAreaType(element.CurrentArea, area.ZoneType);
                        element.OnEnterZoneArea(true, area.ZoneType);
                    }
                    else if (!inZone && OnZoneArea(element.CurrentArea, area.ZoneType)) //新退出
                    {
                        element.CurrentArea = RemoveZoneAreaType(element.CurrentArea, area.ZoneType);
                        element.OnEnterZoneArea(false, area.ZoneType);
                    }
                }
            }    
        }

        private void OnInit()
        {
            if (zoneAreaData.Count <= 0)
                return;

            foreach (var area in zoneAreaData)
            {
                switch (area.shape)
                {
                    case ZoneShape.Rect:
                        AddZoneArea<RectZoneArea>(area.zoneType, area.data);
                        break;
                    case ZoneShape.Sphere:
                        AddZoneArea<SphereZoneArea>(area.zoneType, area.data);
                        break;
                }
            }    
        }

        /// <summary>
        /// 添加一个进入区域
        /// </summary>
        /// <param name="current">原本所在区域</param>
        /// <param name="zoneType">新增区域</param>
        public static int AddZoneAreaType(int current, int zoneType)
        { 
            return current | zoneType;
        }

        /// <summary>
        /// 移除一个进入区域
        /// </summary>
        /// <param name="current">原本所在区域</param>
        /// <param name="zoneType">移除区域</param>
        public static int RemoveZoneAreaType(int current, int zoneType)
        {
            return current & ~zoneType;
        }

        /// <summary>
        /// 是否在该区域
        /// </summary>
        /// <param name="current">原本所在区域</param>
        /// <param name="zoneType">检测区域</param>
        /// <returns></returns>
        public static bool OnZoneArea(int current, int zoneType)
        {
            return (current & zoneType) == zoneType;
        }

        /// <summary>
        /// 添加一个区域数据
        /// </summary>
        /// <param name="shape"></param>
        /// <param name="zoneType"></param>
        /// <param name="data"></param>
        public void AddZoneAreaData(ZoneShape shape, int zoneType, ZoneAreaData data)
        {
            zoneAreaData.Add(new SerializableZoneAreaData() { shape = shape, zoneType = zoneType, data = data });
        }

        /// <summary>
        /// 移除一个区域数据
        /// </summary>
        /// <param name="index"></param>
        public void RemoveZoneAreaData(int index)
        {
            zoneAreaData.RemoveAt(index);
        }

        /// <summary>
        /// 添加一个区域
        /// </summary>
        /// <typeparam name="T">区域</typeparam>
        /// <param name="zoneType">区域类型</param>
        /// <param name="data">构建数据</param>
        public void AddZoneArea<T>(int zoneType, ZoneAreaData data) where T : IZoneArea, new()
        {
            IZoneArea area = new T();

            area.OnInit(zoneType, 0, data);
            m_AllZoneAreas.Add(area);
        }

        /// <summary>
        /// 移除一个区域
        /// </summary>
        /// <param name="areaId">区域id</param>
        public bool RemoveZoneArea(int areaId) 
        {
            if (m_AllZoneAreas.Count == 0) return false;

            for (int i = m_AllZoneAreas.Count; i >= 0; i--)
            {
                if (m_AllZoneAreas[i].Id == areaId)
                {
                    m_AllZoneAreas.RemoveAt(i);
                    return true;
                }
            }

            return false;
        }

        private void OnDrawGizmos()
        {
            if (zoneAreaData.Count == 0) return;

            foreach (var area in zoneAreaData)
            {
                switch (area.shape)
                {
                    case ZoneShape.Rect:
                        Gizmos.DrawWireCube(area.data.vector1, area.data.vector2);
                        break;
                    case ZoneShape.Sphere:
                        Gizmos.DrawWireSphere(area.data.vector1, area.data.x1);
                        break;
                }
            }
        }
    }

}
