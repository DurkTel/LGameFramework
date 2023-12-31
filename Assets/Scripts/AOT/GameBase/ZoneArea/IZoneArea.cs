using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.ZoneArea
{
    /// <summary>
    /// 区域
    /// </summary>
    public interface IZoneArea
    {
        /// <summary>
        /// 区域Id
        /// </summary>
        int Id { get; }

        /// <summary>
        /// 形状
        /// </summary>
        ZoneShape Shape { get; }

        /// <summary>
        /// 范围类型
        /// </summary>
        int ZoneType { get; }

        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="data"></param>
        void OnInit(int zoneType, int uid, ZoneAreaData data);

        /// <summary>
        /// 在范围里
        /// </summary>
        /// <param name="point"></param>
        /// <returns></returns>
        bool InZone(Vector3 point);
    }
}
