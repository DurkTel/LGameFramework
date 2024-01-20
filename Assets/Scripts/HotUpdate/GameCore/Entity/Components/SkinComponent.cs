using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public class SkinComponent : AbstractComponent
    {

        


        public override void Dispose()
        {
            base.Dispose();
        }

        private void OnSkinNumChange()
        {
            OnIninSkinCommand s = new OnIninSkinCommand();  
        }
    }

}
