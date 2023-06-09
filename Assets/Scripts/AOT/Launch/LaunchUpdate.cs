﻿using LGameFramework.GameBase;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Net.Configuration;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

public class LaunchUpdate : MonoBehaviour
{
    public enum HotUpdateStep
    {
        GetLocalVersion,
        GetNetVersion,
        GetLocalFile,
        GetNetFile,
        CheckDifferences,
        CollectDownloadFile,
        DownloadFile,
    }

    private string m_LocalVersion, m_NetVersion;

    private List<string> m_DownloadList = new List<string>();

    private bool m_UpdateCShare;

    private Dictionary<string, string> m_LocalFiles = new Dictionary<string, string>();

    private Dictionary<string, AssetFile> m_NetFiles = new Dictionary<string, AssetFile>();

    public Action UpdateComplete;

    void Start()
    {
        StartCoroutine(HotUpdateSetp(HotUpdateStep.GetLocalVersion));
    }

    /// <summary>
    /// 开始热更新步骤
    /// </summary>
    /// <returns></returns>
    private IEnumerator HotUpdateSetp(HotUpdateStep updateStep)
    {
        switch (updateStep)
        {
            case HotUpdateStep.GetLocalVersion:
                yield return GetLocalVersion();
                break;
            case HotUpdateStep.GetNetVersion:
                yield return GetNetVersion();
                break;
            case HotUpdateStep.GetLocalFile:
                yield return GetLocalFile();
                break;
            case HotUpdateStep.GetNetFile:
                yield return GetNetFile();
                break;
            case HotUpdateStep.CheckDifferences:
                yield return CheckDifferences();
                break;
            case HotUpdateStep.CollectDownloadFile:
                yield return CollectDownloadFile();
                break;
            default:
                break;
        }

    }


    /// <summary>
    /// 获取本地版本号
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetLocalVersion()
    {
        string filePath = LaunchPath.localDataPath + "version.txt";
        if (File.Exists(filePath))
        {
            string str = File.ReadAllText(filePath);
            string[] data = str.Split('|');
            m_LocalVersion = data[1];
            //print("本地版本号:" + m_localVersion);
        }
        else
        {
            //第一次装包 将首包的数据复制到可读可写的文件夹
            Directory.CreateDirectory(LaunchPath.localDataPath);
            print("首次安装");
            //string[] files = Directory.GetFiles(Application.streamingAssetsPath);
            //if (files.Length > 0)
            //{
            //    for (int i = 0; i < files.Length; i++)
            //    {
            //        if (Path.GetExtension(files[i]) != ".meta")
            //        {
            //            string newPath = Path.Combine(AssetDefine.localDataPath, Path.GetFileName(files[i]));
            //            File.Copy(files[i], newPath);
            //        }
            //    }
            //}

        }

        yield return HotUpdateSetp(HotUpdateStep.GetNetVersion);
    }

