using UnityEngine;
using LGameFramework.GameCore.Avatar;
using static LGameFramework.GameCore.Avatar.GameAvatar;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// 实体外观组件
    /// 拥有该组件可以实现在场景显示的外观
    /// </summary>
    public class SkinComponent : AbstractComponent
    {
        public override int Priority => 2;
        /// <summary>
        /// 模型替身系统
        /// </summary>
        private GameAvatar m_Avatar;
        public GameAvatar Avatar { get { return m_Avatar; } }
        /// <summary>
        /// 外观是否初始化过
        /// </summary>
        public bool SkinIsInit = false;
        /// <summary>
        /// 外观是否加载中
        /// </summary>
        public bool SkinLoading { get { return Avatar.IsLoading; } }

        public override void OnInit(Entity entity)
        {
            base.OnInit(entity);
            m_Avatar = entity.Container.TryAddComponent<GameAvatar>();
            m_Avatar.OnLoadComplete.AddListener(SkinLoadComplete);
            m_Avatar.OnInit();
        }

        public override void Release()
        {
            base.Release();
            m_Avatar.OnLoadComplete.RemoveListener(SkinLoadComplete);
            m_Avatar.Release();
        }

        public override void Dispose()
        {
            base.Dispose();
            m_Avatar.Dispose();
            m_Avatar = null;
            SkinIsInit = false;
        }

        public virtual void LoadSkin()
        {
            if (m_Avatar == null || Entity == null) return;
            GameLogger.INFO("开始加载外观");
            GameAvatarPart part;
            foreach (var asset in Entity.EntityData.SkinAssetNames)
            {
                part = m_Avatar.GetPart(asset.Key);
                if (part == null)
                    m_Avatar.AddPart(asset.Key, asset.Value);
                else
                {
                    part.OnInit(m_Avatar, asset.Key);
                    m_Avatar.UpdatePartAsset(asset.Key, asset.Value);
                }
            }

        }

        public virtual void SkinLoadComplete(GameAvatar.AvatarPartType partType)
        {
            
        }

        public virtual void StopLoadSkin()
        {
            
        }

    }
}
