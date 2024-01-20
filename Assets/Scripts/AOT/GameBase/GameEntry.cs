using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    /// <summary>
    /// ��Ϸ�������
    /// </summary>
    public abstract class GameEntry<T> : MonoBehaviour where T : GameEntry<T>
    {
        public abstract Transform GameRoot { get; }

        protected static T m_Entry;

        protected readonly List<GameModule> m_AllModule = new List<GameModule>();

        protected readonly List<GameModule> m_WaitToAdd = new List<GameModule>();

        protected readonly static Comparison<GameModule> s_SortModuleFunction = SortModuleList;

        protected virtual void OnEnable()
        {
            foreach (GameModule module in m_AllModule)
            {
                module.OnEnable();
            }
        }

        protected virtual void OnDisable()
        {
            foreach (GameModule module in m_AllModule)
            {
                module.OnDisable();
            }
        }

        protected virtual void Update()
        {
            float deltaTime = Time.deltaTime;
            float unscaledTime = Time.unscaledDeltaTime;
            foreach (GameModule module in m_AllModule)
            {
                module.Update(deltaTime, unscaledTime);
            }
        }

        protected virtual void LateUpdate()
        {
            float deltaTime = Time.deltaTime;
            float unscaledTime = Time.unscaledDeltaTime;
            foreach (GameModule module in m_AllModule)
            {
                module.LateUpdate(deltaTime, unscaledTime);
            }

            if (m_WaitToAdd.Count > 0)
            {
                m_AllModule.AddRange(m_WaitToAdd);
                m_AllModule.Sort(s_SortModuleFunction);
                m_WaitToAdd.Clear();
            }
        }

        protected virtual void FixedUpdate()
        {
            float fixedDeltaTime = Time.fixedDeltaTime;
            float unscaledTime = Time.unscaledTime;
            foreach (GameModule module in m_AllModule)
            {
                module.FixedUpdate(fixedDeltaTime, unscaledTime);
            }
        }

        /// <summary>
        /// ����ģ�飨û�ж�Ӧģ��ʵ��ʱ��ȥ��������һ����
        /// </summary>
        /// <typeparam name="T">ģ������</typeparam>
        /// <returns></returns>
        public static T CreateModule<T>() where T : GameModule, new()
        {
            T module = new T();
            module.GameObject = new GameObject(typeof(T).Name);
            module.Transform = module.GameObject.transform;
            module.MonoBehaviour = m_Entry;
            module.OnInit();
            DontDestroyOnLoad(module.GameObject);
            module.Transform.SetParentZero(m_Entry.GameRoot);

#if UNITY_EDITOR
            //��ӹ���ģ��ı༭���ű� ���ڹ۲����ݵ�
            string moduleHelper = typeof(T).FullName + "Helper";
            Type type = Type.GetType(moduleHelper);
            if (type != null)
                (module.GameObject.AddComponent(type) as IModuleEditorHelper<T>).Attach(module);
#endif

            m_Entry.m_WaitToAdd.Add(module);

            return module;
        }

        public void OnDestroy()
        {
            foreach (GameModule module in m_AllModule)
            {
                module.OnDestroy();
            }
        }

        private static int SortModuleList(GameModule a, GameModule b)
        {
            return a.Priority - b.Priority;
        }
    }
}
