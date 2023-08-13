using GameCore;
using UnityEngine;
using GameCore.Asset;
using System;
using LGameFramework.GameCore.Input;
using GameCore.Entity;

public class GameLogic : MonoBehaviour
{
    Entity entity;
    // Start is called before the first frame update
    void Start()
    {
        GameEntry.GetModule<FMCrossPlatformInput>().InitGameInput();
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            entity = GameEntry.GetModule<GMEntityManager>().AddEntity(GMEntityManager.EntityType.Unknown);
            entity.AddComponent<EntityCullingComponent>();
            entity.AddComponent<EntitySkinComponent>();
            entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Hair, "unit000_hair.prefab");
            entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Skeleton, "unit000.prefab");
            entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Hand, "unit000_hand.prefab");
            entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Head, "unit000_head.prefab");
            entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Body, "unit000_body.prefab");
            entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Leg, "unit000_leg.prefab");
        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            GameEntry.GetModule<GMEntityManager>().ReleaseEntity(entity.EntityData.EntityId);
        }
    }

}
