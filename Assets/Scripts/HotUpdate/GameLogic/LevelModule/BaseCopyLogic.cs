using LGameFramework.GameBase;
using LGameFramework.GameCore;
using UnityEngine;

namespace LGameFramework.GameLogic.Level
{
    public abstract class BaseCopyLogic : ICopyLogic
    {
        /// <summary>
        /// 开始倒计时
        /// </summary>
        private float m_StartCountdown;
        public float StartCountdown { get { return m_StartCountdown; } }
        /// <summary>
        /// 结束倒计时
        /// </summary>
        private float m_EndCountdown;
        public float EndCountdown { get { return m_EndCountdown; } }

        public virtual void OnInit()
        {
            m_StartCountdown = 3f;
            m_EndCountdown = -1f;
        }

        public virtual void OnCopyIn()
        {
            GameLogger.DEBUG_FORMAT("进入关卡：", Color.green, this.GetType().Name);
            TimerUtility.AddTimer(OnCopyLogicBegin, 0, StartCountdown);
        }

        public virtual void OnCopyOut()
        {
            GameLogger.DEBUG_FORMAT("离开关卡：", Color.green, this.GetType().Name);
        }

        public virtual void OnCopyLogicBegin()
        {
            
        }

        public virtual void OnBeginCountdown()
        { 
            
        }
    }
}
