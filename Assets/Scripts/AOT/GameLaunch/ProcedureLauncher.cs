using GameBase.FSM;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameBase;

/// <summary>
/// 流程加载器
/// </summary>
public class ProcedureLauncher : MonoBehaviour
{
    public static string procedureMarkHead = "Procedure_";

    public GameLaunchSetting launchSetting;

    private ProcedureFSM m_Procedure;

    private void Awake()
    {
        if (launchSetting == null)
            launchSetting = ScriptableObject.CreateInstance<GameLaunchSetting>();

        m_Procedure = new ProcedureFSM();
        m_Procedure.dataBase = gameObject.AddComponent<FSM_DataBase>();
        m_Procedure.AddStatus<ProcedureLaunch>(ProcedureLaunchProcess.Launch);
        m_Procedure.AddStatus<ProcedureCheckVersion>(ProcedureLaunchProcess.CheckVersion);
        m_Procedure.AddStatus<ProcedureCheckLocalFile>(ProcedureLaunchProcess.CheckLocalFile);
        m_Procedure.AddStatus<ProcedureUpdateVersion>(ProcedureLaunchProcess.UpdateVersion);
        m_Procedure.AddStatus<ProcedureGameEntry>(ProcedureLaunchProcess.GameEntry);
        
        m_Procedure.OnInit();
    }

    private void Update()
    {
        m_Procedure.OnAction();
    }

}

public class ProcedureFSM : FSM_StateMachine<ProcedureLaunchProcess>
{
    public override void ChangeState(ProcedureLaunchProcess name)
    {
        Debug.Log("程序启动流程" + name);
        base.ChangeState(name);
    }
}

/// <summary>
/// 程序运行流程
/// </summary>
public enum ProcedureLaunchProcess
{
    /// <summary>
    /// 开始运行
    /// </summary>
    Launch,
    /// <summary>
    /// 检查版本文件
    /// </summary>
    CheckVersion,
    /// <summary>
    /// 检查本地本地文件
    /// </summary>
    CheckLocalFile,
    /// <summary>
    /// 更新版本
    /// </summary>
    UpdateVersion,
    /// <summary>
    /// 进入游戏主入口
    /// </summary>
    GameEntry,
    /// <summary>
    /// 程序异常
    /// </summary>
    ProcedureError,
}
