using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class AssetDefine
{
    public static string s_LuaPath = Application.dataPath + "/../X_Scripts/Lua/";

#if UNITY_EDITOR || UNITY_STANDALONE_WIN
    public static string localDataPath = Application.dataPath + "/../A_AssetBundles/";
#elif UNITY_ANDROID
        public static string localDataPath = Application.persistentDataPath + "/A_AssetBundles/";
#endif

#if UNITY_EDITOR || UNITY_STANDALONE_WIN
    public static string s_NetServerPath = "https://00-1256518392.cos.ap-guangzhou.myqcloud.com/Test/win/";
#elif UNITY_ANDROID
        public static string s_NetServerPath = "https://00-1256518392.cos.ap-guangzhou.myqcloud.com/Test/android/";
#endif

    public static string s_LuaBuildTemp = Application.dataPath + "/LuaTemp/";

    public static string s_AudioBuildPath = "Assets/ArtModules/Audio";

    public static string s_EffectBuildPath = "Assets/ArtModules/Effect";

    public static string s_FontBuildPath = "Assets/ArtModules/Fonts";

    public static string s_GuiBuildPath = "Assets/ArtModules/GUI";

    public static string s_ModelBuildPath = "Assets/ArtModules/Model";

    public static string s_SceneBuildPath = "Assets/ArtModules/Scene";

    public static string scriptObjectBuildPath = "Assets/Art/ScriptObject";

}
