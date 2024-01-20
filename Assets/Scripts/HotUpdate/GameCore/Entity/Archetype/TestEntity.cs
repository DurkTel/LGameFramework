using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public struct TestEntity : IArchetype
    {
        public Type[] GetComponents()
        {
            return null;
        }

        public EntityTags GetTags()
        {
            return EntityTags.MainPlayer;
        }

        public void OnCustomOperation(int entity)
        {
            
        }

        public void OnInitData(int entity)
        {
            
        }

        
    }
}
