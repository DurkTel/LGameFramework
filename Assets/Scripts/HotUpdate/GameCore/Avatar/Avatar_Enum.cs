using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Avatar
{
    public partial class Avatar
    {
        /// <summary>
        /// Avatar部位枚举
        /// </summary>
        public enum AvatarPartType
        { 
            /// <summary>
            /// 身体
            /// </summary>
            Body,
            /// <summary>
            /// 头部
            /// </summary>
            Head,
            /// <summary>
            /// 武器
            /// </summary>
            Weapon,
            /// <summary>
            /// 末位标识
            /// </summary>
            End,
        }
    }
}
