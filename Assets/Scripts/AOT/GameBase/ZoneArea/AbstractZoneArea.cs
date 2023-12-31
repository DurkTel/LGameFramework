using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.ZoneArea
{

    [System.Serializable]
    public class AbstractZoneArea
    {
        /// <summary>
        /// 区域Id
        /// </summary>
        public virtual int Id { get; }

        /// <summary>
        /// 形状
        /// </summary>
        public virtual ZoneShape Shape { get; }

        /// <summary>
        /// 范围类型
        /// </summary>
        public virtual int ZoneType { get; }

        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="data"></param>
        public virtual void OnInit(int zoneType, int uid, ZoneAreaData data)
        { 
            
        }

        /// <summary>
        /// 在范围里
        /// </summary>
        /// <param name="point"></param>
        /// <returns></returns>
        public virtual bool InZone(Vector3 point)
        {
            return false;
        }

        /// <summary>
        /// 绘制辅助线
        /// </summary>
        public virtual void DrawGizmos()
        { 
            
        }
    }
}
