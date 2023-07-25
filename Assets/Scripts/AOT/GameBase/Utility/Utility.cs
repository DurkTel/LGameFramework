using System.IO;
using System.Text;
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

    /// <summary>
    /// 获取文件dm5码
    /// </summary>
    /// <param name="file"></param>
    /// <returns></returns>
    /// <exception cref="System.Exception"></exception>
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
        catch (System.Exception ex)
        {
            throw new System.Exception("md5file() fail, error:" + ex.Message);
        }
    }
}
