using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

public class LBuildUtility 
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

    public static bool Filterate(string projectPath)
    {
        return Path.GetExtension(projectPath) == ".meta" || Path.GetExtension(projectPath) == ".cs";
    }

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

    public static AssetBundleBuild CreateAssetBundleBuild(string assetBundleName, string[] addressableNames, string[] assetNames, bool addExtName = true)
    {
        assetBundleName = assetBundleName.Substring(7).ToLower();
        string extname = Path.GetExtension(assetBundleName);
        if (!string.IsNullOrEmpty(extname))
            assetBundleName = assetBundleName.Replace(extname, "");
        if (addExtName)
            assetBundleName += ".asset";
        return new AssetBundleBuild { assetBundleName = assetBundleName, addressableNames = addressableNames, assetNames = assetNames };
    }
}
