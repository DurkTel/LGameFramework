using LGameFramework.GameBase.FSM;
using UnityEngine;
using LGameFramework.GameBase;
using UnityEngine.Networking;

/// <summary>
/// ���̼�����
/// </summary>
public class ProcedureLauncher : MonoBehaviour
{
    /// <summary>
    /// ��¼��ʶ
    /// </summary>
    public const string procedureMarkHead = "Procedure_";

    /// <summary>
    /// ����״̬��
    /// </summary>
    private ProcedureFSM m_Procedure;

    /// <summary>
    /// ��������
    /// </summary>
    [SerializeField]
    private GameLaunchSetting m_GameLaunchSetting;

    /// <summary>
    /// ·������
    /// </summary>
    [SerializeField]
    private GamePathSetting m_GamePathSetting;


    private void Awake()
    {
        //����й��ؾ��ù��ص�ʵ�� û�о���Ĭ�ϵ�
        GameLaunchSetting.Init(m_GameLaunchSetting);
        GamePathSetting.Init(m_GamePathSetting);

        m_Procedure = new ProcedureFSM();
        m_Procedure.dataBase = gameObject.AddComponent<FSM_DataBase>();
        m_Procedure.AddStatus<ProcedureLaunch>(ProcedureLaunchProcess.Launch);
        m_Procedure.AddStatus<ProcedureCheckVersion>(ProcedureLaunchProcess.CheckVersion);
        m_Procedure.AddStatus<ProcedureCheckLocalFile>(ProcedureLaunchProcess.CheckLocalFile);
        m_Procedure.AddStatus<ProcedureUpdateVersion>(ProcedureLaunchProcess.UpdateVersion);
        m_Procedure.AddStatus<ProcedureGameEntry>(ProcedureLaunchProcess.GameEntry);
        
        m_Procedure.OnInit();

        //����ҳ��
        DefaultLoadingGUI.Instantiate();
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
        GameLogger.INFO("������������" + name);
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
