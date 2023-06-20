using System.IO;
using UnityEngine;

public class Utility
{
    /// <summary>
    /// ��ȡ�ļ���С
    /// </summary>
    /// <param name="path">�ļ�·��</param>
    /// <returns>�ļ���С</returns>
    public static int GetFileSize(string path)
    {
        if (!File.Exists(path))
            return 0;

        FileInfo fileInfo = new FileInfo(path);
        int size = (int)fileInfo.Length;
        
        return size;
    }

    /// <summary>
    /// ��ȡ�ļ����������ļ��Ĵ�С
    /// </summary>
    /// <param name="path">�ļ���·��</param>
    /// <returns>�ļ��д�С</returns>
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
