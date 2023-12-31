using LGameFramework.GameCore.GameEntity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public class SpeedBuff : GameBuff
    {
        public override object CObject { get { return this; } }

        public override GMBuffManager.BuffType Type { get { return GMBuffManager.BuffType.ModifySpeed; } }

        public override GMBuffManager.BuffTag Tag
        {
            get
            {
                return Param <= 0f ? GMBuffManager.BuffTag.Debuff : GMBuffManager.BuffTag.Buff;
            }
        }

        public override void OnActive()
        {
            base.OnActive();
            //EntityUtility.SetEntityData(Owner, EntityAttribute.c_SpeedScale, Param);

        }

        public override void OnDelete()
        {
            base.OnDelete();
            //EntityUtility.SetEntityData(Owner, EntityAttribute.c_SpeedScale, Param);
        }
    }
}
