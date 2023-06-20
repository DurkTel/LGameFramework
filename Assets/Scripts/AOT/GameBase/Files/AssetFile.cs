using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class AssetFile
{
    public enum AssetFileFlag : int
    {
        /// <summary>
        /// �װ���Դ
        /// </summary>
        Build = 0,
        /// <summary>
        /// ������Դ
        /// </summary>
        Dll = 1,
        /// <summary>
        /// ����������Դ
        /// </summary>
        LaunchDownload = 2,
        /// <summary>
        /// ��չ��Դ
        /// </summary>
        ExtendDLC = 4,
    }

    public string path;

    public string md5;

    public int size;

    public int priority;

    public AssetFileFlag flag = AssetFileFlag.Build;
}


