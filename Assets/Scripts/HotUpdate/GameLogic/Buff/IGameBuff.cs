using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public interface IGameBuff
    {
        /// <summary>
        /// buffID
        /// </summary>
        public int Id { get; }
        /// <summary>
        /// buff类型
        /// </summary>
        public GMBuffManager.BuffType Type { get; }
        /// <summary>
        /// buff标签
        /// </summary>
        public GMBuffManager.BuffTag Tag { get; }
        /// <summary>
        /// 拥有者
        /// </summary>
        public int Owner { get; }
        /// <summary>
        /// 发起者
        /// </summary>
        public int FormId { get; }
        /// <summary>
        /// 开始时间
        /// </summary>
        public double StartTime { get; }
        /// <summary>
        /// 持续时间
        /// </summary>
        public double Duration { get; }
        /// <summary>
        /// 剩余时间
        /// </summary>
        public double Remainder { get; }
        /// <summary>
        /// 初始化
        /// </summary>
        /// <param name="data"></param>
        public void OnInit(GMBuffManager.BuffData data);
        /// <summary>
        /// buff生效
        /// </summary>
        public void OnActive();
        /// <summary>
        /// buff失效
        /// </summary>
        public void OnDelete();
        /// <summary>
        /// buff更新
        /// </summary>
        public void OnUpdate();
    }
}
