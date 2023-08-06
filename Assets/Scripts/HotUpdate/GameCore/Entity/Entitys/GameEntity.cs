using GameCore.Entity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Entity
{
    public class GameEntity : Entity
    {
        public bool SkinInstantiate => throw new System.NotImplementedException();

        public bool SkinLoading => throw new System.NotImplementedException();

        public int Priority => throw new System.NotImplementedException();

        public bool Enabled { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }

        public void OnDestroy()
        {
            throw new System.NotImplementedException();
        }

        public void OnInit(Entity entity)
        {
            throw new System.NotImplementedException();
        }
    }
}
