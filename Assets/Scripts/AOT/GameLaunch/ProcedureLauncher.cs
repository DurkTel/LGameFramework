using GameBase.FSM;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameBase;

/// <summary>
/// ���̼�����
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
        Debug.Log("������������" + name);
        base.ChangeState(name);
    }
}

/// <summary>
/// ������������
/// </summary>
public enum ProcedureLaunchProcess
{
    /// <summary>
    /// ��ʼ����
    /// </summary>
    Launch,
    /// <summary>
    /// ���汾�ļ�
    /// </summary>
    CheckVersion,
    /// <summary>
    /// ��鱾�ر����ļ�
    /// </summary>
    CheckLocalFile,
    /// <summary>
    /// ���°汾
    /// </summary>
    UpdateVersion,
    /// <summary>
    /// ������Ϸ�����
    /// </summary>
    GameEntry,
    /// <summary>
    /// �����쳣
    /// </summary>
    ProcedureError,
}
