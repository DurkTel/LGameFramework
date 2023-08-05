using GameBase.FSM;
using LGameFramework.GameBase;
using UnityEngine;

public class ProcedureLaunch : FSM_Status<ProcedureLaunchProcess>
{
    private GameLaunchSetting m_Setting;

    public override void OnAction()
    {
        switch (m_Setting.assetLoadMode)
        {
            case GameLaunchSetting.AssetLoadMode.Editor:
                subMachine.ChangeState(ProcedureLaunchProcess.GameEntry);
                break;
            case GameLaunchSetting.AssetLoadMode.AssetBundle:
                subMachine.ChangeState(ProcedureLaunchProcess.CheckVersion);
                break;
            default:
                break;
        }
    }

    public override void OnEnter()
    {
        m_Setting = GameLaunchSetting.Get();

        Application.targetFrameRate = m_Setting.frameRate;
        Time.timeScale = m_Setting.gameSpeed;
        Application.runInBackground = m_Setting.runInBackground;
        Screen.sleepTimeout = m_Setting.neverSleep ? SleepTimeout.NeverSleep : SleepTimeout.SystemSetting;
    }

    public override void OnExit()
    {
        
    }
}
