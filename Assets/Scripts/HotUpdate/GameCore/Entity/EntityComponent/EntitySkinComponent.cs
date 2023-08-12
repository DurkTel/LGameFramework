using UnityEngine;
using GameCore.Avatar;

namespace GameCore.Entity
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

        }

        public void Dispose()
        {

        }

        public virtual void LoadSkin()
        {
            Debug.Log("��ʼ�������");
            foreach (var asset in m_Entity.EntityData.SkinAssetNames)
                m_Avatar.AddPart(asset.Key, asset.Value);

        }

        public virtual void SkinLoadComplete(GameAvatar.AvatarPartType partType)
        {
            
        }

        public virtual void StopLoadSkin()
        {
            
        }

    }
}
