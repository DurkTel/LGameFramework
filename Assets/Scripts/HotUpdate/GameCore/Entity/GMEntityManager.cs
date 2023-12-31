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
        /// �������id
        /// </summary>
        private int m_MainPlayerID = -1;
        public int MainPlayerID { get { return m_MainPlayerID; } }
        /// <summary>
        /// ����ʵ�����
        /// </summary>
        private GameDictionary<Type, ComponentGroup> m_AllComponentsGroup;
        public GameDictionary<Type, ComponentGroup> AllComponentsGroup { get { return m_AllComponentsGroup; } }
        /// <summary>
        /// ʵ����������
        /// </summary>
        private Dictionary<int, GameObject> m_AllEntityObject;
        public Dictionary<int, GameObject> AllEntityObject { get { return m_AllEntityObject; } }
        /// <summary>
        /// ʵ�����ڱ�ǩ
        /// </summary>
        private Dictionary<int, EntityTags> m_AllEntityTag;
        public Dictionary<int, EntityTags> AllEntityTag { get { return m_AllEntityTag; } }
        /// <summary>
        /// ʵ��״̬
        /// </summary>
        private Dictionary<int, EntityState> m_EntityStates;
        public Dictionary<int, EntityState> EntityStates { get { return m_EntityStates; } }
        /// <summary>
        /// ��ʵ��
        /// </summary>
        private Dictionary<int, List<int>> m_ChildEntitys;
        public Dictionary<int, List<int>> ChildEntitys { get { return m_ChildEntitys; } }
        /// <summary>
        /// ʵ������ģ��
        /// </summary>
        private Dictionary<int, Dictionary<Type, IDataModel>> m_EntityDataModel;
        public Dictionary<int, Dictionary<Type, IDataModel>> EntityDataModel { get {  return m_EntityDataModel; } }
        /// <summary>
        /// ���������
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
        /// ��ȡ�������
        /// </summary>
        /// <param name="type">�������</param>
        /// <returns></returns>
        internal ComponentGroup GetComponentGroup(Type type)
        {
            if (!m_AllComponentsGroup.TryGetValue(type, out var group))
                return null;

            return group;
        }

        /// <summary>
        /// ��ȡ�������
        /// </summary>
        /// <typeparam name="T">�������</typeparam>
        /// <returns></returns>
        internal ComponentGroup GetComponentGroup<T>()
        {
            return GetComponentGroup(typeof(T));
        }

        /// <summary>
        /// ������������
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
        /// ���Ի�ȡʵ�����
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
        /// ��ȡʵ�����
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
        /// ���ʵ�����
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
        /// ���ʵ�����
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
        /// �Ƴ�ʵ�����
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
        /// �Ƴ�ʵ�����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        internal bool RemoveComponent<T>(int entity) where T : class, IComponent, new()
        {
            return RemoveComponent(entity, typeof(T));
        }

        /// <summary>
        /// �Ƴ�����ʵ�����
        /// </summary>
        /// <param name="id"></param>
        internal void RemoveAllComponent(int id)
        {
            //�������
            foreach (var group in m_AllComponentsGroup.Values)
            {
                group.RemoveComponent(id);
            }
        }

        /// <summary>
        /// ��ȡʵ������
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal GameObject GetGameObject(int id)
        {
            m_AllEntityObject.TryGetValue(id, out var go);
            return go;
        }

        /// <summary>
        /// ��ȡʵ��任���
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
        /// ��ȡʵ���ǩ
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal EntityTags GetEntityTag(int id)
        {
            m_AllEntityTag.TryGetValue(id, out var tag);
            return tag;
        }

        /// <summary>
        /// ����ʵ������ģ��
        /// </summary>
        /// <param name="value">����ֵ</param>
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
        /// ��ȡ����
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <returns>����ֵ</returns>
        internal T GetDataModel<T>(int id) where T : class, IDataModel, new()
        {
            if (!m_EntityDataModel.TryGetValue(id, out var dataModels))
                return default(T);

            return dataModels.GetValueOrDefault(typeof(T)) as T;
        }

        /// <summary>
        /// ���ʵ�����ݽڵ�
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
        /// �������ʵ�����ݽڵ�
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
        /// ����ʵ��״̬
        /// </summary>
        /// <param name="id"></param>
        /// <param name="state"></param>
        internal void UpdateEntityState(int id, EntityState state)
        {
            if (m_EntityStates.ContainsKey(id))
                m_EntityStates[id] = state;
        }

        /// <summary>
        /// ʵ�����
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
        /// ʵ�����
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
        /// ʵ���뿪
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        internal bool LeaveEntity(int id)
        {
            //�������
            RemoveAllComponent(id);

            //��������
            if (m_AllEntityObject.TryGetValue(id, out var go))
                GameObjectPool.Release(ENTITY_POOL, go);

            //���ձ�ǩ
            if (m_AllEntityTag.ContainsKey(id))
                m_AllEntityTag.Remove(id);

            //����״̬
            if (m_EntityStates.ContainsKey(id))
                m_EntityStates.Remove(id);

            return false;
        }

        /// <summary>
        /// ������ʵ��
        /// </summary>
        /// <param name="parentID">��ʵ��ID</param>
        /// <param name="childID">��ʵ��ID</param>
        internal void AttachChild(int parentID, int childID, string attachBone = "")
        {
            if (!m_ChildEntitys.TryGetValue(parentID, out var childs))
            {
                childs = ListPool<int>.Get();
                m_ChildEntitys.Add(parentID, childs);
            }

            if (childs.Contains(childID))
                GameLogger.WARNING("���ڳ����ظ������ͬ����ʵ�壡");

            childs.Add(childID);
            //��¼��ʵ��id
            //var parent = AddComponent<ParentComponent>(childID);
            //parent.ParentId = parentID;
            //parent.BindingBone = attachBone;
        }

        /// <summary>
        /// �����ʵ��
        /// </summary>
        /// <param name="parentID">��ʵ��ID</param>
        /// <param name="childID">��ʵ��ID</param>
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
            //�����ʵ��id
            //RemoveComponent<ParentComponent>(childID);

            return true;
        }

        public override void OnDestroy()
        {
            m_ObjectCullingGroup.Dispose();
        }

        /// <summary>
        /// ����ʵ���������
        /// </summary>
        public enum ChildUpdateType
        {
            /// <summary>
            /// ���
            /// </summary>
            Add,
            /// <summary>
            /// �Ƴ�
            /// </summary>
            Remove,
            /// <summary>
            /// ��������
            /// </summary>
            Update,
        }
    }
}
