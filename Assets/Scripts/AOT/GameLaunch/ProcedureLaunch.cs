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
        //�༭��ģʽ

        //AssetBundleģʽ
    }

    public override void OnExit()
    {
        
    }
}
