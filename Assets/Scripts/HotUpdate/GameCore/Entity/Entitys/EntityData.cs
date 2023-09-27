using LGameFramework.GameCore.AOI;
using LGameFramework.GameCore.Avatar;
using LGameFramework.GameBase;
using System.Collections.Generic;
using static LGameFramework.GameCore.Entity.GMEntityManager;

namespace LGameFramework.GameCore.Entity
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
        /// AOI等级
        /// </summary>
        private InterestLevel m_InterestLevel;
        public InterestLevel InterestLevel { get { return m_InterestLevel; } }
        /// <summary>
        /// 移动速度
        /// </summary>
        private float m_MoveSpeed = 20f;
        public float MoveSpeed { get { return m_MoveSpeed; } }
        /// <summary>
        /// 皮肤部位资源字典
        /// </summary>
        private Dictionary<GameAvatar.AvatarPartType, string> m_SkinAssetNames;
        public Dictionary<GameAvatar.AvatarPartType, string> SkinAssetNames { get { return m_SkinAssetNames; } }
        /// <summary>
        /// 动画机名称
        /// </summary>
        private string m_AnimatorControllerName;
        public string AnimatorControllerName { get { return m_AnimatorControllerName; } set { m_AnimatorControllerName = value; } }

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

        public void SetInterestLevel(InterestLevel interestLevel)
        {
            m_InterestLevel = interestLevel;
        }
    }
}
