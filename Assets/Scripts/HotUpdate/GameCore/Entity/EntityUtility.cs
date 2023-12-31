using LGameFramework.GameBase;
using LGameFramework.GameBase.Culling;
using LGameFramework.GameBase.ZoneArea;
using System;
using System.Collections.Generic;
using UnityEngine;
using static LGameFramework.GameCore.GameEntity.GMEntityManager;

namespace LGameFramework.GameCore.GameEntity
{
    public class EntityUtility : ModuleUtility<GMEntityManager>
    {
        /// <summary>
        /// ��ȡ�������ʵ��id
        /// </summary>
        /// <returns></returns>
        public static int GetMainPlayer()
        {
            return Instance.MainPlayerID;
        }

        /// <summary>
        /// ʵ�����
        /// </summary>
        /// <param name="etype"></param>
        /// <returns></returns>
        public static int EnterEntity()
        {
            return Instance.EnterEntity();
        }

        /// <summary>
        /// ʵ�����
        /// </summary>
        /// <param name="archetype">ģ��</param>
        /// <returns></returns>
        public static int EnterEntity(IArchetype archetype)
        {
            return Instance.EnterEntity(archetype);
        }

        /// <summary>
        /// ʵ���뿪
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static bool LeaveEntity(int id)
        {
            return Instance.LeaveEntity(id);
        }

        /// <summary>
        /// ��ȡʵ������
        /// </summary>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static GameObject GetGameObject(int id)
        {
            return Instance.GetGameObject(id);
        }

        /// <summary>
        /// ��ȡʵ��任���
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static Transform GetTransform(int id)
        {
            return Instance.GetTransform(id);
        }

        /// <summary>
        /// ��ȡʵ���ǩ
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static EntityTags GetEntityTag(int id)
        {
            return Instance.GetEntityTag(id);
        }

        /// <summary>
        /// ���ʵ�����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        public static T AddComponent<T>(int entity) where T : class, IComponent, new()
        {
            return Instance.AddComponent<T>(entity);
        }

        /// <summary>
        /// ��ȡʵ�����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static T GetComponent<T>(int entity) where T : class, IComponent, new()
        {
            return Instance.GetComponent<T>(entity);
        }

        /// <summary>
        /// �Ƴ�ʵ�����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static bool RemoveComponent<T>(int entity) where T : class, IComponent, new()
        {
            return Instance.RemoveComponent<T>(entity);
        }

        /// <summary>
        /// ��ʵ�巢���¼�
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="event"></param>
        public static void DispatchComponentEvent(int entity, ComponentEvent @event, CommonEventArg arg)
        {
            //Instance.DispatchComponentEvent(entity, @event, arg);
        }

        /// <summary>
        /// ������ʵ�巢���¼�
        /// </summary>
        /// <param name="entityIds"></param>
        /// <param name="event"></param>
        /// <param name="arg"></param>
        public static void DispatchComponentEvent(int[] entityIds, ComponentEvent @event, CommonEventArg arg)
        {
            foreach (int id in entityIds)
                DispatchComponentEvent(id, @event, arg);
        }

        /// <summary>
        /// ��������
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <param name="value">����ֵ</param>
        public static IDataModel RegisterDataModel<T>(int id) where T : class, IDataModel, new()
        {
            return Instance.RegisterDataModel<T>(id);
        }

        /// <summary>
        /// ��ȡ����
        /// </summary>
        /// <typeparam name="T">��������</typeparam>
        /// <returns>����ֵ</returns>
        public static T GetDataModel<T>(int id) where T : class, IDataModel, new()
        {
            return Instance.GetDataModel<T>(id);
        }

        /// <summary>
        /// ��ȡ��������
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <typeparam name="V"></typeparam>
        /// <param name="id"></param>
        /// <returns></returns>
        public static V GetDataModelProperty<T, V>(int id, string property) where T : class, IDataModel, new()
        { 
            T model = GetDataModel<T>(id);
            if (model == null)
                return default(V);

            return (model.GetProperty(property) as IGetBindableProperty<V>).Get();
        }

        /// <summary>
        /// ���ʵ�����ݽڵ�
        /// </summary>
        /// <param name="id"></param>
        /// <param name="fullPath"></param>
        public static void ClearEntityDataNode(int id, string fullPath)
        { 
            //Instance.ClearEntityDataModel(id, fullPath);
        }

        /// <summary>
        /// ����ʵ��״̬
        /// </summary>
        /// <param name="id"></param>
        /// <param name="state"></param>
        public static void UpdateEntityState(int id, EntityState state)
        {
            Instance.UpdateEntityState(id, state);
        }

        /// <summary>
        /// ��ȡʵ��״̬
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static EntityState GetEntityState(int id)
        {
            return Instance.EntityStates.GetValueOrDefault(id, EntityState.Normal);
        }

        /// <summary>
        /// ������ʵ��
        /// </summary>
        /// <param name="parentID">��ʵ��ID</param>
        /// <param name="childID">��ʵ��ID</param>
        public static void AttachChild(int parentID, int childID, string attachBone = "")
        {
            Instance.AttachChild(parentID, childID, attachBone);
        }

        /// <summary>
        /// �����Ƿ��ܻ�ȡ��ʵ��Id
        /// </summary>
        /// <param name="id"></param>
        /// <param name="parentId"></param>
        /// <returns></returns>
        public static bool TryGetParentId(int id, ref int parentId)
        { 
            //parentId = GetEntityData<int>(id, EntityAttribute.c_ParentId);
            //if (parentId == default)
            //    return false;

            return true;
        }

        /// <summary>
        /// ��ȡ��ʵ��Id
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        //public static int GetParentId(int id)
        //{
        //    return GetEntityData<int>(id, EntityAttribute.c_ParentId);
        //}

        /// <summary>
        /// �����Ƿ��ܻ�ȡ��ʵ��Id
        /// </summary>
        /// <param name="id"></param>
        /// <param name="parentId"></param>
        /// <returns></returns>
        public static bool TryGetGetChilds(int id, out List<int> parentId)
        {
            if (Instance.ChildEntitys.TryGetValue(id, out var children))
            {
                parentId = children;
                return true;
            }

            parentId = null;
            return false;
        }

        /// <summary>
        /// ��ȡ��ʵ��id
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static List<int> GetChilds(int id)
        {
            return Instance.ChildEntitys.GetValueOrDefault(id);
        }

        /// <summary>
        /// �����ʵ��
        /// </summary>
        /// <param name="parentID">��ʵ��ID</param>
        /// <param name="childID">��ʵ��ID</param>
        /// <returns></returns>
        public static void RelieveChild(int parentID, int childID)
        {
            Instance.RelieveChild(parentID, childID);
        }

        /// <summary>
        /// ��ȡ�������
        /// </summary>
        /// <typeparam name="T">�������</typeparam>
        /// <returns></returns>
        public static ComponentGroup GetComponentGroup<T>()
        {
            return GetComponentGroup(typeof(T));
        }

        /// <summary>
        /// ��ȡ�������
        /// </summary>
        /// <param name="type">�������</param>
        /// <returns></returns>
        public static ComponentGroup GetComponentGroup(Type type)
        { 
            return Instance.GetComponentGroup(type);
        }

        /// <summary>
        /// ��ȡ������
        /// </summary>
        /// <returns></returns>
        public static ObjectCullingGroup GetCullingGroup()
        {
            return Instance.ObjectCullingGroup;
        }


    }
}
