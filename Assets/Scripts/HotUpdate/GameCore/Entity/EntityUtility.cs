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
        /// 获取主机玩家实体id
        /// </summary>
        /// <returns></returns>
        public static int GetMainPlayer()
        {
            return Instance.MainPlayerID;
        }

        /// <summary>
        /// 实体进入
        /// </summary>
        /// <param name="etype"></param>
        /// <returns></returns>
        public static int EnterEntity()
        {
            return Instance.EnterEntity();
        }

        /// <summary>
        /// 实体进入
        /// </summary>
        /// <param name="archetype">模板</param>
        /// <returns></returns>
        public static int EnterEntity(IArchetype archetype)
        {
            return Instance.EnterEntity(archetype);
        }

        /// <summary>
        /// 实体离开
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static bool LeaveEntity(int id)
        {
            return Instance.LeaveEntity(id);
        }

        /// <summary>
        /// 获取实体容器
        /// </summary>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static GameObject GetGameObject(int id)
        {
            return Instance.GetGameObject(id);
        }

        /// <summary>
        /// 获取实体变换组件
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static Transform GetTransform(int id)
        {
            return Instance.GetTransform(id);
        }

        /// <summary>
        /// 获取实体标签
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static EntityTags GetEntityTag(int id)
        {
            return Instance.GetEntityTag(id);
        }

        /// <summary>
        /// 添加实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        public static T AddComponent<T>(int entity) where T : class, IComponent, new()
        {
            return Instance.AddComponent<T>(entity);
        }

        /// <summary>
        /// 获取实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static T GetComponent<T>(int entity) where T : class, IComponent, new()
        {
            return Instance.GetComponent<T>(entity);
        }

        /// <summary>
        /// 移除实体组件
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        /// <returns></returns>
        public static bool RemoveComponent<T>(int entity) where T : class, IComponent, new()
        {
            return Instance.RemoveComponent<T>(entity);
        }

        /// <summary>
        /// 对实体发送事件
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="event"></param>
        public static void DispatchComponentEvent(int entity, ComponentEvent @event, CommonEventArg arg)
        {
            //Instance.DispatchComponentEvent(entity, @event, arg);
        }

        /// <summary>
        /// 对批量实体发送事件
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
        /// 设置数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <param name="value">数据值</param>
        public static IDataModel RegisterDataModel<T>(int id) where T : class, IDataModel, new()
        {
            return Instance.RegisterDataModel<T>(id);
        }

        /// <summary>
        /// 获取数据
        /// </summary>
        /// <typeparam name="T">数据类型</typeparam>
        /// <returns>数据值</returns>
        public static T GetDataModel<T>(int id) where T : class, IDataModel, new()
        {
            return Instance.GetDataModel<T>(id);
        }

        /// <summary>
        /// 获取数据属性
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
        /// 清除实体数据节点
        /// </summary>
        /// <param name="id"></param>
        /// <param name="fullPath"></param>
        public static void ClearEntityDataNode(int id, string fullPath)
        { 
            //Instance.ClearEntityDataModel(id, fullPath);
        }

        /// <summary>
        /// 更新实体状态
        /// </summary>
        /// <param name="id"></param>
        /// <param name="state"></param>
        public static void UpdateEntityState(int id, EntityState state)
        {
            Instance.UpdateEntityState(id, state);
        }

        /// <summary>
        /// 获取实体状态
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static EntityState GetEntityState(int id)
        {
            return Instance.EntityStates.GetValueOrDefault(id, EntityState.Normal);
        }

        /// <summary>
        /// 附加子实体
        /// </summary>
        /// <param name="parentID">父实体ID</param>
        /// <param name="childID">子实体ID</param>
        public static void AttachChild(int parentID, int childID, string attachBone = "")
        {
            Instance.AttachChild(parentID, childID, attachBone);
        }

        /// <summary>
        /// 尝试是否能获取父实体Id
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
        /// 获取父实体Id
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        //public static int GetParentId(int id)
        //{
        //    return GetEntityData<int>(id, EntityAttribute.c_ParentId);
        //}

        /// <summary>
        /// 尝试是否能获取子实体Id
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
        /// 获取子实体id
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static List<int> GetChilds(int id)
        {
            return Instance.ChildEntitys.GetValueOrDefault(id);
        }

        /// <summary>
        /// 解除子实体
        /// </summary>
        /// <param name="parentID">父实体ID</param>
        /// <param name="childID">子实体ID</param>
        /// <returns></returns>
        public static void RelieveChild(int parentID, int childID)
        {
            Instance.RelieveChild(parentID, childID);
        }

        /// <summary>
        /// 获取该组件组
        /// </summary>
        /// <typeparam name="T">组件类型</typeparam>
        /// <returns></returns>
        public static ComponentGroup GetComponentGroup<T>()
        {
            return GetComponentGroup(typeof(T));
        }

        /// <summary>
        /// 获取该组件组
        /// </summary>
        /// <param name="type">组件类型</param>
        /// <returns></returns>
        public static ComponentGroup GetComponentGroup(Type type)
        { 
            return Instance.GetComponentGroup(type);
        }

        /// <summary>
        /// 获取裁切组
        /// </summary>
        /// <returns></returns>
        public static ObjectCullingGroup GetCullingGroup()
        {
            return Instance.ObjectCullingGroup;
        }


    }
}
