using GameBase.FSM;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcedureLaunch : FSM_Status<ProcedureLaunchProcess>
{
    public override void OnAction()
    {
        subMachine.ChangeState(ProcedureLaunchProcess.CheckVersion);
    }

    public override void OnEnter()
    {
        //编辑器模式

        //AssetBundle模式
    }

    public override void OnExit()
    {
        
    }
}
