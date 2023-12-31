using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase.ZoneArea
{
    /// <summary>
    /// 需要区域检测的元素
    /// </summary>
    public interface IZoneAreaElement
    {
        /// <summary>
        /// id
        /// </summary>
        int Id { get; }
        /// <summary>
        /// 当前区域 2的n次方 不写成枚举是为了热更
        /// </summary>
        int CurrentArea { get; set; }
        /// <summary>
        /// 当前的坐标
        /// </summary>
        Vector3 Position { get; }
        /// <summary>
        /// 进出区域
        /// </summary>
        /// <param name="enter"></param>
        /// <param name="zoneType">区域类型</param>
        void OnEnterZoneArea(bool enter, int zoneType);
        
    }
}
