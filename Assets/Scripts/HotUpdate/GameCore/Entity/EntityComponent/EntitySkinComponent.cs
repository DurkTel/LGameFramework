using System.Xml;
using UnityEngine;

namespace GameCore.Entity
{
    /// <summary>
    /// 实体外观组件
    /// 拥有该组件可以实现在场景显示的外观
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
        /// 挂载实体
        /// </summary>
        private Entity m_Entity;
        public Entity Entity { get { return m_Entity; } }
        /// <summary>
        /// 外观是否实例化完成
        /// </summary>
        private bool m_SkinInstantiate;
        public bool SkinInstantiate { get { return m_SkinInstantiate; } }
        /// <summary>
        /// 外观是否加载中
        /// </summary>
        private bool m_SkinLoading;
        public bool SkinLoading { get { return m_SkinLoading; } }

        public void OnInit(Entity entity)
        {
            m_Enabled = false;
            m_SkinLoading = false;
            m_Entity = entity;
            m_Transform = entity.Transform;
            m_GameObject = entity.GameObject;
        }

        public void Update(float deltaTime, float unscaledTime)
        {

        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            
        }

        public void Release()
        {

        }

        public void Dispose()
        {

        }

        public virtual void LoadSkin()
        {
            Debug.Log("开始加载外观");
            m_SkinLoading = true;
            SkinLoadComplete();
        }

        public virtual void SkinLoadComplete()
        {
            m_SkinLoading = false;
        }

        public virtual void StopLoadSkin()
        {
            m_SkinLoading = false;
        }

    }
}
