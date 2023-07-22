using GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// 游戏入口
    /// </summary>
    public class GameEntry : MonoBehaviour
    {
        private static Transform m_GameRoot;

        private static readonly LinkedList<FrameworkModule> s_AllFrameworkModule = new LinkedList<FrameworkModule>();

        private void Awake()
        {
            GameEntry.GetModule<GUI.GUIModule>().OpenView<GUI.TestView>();
         
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
        /// 获取框架模块（相当于全局模块单例，获取后最好进行缓存）
        /// </summary>
        /// <typeparam name="T">模块类型</typeparam>
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
        /// 创建模块（没有对应模块实例时，去惰性生成一个）
        /// </summary>
        /// <typeparam name="T">模块类型</typeparam>
        /// <returns></returns>
        private static T CreateModule<T>() where T : FrameworkModule, new()
        { 
            T module = new T();
            module.gameObject = new GameObject(typeof(T).Name);
            module.transform = module.gameObject.transform;
            module.OnInit();
            DontDestroyOnLoad(module.gameObject);
            module.transform.SetParentZero(m_GameRoot);

            LinkedListNode<FrameworkModule> current = s_AllFrameworkModule.First;

            //根据优先级选择插入的位置
            while (current != null)
            {
                if (module.priority > current.Value.priority)
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
            Debug.Log("游戏入口实例化完成，进入游戏");
        }
    }
}
