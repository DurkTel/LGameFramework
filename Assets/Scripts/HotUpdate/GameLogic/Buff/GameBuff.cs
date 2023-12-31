using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Buff
{
    public abstract class GameBuff : IGameBuff
    {
        public abstract object CObject { get; }
        public abstract GMBuffManager.BuffType Type { get; }
        public abstract GMBuffManager.BuffTag Tag { get; }

        private int m_Id;
        public int Id { get { return m_Id; } }

        private int m_Owner;
        public int Owner { get { return m_Owner; } }

        private int m_FormId;
        public int FormId { get { return m_FormId; } }

        private float m_Param;
        public float Param { get { return m_Param; } }

        private double m_StartTime;
        public double StartTime { get { return m_StartTime; } }

        private double m_Duration;
        public double Duration { get { return m_Duration; } }
        public double Remainder { get { return m_Duration - (Time.unscaledTime - m_StartTime); } }

        public virtual void OnInit(GMBuffManager.BuffData data)
        {
            m_Id = data.id; 
            m_Owner = data.owner; 
            m_FormId = data.formId;
            m_Duration = data.duration;
            m_Param = data.param;
            m_StartTime = Time.unscaledTime;
        }

        public virtual void OnActive()
        {
            
        }

        public virtual void OnDelete()
        {
            Pool.Release(CObject);
        }

        public virtual void OnUpdate()
        {
            
        }
    }

}
