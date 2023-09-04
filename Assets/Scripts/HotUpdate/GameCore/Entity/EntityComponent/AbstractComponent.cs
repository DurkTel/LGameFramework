using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    /// <summary>
    /// 实体抽象组件 定义组件最基本的操作
    /// </summary>
    public abstract class AbstractComponent : IComponent
    {
        /// <summary>
        /// 组件优先级
        /// </summary>
        public abstract int Priority { get; }

        private Transform m_Transform;
        /// <summary>
        /// 变换组件
        /// </summary>
        public Transform Transform { get { return m_Transform; } }
        /// <summary>
        /// 游戏物体
        /// </summary>
        private GameObject m_GameObject;
        /// <summary>
        /// 游戏物体
        /// </summary>
        public GameObject GameObject { get { return m_GameObject; } }
        /// <summary>
        /// 启用组件
        /// </summary>
        private bool m_Enabled;
        /// <summary>
        /// 启用组件
        /// </summary>
        public bool Enabled { get { return m_Enabled; } set { m_Enabled = value; } }
        /// <summary>
        /// 挂载实体
        /// </summary>
        private Entity m_Entity;
        /// <summary>
        /// 挂载实体
        /// </summary>
        public Entity Entity { get { return m_Entity; } }
        /// <summary>
        /// 初始化
        /// </summary>
        public virtual void OnInit(Entity entity)
        {
            m_Enabled = true;
            m_Entity = entity;
            m_GameObject = m_Entity.GameObject;
            m_Transform = m_Entity.Transform;
        }
        /// <summary>
        /// 帧更新
        /// </summary>
        /// <param name="deltaTime">帧更新间隔</param>
        /// <param name="unscaledTime">帧更新间隔，不受时间缩放比例影响</param>
        public virtual void Update(float deltaTime, float unscaledTime)
        {

        }
        /// <summary>
        /// 固定更新
        /// </summary>
        /// <param name="fixedDeltaTime">固定更新间隔</param>
        /// <param name="unscaledTime">游戏开始后所运行的时间，不受时间缩放比例影响</param>
        public virtual void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            
        }
        /// <summary>
        /// 回收
        /// </summary>
        public virtual void Release()
        {
            m_Enabled = false;
        }
        /// <summary>
        /// 销毁
        /// </summary>
        public virtual void Dispose()
        {
            m_Entity = null;
            m_GameObject = null;
            m_Transform = null;
        }

    }
}
