using UnityEngine;
using LGameFramework.GameCore.Avatar;
using static LGameFramework.GameCore.Avatar.GameAvatar;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// ʵ��������
    /// ӵ�и��������ʵ���ڳ�����ʾ�����
    /// </summary>
    public class SkinComponent : AbstractComponent
    {
        public override int Priority => 2;
        /// <summary>
        /// ģ������ϵͳ
        /// </summary>
        private GameAvatar m_Avatar;
        public GameAvatar Avatar { get { return m_Avatar; } }
        /// <summary>
        /// ����Ƿ��ʼ����
        /// </summary>
        public bool SkinIsInit = false;
        /// <summary>
        /// ����Ƿ������
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
            GameLogger.INFO("��ʼ�������");
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
