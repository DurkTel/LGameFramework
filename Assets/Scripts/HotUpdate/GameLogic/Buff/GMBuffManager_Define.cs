using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public partial class GMBuffManager : LogicModule
    {

        /// <summary>
        /// buff数据
        /// </summary>
        public struct BuffData
        {
            /// <summary>
            /// buffID
            /// </summary>
            public int id;
            /// <summary>
            /// 拥有者
            /// </summary>
            public int owner;
            /// <summary>
            /// 发起者
            /// </summary>
            public int formId;
            /// <summary>
            /// 持续时间
            /// </summary>
            public double duration;
            /// <summary>
            /// 参数
            /// </summary>
            public float param;
        }

        /// <summary>
        /// buff标签
        /// </summary>
        public enum BuffTag
        { 
            /// <summary>
            /// 增益
            /// </summary>
            Buff = 2,
            /// <summary>
            /// 减益
            /// </summary>
            Debuff = 4,
            /// <summary>
            /// 群体
            /// </summary>
            Group = 8,
        }

        /// <summary>
        /// buff类型
        /// </summary>
        public enum BuffType
        {
            /// <summary>
            /// 修改速度
            /// </summary>
            ModifySpeed,
            /// <summary>
            /// 修改体态
            /// </summary>
            ModifyShape
        }
    }
}
