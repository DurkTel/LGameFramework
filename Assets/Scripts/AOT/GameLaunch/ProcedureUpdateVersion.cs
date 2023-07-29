using GameBase.FSM;
using LGameFramework.GameBase;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ProcedureUpdateVersion : FSM_Status<ProcedureLaunchProcess>
{
    private bool m_IsNeedUpdate;

    private bool m_UpdateCShare;

    private List<string> m_DownloadList;

    private AssetFileDownloadQueue m_FileDownloadQueue;

    public override void OnAction()
    {
        if (m_FileDownloadQueue != null)
            m_FileDownloadQueue.Update();

        if (!m_IsNeedUpdate || m_FileDownloadQueue.DownloadingCurrent.Count <= 0)
        {
            Debug.Log("更新完成");
            if (m_UpdateCShare)
            {
                string path = Path.Combine(ProcedureLaunchPath.localDataPath, "001/001.asset");
                if (File.Exists(path))
                {
                    try
                    {
                        AssetBundle ab = AssetBundle.LoadFromFile(path);
                        TextAsset[] texts = ab.LoadAllAssets<TextAsset>();
                        string dllPath = ProcedureLaunchPath.s_HotUpdateDll;

                        foreach (var text in texts)
                        {
                            string savePath = Path.Combine(dllPath, string.Format("{0}.dll.bytes", text.name));
                            Debug.Log("更新Dll:" + text.name);
                            if (File.Exists(savePath))
                                File.Delete(savePath);
                            else
                            {
                                string parent = Path.GetDirectoryName(savePath);
                                if (!Directory.Exists(parent))
                                    Directory.CreateDirectory(parent);
                            }

                            File.WriteAllBytes(savePath, text.bytes);

                            Resources.UnloadAsset(text);
                        }

                        ab.Unload(true);
                    }
                    catch (System.Exception e)
                    {
                        Debug.LogError("更新DLL失败!!!" + e);
                    }
                }
            }

            subMachine.ChangeState(ProcedureLaunchProcess.GameEntry);
        }
    }

    public override void OnEnter()
    {
        m_DownloadList = new List<string>();
        Dictionary<string, AssetFile> netFiles;
        Dictionary<string, string> localFiles;
        try
        {
            netFiles = dataBase.GetData<Dictionary<string, AssetFile>>(ProcedureLauncher.procedureMarkHead + ProcedureCheckLocalFile.netFilesName);
            localFiles = dataBase.GetData<Dictionary<string, string>>(ProcedureLauncher.procedureMarkHead + ProcedureCheckLocalFile.localFilesName);
        }
        catch (System.Exception)
        {
            subMachine.ChangeState(ProcedureLaunchProcess.ProcedureError);
            throw;
        }

        string localMD5;
        AssetFile assetFile;

        foreach (var file in netFiles)
        {
            assetFile = file.Value;
            //如果是扩展资源 跳过下载
            if ((assetFile.flag & AssetFile.AssetFileFlag.ExtendDLC) == AssetFile.AssetFileFlag.ExtendDLC)
                continue;
            //本地没有该文件或md5不同
            if (localFiles == null || !localFiles.TryGetValue(file.Key, out localMD5) || localMD5 != assetFile.md5)
            {
                if (file.Key.Contains("001"))
                    m_UpdateCShare = true;

                m_DownloadList.Add(file.Key);
            }
        }

        if (localFiles == null)
            m_UpdateCShare = true;

        if (m_DownloadList.Count > 0)
        { 
            m_DownloadList.Add("version.txt");
            m_IsNeedUpdate = true;
            m_FileDownloadQueue = new AssetFileDownloadQueue();
        }

        foreach (var assetName in m_DownloadList)
        {
            string url = Path.Combine(ProcedureLaunchPath.s_NetServerPath, assetName.Replace("\\", "/"));
            string localPath = Path.Combine(ProcedureLaunchPath.localDataPath, assetName).Replace("\\", "/");
            m_FileDownloadQueue.Enqueue(url, localPath);
        }

    }

    public override void OnExit()
    {
        if (m_DownloadList != null)
            m_DownloadList.Clear();

        m_DownloadList = null;
        m_UpdateCShare = false;

        m_FileDownloadQueue.Dispose();
        m_FileDownloadQueue = null;
    }
}
