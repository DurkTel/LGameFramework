using LGameFramework.GameCore.Asset;
using LGameFramework.GameCore.Avatar;
using LGameFramework.GameCore.Timer;
using System.Collections;
using System.Collections.Generic;
using UnityEditor.Animations;
using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// 实体动画组件
    /// </summary>
    public class AnimationComponent : SkinComponent
    {
        public override int Priority => 3;

        private Animator m_Animator;
        public Animator Animator { get { return m_Animator; } }

        private string m_AnimatorControllerName;
        public string AnimatorControllerName 
        { 
            get 
            { 
                return m_AnimatorControllerName; 
            } 
            set
            {
                if (m_AnimatorControllerName == value) return;
                m_AnimatorControllerName = value;
                OnUpdateAnimatorController();
            }
        }

        public override void OnInit(Entity entity)
        {
            base.OnInit(entity);
            m_AnimatorControllerName = entity.EntityData.AnimatorControllerName;
        }

        public override void SkinLoadComplete(GameAvatar.AvatarPartType partType)
        {
            if (partType == GameAvatar.AvatarPartType.Skeleton)
            {
                m_Animator = GameObject.GetComponentInChildren<Animator>();
                OnUpdateAnimatorController();
            }
        }

        private void OnUpdateAnimatorController()
        {
            if (m_Animator == null) return;

            GameFrameworkEntry.GetModule<GMAssetManager>().LoadAssetAsync<AnimatorController>(m_AnimatorControllerName, (p) =>
            {
                m_Animator.runtimeAnimatorController = p.GetRawObject<AnimatorController>();
                m_Animator.cullingMode = AnimatorCullingMode.AlwaysAnimate;
                m_Animator.updateMode = AnimatorUpdateMode.AnimatePhysics;
            });
        }
    }
}
