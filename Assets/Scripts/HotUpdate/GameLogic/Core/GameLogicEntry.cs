using LGameFramework.GameBase;
using LGameFramework.GameCore;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ��Ϸ�߼����
    /// </summary>
    public class GameLogicEntry : GameEntry<GameLogicEntry>
    {
        private Transform m_GameRoot;
        public override Transform GameRoot { get { return m_GameRoot; } }

        protected virtual void Awake()
        {
            m_Entry = this;
        }
        public static void Instantiate()
        {
            GameObject go = new GameObject("GameLogicEntry");
            var entry = go.AddComponent<GameLogicEntry>();
            entry.m_GameRoot = go.transform;
            DontDestroyOnLoad(go);
            GameLogger.INFO("��Ϸ�߼�ʵ�������");
        }

        /// <summary>
        /// ��ȡ���ģ��
        /// </summary>
        /// <typeparam name="T">ģ������</typeparam>
        /// <returns></returns>
        public static T GetModule<T>() where T : LogicModule, new()
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
