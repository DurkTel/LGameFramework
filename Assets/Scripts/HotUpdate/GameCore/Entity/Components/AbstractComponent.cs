using LGameFramework.GameBase;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 实体抽象组件 定义组件最基本的操作
    /// </summary>
    public abstract class AbstractComponent : IComponent
    {
        /// <summary>
        /// 变换组件
        /// </summary>
        private Transform m_Transform;
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
        private int m_Entity;
        /// <summary>
        /// 挂载实体
        /// </summary>
        public int Entity { get { return m_Entity; } }
        /// <summary>
        /// 初始化
        /// </summary>
        public virtual void OnInit(int entity)
        {
            m_Enabled = true;
            m_Entity = entity;
            m_GameObject = EntityUtility.GetGameObject(entity);
            m_Transform = EntityUtility.GetTransform(entity);
        }
        /// <summary>
        /// 注册数据模型
        /// </summary>
        public IDataModel RegisterModel<T>() where T : class, IDataModel, new()
        {
            return EntityUtility.RegisterDataModel<T>(Entity);
        }
        /// <summary>
        /// 获取数据模型属性
        /// </summary>
        public V GetPropertyValue<T, V>(string property) where T : class, IDataModel, new()
        {
            return EntityUtility.GetDataModelProperty<T, V>(Entity, property);
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
            m_GameObject = null;
            m_Transform = null;

            // 注意如果是对象池获取 记得在下面回收
        }
    }
}
