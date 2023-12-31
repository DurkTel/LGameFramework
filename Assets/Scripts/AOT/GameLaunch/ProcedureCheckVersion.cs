using LGameFramework.GameBase.FSM;
using LGameFramework.GameBase;
using System.Collections;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class ProcedureCheckVersion : FSM_Status<ProcedureLaunchProcess>
{
    public const string localVersionName = "LocalVersion";

    public const string netVersionName = "NetVersion";

    private string m_LocalVersion, m_NetVersion;

    private UnityWebRequest m_WebRequest;

    private UnityWebRequestAsyncOperation m_WebRequestAsync;

    private GamePathSetting.FilePathStruct m_GamePath;

    public override void OnAction()
    {
        if (m_WebRequestAsync == null) return;


        if (m_WebRequestAsync.isDone)
        {
            if (m_WebRequestAsync.webRequest.result != UnityWebRequest.Result.Success)
            {
                GameLogger.FATAL_FORMAT("连接错误！资源地址：{0}", m_WebRequest.url);
                GameLogger.FATAL(m_WebRequestAsync.webRequest.error);
                subMachine.ChangeState(ProcedureLaunchProcess.ProcedureError);
                return;
            }

            string str = m_WebRequestAsync.webRequest.downloadHandler.text;
            string[] data = str.Split('|');
            m_NetVersion = data[1];
            dataBase.SetData(ProcedureLauncher.procedureMarkHead + netVersionName, m_NetVersion);

            subMachine.ChangeState(ProcedureLaunchProcess.CheckLocalFile);
        }
    }

    public override void OnEnter()
    {
        m_GamePath = GamePathSetting.Get().CurrentPlatform();
        m_LocalVersion = "";
        string filePath = m_GamePath.downloadDataPath.AssetPath + m_GamePath.versionFileName;
        if (File.Exists(filePath))
        {
            string str = File.ReadAllText(filePath);
            string[] data = str.Split('|');
            m_LocalVersion = data[1];
        }
        else
            GameLogger.INFO("首次安装");

        dataBase.SetData(ProcedureLauncher.procedureMarkHead + localVersionName, m_LocalVersion);

        m_WebRequest = UnityWebRequest.Get(m_GamePath.serverDataPath.AssetPath + m_GamePath.versionFileName);
        m_WebRequestAsync = m_WebRequest.SendWebRequest();

    }

    public override void OnExit()
    {
        if (m_WebRequest != null)
            m_WebRequest.Dispose();

        m_WebRequest = null;
        m_WebRequestAsync = null;
    }
}
