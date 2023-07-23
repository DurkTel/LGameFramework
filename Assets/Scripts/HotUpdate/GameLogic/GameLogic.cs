using GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameCore.Asset;
using GameCore.Entity;

public class GameLogic : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    Entity entity;

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.A))
        {
            entity = GameEntry.GetModule<FMEntityManager>().AddEntity(FMEntityManager.EntityType.Unknown);
        }

        if (Input.GetKeyDown(KeyCode.S))
        { 
            GameEntry.GetModule<FMEntityManager>().ReleaseEntity(entity.entityId);
        }
    }
}
