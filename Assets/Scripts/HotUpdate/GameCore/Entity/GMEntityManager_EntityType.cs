using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        /// <summary>
        /// 实体类型。
        /// </summary>
        public enum EntityType
        {
            Unknown,
            LocalPlayer,
        }

        /// <summary>
        /// 实体状态
        /// </summary>
        public enum EntityStatus
        {
            Inited,
            WillCreate,
            Created,
            Showed,
            Hidden,
            WillRelease,
            Released,
        }
    }
}
