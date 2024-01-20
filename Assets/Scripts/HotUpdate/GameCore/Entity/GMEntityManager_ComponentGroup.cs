using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        #region 实体组件

        /// <summary>
        /// 获取该组件组
        /// </summary>
        /// <param name="type">组件类型</param>
        /// <returns></returns>
        internal ComponentGroup GetComponentGroup(Type type)
        {
            if (!m_AllComponentsGroup.TryGetValue(type, out var group))
                return null;

            return group;
        }

        /// <summary>
        /// 获取该组件组
        /// </summary>
        /// <typeparam name="T">组件类型</typeparam>
        /// <returns></returns>
        internal ComponentGroup GetComponentGroup<T>()
        {
            return GetComponentGroup(typeof(T));
        }

        /// <summary>
        /// 尝试添加组件组
        /// </summary>
        /// <param name="type"></param>
        /// <returns></returns>
        private ComponentGroup TryAddComponentGroup(Type type)
        {
            if (!m_AllComponentsGroup.TryGetValue(type, out var group))
            {
                group = new ComponentGroup(type);
                m_AllComponentsGroup.Add(type, group);
                m_AllComponentsGroup.Sort(delegate (System.Type a, System.Type b) { return s_ComponentPriority.GetValueOrDefault(b, 999) - s_ComponentPriority.GetValueOrDefault(a, 999); });
            }

            return group;
        }

        /// <summary>
        /// 添加实体组件
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="type"></param>
        internal IComponent AddComponent(int entity, Type type)
        {
            ComponentGroup group = TryAddComponentGroup(type);
            var component = group.AddComponent(entity);
            component.OnInit(entity, m_EntityAttributes[entity]);
            return component;
        }

        /// <summary>
        /// 添加实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        internal T AddComponent<T>(int entity) where T : class, IComponent, new()
        {
            ComponentGroup group = TryAddComponentGroup(typeof(T));
            var component = group.AddComponent<T>(entity);
            component.OnInit(entity, m_EntityAttributes[entity]);
            return component;
        }

        /// <summary>
        /// 移除实体组件
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        internal bool RemoveComponent(int entity, Type type)
        {
            if (!m_AllComponentsGroup.TryGetValue(type, out var group))
                return false;

            return group.RemoveComponent(entity);
        }

        /// <summary>
        /// 移除实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        internal bool RemoveComponent<T>(int entity) where T : class, IComponent, new()
        {
            return RemoveComponent(entity, typeof(T));
        }

        /// <summary>
        /// 移除所有实体组件
        /// </summary>
        /// <param name="id"></param>
        internal void RemoveAllComponent(int id)
        {
            //回收组件
            foreach (var group in m_AllComponentsGroup.Values)
            {
                group.RemoveComponent(id);
            }
        }

        #endregion
    }

    /// <summary>
    /// 组件组
    /// </summary>
    public sealed class ComponentGroup
    {
        /// <summary>
        /// 等待销毁时间
        /// </summary>
        private const float c_DestroyTime = 5f;
        /// <summary>
        /// 回收列表
        /// </summary>
        private readonly Queue m_ReleaseQueue;
        /// <summary>
        /// 等待回收
        /// </summary>
        private readonly List<int> m_WaitToRelease;
        /// <summary>
        /// 下次销毁的时间
        /// </summary>
        private float m_NextDestroyTime;
        /// <summary>
        /// 所有拥有该组件的实体
        /// </summary>
        private readonly Dictionary<int, IComponent> m_AllComponents;
        public Dictionary<int, IComponent> AllComponents { get { return m_AllComponents; } }
        /// <summary>
        /// 需要帧更新的组件
        /// </summary>
        private readonly Dictionary<int, IUpdateComponent> m_UpdateComponents;
        /// <summary>
        /// 需要固定更新的组件
        /// </summary>
        private readonly Dictionary<int, IFixedUpdateComponent> m_FixedUpdateComponents;
        /// <summary>
        /// 组件组类型
        /// </summary>
        private readonly Type m_Type;
        public Type Type { get { return m_Type; } }
        /// <summary>
        /// 有多少实体拥有该组件
        /// </summary>
        public int Count { get { return m_AllComponents.Count; } }

        public ComponentGroup(Type type)
        {
            m_NextDestroyTime = c_DestroyTime;
            m_Type = type;
            m_AllComponents = new Dictionary<int, IComponent>();
            m_UpdateComponents = new Dictionary<int, IUpdateComponent>();
            m_FixedUpdateComponents = new Dictionary<int, IFixedUpdateComponent>();
            m_ReleaseQueue = new Queue();
            m_WaitToRelease = new List<int>();
        }

        public void Update(float deltaTime, float unscaledTime)
        {
            foreach (var component in m_UpdateComponents.Values)
            {
                if (!component.Enabled) continue;
                component.Update(deltaTime, unscaledTime);
            }
        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            foreach (var component in m_FixedUpdateComponents.Values)
            {
                if (!component.Enabled) continue;
                component.FixedUpdate(fixedDeltaTime, unscaledTime);
            }
        }

        public void LateUpdate(float deltaTime, float unscaleDeltaTime)
        {
            if (m_WaitToRelease.Count > 0)
            {
                foreach (var id in m_WaitToRelease)
                {
                    m_AllComponents.Remove(id);

                    if (m_UpdateComponents.ContainsKey(id))
                        m_UpdateComponents.Remove(id);

                    if (m_FixedUpdateComponents.ContainsKey(id))
                        m_FixedUpdateComponents.Remove(id);
                }

                m_WaitToRelease.Clear();
            }

            if (m_ReleaseQueue.Count <= 0) return;

            m_NextDestroyTime -= unscaleDeltaTime;

            if (m_NextDestroyTime <= 0)
            {
                m_NextDestroyTime = c_DestroyTime;
                var component = m_ReleaseQueue.Dequeue() as IComponent;
                component.Dispose();
                Pool.Release(component);
            }
        }

        /// <summary>
        /// 尝试获取实体组件
        /// </summary>
        /// <param name="entity">实体</param>
        /// <param name="component">组件</param>
        /// <returns>是否存在</returns>
        internal bool TryGetComponent<T>(int entity, out T component) where T : class, IComponent, new()
        {
            component = null;
            if (!m_AllComponents.TryGetValue(entity, out var Icomponent))
                return false;
            component = Icomponent as T;

            return true;
        }

        /// <summary>
        /// 添加实体组件
        /// 内部调用
        /// </summary>
        /// <param name="entity">实体id</param>
        /// <param name="create">实例化方式</param>
        /// <returns></returns>
        private IComponent InternalAddComponent(int entity, Func<IComponent> create)
        {
            if (!m_AllComponents.TryGetValue(entity, out var component))
            {
                if (m_ReleaseQueue.Count > 0)
                {
                    m_NextDestroyTime = c_DestroyTime;
                    component = m_ReleaseQueue.Dequeue() as IComponent;
                }
                else
                    component = create();

                m_AllComponents.Add(entity, component);

                if (component is IUpdateComponent update)
                    m_UpdateComponents.Add(entity, update);

                if (component is IFixedUpdateComponent fixedUpdate)
                    m_FixedUpdateComponents.Add(entity, fixedUpdate);
            }

            return component;
        }

        /// <summary>
        /// 添加实体组件 这个通过表达式树创建实例 大量调用的情况下性能低于泛型创建
        /// </summary>
        /// <param name="id">实体Id</param>
        /// <returns></returns>
        internal IComponent AddComponent(int entity)
        {
            return InternalAddComponent(entity, delegate { return Pool.Get(m_Type) as IComponent; });
        }

        /// <summary>
        /// 添加实体组件
        /// </summary>
        /// <param name="entity">实体</param>
        internal T AddComponent<T>(int entity) where T : class, IComponent, new()
        {
            return InternalAddComponent(entity, delegate { return Pool.Get<T>(); }) as T;
        }

        /// <summary>
        /// 移除实体组件
        /// </summary>
        /// <param name="entity">实体</param>
        /// <returns>是否移除成功</returns>
        internal bool RemoveComponent(int entity)
        {
            if (!m_AllComponents.TryGetValue(entity, out var Icomponent) && !m_WaitToRelease.Contains(entity))
                return false;

            //移除组件
            m_WaitToRelease.Add(entity);
            //放入回收队列 给个缓冲时间 防止在AOI边界来回横条造成的反复 销毁和创建
            m_ReleaseQueue.Enqueue(Icomponent);
            Icomponent.Release();

            return true;
        }
    }

}
