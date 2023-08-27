using LGameFramework.GameBase.Pool;
using System;
using System.Collections.Generic;

namespace LGameFramework.GameCore.Entity
{
    public class EntityUtility
    {

        /// <summary>
        /// ����ʵ�����ͷ���ʵ��ʵ��
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static Entity GetEntityByType(GMEntityManager.EntityType type)
        {
            Entity entity = null;
            switch (type)
            {
                case GMEntityManager.EntityType.Unknown:
                    entity = Pool<Entity>.Get();
                    break;
                case GMEntityManager.EntityType.LocalPlayer:
                    entity = Pool<LocalPlayerEntity>.Get();
                    break;
            }
            return entity;
        }

        /// <summary>
        /// ����ʵ�����ͳ�ʼ��ʵ������
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        public static EntityData InitEntityData(GMEntityManager.EntityType type)
        {
            EntityData entityData = Pool<EntityData>.Get();
            switch (type)
            {
                case GMEntityManager.EntityType.Unknown:
                    
                    break;
                case GMEntityManager.EntityType.LocalPlayer:
                    entityData.SetInterestLevel(AOI.InterestLevel.LocalTarget);
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Hair, "unit000_hair.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Skeleton, "unit000.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Hand, "unit000_hand.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Head, "unit000_head.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Body, "unit000_body.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Leg, "unit000_leg.prefab");
                    break;
            }
            return entityData;
        }
    }
}
