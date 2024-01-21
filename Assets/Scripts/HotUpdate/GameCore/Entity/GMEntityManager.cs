using LGameFramework.GameBase;
using LGameFramework.GameBase.Culling;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        internal const string ENTITY_POOL = "EntityPool";
        public override int Priority => 3;
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
        /// �ȴ�ִ�е��¼�
        /// </summary>
        private LinkedList<UnityAction> m_AllWaitAction;
        public LinkedList<UnityAction> AllWaitAction { get { return m_AllWaitAction; } }
        /// <summary>
        /// ��ʵ��
        /// </summary>
        private Dictionary<int, TreeNode<int>> m_ChildEntitys;
        public Dictionary<int, TreeNode<int>> ChildEntitys { get { return m_ChildEntitys; } }
        /// <summary>
        /// ʵ������
        /// </summary>
        private Dictionary<int, Dictionary<EEntityAttribute, IProperty>> m_EntityAttributes;


        #region ��������
        public override void OnInit()
        {
            m_AllComponentsGroup = new GameDictionary<Type, ComponentGroup>();
            m_ChildEntitys = new Dictionary<int, TreeNode<int>>();
            m_AllEntityObject = new Dictionary<int, GameObject>();
            m_EntityAttributes = new Dictionary<int, Dictionary<EEntityAttribute, IProperty>>();
            m_AllWaitAction = new LinkedList<UnityAction>();
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            foreach (var group in m_AllComponentsGroup.Values)
            {
                group.Update(deltaTime, unscaledTime);
            }

            if (m_AllWaitAction.Count > 0)
            {
                foreach (var action in m_AllWaitAction)
                    action.Invoke();

                m_AllWaitAction.Clear();
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

        #endregion

        #region ʵ�����

        /// <summary>
        /// ʵ�����
        /// </summary>
        /// <returns></returns>
        internal int EnterEntity(IArchetype archetype)
        {
            int entity = EnterEntity();
            archetype.OnInitData(entity);
            var coms = archetype.GetComponents();
            if (coms != null && coms.Length > 0)
            {
                foreach (var component in coms)
                    AddComponent(entity, component);
            }

            archetype.OnCustomOperation(entity);

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
            m_EntityAttributes.Add(entity, DictionaryPool<EEntityAttribute, IProperty>.Get());

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

            //�������� �������ݶ�������������н��� ֱ���Ƴ�
            if (m_EntityAttributes.ContainsKey(id))
                m_EntityAttributes.Remove(id);

            return false;
        }

        #endregion

    }
}
