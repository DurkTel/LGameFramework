using System;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    /// <summary>
    /// ��Ϸ���
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
        /// ���AOTģ������
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
        /// ��ȡ���ģ�飨�൱��ȫ��ģ�鵥������ȡ����ý��л��棩
        /// </summary>
        /// <typeparam name="T">ģ������</typeparam>
        /// <returns></returns>
        public static T GetModule<T>() where T : FrameworkModule, new()
        {
            if (s_AllFrameworkModuleDict.TryGetValue(typeof(T), out var module))
                return module as T;

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

#if UNITY_EDITOR
            //��ӹ���ģ��ı༭���ű� ���ڹ۲����ݵ�
            string moduleHelper = typeof(T).FullName + "Helper";
            Type type = Type.GetType(moduleHelper);
            if (type != null)
                (module.GameObject.AddComponent(type) as IFrameworkEditorHelper<T>).Attach(module);
#endif

            s_AllFrameworkModuleDict.Add(typeof(T), module);

            LinkedListNode<FrameworkModule> current = s_AllFrameworkModule.First;

            //�������ȼ�ѡ������λ��
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
