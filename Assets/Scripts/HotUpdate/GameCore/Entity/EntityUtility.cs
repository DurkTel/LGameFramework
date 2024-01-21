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
            return Instance.AllEntityObject[id];
        }

        /// <summary>
        /// ��ȡʵ��任���
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
        /// ���ʵ�����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="entity"></param>
        public static T AddComponent<T>(int entity) where T : class, IComponent, new()
        {
            return Instance.AddComponent<T>(entity);
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
        /// ע�������¼�����
        /// </summary>
        /// <param name="action"></param>
        public static void RegisterPropertyActionInvoke(UnityAction action)
        { 
            Instance.RegisterPropertyActionInvoke(action);  
        }

        /// <summary>
        /// ������ʵ��
        /// </summary>
        /// <param name="parentID">��ʵ��ID</param>
        /// <param name="childID">��ʵ��ID</param>
        public static void AttachChild(int parentID, int childID)
        {
            Instance.AttachChild(parentID, childID);
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

    }
}
