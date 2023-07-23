using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Entity
{
    public sealed partial class FMEntityManager : FrameworkModule
    {
        /// <summary>
        /// 实体类型。
        /// </summary>
        public enum EntityType
        {
            Unknown,
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
