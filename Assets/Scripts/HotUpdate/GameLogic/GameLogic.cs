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
        Entity entity = GameEntry.GetModule<FMEntityManager>().AddEntity(FMEntityManager.EntityType.Unknown);
        entity.AddComponent<EntityCullingComponent>();
        entity.AddComponent<EntitySkinComponent>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

}
