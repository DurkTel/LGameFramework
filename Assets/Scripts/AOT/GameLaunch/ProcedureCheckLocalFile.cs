using GameBase.FSM;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class ProcedureCheckLocalFile : FSM_Status<ProcedureLaunchProcess>
{
    public static string localFilesName = "LocalFiles";

    public static string netFilesName = "NetFiles";

    private Dictionary<string, string> m_LocalFiles;

    private Dictionary<string, AssetFile> m_NetFiles;

    private UnityWebRequest m_WebRequest;

    private UnityWebRequestAsyncOperation m_WebRequestAsync;

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
            List<AssetFile> assetFiles = LJsonUtility.FromJsonToList<AssetFile>(str);
            foreach (AssetFile assetFile in assetFiles)
            {
                m_NetFiles.Add(assetFile.path, assetFile);
            }
            dataBase.SetData(ProcedureLauncher.procedureMarkHead + netFilesName, m_NetFiles);

            string localVersion = dataBase.GetData<string>(ProcedureLauncher.procedureMarkHead + ProcedureCheckVersion.localVersionName);
            string netVersion = dataBase.GetData<string>(ProcedureLauncher.procedureMarkHead + ProcedureCheckVersion.netVersionName);

            bool needUpdate = localVersion != netVersion;
            //版本号相同 检查文件差异
            if (!needUpdate)
            {
                string localMD5;
                foreach (var file in m_NetFiles)
                {
                    //本地没有该文件或md5不同
                    if (m_LocalFiles == null || !m_LocalFiles.TryGetValue(file.Key, out localMD5) || localMD5 != file.Value.md5)
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
        m_LocalFiles ??= new Dictionary<string, string>();
        m_NetFiles ??= new Dictionary<string, AssetFile>();

        if (!Directory.Exists(ProcedureLaunchPath.localDataPath))
            Directory.CreateDirectory(ProcedureLaunchPath.localDataPath);

        string[] paths = Directory.GetFiles(ProcedureLaunchPath.localDataPath, "*", SearchOption.AllDirectories);
        foreach (string path in paths)
        {
            if (Path.GetExtension(path) == ".txt" /*|| Path.GetDirectoryName(path).Contains("002")*/)
                continue;

            m_LocalFiles.Add(path.Substring(ProcedureLaunchPath.localDataPath.Length).Replace("\\", "/"), Utility.GetMD5(path));
        }

        dataBase.SetData(ProcedureLauncher.procedureMarkHead + localFilesName, m_LocalFiles);

        m_WebRequest = UnityWebRequest.Get(Path.Combine(ProcedureLaunchPath.s_NetServerPath, "file.txt"));
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
