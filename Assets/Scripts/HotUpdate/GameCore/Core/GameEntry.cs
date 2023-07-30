using GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// ��Ϸ���
    /// </summary>
    public class GameEntry : MonoBehaviour
    {
        private static Transform m_GameRoot;

        private static readonly LinkedList<FrameworkModule> s_AllFrameworkModule = new LinkedList<FrameworkModule>();

        private void OnEnable()
        {
            foreach (FrameworkModule module in s_AllFrameworkModule)
            {
                module.OnEnable();
            }
        }

        private void OnDisable()
        {
            foreach (FrameworkModule module in s_AllFrameworkModule)
            {
                module.OnDisable();
            }
        }

        private void Awake()
        {
            OrbitCamera.Initialize();
            GameObject gameLogic = GetModule<Asset.FMAssetManager>().LoadAsset<GameObject>("GameLogic.prefab");
            DontDestroyOnLoad(gameLogic);
        }

        private void Update()
        {
            float deltaTime = Time.deltaTime;
            float unscaledTime = Time.unscaledDeltaTime;
            foreach (FrameworkModule module in s_AllFrameworkModule)
            {
                module.Update(deltaTime, unscaledTime);
            }
        }

        private void LateUpdate()
        {
            float deltaTime = Time.deltaTime;
            float unscaledTime = Time.unscaledTime;
            foreach (FrameworkModule module in s_AllFrameworkModule)
            {
                module.LateUpdate(deltaTime, unscaledTime);
            }
        }

        /// <summary>
        /// ��ȡ���ģ�飨�൱��ȫ��ģ�鵥������ȡ����ý��л��棩
        /// </summary>
        /// <typeparam name="T">ģ������</typeparam>
        /// <returns></returns>
        public static T GetModule<T>() where T : FrameworkModule, new()
        {
            Type interfaceType = typeof(T);

            foreach (FrameworkModule module in s_AllFrameworkModule)
            {
                if (module.GetType() == interfaceType)
                {
                    return module as T;
                }
            }

            return CreateModule<T>();
        }

        /// <summary>
        /// ����ģ�飨û�ж�Ӧģ��ʵ��ʱ��ȥ��������һ����
        /// </summary>
        /// <typeparam name="T">ģ������</typeparam>
        /// <returns></returns>
        private static T CreateModule<T>() where T : FrameworkModule, new()
        { 
            T module = new T();
            module.GameObject = new GameObject(typeof(T).Name);
            module.Transform = module.GameObject.transform;
            module.OnInit();
            DontDestroyOnLoad(module.GameObject);
            module.Transform.SetParentZero(m_GameRoot);

            LinkedListNode<FrameworkModule> current = s_AllFrameworkModule.First;

            //�������ȼ�ѡ������λ��
            while (current != null)
            {
                if (module.Priority > current.Value.Priority)
                {
                    break;
                }

                current = current.Next;
            }

            if (current != null)
                s_AllFrameworkModule.AddBefore(current, module);
            else
                s_AllFrameworkModule.AddLast(module);

            return module;
        }

        public static void Instantiate()
        {
            GameObject go = new GameObject("GameEntry");
            m_GameRoot = go.transform;
            go.AddComponent<GameEntry>();
            DontDestroyOnLoad(go);
            Debug.Log("��Ϸ���ʵ������ɣ�������Ϸ");
        }

        public void OnDestroy()
        {
            foreach (FrameworkModule module in s_AllFrameworkModule)
            {
                module.OnDestroy();
            }
        }
    }
}
