using System;
using System.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameBase.FSM
{
    public class FSM_Status<TStateId>
    {
        /// <summary>
        /// 状态名称
        /// </summary>
        public TStateId name;
        /// <summary>
        /// 状态机
        /// </summary>
        public IFSM_Machine<TStateId> subMachine;
        /// <summary>
        /// 该状态是否激活
        /// </summary>
        public bool activated;
        /// <summary>
        /// 数据黑板
        /// </summary>
        public FSM_DataBase dataBase;
        /// <summary>
        /// 过渡线
        /// </summary>
        public List<FSM_Transition<TStateId>> transitions;
        /// <summary>
        /// 每帧刷新的事件
        /// </summary>
        private readonly Action<FSM_Status<TStateId>> m_OnAction;
        /// <summary>
        /// 进入该状态的事件
        /// </summary>
        private readonly Action<FSM_Status<TStateId>> m_OnEnter;
        /// <summary>
        /// 退出该状态的事件
        /// </summary>
        private readonly Action<FSM_Status<TStateId>> m_OnExit;

        public FSM_Status(Action<FSM_Status<TStateId>> onEnter = null, Action<FSM_Status<TStateId>> onExit = null, Action<FSM_Status<TStateId>> onAction = null)
        {
            this.m_OnEnter = onEnter;
            this.m_OnExit = onExit;
            this.m_OnAction = onAction;
        }
        /// <summary>
        /// 添加过渡
        /// </summary>
        public virtual void AddTransition(FSM_Transition<TStateId> transition)
        {
            transitions ??= new List<FSM_Transition<TStateId>>();
            transitions.Add(transition);
        }
        /// <summary>
        /// 初始化时
        /// </summary>
        public virtual void OnInit()
        {

        }
        /// <summary>
        /// 该状态的行为
        /// </summary>
        public virtual void OnAction()
        {
            m_OnAction?.Invoke(this);
        }
        /// <summary>
        /// 进入该状态
        /// </summary>
        public virtual void OnEnter()
        {
            m_OnEnter?.Invoke(this);
        }
        /// <summary>
        /// 退出该状态
        /// </summary>
        public virtual void OnExit()
        {
            m_OnExit?.Invoke(this);
        }
    }

    public class FSM_Status : FSM_Status<string>
    {
        public FSM_Status(Action<FSM_Status<string>> onEnter = null, Action<FSM_Status<string>> onExit = null, Action<FSM_Status<string>> onAction = null) : base(onEnter, onExit, onAction)
        {
        }
    }
}