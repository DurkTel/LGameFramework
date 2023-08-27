using LGameFramework.GameBase.FSM;
using LGameFramework.GameBase;
using System.Collections.Generic;
using System.IO;
using UnityEngine.Networking;

public class ProcedureCheckLocalFile : FSM_Status<ProcedureLaunchProcess>
{
    public const string localFilesName = "LocalFiles";

    public const string netFilesName = "NetFiles";

    private Dictionary<string, AssetBundleInfo> m_LocalFiles;

    private Dictionary<string, AssetBundleInfo> m_NetFiles;

    private UnityWebRequest m_WebRequest;

    private UnityWebRequestAsyncOperation m_WebRequestAsync;

    private GamePathSetting.FilePathStruct m_GamePath;

    public override void OnAction()
    {
        if (m_WebRequestAsync != null && m_WebRequestAsync.isDone)
        {
            if (m_WebRequestAsync.webRequest.result != UnityWebRequest.Result.Success)
            {
                subMachine.ChangeState(ProcedureLaunchProcess.ProcedureError);
                return;
            }

            string str = m_WebRequest.downloadHandler.text;
            m_NetFiles = JsonHelper.FromJsonToDictionary<string, AssetBundleInfo>(str, true);

            dataBase.SetData(ProcedureLauncher.procedureMarkHead + netFilesName, m_NetFiles);

            string localVersion = dataBase.GetData<string>(ProcedureLauncher.procedureMarkHead + ProcedureCheckVersion.localVersionName);
            string netVersion = dataBase.GetData<string>(ProcedureLauncher.procedureMarkHead + ProcedureCheckVersion.netVersionName);

            bool needUpdate = localVersion != netVersion;
            //版本号相同 检查文件差异
            if (!needUpdate)
            {
                AssetBundleInfo localFile;
                foreach (var nextFile in m_NetFiles)
                {
                    //本地没有该文件或md5不同
                    if (m_LocalFiles == null || !m_LocalFiles.TryGetValue(nextFile.Key, out localFile)
                        || localFile.md5Code != nextFile.Value.md5Code)
                    {
                        needUpdate = true;
                        break;
                    }
                }
            }

            if (needUpdate)
                subMachine.ChangeState(ProcedureLaunchProcess.UpdateVersion);
            else
                subMachine.ChangeState(ProcedureLaunchProcess.GameEntry);
        }
    }

    public override void OnEnter()
    {
        m_GamePath = GamePathSetting.Get().CurrentPlatform();
        string buildPath = Path.Combine(m_GamePath.downloadDataPath.AssetPath, m_GamePath.buildingFileName);
        if (!File.Exists(buildPath))
            buildPath = Path.Combine(m_GamePath.buildingPath.AssetPath, m_GamePath.buildingFileName);

        if (File.Exists(buildPath))
        {
            string allData = File.ReadAllText(buildPath);
            if (!string.IsNullOrEmpty(allData))
                m_LocalFiles = JsonHelper.FromJsonToDictionary<string, AssetBundleInfo>(allData, true);
        }

        dataBase.SetData(ProcedureLauncher.procedureMarkHead + localFilesName, m_LocalFiles);

        m_WebRequest = UnityWebRequest.Get(Path.Combine(m_GamePath.serverDataPath.AssetPath, m_GamePath.buildingFileName));
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
