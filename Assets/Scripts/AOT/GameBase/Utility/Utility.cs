using System.IO;
using UnityEngine;

public class Utility
{
    /// <summary>
    /// 获取文件大小
    /// </summary>
    /// <param name="path">文件路径</param>
    /// <returns>文件大小</returns>
    public static int GetFileSize(string path)
    {
        if (!File.Exists(path))
            return 0;

        FileInfo fileInfo = new FileInfo(path);
        int size = (int)fileInfo.Length;
        
        return size;
    }

    /// <summary>
    /// 获取文件夹下所有文件的大小
    /// </summary>
    /// <param name="path">文件夹路径</param>
    /// <returns>文件夹大小</returns>
    public static int GetDirectorySize(string path)
    { 
        if(!Directory.Exists(path))
            return 0;

        DirectoryInfo directoryInfo = new DirectoryInfo(path);
        FileInfo[] fileInfos = directoryInfo.GetFiles("*.*", SearchOption.AllDirectories);

        int size = 0;
        foreach(FileInfo fileInfo in fileInfos)
            size += (int)fileInfo.Length;

        return size;
    }
}
