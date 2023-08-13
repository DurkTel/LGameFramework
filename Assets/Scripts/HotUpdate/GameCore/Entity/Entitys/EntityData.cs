using GameCore.Avatar;
using LGameFramework.GameBase.Pool;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static GameCore.Entity.GMEntityManager;

namespace GameCore.Entity
{
    public class EntityData
    {
        /// <summary>
        /// 实体id
        /// </summary>
        private int m_EntityId;
        public int EntityId { get { return m_EntityId; } set { m_EntityId = value; } }
        /// <summary>
        /// 实体类型
        /// </summary>
        private EntityType m_EntityType;
        public EntityType EntityType { get { return m_EntityType; } set { m_EntityType = value; } }
        /// <summary>
        /// 实体状态
        /// </summary>
        private EntityStatus m_Status;
        public EntityStatus Status { get { return m_Status; } set { m_Status = value; } }
        /// <summary>
        /// 生成时间戳
        /// </summary>
        private float m_CreateTimeStamp;
        public float CreateTimeStamp { get { return m_CreateTimeStamp; } set { m_CreateTimeStamp = value; } }
        /// <summary>
        /// 回收时间戳
        /// </summary>
        private float m_ReleaseTimeStamp;
        public float ReleaseTimeStamp { get { return m_ReleaseTimeStamp; } set { m_ReleaseTimeStamp = value; } }
        /// <summary>
        /// 皮肤部位资源字典
        /// </summary>
        private Dictionary<GameAvatar.AvatarPartType, string> m_SkinAssetNames;
        public Dictionary<GameAvatar.AvatarPartType, string> SkinAssetNames { get { return m_SkinAssetNames; } }

        public void Release()
        {
            DictionaryPool<GameAvatar.AvatarPartType, string>.Release(m_SkinAssetNames);
            m_SkinAssetNames.Clear();
            m_SkinAssetNames = null;
            m_CreateTimeStamp = 0f;
            m_EntityId = 0;
        }

        /// <summary>
        /// 设置皮肤部位资源
        /// </summary>
        public void SetSkinAssetName(GameAvatar.AvatarPartType partType, string assetName)
        {
            m_SkinAssetNames ??= DictionaryPool<GameAvatar.AvatarPartType, string>.Get();
            m_SkinAssetNames[partType] = assetName;
        }
    }
}
