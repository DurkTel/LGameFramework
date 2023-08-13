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
        /// ʵ��id
        /// </summary>
        private int m_EntityId;
        public int EntityId { get { return m_EntityId; } set { m_EntityId = value; } }
        /// <summary>
        /// ʵ������
        /// </summary>
        private EntityType m_EntityType;
        public EntityType EntityType { get { return m_EntityType; } set { m_EntityType = value; } }
        /// <summary>
        /// ʵ��״̬
        /// </summary>
        private EntityStatus m_Status;
        public EntityStatus Status { get { return m_Status; } set { m_Status = value; } }
        /// <summary>
        /// ����ʱ���
        /// </summary>
        private float m_CreateTimeStamp;
        public float CreateTimeStamp { get { return m_CreateTimeStamp; } set { m_CreateTimeStamp = value; } }
        /// <summary>
        /// ����ʱ���
        /// </summary>
        private float m_ReleaseTimeStamp;
        public float ReleaseTimeStamp { get { return m_ReleaseTimeStamp; } set { m_ReleaseTimeStamp = value; } }
        /// <summary>
        /// Ƥ����λ��Դ�ֵ�
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
        /// ����Ƥ����λ��Դ
        /// </summary>
        public void SetSkinAssetName(GameAvatar.AvatarPartType partType, string assetName)
        {
            m_SkinAssetNames ??= DictionaryPool<GameAvatar.AvatarPartType, string>.Get();
            m_SkinAssetNames[partType] = assetName;
        }
    }
}
