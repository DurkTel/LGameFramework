using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Net;
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
        GetLocalManifest,
        GetNetManifest,
        CheckDifferences,
        CollectDownloadFile,
    }

    private string m_LocalVersion, m_NetVersion;

    private List<string> m_DownloadList = new List<string>();

    private bool m_UpdateCShare;

    private Dictionary<string, string> m_LocalFiles = new Dictionary<string, string>();

    private Dictionary<string, string> m_NetFiles = new Dictionary<string, string>();

    private Dictionary<string, string> m_LocalManifest = new Dictionary<string, string>();

    private AssetManifest_AssetBundle m_NetManifest;

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
            case HotUpdateStep.GetLocalManifest:
                yield return GetLocalManifest();
                break;
            case HotUpdateStep.GetNetManifest:
                yield return GetNetManifest();
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
        string filePath = AssetDefine.localDataPath + "version.txt";
        TestScript.Instance.text.text = "开始获取本地版本号";
        if (File.Exists(filePath))
        {
            TestScript.Instance.text.text = "获取本地版本号:成功";
            string str = File.ReadAllText(filePath);
            string[] data = str.Split('|');
            m_LocalVersion = data[1];
            //print("本地版本号:" + m_localVersion);
        }
        else
        {
            //第一次装包 将首包的数据复制到可读可写的文件夹
            Directory.CreateDirectory(AssetDefine.localDataPath);
            print("首次安装");
            TestScript.Instance.text.text = "首次装包";
            //string[] files = Directory.GetFiles(Application.streamingAssetsPath);
            //for (int i = 0; i < files.Length; i++)
            //{
            //    if (Path.GetExtension(files[i]) != ".meta")
            //    {
            //        string newPath = Path.Combine(AssetDefine.localDataPath, Path.GetFileName(files[i]));
            //        File.Copy(files[i], newPath);
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
        TestScript.Instance.text.text = "获取服务器版本号";
        using (UnityWebRequest webRequest = UnityWebRequest.Get(AssetDefine.s_NetServerPath + "version.txt"))
        {

            yield return webRequest.SendWebRequest();
            string str = webRequest.downloadHandler.text;
            string[] data = str.Split('|');
            m_NetVersion = data[1];
            TestScript.Instance.text.text = "获取服务器版本号:成功";

            yield return HotUpdateSetp(HotUpdateStep.GetLocalFile);
        }
    }

    /// <summary>
    /// 获取本地文件列表
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetLocalFile()
    {
        TestScript.Instance.text.text = "获取本地文件列表";

        string[] paths = Directory.GetFiles(AssetDefine.localDataPath, "*", SearchOption.AllDirectories);
        foreach (string path in paths)
        {
            if (Path.GetExtension(path) == ".txt" || Path.GetDirectoryName(path).Contains("002"))
                continue;

            m_LocalFiles.Add(path.Substring(AssetDefine.localDataPath.Length), AssetUtility.GetMD5(path));
        }

        yield return HotUpdateSetp(HotUpdateStep.GetNetFile);
    }

    /// <summary>
    /// 获取服务器文件列表
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetNetFile()
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(Path.Combine(AssetDefine.s_NetServerPath, "file.txt")))
        {
            TestScript.Instance.text.text = "获取服务器文件列表";

            yield return webRequest.SendWebRequest();
            string str = webRequest.downloadHandler.text;
            string[] lines = str.Split('\n');
            foreach (string line in lines)
            {
                if (!string.IsNullOrEmpty(line))
                {
                    string[] data = line.Split('|');
                    m_NetFiles.Add(data[0], data[1]);
                }
            }
            TestScript.Instance.text.text = "获取服务器文件列表:成功";

        }
        yield return HotUpdateSetp(HotUpdateStep.CheckDifferences);

    }

    /// <summary>
    /// 获取本地资源清单
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetLocalManifest()
    {
        TestScript.Instance.text.text = "获取本地资源清单";

        string assetRoot = Path.Combine(AssetDefine.localDataPath, "002");
        if (Directory.Exists(assetRoot))
        {
            string[] paths = Directory.GetFiles(assetRoot, "*", SearchOption.AllDirectories);
            foreach (string path in paths)
            {
                string newPath = path.Substring(AssetDefine.localDataPath.Length).Replace("\\", "/");
                m_LocalManifest.Add(newPath, AssetUtility.GetMD5(path));
            }
        }


        yield return HotUpdateSetp(HotUpdateStep.GetNetManifest);
    }

    /// <summary>
    /// 获取服务器资源清单
    /// </summary>
    /// <returns></returns>
    private IEnumerator GetNetManifest()
    {
        TestScript.Instance.text.text = "获取服务器资源清单";

        string url = Path.Combine(AssetDefine.s_NetServerPath, "lgassetmanifest.asset");
        using (UnityWebRequest req = UnityWebRequestAssetBundle.GetAssetBundle(url, 0))
        {

            yield return req.SendWebRequest();

            AssetBundle bundle = DownloadHandlerAssetBundle.GetContent(req);
            AssetBundleRequest re = bundle.LoadAssetAsync<AssetManifest_AssetBundle>("lgassetmanifest");
            yield return re;

            bundle.Unload(false);
            TestScript.Instance.text.text = "获取服务器资源清单:成功";
            m_NetManifest = re.asset as AssetManifest_AssetBundle;
        }
    }

    /// <summary>
    /// 检查更新
    /// </summary>
    /// <returns></returns>
    private IEnumerator CheckDifferences()
    {
        //版本号相同 检查文件差异
        bool needUpdate = m_LocalVersion == m_NetVersion;
        if (!needUpdate)
        {
            string localMD5;

            foreach (var file in m_NetFiles)
            {
                //本地没有该文件或md5不同
                if (m_LocalFiles == null || !m_LocalFiles.TryGetValue(file.Key, out localMD5) || localMD5 != file.Value)
                {
                    needUpdate = true;
                    break;
                }
            }
        }

        TestScript.Instance.text.text = "检查更新";

        if (needUpdate)
            yield return HotUpdateSetp(HotUpdateStep.CollectDownloadFile);
        else
            yield return null;
    }

    /// <summary>
    /// 收集下载清单
    /// </summary>
    /// <returns></returns>
    private IEnumerator CollectDownloadFile()
    {
        TestScript.Instance.text.text = "收集下载清单";

        string localMD5;

        foreach (var file in m_NetFiles)
        {
            //本地没有该文件或md5不同
            if (m_LocalFiles == null || !m_LocalFiles.TryGetValue(file.Key, out localMD5) || localMD5 != file.Value)
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

        //资源需要更新
        yield return HotUpdateSetp(HotUpdateStep.GetLocalManifest);

        string md5Code;
        foreach (var asset in m_NetManifest.assetMap)
        {
            if (m_DownloadList.Contains(asset.Value.bundleName))
                continue;

            if (m_LocalManifest == null || !m_LocalManifest.TryGetValue(asset.Value.bundleName, out md5Code) || md5Code != asset.Value.md5Code)
            {
                m_DownloadList.Add(asset.Value.bundleName);
            }
        }

        if (m_DownloadList.Count > 0)
        {
            m_DownloadList.Add("version.txt");
        }

        yield return null;

        DownloadFile();
    }


    private void DownloadFile()
    {
        if (m_DownloadList.Count == 0)
        {
            UpdateCompleted();
            return;
        }

        using (WebClient client = new WebClient())
        {
            string assetName = m_DownloadList[0];
            string url = Path.Combine(AssetDefine.s_NetServerPath, assetName.Replace("\\", "/"));
            string localPath = Path.Combine(AssetDefine.localDataPath, assetName).Replace("\\", "/");

            if (!Directory.Exists(Path.GetDirectoryName(localPath)))
                Directory.CreateDirectory(Path.GetDirectoryName(localPath));

            if (File.Exists(localPath))
                File.Delete(localPath);

            client.DownloadFileAsync(new System.Uri(url), localPath);
            client.DownloadProgressChanged += (p, a) => 
            {
                TestScript.Instance.text.text = localPath + "下载进度:" + a.ProgressPercentage;

                print(localPath + "下载进度:" + a.ProgressPercentage); 
            };
            client.DownloadFileCompleted += (p, a) => {
                m_DownloadList.RemoveAt(0);
                DownloadFile();
            };
        }
    }

    private void UpdateCompleted()
    {
        TestScript.Instance.text.text = "更新完成";
        if (!m_UpdateCShare) return;
        print("更新完成");
#if ENABLE_MONO && !UNITY_EDITOR && (UNITY_STANDALONE_WIN || UNITY_ANDROID)
        string path = Path.Combine(AssetDefine.localDataPath, "001/001.asset");
        if (File.Exists(path))
        {
            try
            { 
                AssetBundle ab = AssetBundle.LoadFromFile(path);
                TextAsset[] texts = ab.LoadAllAssets<TextAsset>();
                string dllPath = AssetDefine.DataDataPath;

#if UNITY_STANDALONE_WIN
                dllPath = Path.Combine(dllPath, "Managed");
#endif

                foreach (var text in texts)
                {
                    string savePath = Path.Combine(dllPath, string.Format("{0}.dll", text.name));

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
                MobileUtility.RestartApplication();

            }
            catch (System.Exception e)
            {
            TestScript.Instance.text.text = "更新DLL失败!!!" + e;
                UnityEngine.Debug.LogError("更新DLL失败!!!" + e);
            }
        }
#endif

    }

}
