using System.Collections;
using System.Collections.Generic;
using System.IO;
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
    public static string GetPorjectPath(string fullPath)
    {
        return fullPath.Substring(Application.dataPath.Length - 6).Replace("\\", "/");
    }
}
