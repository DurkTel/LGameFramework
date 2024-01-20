using LGameFramework.GameBase.FSM;
using LGameFramework.GameBase;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ProcedureUpdateVersion : FSM_Status<ProcedureLaunchProcess>
{
    private bool m_IsNeedUpdate;

    private bool m_UpdateCShare;

    private List<string> m_DownloadList;

    private AssetFileDownloadQueue m_FileDownloadQueue;

    private GamePathSetting.FilePathStruct m_GamePath;

    public override void OnAction()
    {
        if (m_FileDownloadQueue != null)
            m_FileDownloadQueue.Update();

        if (!m_IsNeedUpdate || m_FileDownloadQueue.DownloadingCurrent.Count <= 0)
        {
            GameLogger.INFO("更新完成");
            if (m_UpdateCShare)
            {
                string path = Path.Combine(m_GamePath.downloadDataPath.AssetPath, "001/001.asset");
                if (File.Exists(path))
                {
                    try
                    {
                        AssetBundle ab = AssetBundle.LoadFromFile(path);
                        TextAsset[] texts = ab.LoadAllAssets<TextAsset>();
                        string dllPath = m_GamePath.hotUpdateDllPath.AssetPath;

                        foreach (var text in texts)
                        {
                            string savePath = Path.Combine(dllPath, string.Format("{0}.dll.bytes", text.name));
                            GameLogger.INFO("更新Dll:" + text.name);
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
        m_GamePath = GamePathSetting.Get().CurrentPlatform();

        m_DownloadList = new List<string>();
        BuildFiles netFiles;
        BuildFiles localFiles;
        try
        {
            netFiles = dataBase.GetData<BuildFiles>(ProcedureLauncher.procedureMarkHead + ProcedureCheckLocalFile.netFilesName);
            localFiles = dataBase.GetData<BuildFiles>(ProcedureLauncher.procedureMarkHead + ProcedureCheckLocalFile.localFilesName);
        }
        catch (System.Exception)
        {
            subMachine.ChangeState(ProcedureLaunchProcess.ProcedureError);
            throw;
        }

        AssetBundleInfo localFile;
        AssetBundleInfo netFile;

        foreach (var file in netFiles.bundleMap)
        {
            netFile = file.Value;
            //如果是扩展资源 跳过下载
            if (netFile.fileFlag == AssetBundleInfo.AssetFileFlag.ExtendDLC)
                continue;
            //本地没有该文件或md5不同
            if (localFiles == null || !localFiles.bundleMap.TryGetValue(file.Key, out localFile) || localFile.md5Code != netFile.md5Code)
            {
                if (file.Value.fileFlag.HasFlag(AssetBundleInfo.AssetFileFlag.Dll))
                    m_UpdateCShare = true;

                if (!m_DownloadList.Contains(file.Value.assetPath))
                    m_DownloadList.Add(file.Value.assetPath);
            }
        }

        if (localFiles == null)
            m_UpdateCShare = true;

        if (m_DownloadList.Count > 0)
        { 
            m_DownloadList.Add(m_GamePath.versionFileName);
            m_DownloadList.Add(m_GamePath.assetManifestFileName);
            m_DownloadList.Add(m_GamePath.buildingFileName);
            m_IsNeedUpdate = true;
            m_FileDownloadQueue = new AssetFileDownloadQueue();
        }


        foreach (var assetName in m_DownloadList)
        {
            string url = m_GamePath.serverDataPath.AssetPath + assetName.Replace("\\", "/");
            string localPath = Path.Combine(m_GamePath.downloadDataPath.AssetPath, assetName).Replace("\\", "/");
            m_FileDownloadQueue.Enqueue(url, localPath);
        }

    }

    public override void OnExit()
    {
        if (m_DownloadList != null)
            m_DownloadList.Clear();

        m_DownloadList = null;
        m_UpdateCShare = false;

        if (m_FileDownloadQueue != null)
        {
            m_FileDownloadQueue.Dispose();
            m_FileDownloadQueue = null;
        }
    }
}
