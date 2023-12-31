using LGameFramework.GameBase;
using LGameFramework.GameCore;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// 游戏逻辑入口
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
            GameLogger.INFO("游戏逻辑实例化完成");
        }

        /// <summary>
        /// 获取框架模块
        /// </summary>
        /// <typeparam name="T">模块类型</typeparam>
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
