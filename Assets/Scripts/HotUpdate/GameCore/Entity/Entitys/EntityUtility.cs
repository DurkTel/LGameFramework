using LGameFramework.GameBase;
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
                    entity = Pool.Get<Entity>();
                    break;
                case GMEntityManager.EntityType.LocalPlayer:
                    entity = Pool.Get<LocalPlayerEntity>();
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
            EntityData entityData = Pool.Get<EntityData>();
            switch (type)
            {
                case GMEntityManager.EntityType.Unknown:
                    
                    break;
                case GMEntityManager.EntityType.LocalPlayer:
                    entityData.SetInterestLevel(AOI.InterestLevel.LocalTarget);
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Skeleton, "kohaku_skeleton.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Hair, "kohaku_A_hair.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Hand, "kohaku_A_hand.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Head, "kohaku_A_head.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Body, "kohaku_A_body.prefab");
                    entityData.SetSkinAssetName(Avatar.GameAvatar.AvatarPartType.Leg, "kohaku_A_leg.prefab");
                    entityData.AnimatorControllerName = "CharacterController.controller";
                    break;
            }
            return entityData;
        }
    }
}
