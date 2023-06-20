using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class AssetFile
{
    public enum AssetFileFlag : int
    {
        /// <summary>
        /// 首包资源
        /// </summary>
        Build = 0,
        /// <summary>
        /// 代码资源
        /// </summary>
        Dll = 1,
        /// <summary>
        /// 启动更新资源
        /// </summary>
        LaunchDownload = 2,
        /// <summary>
        /// 扩展资源
        /// </summary>
        ExtendDLC = 4,
    }

    public string path;

    public string md5;

    public int size;

    public int priority;

    public AssetFileFlag flag = AssetFileFlag.Build;
}


