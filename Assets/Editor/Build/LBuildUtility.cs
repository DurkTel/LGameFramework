using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class LBuildUtility 
{
    /// <summary>
    /// ��Ŀ·��תȫ·��
    /// </summary>
    /// <param name="projectPath"></param>
    /// <returns></returns>
    public static string GetFullPath(string projectPath)
    {
        return Path.Combine(Application.dataPath, projectPath.Substring(7)).Replace("\\", "/");
    }

    /// <summary>
    /// ȫ·��ת��Ŀ·��
    /// </summary>
    /// <param name="fullPath"></param>
    /// <returns></returns>
    public static string GetPorjectPath(string fullPath)
    {
        return fullPath.Substring(Application.dataPath.Length - 6).Replace("\\", "/");
    }
}
