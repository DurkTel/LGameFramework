using GameCore;
using UnityEngine;
using GameCore.Asset;
using System;
using LGameFramework.GameCore.Input;
using GameCore.Entity;

public class GameLogic : MonoBehaviour
{

    // Start is called before the first frame update
    void Start()
    {
        GameEntry.GetModule<FMCrossPlatformInput>().InitGameInput();
        Entity entity = GameEntry.GetModule<GMEntityManager>().AddEntity(GMEntityManager.EntityType.Unknown);
        entity.AddComponent<EntityCullingComponent>();
        entity.AddComponent<EntitySkinComponent>();
        entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Skeleton, "unit000.prefab");
        entity.EntityData.SetSkinAssetName(GameCore.Avatar.GameAvatar.AvatarPartType.Hair, "hair_2.prefab");
    }

    // Update is called once per frame
    void Update()
    {
        
    }

}
