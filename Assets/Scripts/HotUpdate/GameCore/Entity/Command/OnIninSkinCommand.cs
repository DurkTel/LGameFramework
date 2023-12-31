using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public class OnIninSkinCommand : AbstractCommand
    {
        public override int Entity { get; set; }

        public override bool Execute()
        {
            Modify<SkinDataModel, int>("model", 1);

            return true;
        }
    }
}
