using DG.Tweening;
using LGameFramework.GameCore.GameEntity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public class ShapeBuff : GameBuff
    {
        public override object CObject { get { return this; } }

        public override GMBuffManager.BuffType Type { get { return GMBuffManager.BuffType.ModifyShape; } }

        public override GMBuffManager.BuffTag Tag
        {
            get
            {
                return GMBuffManager.BuffTag.Buff;
            }
        }

        private Transform m_Transform;

        public override void OnInit(GMBuffManager.BuffData data)
        {
            base.OnInit(data);
            m_Transform = EntityUtility.GetTransform(Owner);
        }

        public override void OnActive()
        {
            base.OnActive();

            m_Transform.DOScale(Vector3.one * Param, 0.5f).SetEase(Ease.OutBack);
        }

        public override void OnDelete()
        {
            base.OnDelete();
            m_Transform.DOScale(Vector3.one, 0.5f).SetEase(Ease.InBack);

        }
    }
}
