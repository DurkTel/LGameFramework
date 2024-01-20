using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// ��Ϸ������
    /// </summary>
    public class GameFrameworkEntry : GameEntry<GameFrameworkEntry>
    {
        private static bool s_StartLogic;

        private Transform m_GameRoot;
        public override Transform GameRoot { get { return m_GameRoot; } }
        public static void Instantiate(bool logic = true)
        {
            s_StartLogic = logic;
            GameObject go = new GameObject("GameFrameworkEntry");
            var entry = go.AddComponent<GameFrameworkEntry>();
            entry.m_GameRoot = go.transform;
            DontDestroyOnLoad(go);
            GameLogger.INFO("��Ϸ���ʵ������ɣ�������Ϸ");
        }

        protected void Awake()
        {
            m_Entry = this;

#if UNITY_EDITOR
            gameObject.AddComponent<DebugHelper>();
#endif

            if (s_StartLogic)
            {
                GameObject gameLogic = AssetUtility.LoadAsset<GameObject>("GameMainLogic.prefab");
                DontDestroyOnLoad(gameLogic);

                AddAOTModuleHelper<GMPoolHelper>();
            }

            GameObjectPool.OnInit();
        }

        /// <summary>
        /// ���AOTģ������
        /// </summary>
        /// <typeparam name="T"></typeparam>
        public void AddAOTModuleHelper<T>() where T : Component
        {
#if UNITY_EDITOR
            GameObject game = new GameObject(typeof(T).Name);
            game.AddComponent<T>();
            DontDestroyOnLoad(game);
            game.transform.SetParentZero(m_GameRoot);
#endif
        }

        /// <summary>
        /// ��ȡ���ģ��
        /// </summary>
        /// <typeparam name="T">ģ������</typeparam>
        /// <returns></returns>
        public static T GetModule<T>() where T : FrameworkModule, new()
        {
            if (m_Entry.m_WaitToAdd.Count > 0)
            {
                foreach (var module in m_Entry.m_WaitToAdd)
                {
                    if (module.GetType() == typeof(T))
                        return (T)module;
                }
            }

            foreach (var module in m_Entry.m_AllModule)
            {
                if (module.GetType() == typeof(T))
                    return (T)module;
            }

            return CreateModule<T>();
        }
    }
}
