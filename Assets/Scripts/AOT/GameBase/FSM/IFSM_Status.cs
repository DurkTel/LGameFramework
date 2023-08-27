using System.Collections;
using System.Collections.Generic;

namespace LGameFramework.GameBase.FSM
{
    public interface IFSM_Status<TStateID>
    {
        TStateID Name { get; set; }
        void OnAction();
        void OnEnter();
        void OnExit();
        void Tick();
    }
}