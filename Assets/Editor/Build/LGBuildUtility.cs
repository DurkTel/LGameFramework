using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;

public class LGBuildUtility 
{
    /// <summary>
    /// 项目路径转全路径
    /// </summary>
    /// <param name="projectPath"></param>
    /// <returns></returns>
    public static string GetFullPath(string projectPath)
    {
        return Path.Combine(Application.dataPath, projectPath.Substring(7)).Replace("\\", "/");
    }

    /// <summary>
    /// 全路径转项目路径
    /// </summary>
    /// <param name="fullPath"></param>
    /// <returns></returns>
    public static string GetProjectPath(string fullPath)
    {
        return fullPath.Substring(Application.dataPath.Length - 6).Replace("\\", "/");
    }

    /// <summary>
    /// 获取MD5码
    /// </summary>
    /// <param name="file"></param>
    /// <returns></returns>
    /// <exception cref="Exception"></exception>
    public static string GetMD5(string file)
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
        catch (Exception ex)
        {
            throw new Exception("md5file() fail, error:" + ex.Message);
        }
    }

    /// <summary>
    /// 文件过滤
    /// </summary>
    /// <param name="projectPath"></param>
    /// <returns></returns>
    public static bool Filterate(string projectPath)
    {
        return Path.GetExtension(projectPath) == ".meta" || Path.GetExtension(projectPath) == ".cs";
    }

    /// <summary>
    /// 收集单个文件
    /// </summary>
    /// <param name="outList"></param>
    /// <param name="projectPath"></param>
    public static void CollectionFile(List<AssetBundleBuild> outList, string projectPath)
    {
        string fullPath = GetFullPath(projectPath);
        if (string.IsNullOrEmpty(fullPath) || !File.Exists(fullPath))
            return;

        if (Filterate(projectPath))
            return;

        string assetName = projectPath;
        string addressableName = Path.GetFileName(projectPath);
        string bundleName = assetName;

        outList.Add(CreateAssetBundleBuild(bundleName, new string[] { addressableName }, new string[] { assetName }));
    }

    /// <summary>
    /// 收集整个文件夹
    /// </summary>
    /// <param name="outList"></param>
    /// <param name="projectPath"></param>
    /// <param name="single">是否每个文件单独打包</param>
    public static void CollectionFolder(List<AssetBundleBuild> outList, string projectPath, bool single = false)
    { 
        string fullPath = GetFullPath(projectPath);
        if (string.IsNullOrEmpty(fullPath) || !Directory.Exists(fullPath))
            return;

        string[] allFiles = Directory.GetFiles(fullPath, "*", SearchOption.AllDirectories);

        if (allFiles.Length < 1)
            return;

        if (single)
        {
            foreach (var file in allFiles)
            {
                if (Filterate(file))
                    continue;

                string assetName = GetProjectPath(file);
                string addressableName = Path.GetFileName(file);
                string bundleName = assetName;

                outList.Add(CreateAssetBundleBuild(bundleName, new string[] { addressableName }, new string[] { assetName }));
            }
        }
        else
        {
            string[] assetNames = new string[0];
            string[] addressableNames = new string[0];
            string bundleNames = projectPath;

            foreach (var file in allFiles)
            {
                if (Filterate(file))
                    continue;

                string assetName = GetProjectPath(file);
                string addressableName = Path.GetFileName(file);
                string bundleName = assetName;

                ArrayUtility.Add<string>(ref assetNames, GetProjectPath(file));
                ArrayUtility.Add<string>(ref addressableNames, Path.GetFileName(file));
            }
            outList.Add(CreateAssetBundleBuild(bundleNames, addressableNames, assetNames));
        }
    }

    /// <summary>
    /// 创建AB
    /// </summary>
    /// <param name="assetBundleName"></param>
    /// <param name="addressableNames"></param>
    /// <param name="assetNames"></param>
    /// <returns></returns>
    public static AssetBundleBuild CreateAssetBundleBuild(string assetBundleName, string[] addressableNames, string[] assetNames)
    {
        assetBundleName = assetBundleName.Substring(7).ToLower();

        string extname = Path.GetExtension(assetBundleName);
        if (!string.IsNullOrEmpty(extname))
            assetBundleName = assetBundleName.Replace(extname, "");

        assetBundleName += ".asset";
        return new AssetBundleBuild { assetBundleName = assetBundleName, addressableNames = addressableNames, assetNames = assetNames };
    }
}
