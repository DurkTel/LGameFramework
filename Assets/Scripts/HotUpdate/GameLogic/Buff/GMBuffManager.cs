using LGameFramework.GameBase;
using LGameFramework.GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public partial class GMBuffManager : LogicModule
    {
        public override int Priority => 10;

        private GameUid m_BuffUid;

        private Dictionary<int, IGameBuff> m_AllBuffs;
        public Dictionary<int, IGameBuff> AllBuffs { get { return m_AllBuffs; } }

        private List<IGameBuff> m_WillAddBuffs;
        public List<IGameBuff> WillAddBuffs { get { return m_WillAddBuffs; } }

        private List<IGameBuff> m_WillRemoveBuffs;
        public List<IGameBuff> WillRemoveBuffs { get { return m_WillRemoveBuffs; } }

        public override void OnInit()
        {
            m_BuffUid = new GameUid();
            m_AllBuffs = new Dictionary<int, IGameBuff>();
            m_WillAddBuffs = new List<IGameBuff>();
            m_WillRemoveBuffs = new List<IGameBuff>();
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_AllBuffs.Count > 0)
            {
                foreach (var buff in m_AllBuffs.Values)
                {
                    if (buff.Remainder < 0)
                    {
                        m_WillRemoveBuffs.Add(buff);
                        continue;
                    }

                    buff.OnUpdate();
                }
            }

            if (m_WillAddBuffs.Count > 0)
            {
                foreach (var buff in m_WillAddBuffs)
                {
                    m_AllBuffs.Add(buff.Id, buff);
                    buff.OnActive();
                }

                m_WillAddBuffs.Clear();
            } 

            if (m_WillRemoveBuffs.Count > 0)
            {
                foreach (var buff in m_WillRemoveBuffs)
                {
                    m_AllBuffs.Remove(buff.Id);
                    buff.OnDelete();
                }

                m_WillRemoveBuffs.Clear();
            }
        }

        internal int AddBuff<T>(BuffData buffData) where T : class, IGameBuff, new()
        {
            T buff = Pool.Get<T>();
            buffData.id = m_BuffUid.Uid;
            buff.OnInit(buffData);

            m_WillAddBuffs.Add(buff);
            return buff.Id;
        }

        internal bool RemoveBuff(int id)
        {
            IGameBuff buff;
            if (!m_AllBuffs.TryGetValue(id, out buff))
                buff = m_WillAddBuffs.Find((p) => { return p.Id == id; });

            if (buff == null)
                return false;

            m_WillRemoveBuffs.Add(buff);

            return true;
        }

        internal void GetBuffsByEntity(int entity, ref List<IGameBuff> buffs)
        {
            buffs.Clear();
            foreach (var buff in m_AllBuffs.Values)
            {
                if (buff.Owner == entity)
                    buffs.Add(buff);
            }
        }
    }
}
