using LGameFramework.GameBase;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 实体抽象组件 定义组件最基本的操作
    /// </summary>
    public abstract class AbstractComponent : IComponent, ISetAttribute, IRegisterAttribute
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
        /// 实体属性
        /// </summary>
        private Dictionary<EEntityAttribute, IProperty> m_AttributeProperty;
        public Dictionary<EEntityAttribute, IProperty> AttributeProperty { get { return m_AttributeProperty; } }

        /// <summary>
        /// 初始化
        /// </summary>
        public virtual void OnInit(int entity, Dictionary<EEntityAttribute, IProperty> attribute)
        {
            m_Enabled = true;
            m_Entity = entity;
            m_GameObject = EntityUtility.GetGameObject(entity);
            m_Transform = EntityUtility.GetTransform(entity);
            m_AttributeProperty = attribute;
            RegisterProperty();
        }

        /// <summary>
        /// 回收
        /// </summary>
        public virtual void Release()
        {
            UnregisterProperty();
            m_Enabled = false;
            m_AttributeProperty = null;
        }

        /// <summary>
        /// 销毁
        /// </summary>
        public virtual void Dispose()
        {
            m_GameObject = null;
            m_Transform = null;
        }

        /// <summary>
        /// 注册属性
        /// </summary>
        public virtual void RegisterProperty()
        { 
            this.RegisterProperty<int>(EEntityAttribute.End);
        }

        /// <summary>
        /// 移除属性
        /// </summary>
        public virtual void UnregisterProperty()
        {

        }

    }
}
