using GameBase.FSM;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using UnityEngine;
using UnityEngine.Networking;

public class ProcedureCheckVersion : FSM_Status<ProcedureLaunchProcess>
{
    public static string localVersionName = "LocalVersion";

    public static string netVersionName = "NetVersion";

    private string m_LocalVersion, m_NetVersion;

    private UnityWebRequest m_WebRequest;

    private UnityWebRequestAsyncOperation m_WebRequestAsync;

    public override void OnAction()
    {
        if (m_WebRequestAsync == null) return;


        if (m_WebRequestAsync.isDone)
        {
            if (m_WebRequestAsync.webRequest.result != UnityWebRequest.Result.Success)
            {
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
        m_LocalVersion = "";
        string filePath = ProcedureLaunchPath.localDataPath + "version.txt";
        if (File.Exists(filePath))
        {
            string str = File.ReadAllText(filePath);
            string[] data = str.Split('|');
            m_LocalVersion = data[1];
        }
        else
            Debug.Log("首次安装");

        dataBase.SetData(ProcedureLauncher.procedureMarkHead + localVersionName, m_LocalVersion);

        m_WebRequest = UnityWebRequest.Get(ProcedureLaunchPath.s_NetServerPath + "version.txt");
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
