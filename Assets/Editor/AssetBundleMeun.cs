using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using XLua.LuaDLL;
using System;
using static UnityEngine.GraphicsBuffer;
using static AssetBundleMeun;

public class AssetBundleMeun : EditorWindow
{
    private const string RREFS_BUILD_OUT_PAHT = "RREFS_BUILD_OUT_PAHT";
    private const string RREFS_BUILD_TARGET = "RREFS_BUILD_TARGET";

    private static string s_outPutNameCSharp = "001.asset";

    private LBuildParameter m_LbuildParameter;

    [MenuItem("LGame/LBuild")]
    private static void OpenGUI()
    {
        AssetBundleMeun resetPivot = (AssetBundleMeun)EditorWindow.GetWindow(typeof(AssetBundleMeun));
        resetPivot.titleContent = new GUIContent("AssetBundle打包工具");
        //resetPivot.maxSize = new Vector2(350, 200);
        resetPivot.Show();
    }

    private void OnEnable()
    {
        m_LbuildParameter ??= new LBuildParameter();
        m_LbuildParameter.buildOutPath = EditorPrefs.GetString(RREFS_BUILD_OUT_PAHT, Path.Combine(Application.dataPath, "../A_Build/"));
        m_LbuildParameter.buildTarget = (BuildTarget)EditorPrefs.GetInt(RREFS_BUILD_TARGET, 19);
    }

    private void OnGUI()
    {
        m_LbuildParameter.buildTarget = (BuildTarget)EditorGUILayout.EnumPopup("平台", m_LbuildParameter.buildTarget);
        EditorPrefs.SetInt(RREFS_BUILD_TARGET, (int)m_LbuildParameter.buildTarget);

        m_LbuildParameter.clearFolder = EditorGUILayout.Toggle("清空目标文件夹", m_LbuildParameter.clearFolder);

        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.LabelField("打包输出路径", m_LbuildParameter.buildOutPath);
        if (GUILayout.Button("选择路径", GUILayout.Width(100)))
        {
            string path = EditorUtility.OpenFolderPanel("选择目录", "", "");
            if (!string.IsNullOrEmpty(path))
            {
                m_LbuildParameter.buildOutPath = path;
                EditorPrefs.SetString(RREFS_BUILD_OUT_PAHT, m_LbuildParameter.buildOutPath);
            }
        }
        EditorGUILayout.EndHorizontal();

        EditorGUILayout.BeginHorizontal();
        if (GUILayout.Button("Lua", GUILayout.Width(100)))
        {
            BuildLua();
        }

        if (GUILayout.Button("Dll", GUILayout.Width(100)))
        {
            BuildDll(m_LbuildParameter);
        }

        if (GUILayout.Button("Dev", GUILayout.Width(100)))
        {
            BuildAsset(AssetDefine.audioBuildPath, "audio");
        }


        EditorGUILayout.EndHorizontal();
    }


    [MenuItem("Assets/Build/Build AssetBundle")]
    private static void BuildAssetBundles()
    {
        string abPath = Application.streamingAssetsPath;
        if (!Directory.Exists(abPath))
        {
            Directory.CreateDirectory(abPath);
        }
        else
        {
            string[] allFiles = Directory.GetFiles(abPath);
            for (int i = 0; i < allFiles.Length; i++)
            {
                File.Delete(allFiles[i]);
            }
        }

        BuildLua();
        BuildAsset(AssetDefine.audioBuildPath, "audio");
        BuildAsset(AssetDefine.effectBuildPath, "effect");
        BuildAsset(AssetDefine.fontBuildPath, "font");
        BuildAsset(AssetDefine.guiBuildPath, "gui");
        BuildAsset(AssetDefine.modelBuildPath, "model");
        BuildAsset(AssetDefine.sceneBuildPath, "scene");
        BuildAsset(AssetDefine.scriptObjectBuildPath, "scriptobject");
        AssetDatabase.Refresh();

        BuildPipeline.BuildAssetBundles(abPath, BuildAssetBundleOptions.ChunkBasedCompression, BuildTarget.StandaloneWindows);
        Directory.Delete(AssetDefine.luaBuildTemp, true);
        AssetDatabase.Refresh();

        //生成AB资源清单
        //AssetManifest_Bundle.RefreshAssetsBundleManifest();
        BuildPipeline.BuildAssetBundles(abPath, BuildAssetBundleOptions.ChunkBasedCompression, BuildTarget.StandaloneWindows);
        AssetDatabase.Refresh();
        Debug.Log("打包完成 ^^_");
    }

    #region 打包lua
    private static void BuildLua()
    {
        List<string> pathList = new List<string>();
        CopyAllLuaFile(AssetDefine.luaPath, AssetDefine.luaBuildTemp, ref pathList);
        AssetDatabase.Refresh();

        foreach (var path in pathList)
        {
            AssetImporter importer = AssetImporter.GetAtPath(path.Substring(path.IndexOf("Asset")));
            if (importer != null)
            {
                importer.assetBundleName = "lua";
            }

        }

    }

