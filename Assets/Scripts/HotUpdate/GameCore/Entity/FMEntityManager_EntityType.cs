using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Entity
{
    public sealed partial class FMEntityManager : FrameworkModule
    {
        /// <summary>
        /// ʵ�����͡�
        /// </summary>
        public enum EntityType
        {
            Unknown,
        }

        /// <summary>
        /// ʵ��״̬
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