    /// <summary>
    /// 获取服务器版本号
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetNetVersion()
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(LaunchPath.s_NetServerPath + "version.txt"))
        {

            yield return webRequest.SendWebRequest();
            string str = webRequest.downloadHandler.text;
            if (string.IsNullOrEmpty(str))
            { 
                Debug.LogError("连接服务器版本文件失败：" + LaunchPath.s_NetServerPath + "version.txt");
                yield break;
            }
            string[] data = str.Split('|');
            m_NetVersion = data[1];

            yield return HotUpdateSetp(HotUpdateStep.GetLocalFile);
        }
    }

    /// <summary>
    /// 获取本地文件列表
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetLocalFile()
    {
        string[] paths = Directory.GetFiles(LaunchPath.localDataPath, "*", SearchOption.AllDirectories);
        foreach (string path in paths)
        {
            if (Path.GetExtension(path) == ".txt" /*|| Path.GetDirectoryName(path).Contains("002")*/)
                continue;

            m_LocalFiles.Add(path.Substring(LaunchPath.localDataPath.Length).Replace("\\", "/"), GetMD5(path));
        }

        yield return HotUpdateSetp(HotUpdateStep.GetNetFile);
    }

    /// <summary>
    /// 获取服务器文件列表
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetNetFile()
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(Path.Combine(LaunchPath.s_NetServerPath, "file.txt")))
        {
            yield return webRequest.SendWebRequest();
            string str = webRequest.downloadHandler.text;
            List<AssetFile> assetFiles = LJsonUtility.FromJsonToList<AssetFile>(str);
            foreach (AssetFile assetFile in assetFiles) 
            {
                m_NetFiles.Add(assetFile.path, assetFile);
            }

        }
        yield return HotUpdateSetp(HotUpdateStep.CheckDifferences);

    }

    /// <summary>
    /// 检查更新
    /// </summary>
    /// <returns></returns>
    private IEnumerator CheckDifferences()
    {
        bool needUpdate = m_LocalVersion != m_NetVersion;
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
            yield return HotUpdateSetp(HotUpdateStep.CollectDownloadFile);
        else
        { 
            yield return null;
            UpdateCompleted();
        }

    }

    /// <summary>
    /// 收集下载清单
    /// </summary>
    /// <returns></returns>
    private IEnumerator CollectDownloadFile()
    {

        string localMD5;
        AssetFile assetFile;

        foreach (var file in m_NetFiles)
        {
            assetFile = file.Value;
            //如果是扩展资源 跳过下载
            if ((assetFile.flag & AssetFile.AssetFileFlag.ExtendDLC) == AssetFile.AssetFileFlag.ExtendDLC)
                continue;
            //本地没有该文件或md5不同
            if (m_LocalFiles == null || !m_LocalFiles.TryGetValue(file.Key, out localMD5) || localMD5 != assetFile.md5)
            {
                if (file.Key.Contains("001"))
                    m_UpdateCShare = true;

                m_DownloadList.Add(file.Key);
            }
        }

        if (m_LocalFiles == null)
        {
            m_UpdateCShare = true;
        }

        if (m_DownloadList.Count > 0)
        {
            m_DownloadList.Add("version.txt");
        }

        yield return DownloadFile();

        UpdateCompleted();
    }


    private IEnumerator DownloadFile()
    {
        float timeS = Time.realtimeSinceStartup;
        foreach (var assetName in m_DownloadList)
        {
            string url = Path.Combine(LaunchPath.s_NetServerPath, assetName.Replace("\\", "/"));
            string localPath = Path.Combine(LaunchPath.localDataPath, assetName).Replace("\\", "/");
            AssetFileDownloadQueue.Enqueue(url, localPath);
        }

        yield return new WaitUntil(() => { return AssetFileDownloadQueue.instance.downloadingCurrent.Count == 0; });

        float timeE = Time.realtimeSinceStartup;
        print("下载时长:" + (timeE - timeS));
        m_DownloadList.Clear();
    }

    private void UpdateCompleted()
    {
        print("更新完成");
        if (m_UpdateCShare)
        {
            string path = Path.Combine(LaunchPath.localDataPath, "001/001.asset");
            if (File.Exists(path))
            {
                try
                {
                    AssetBundle ab = AssetBundle.LoadFromFile(path);
                    TextAsset[] texts = ab.LoadAllAssets<TextAsset>();
                    string dllPath = LaunchPath.s_HotUpdateDll;

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
                    UnityEngine.Debug.LogError("更新DLL失败!!!" + e);
                }
            }
        }
        

        UpdateComplete?.Invoke();

    }


    public string GetMD5(string file)
    {
        try
        {
            FileStream fs = new FileStream(file, FileMode.Open);
            System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
            byte[] retVal = md5.ComputeHash(fs);
            fs.Close();

            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < retVal.Length; i++)
            {
                sb.Append(retVal[i].ToString("x2"));
            }

            return sb.ToString();
        }
        catch (System.Exception ex)
        {
            throw new System.Exception("md5file() fail, error:" + ex.Message);
        }
    }
}
