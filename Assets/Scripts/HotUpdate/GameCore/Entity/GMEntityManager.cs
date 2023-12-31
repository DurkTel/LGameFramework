using LGameFramework.GameBase;
using LGameFramework.GameBase.Culling;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        internal const string ENTITY_POOL = "EntityPool";
        public override int Priority => 3;
        /// <summary>
        /// 主机玩家id
        /// </summary>
        private int m_MainPlayerID = -1;
        public int MainPlayerID { get { return m_MainPlayerID; } }
        /// <summary>
        /// 所有实体组件
        /// </summary>
        private GameDictionary<Type, ComponentGroup> m_AllComponentsGroup;
        public GameDictionary<Type, ComponentGroup> AllComponentsGroup { get { return m_AllComponentsGroup; } }
        /// <summary>
        /// 实体所在容器
        /// </summary>
        private Dictionary<int, GameObject> m_AllEntityObject;
        public Dictionary<int, GameObject> AllEntityObject { get { return m_AllEntityObject; } }
        /// <summary>
        /// 实体所在标签
        /// </summary>
        private Dictionary<int, EntityTags> m_AllEntityTag;
        public Dictionary<int, EntityTags> AllEntityTag { get { return m_AllEntityTag; } }
        /// <summary>
        /// 实体状态
        /// </summary>
        private Dictionary<int, EntityState> m_EntityStates;
        public Dictionary<int, EntityState> EntityStates { get { return m_EntityStates; } }
        /// <summary>
        /// 子实体
        /// </summary>
        private Dictionary<int, List<int>> m_ChildEntitys;
        public Dictionary<int, List<int>> ChildEntitys { get { return m_ChildEntitys; } }
        /// <summary>
        /// 实体数据模型
        /// </summary>
        private Dictionary<int, Dictionary<Type, IDataModel>> m_EntityDataModel;
        public Dictionary<int, Dictionary<Type, IDataModel>> EntityDataModel { get {  return m_EntityDataModel; } }
        /// <summary>
        /// 对象裁切组
        /// </summary>
        private ObjectCullingGroup m_ObjectCullingGroup;
        public ObjectCullingGroup ObjectCullingGroup { get { return m_ObjectCullingGroup; } }

        public override void OnInit()
        {
            m_ObjectCullingGroup = new ObjectCullingGroup();
            m_ObjectCullingGroup.TargetCamera = GameFrameworkEntry.GetModule<GMOrbitCamera>().RegularCamera;
            m_AllComponentsGroup = new GameDictionary<Type, ComponentGroup>();
            m_ChildEntitys = new Dictionary<int, List<int>>();
            m_AllEntityObject = new Dictionary<int, GameObject>();
            m_AllEntityTag = new Dictionary<int, EntityTags>();
            m_EntityStates = new Dictionary<int, EntityState>();
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            foreach (var group in m_AllComponentsGroup.Values)
            {
                group.Update(deltaTime, unscaledTime);
            }
        }

        public override void FixedUpdate(float fixedDeltaTime, float unscaledTime)
        {
            foreach (var group in m_AllComponentsGroup.Values)
            {
                group.FixedUpdate(fixedDeltaTime, unscaledTime);
            }
        }

        public override void LateUpdate(float deltaTime, float unscaleDeltaTime)
        {
            foreach (var group in m_AllComponentsGroup.Values)
            {
                group.LateUpdate(deltaTime, unscaleDeltaTime);
            }
        }

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
        /// 尝试获取实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="component"></param>
        internal bool TryGetComponent<T>(int entity, out T component) where T : class, IComponent, new()
        {
            component = null;
            if (!m_AllComponentsGroup.TryGetValue(typeof(T), out var group))
                return false;


            if (!group.TryGetComponent<T>(entity, out component))
                return false;

            return true;
        }

        /// <summary>
        /// 获取实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        internal T GetComponent<T>(int entity) where T : class, IComponent, new()
        {
            T component = null;
            TryGetComponent<T>(entity, out component);

            return component;
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
            component.OnInit(entity);
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
            component.OnInit(entity);
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

        /// <summary>
        /// 获取实体容器
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal GameObject GetGameObject(int id)
        {
            m_AllEntityObject.TryGetValue(id, out var go);
            return go;
        }

        /// <summary>
        /// 获取实体变换组件
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal Transform GetTransform(int id)
        {
            GameObject go = GetGameObject(id);  
            if (go == null) return null;
            return go.transform;
        }

        /// <summary>
        /// 获取实体标签
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal EntityTags GetEntityTag(int id)
        {
            m_AllEntityTag.TryGetValue(id, out var tag);
            return tag;
        }

        /// <summary>
        /// 设置实体数据模型
        /// </summary>
        /// <param name="value">数据值</param>
        internal IDataModel RegisterDataModel<T>(int id) where T : class, IDataModel, new()
        {
            Dictionary<Type, IDataModel> dataModels;
            if (!m_EntityDataModel.TryGetValue(id, out dataModels))
            {
                dataModels = Pool.Get<Dictionary<Type, IDataModel>>();
                m_EntityDataModel.Add(id, dataModels);
            }

            if (!dataModels.TryGetValue(typeof(T), out var model))
            {
                model = Pool.Get<T>();
                model.OnInit();
                dataModels.Add(typeof(T),  model);
            }

            return model;
        }

        /// <summary>
        /// 获取数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <returns>数据值</returns>
        internal T GetDataModel<T>(int id) where T : class, IDataModel, new()
        {
            if (!m_EntityDataModel.TryGetValue(id, out var dataModels))
                return default(T);

            return dataModels.GetValueOrDefault(typeof(T)) as T;
        }

        /// <summary>
        /// 清除实体数据节点
        /// </summary>
        /// <param name="id"></param>
        /// <param name="fullPath"></param>
        internal void ClearEntityDataModel<T>(int id) where T : IDataModel
        {
            if (m_EntityDataModel.TryGetValue(id, out var dataModels) && dataModels.TryGetValue(typeof(T), out var model))
            {
                model.Dispose();
                dataModels.Remove(typeof(T));
            }
        }

        /// <summary>
        /// 清除所有实体数据节点
        /// </summary>
        /// <param name="id"></param>
        internal void ClearAllEntityDataModel(int id)
        {
            if (m_EntityDataModel.TryGetValue(id, out var dataModels))
            {
                foreach (var Imodel in dataModels.Values)
                    Imodel.Dispose();

                m_EntityDataModel.Remove(id);
            }
        }

        /// <summary>
        /// 更新实体状态
        /// </summary>
        /// <param name="id"></param>
        /// <param name="state"></param>
        internal void UpdateEntityState(int id, EntityState state)
        {
            if (m_EntityStates.ContainsKey(id))
                m_EntityStates[id] = state;
        }

        /// <summary>
        /// 实体进入
        /// </summary>
        /// <returns></returns>
        internal int EnterEntity(IArchetype archetype)
        {
            int entity = EnterEntity();
            var tag = archetype.GetTags();
            m_AllEntityTag[entity] = tag;
            archetype.OnInitData(entity);
            var coms = archetype.GetComponents();
            if(coms.Length > 0)
            {
                foreach (var component in coms)
                    AddComponent(entity, component);
            }

            archetype.OnCustomOperation(entity);

            if (tag == EntityTags.MainPlayer)
                m_MainPlayerID = entity;

            return entity;
        }

        /// <summary>
        /// 实体进入
        /// </summary>
        /// <returns></returns>
        internal int EnterEntity()
        {
            GameObject go = GameObjectPool.GetGameObject(ENTITY_POOL);
            int entity = go.GetInstanceID();
            go.name = "Entity_" + entity;
            go.transform.SetParentZero(Transform);
            go.layer = LayerMask.NameToLayer("EntityLayer");
            m_AllEntityObject.Add(entity, go);
            m_AllEntityTag.Add(entity, EntityTags.Untagged);
            m_EntityStates.Add(entity, EntityState.Normal);

            return entity;
        }

        /// <summary>
        /// 实体离开
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal bool LeaveEntity(int id)
        {
            //回收组件
            RemoveAllComponent(id);

            //回收容器
            if (m_AllEntityObject.TryGetValue(id, out var go))
                GameObjectPool.Release(ENTITY_POOL, go);

            //回收标签
            if (m_AllEntityTag.ContainsKey(id))
                m_AllEntityTag.Remove(id);

            //回收状态
            if (m_EntityStates.ContainsKey(id))
                m_EntityStates.Remove(id);

            return false;
        }

        /// <summary>
        /// 附加子实体
        /// </summary>
        /// <param name="parentID">父实体ID</param>
        /// <param name="childID">子实体ID</param>
        internal void AttachChild(int parentID, int childID, string attachBone = "")
        {
            if (!m_ChildEntitys.TryGetValue(parentID, out var childs))
            {
                childs = ListPool<int>.Get();
                m_ChildEntitys.Add(parentID, childs);
            }

            if (childs.Contains(childID))
                GameLogger.WARNING("正在尝试重复添加相同的子实体！");

            childs.Add(childID);
            //记录父实体id
            //var parent = AddComponent<ParentComponent>(childID);
            //parent.ParentId = parentID;
            //parent.BindingBone = attachBone;
        }

        /// <summary>
        /// 解除子实体
        /// </summary>
        /// <param name="parentID">父实体ID</param>
        /// <param name="childID">子实体ID</param>
        /// <returns></returns>
        internal bool RelieveChild(int parentID, int childID)
        {
            if (!m_ChildEntitys.TryGetValue(parentID, out var childs))
                return false;

            if (!childs.Contains(childID))
                return false;

            childs.Remove(childID);

            if (childs.Count == 0)
            { 
                m_ChildEntitys.Remove(parentID);
                ListPool<int>.Release(childs);
            }
            //清除父实体id
            //RemoveComponent<ParentComponent>(childID);

            return true;
        }

        public override void OnDestroy()
        {
            m_ObjectCullingGroup.Dispose();
        }

        /// <summary>
        /// 父子实体更新类型
        /// </summary>
        public enum ChildUpdateType
        {
            /// <summary>
            /// 添加
            /// </summary>
            Add,
            /// <summary>
            /// 移除
            /// </summary>
            Remove,
            /// <summary>
            /// 更新属性
            /// </summary>
            Update,
        }
    }
}
