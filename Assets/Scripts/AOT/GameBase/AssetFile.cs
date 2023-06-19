using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class AssetFile
{
    public enum AssetFileFlag : int
    {
        None = 0,
        Build = 2,
        FirstPackage = 4,
        Dll = 8
    }

    public string path;

    public string md5;

    public int size;

    public AssetFileFlag flag = AssetFileFlag.None;
}


