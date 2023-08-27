using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        /// <summary>
        /// ʵ�����͡�
        /// </summary>
        public enum EntityType
        {
            Unknown,
            LocalPlayer,
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