    private static void CopyAllLuaFile(string sourceFileName, string destFileName, ref List<string> pathList)
    {
        if (!Directory.Exists(destFileName))
            Directory.CreateDirectory(destFileName);
        else
        {
            foreach (var oldFile in Directory.GetFiles(destFileName, "*.txt"))
            {
                File.Delete(oldFile);
            }
        }

        foreach (var file in Directory.GetFiles(sourceFileName, "*.lua"))
        {
            string name = Path.GetFileName(file);
            string dest = Path.Combine(destFileName, name) + ".txt";
            pathList.Add(dest);
            File.Copy(file, dest);
        }

        foreach (var directory in Directory.GetDirectories(sourceFileName))
        {
            string dirName = Path.GetFileName(directory);
            string dest = Path.Combine(destFileName, dirName);
            CopyAllLuaFile(directory, dest, ref pathList);
        }
    }
    #endregion

    #region 打包资源
    private static void BuildAsset(string path, string abName)
    {
        foreach (var file in Directory.GetFiles(path))
        {
            if (Path.GetExtension(file) == ".meta")
                continue;
            AssetImporter importer = AssetImporter.GetAtPath(file.Substring(file.IndexOf("Asset")));
            if (importer != null)
            {
                importer.assetBundleName = abName;
            }
        }

        foreach (var directory in Directory.GetDirectories(path))
        {
            if (Path.GetExtension(directory) == ".meta")
                continue;
            BuildAsset(directory, abName);
        }
    }

    #endregion

    #region 打包Dll
    private static void BuildDll(LBuildParameter buildParameter)
    { 
        AssetBundleBuild abb = new AssetBundleBuild();
        abb.assetBundleName = s_outPutNameCSharp;
        abb.assetNames = new string[0];
        abb.addressableNames = new string[0];

        PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.Mono2x);
        AssetDatabase.Refresh();

        string[] dllNames = new string[] { "Assembly-CSharp.dll" };
        string dllPath;
        foreach (string dll in dllNames)
        {
            dllPath = Path.Combine(Application.dataPath, string.Format("../Library/ScriptAssemblies/{0}", dll));

            if (File.Exists(dllPath))
            {
                string projectPath = string.Format("Assets/{0}", dll.Replace(".dll", ".bytes"));
                string targetPath = LBuildUtility.GetFullPath(projectPath);

                if (File.Exists(projectPath))
                    AssetDatabase.DeleteAsset(projectPath);

                FileUtil.CopyFileOrDirectory(dllPath, targetPath);

                byte[] bytes = File.ReadAllBytes(dllPath);

                File.WriteAllBytes(targetPath, bytes);
                ArrayUtility.Add<string>(ref abb.assetNames, projectPath);
                ArrayUtility.Add<string>(ref abb.addressableNames, dll);

                //string outPutPath = Path.Combine(buildParameter.buildOutPath, string.Format("{0}/", buildParameter.buildTarget.ToString()));
                //outPutPath = Path.Combine(outPutPath, dll);
                //if (File.Exists(outPutPath))
                //    File.Delete(outPutPath);

                //string dirPath = Path.GetDirectoryName(outPutPath);
                //if (!Directory.Exists(dirPath))
                //    Directory.CreateDirectory(dirPath);

                //File.WriteAllBytes(outPutPath, bytes);
            }
        }

        AssetDatabase.Refresh();


        List<AssetBundleBuild> list;

        list = new List<AssetBundleBuild>() { abb };

        bool re = BuildWriteInfo(list, buildParameter.buildOutPath, BuildAssetBundleOptions.ChunkBasedCompression, buildParameter.buildTarget, buildParameter.clearFolder);
    }
    #endregion


    public static bool BuildWriteInfo(List<AssetBundleBuild> list, string outPath, BuildAssetBundleOptions options, BuildTarget target, bool isClearFolder)
    {
        if (isClearFolder)
        {
            if (Directory.Exists(outPath))
                Directory.Delete(outPath, true);
        }


        string outPutPath = Path.Combine(outPath, target.ToString());
        if (!Directory.Exists(outPutPath))
            Directory.CreateDirectory(outPutPath);

        AssetBundleBuild[] builds = list.ToArray();

        AssetBundleManifest manifest = null;
        try
        {
            manifest = BuildPipeline.BuildAssetBundles(outPutPath, builds, options, target);
        }
        catch (Exception e)
        {
            Debug.LogError(e.ToString());
        }


        if (manifest == null)
        {
            return false;
        }


        return true;
    }

    public class LBuildParameter
    {
        /// <summary>
        /// 打包导出路径
        /// </summary>
        public string buildOutPath;
        /// <summary>
        /// 目标平台
        /// </summary>
        public BuildTarget buildTarget;
        /// <summary>
        /// 清空目标文件夹
        /// </summary>
        public bool clearFolder;
    }
}
