using LGameFramework.GameBase.Culling;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore.GameEntity
{
    public class EntityUtility : ModuleUtility<GMEntityManager>
    {

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
            return Instance.AllEntityObject[id];
        }

        /// <summary>
        /// 获取实体变换组件
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static Transform GetTransform(int id)
        {
            var go = GetGameObject(id);
            if (go == null) return null;
            return go.transform;
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
        /// 注册属性事件调用
        /// </summary>
        /// <param name="action"></param>
        public static void RegisterPropertyActionInvoke(UnityAction action)
        { 
            Instance.RegisterPropertyActionInvoke(action);  
        }

        /// <summary>
        /// 附加子实体
        /// </summary>
        /// <param name="parentID">父实体ID</param>
        /// <param name="childID">子实体ID</param>
        public static void AttachChild(int parentID, int childID)
        {
            Instance.AttachChild(parentID, childID);
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

    }
}
