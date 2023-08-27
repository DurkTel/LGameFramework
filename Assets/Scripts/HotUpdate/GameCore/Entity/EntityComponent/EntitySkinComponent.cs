using UnityEngine;
using LGameFramework.GameCore.Avatar;
using static LGameFramework.GameCore.Avatar.GameAvatar;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// ʵ��������
    /// ӵ�и��������ʵ���ڳ�����ʾ�����
    /// </summary>
    public class EntitySkinComponent : IEntityComponent
    {
        public int Priority => 1;

        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }

        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }

        private bool m_Enabled;
        public bool Enabled { get { return m_Enabled; } set { m_Enabled = value; } }
        /// <summary>
        /// ����ʵ��
        /// </summary>
        private Entity m_Entity;
        public Entity Entity { get { return m_Entity; } }
        /// <summary>
        /// ģ������ϵͳ
        /// </summary>
        private GameAvatar m_Avatar;
        public GameAvatar Avatar { get { return m_Avatar; } }
        /// <summary>
        /// ����Ƿ������
        /// </summary>
        public bool SkinLoading { get { return Avatar.IsLoading; } }

        public void OnInit(Entity entity)
        {
            m_Enabled = false;
            m_Entity = entity;
            m_Transform = entity.Transform;
            m_GameObject = entity.GameObject;
            m_Avatar = entity.Container.TryAddComponent<GameAvatar>();
            m_Avatar.OnLoadComplete.AddListener(SkinLoadComplete);
            m_Avatar.OnInit();
        }

        public void Update(float deltaTime, float unscaledTime)
        {

        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            
        }

        public void Release()
        {
            m_Avatar.OnLoadComplete.RemoveListener(SkinLoadComplete);
            m_Avatar.Release();
            m_Entity = null;
            m_Transform = null;
            m_GameObject = null;
            m_Enabled = false;
        }

        public void Dispose()
        {
            m_Avatar.Dispose();
            m_Avatar = null;
        }

        public virtual void LoadSkin()
        {
            if (m_Avatar == null || m_Entity == null) return;
            Debug.Log("��ʼ�������");
            GameAvatarPart part;
            foreach (var asset in m_Entity.EntityData.SkinAssetNames)
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
