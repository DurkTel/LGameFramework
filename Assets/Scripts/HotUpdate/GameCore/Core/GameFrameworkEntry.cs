using System;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// 游戏入口
    /// </summary>
    public class GameFrameworkEntry : MonoBehaviour
    {
        private static Transform m_GameRoot;

        private static readonly LinkedList<FrameworkModule> s_AllFrameworkModule = new LinkedList<FrameworkModule>();

        private static readonly Dictionary<Type, FrameworkModule> s_AllFrameworkModuleDict = new Dictionary<Type, FrameworkModule>();

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
            GameObject gameLogic = GetModule<Asset.GMAssetManager>().LoadAsset<GameObject>("GameMainLogic.prefab");
            DontDestroyOnLoad(gameLogic);

            AddAOTModuleHelper<GMPoolHelper>();
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

        private void FixedUpdate()
        {
            float fixedDeltaTime = Time.fixedDeltaTime;
            float unscaledTime = Time.unscaledTime;
            foreach (FrameworkModule module in s_AllFrameworkModule)
            {
                module.FixedUpdate(fixedDeltaTime, unscaledTime);
            }
        }

        /// <summary>
        /// 添加AOT模块助手
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddAOTModuleHelper<T>() where T :Component
        {
#if UNITY_EDITOR
            GameObject game = new GameObject(typeof(T).Name);
            game.AddComponent<T>();
            DontDestroyOnLoad(game);
            game.transform.SetParentZero(m_GameRoot);
#endif
        }

        /// <summary>
        /// 获取框架模块（相当于全局模块单例，获取后最好进行缓存）
        /// </summary>
        /// <typeparam name="T">模块类型</typeparam>
        /// <returns></returns>
        public static T GetModule<T>() where T : FrameworkModule, new()
        {
            if (s_AllFrameworkModuleDict.TryGetValue(typeof(T), out var module))
                return module as T;

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
            module.GameObject = new GameObject(typeof(T).Name);
            module.Transform = module.GameObject.transform;
            module.OnInit();
            DontDestroyOnLoad(module.GameObject);
            module.Transform.SetParentZero(m_GameRoot);

#if UNITY_EDITOR
            //添加管理模块的编辑器脚本 便于观察数据等
            string moduleHelper = typeof(T).FullName + "Helper";
            Type type = Type.GetType(moduleHelper);
            if (type != null)
                (module.GameObject.AddComponent(type) as IFrameworkEditorHelper<T>).Attach(module);
#endif

            s_AllFrameworkModuleDict.Add(typeof(T), module);

            LinkedListNode<FrameworkModule> current = s_AllFrameworkModule.First;

            //根据优先级选择插入的位置
            while (current != null)
            {
                if (module.Priority > current.Value.Priority)
                    break;

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
            go.AddComponent<GameFrameworkEntry>();
            DontDestroyOnLoad(go);
            Debug.Log("游戏入口实例化完成，进入游戏");
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
