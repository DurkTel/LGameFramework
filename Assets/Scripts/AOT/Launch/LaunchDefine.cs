using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class LaunchDefine
{
#if UNITY_EDITOR || UNITY_STANDALONE_WIN
    public static string localDataPath = Application.dataPath + "/../A_AssetBundles/";
#elif UNITY_ANDROID
        public static string localDataPath = Application.persistentDataPath + "/A_AssetBundles/";
#endif

#if UNITY_EDITOR 
    public static string s_NetServerPath = Application.streamingAssetsPath + "/StandaloneWindows64/";
#elif UNITY_STANDALONE_WIN
    public static string s_NetServerPath = Application.streamingAssetsPath + "/StandaloneWindows64/"; //"https://00-1256518392.cos.ap-guangzhou.myqcloud.com/Test/win/";
#elif UNITY_ANDROID
        public static string s_NetServerPath = "https://00-1256518392.cos.ap-guangzhou.myqcloud.com/Test/android/";
#endif

    public static string s_HotUpdateDll = localDataPath + "/dll/";

    public static string[] s_HotUpdateDllName = new string[] { "Assembly-CSharp.dll", "HotUpdate.dll" };
}
