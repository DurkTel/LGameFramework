using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameBase.FSM
{
    public interface IFSM_Machine<TStateId>
    {
        /// <summary>
        /// 请求切换状态
        /// </summary>
        /// <param name="name">状态id</param>
        void ChangeState(TStateId name);
        /// <summary>
        /// 当前处于的状态
        /// </summary>
        FSM_Status<TStateId> ActiveState { get; set; }
        /// <summary>
        /// 上次处于的状态
        /// </summary>
        FSM_Status<TStateId> LastState { get; set; }
        /// <summary>
        /// 当前处于的状态的状态id
        /// </summary>
        TStateId ActiveStateName { get; }
    }
}