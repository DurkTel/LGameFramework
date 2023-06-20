using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;
using System.Linq;
using System.Text;

public class Build : EditorWindow
{
    private const string RREFS_BUILD_OUT_PAHT = "RREFS_BUILD_OUT_PAHT";
    private const string RREFS_BUILD_TARGET = "RREFS_BUILD_TARGET";
    private const string RREFS_BUILD_Options = "RREFS_BUILD_Options";

    private static string s_outPutNameLua = "000.asset";
    private static string s_outPutNameCSharp = "001.asset";
    private static string s_outPutNameDev = "002";

    private LBuildParameter m_LbuildParameter;

    [MenuItem("LGame/LBuild")]
    private static void OpenGUI()
    {
        Build resetPivot = (Build)EditorWindow.GetWindow(typeof(Build));
        resetPivot.titleContent = new GUIContent("AssetBundle Build流程");
        resetPivot.minSize = new Vector2(1000, 500);
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
        EditorGUILayout.HelpBox("第一步：选择对应平台", MessageType.Info);
        m_LbuildParameter.buildTarget = (BuildTarget)EditorGUILayout.EnumPopup("平台", m_LbuildParameter.buildTarget);
        EditorPrefs.SetInt(RREFS_BUILD_TARGET, (int)m_LbuildParameter.buildTarget);

        EditorGUILayout.HelpBox("第二步：选择对应路径", MessageType.Info);

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

        if (GUILayout.Button("打开文件夹", GUILayout.Width(100)))
        { 
            EditorUtility.OpenWithDefaultApp(m_LbuildParameter.buildOutPath);
        }

        EditorGUILayout.EndHorizontal();

        m_LbuildParameter.clearFolder = EditorGUILayout.Toggle("清空目标文件夹", m_LbuildParameter.clearFolder);


        EditorGUILayout.HelpBox("第三步：打包对应资源", MessageType.Info);

        EditorGUILayout.BeginHorizontal();
        //if (GUILayout.Button("Build Lua"))
        //{
        //    BuildLua(m_LbuildParameter);
        //}

        if (GUILayout.Button("Build Dll"))
        {
            //BuildDll(m_LbuildParameter);
            BuildIl2cpp(m_LbuildParameter);
        }

        if (GUILayout.Button("Build Dev"))
        {
            BuildDevelopment(m_LbuildParameter);
        }

        EditorGUILayout.EndHorizontal();


        EditorGUILayout.HelpBox("第四步：生成资源清单、版本文件", MessageType.Info);
        if (GUILayout.Button("更新资源清单"))
        {
            BuildManifest(m_LbuildParameter);
            BuildVersion(m_LbuildParameter);
        }

        //EditorGUILayout.HelpBox("第五步：生成上传更新资源", MessageType.Info);
        //if (GUILayout.Button("上传资源"))
        //{

        //}

        if (GUILayout.Button("复制到streamingAssetsPath"))
        {
            string path = Path.Combine(Application.streamingAssetsPath, m_LbuildParameter.buildTarget.ToString());
            if (Directory.Exists(path))
                Directory.Delete(path, true);
            FileUtil.CopyFileOrDirectory(Path.Combine(m_LbuildParameter.buildOutPath, m_LbuildParameter.buildTarget.ToString()), path);
            AssetDatabase.Refresh();
        }
    }


    public static bool BuildWriteInfo(List<AssetBundleBuild> list, string outPath, BuildAssetBundleOptions options, BuildTarget target, bool isClearFolder, string childFolder = "")
    {
        options = options | BuildAssetBundleOptions.DisableLoadAssetByFileNameWithExtension;
        if (isClearFolder)
        {
            if (Directory.Exists(outPath))
                Directory.Delete(outPath, true);
        }


        string outPutPath = Path.Combine(outPath, target.ToString());
        if (!string.IsNullOrEmpty(childFolder))
            outPutPath = Path.Combine(outPutPath, childFolder);

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
        /// 打包模式
        /// </summary>
        public BuildAssetBundleOptions buildAssetBundleOptions;
        /// <summary>
        /// 清空目标文件夹
        /// </summary>
        public bool clearFolder;
    }

    #region 打包lua
    //private static void BuildLua(LBuildParameter buildParameter)
    //{
    //    string project = BuildUtility.GetProjectPath(AssetDefine.s_LuaBuildTemp);
    //    //先清空临时文件夹
    //    if (AssetDatabase.IsValidFolder(project))
    //        AssetDatabase.DeleteAsset(project);

    //    AssetDatabase.Refresh();

    //    AssetBundleBuild abb_luaCode = new AssetBundleBuild();
    //    abb_luaCode.assetBundleName = s_outPutNameLua;
    //    abb_luaCode.assetNames = new string[0];
    //    abb_luaCode.addressableNames = new string[0];

    //    string[] allLuas = Directory.GetFiles(AssetDefine.s_LuaPath, "*.lua", SearchOption.AllDirectories);
    //    //lua文件夹
    //    int sidx = AssetDefine.s_LuaPath.Length;
    //    //项目文件夹Dev根目录
    //    int psidx = Application.dataPath.Length - 6;
    //    //要复制到的路径
    //    string projectFolder = AssetDefine.s_LuaBuildTemp;

    //    for (int i = 0; i < allLuas.Length; i++)
    //    {
    //        //lua文件在lua文件夹的路径
    //        string relative = allLuas[i].Substring(sidx);
    //        //lua文件在lua临时文件夹的路径
    //        string projectPath = Path.Combine(projectFolder, relative);
    //        projectPath = projectPath.Replace(Path.GetExtension(projectPath), ".txt");
    //        string dirPath = Path.GetDirectoryName(projectPath);

    //        if (!Directory.Exists(dirPath))
    //            Directory.CreateDirectory(dirPath);

    //        FileUtil.CopyFileOrDirectory(allLuas[i], projectPath);

    //        //实际路径与加载路径名
    //        string assetPath = projectPath.Substring(psidx).Replace("\\", "/");
    //        string addressPath = projectPath.Substring(AssetDefine.s_LuaBuildTemp.Length).Replace("/", ".");

    //        ArrayUtility.Add<string>(ref abb_luaCode.assetNames, assetPath);
    //        ArrayUtility.Add<string>(ref abb_luaCode.addressableNames, addressPath);
    //    }

    //    AssetDatabase.Refresh();

    //    BuildAssetBundleOptions options = BuildAssetBundleOptions.None |
    //                                      BuildAssetBundleOptions.IgnoreTypeTreeChanges |
    //                                      BuildAssetBundleOptions.DisableLoadAssetByFileNameWithExtension;

    //    if (BuildWriteInfo(new List<AssetBundleBuild>() { abb_luaCode }, buildParameter.buildOutPath, options, buildParameter.buildTarget, buildParameter.clearFolder, Path.GetFileNameWithoutExtension(s_outPutNameLua)))
    //        Debug.Log("打包Lua成功~   ^^_");

    //    AssetDatabase.DeleteAsset(project);
    //    AssetDatabase.Refresh();
    //}
    #endregion

    #region 打包资源
    private static void BuildDevelopment(LBuildParameter buildParameter)
    {
        List<AssetBundleBuild> list = new List<AssetBundleBuild>();

        CollectionAudio(ref list, AssetDefine.s_AudioBuildPath);

        CollectionEffect(ref list, AssetDefine.s_EffectBuildPath);

        CollectionUI(ref list, AssetDefine.s_GuiBuildPath);

        CollectionFont(ref list, AssetDefine.s_FontBuildPath);

        if (BuildWriteInfo(list, buildParameter.buildOutPath, BuildAssetBundleOptions.ChunkBasedCompression, buildParameter.buildTarget, buildParameter.clearFolder, s_outPutNameDev))
            Debug.Log("打包Dev成功~  ^^_");
    }

    /// <summary>
    /// 打包音效
    /// </summary>
    /// <param name="list"></param>
    /// <param name="audioFolder"></param>
    private static void CollectionAudio(ref List<AssetBundleBuild> list, string audioFolder)
    {
        if (!Directory.Exists(audioFolder))
            return;

        string[] allFolder = Directory.GetDirectories(audioFolder);
        //文件夹里的每个子文件夹单独一个包  Music里相同场景切换的音乐放一个文件夹   Sound里相同角色的音效放一个文件夹
        foreach (var folder in allFolder)
        {
            string[] child = Directory.GetDirectories(folder);
            if (child.Length <= 0)
                continue;

            foreach (var son in child)
            {
                BuildUtility.CollectionFolder(list, son);
            }
        }

        //文件夹外的混合器单独一个包
        string[] files = Directory.GetFiles(audioFolder);
        foreach (var file in files)
        {
            BuildUtility.CollectionFile(list, file);
        }
    }

    /// <summary>
    /// 打包特效
    /// </summary>
    /// <param name="list"></param>
    /// <param name="audioFolder"></param>
    private static void CollectionEffect(ref List<AssetBundleBuild> list, string effectFolder)
    {
        if (!Directory.Exists(effectFolder))
            return;

        string[] allFolder = Directory.GetDirectories(effectFolder);
        //每个文件夹单独一个包  一个特效的预制、材质、贴图 放同一个文件夹
        foreach (var folder in allFolder)
        {
            BuildUtility.CollectionFolder(list, folder);
        }
    }

    /// <summary>
    /// 打包字体
    /// </summary>
    /// <param name="list"></param>
    /// <param name="audioFolder"></param>
    private static void CollectionFont(ref List<AssetBundleBuild> list, string fontFolder)
    {
        if (!Directory.Exists(fontFolder))
            return;

        BuildUtility.CollectionFolder(list, fontFolder);
    }

    /// <summary>
    /// 打包UI
    /// </summary>
    /// <param name="list"></param>
    /// <param name="audioFolder"></param>
    private static void CollectionUI(ref List<AssetBundleBuild> list, string guiFolder)
    {
        if (!Directory.Exists(guiFolder))
            return;

        string[] allFolder = Directory.GetDirectories(guiFolder);
        
        foreach (var folder in allFolder)
        {
            string imagesFolder = Path.Combine(folder, "Images");
            string prefabsFolder = Path.Combine(folder, "Prefabs");

            if (Directory.Exists(imagesFolder))
            {
                //Images外面的图片先打一个包
                string[] topImgs = Directory.GetFiles(imagesFolder, "*.png");
                if (topImgs.Length > 0)
                {
                    string[] addressableNames = new string[0];
                    string[] assetNames = new string[0];
                    string bundlName = imagesFolder;
                    foreach (var imgPath in topImgs)
                    {
                        string fileName = Path.GetFileName(imgPath);
                        string projectPath = imgPath;
                        ArrayUtility.Add<string>(ref addressableNames, fileName);
                        ArrayUtility.Add<string>(ref assetNames, projectPath);
                    }
                    list.Add(BuildUtility.CreateAssetBundleBuild(bundlName, addressableNames, assetNames));
                }

                //还有文件夹的话
                string[] childFolders = Directory.GetDirectories(imagesFolder);
                foreach (var childFolder in childFolders)
                {
                    string[] childImgs = Directory.GetFiles(childFolder, "*.png");
                    string folderName = Path.GetFileName(childFolder);
                    //单张图集的 一张一个包
                    if (folderName.Contains("Single"))
                    {
                        BuildUtility.CollectionFolder(list, childFolder, true);
                    }
                    //其他文件夹 一个文件夹一个包
                    else if (childImgs.Length > 0)
                    {
                        BuildUtility.CollectionFolder(list, childFolder);
                    }
                }
            }

            //预制单独打包
            if (Directory.Exists(prefabsFolder))
            {
                BuildUtility.CollectionFolder(list, prefabsFolder, true);
            }
        }

    }

    #endregion

    #region 打包Dll
    //private static void BuildDll(LBuildParameter buildParameter)
    //{
    //    AssetBundleBuild abb = new AssetBundleBuild();
    //    abb.assetBundleName = s_outPutNameCSharp;
    //    abb.assetNames = new string[0];
    //    abb.addressableNames = new string[0];

    //    PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.Mono2x);
    //    AssetDatabase.Refresh();
    //    EditorApplication.ExecuteMenuItem("XLua/Generate Code");
    //    AssetDatabase.Refresh();

    //    string[] dllNames = new string[] { "Assembly-CSharp.dll" };
    //    string dllPath;
    //    foreach (string dll in dllNames)
    //    {
    //        dllPath = Path.Combine(Application.dataPath, string.Format("../Library/ScriptAssemblies/{0}", dll));

    //        if (File.Exists(dllPath))
    //        {
    //            string projectPath = string.Format("Assets/{0}", dll.Replace(".dll", ".bytes"));
    //            string targetPath = BuildUtility.GetFullPath(projectPath);

    //            if (File.Exists(projectPath))
    //                AssetDatabase.DeleteAsset(projectPath);

    //            FileUtil.CopyFileOrDirectory(dllPath, targetPath);

    //            byte[] bytes = File.ReadAllBytes(dllPath);

    //            File.WriteAllBytes(targetPath, bytes);
    //            ArrayUtility.Add<string>(ref abb.assetNames, projectPath);
    //            ArrayUtility.Add<string>(ref abb.addressableNames, dll);
    //        }
    //    }

    //    AssetDatabase.Refresh();


    //    if (BuildWriteInfo(new List<AssetBundleBuild>() { abb }, buildParameter.buildOutPath, BuildAssetBundleOptions.ChunkBasedCompression, buildParameter.buildTarget, buildParameter.clearFolder, Path.GetFileNameWithoutExtension(s_outPutNameCSharp)))
    //        Debug.Log("打包Dll成功~  ^^_");
    //}
    #endregion

    #region 打包il2cpp
    private static void BuildIl2cpp(LBuildParameter buildParameter)
    {
        AssetBundleBuild abb = new AssetBundleBuild();
        abb.assetBundleName = s_outPutNameCSharp;
        abb.assetNames = new string[0];
        abb.addressableNames = new string[0];

        PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.IL2CPP);
        AssetDatabase.Refresh();

        HybridCLR.Editor.Commands.CompileDllCommand.CompileDll(buildParameter.buildTarget);
        AssetDatabase.Refresh();

        foreach (var dll in LaunchPath.s_HotUpdateDllName)
        {
            string dllPath = Application.dataPath + "/../HybridCLRData/HotUpdateDlls/" + buildParameter.buildTarget.ToString() + "/" + dll;

            if (File.Exists(dllPath))
            {
                string projectPath = string.Format("Assets/{0}", dll.Replace(".dll", ".bytes"));
                string targetPath = BuildUtility.GetFullPath(projectPath);

                if (File.Exists(projectPath))
                    AssetDatabase.DeleteAsset(projectPath);

                FileUtil.CopyFileOrDirectory(dllPath, targetPath);

                byte[] bytes = File.ReadAllBytes(dllPath);

                File.WriteAllBytes(targetPath, bytes);
                ArrayUtility.Add<string>(ref abb.assetNames, projectPath);
                ArrayUtility.Add<string>(ref abb.addressableNames, dll);
                File.Delete(targetPath);
            }
        }

        AssetDatabase.Refresh();

        if (BuildWriteInfo(new List<AssetBundleBuild>() { abb }, buildParameter.buildOutPath, BuildAssetBundleOptions.ChunkBasedCompression, buildParameter.buildTarget, buildParameter.clearFolder, Path.GetFileNameWithoutExtension(s_outPutNameCSharp)))
            Debug.Log("打包Dll成功~  ^^_");

    }
    #endregion

    #region 打包资源清单
    private static void BuildManifest(LBuildParameter buildParameter)
    {
        string targetName = buildParameter.buildTarget.ToString();
        RefreshAssetsBundleManifest(Path.Combine(buildParameter.buildOutPath, targetName));

        AssetBundleBuild abb = new AssetBundleBuild();
        string projectPath = AssetManifest_AssetBundle.s_abPath;
        abb.assetBundleName = projectPath.Substring(7);
        abb.assetNames = new string[] { projectPath };
        abb.addressableNames = new string[] { Path.GetFileNameWithoutExtension(projectPath) };

        if (BuildWriteInfo(new List<AssetBundleBuild>() { abb }, buildParameter.buildOutPath, BuildAssetBundleOptions.None | BuildAssetBundleOptions.ForceRebuildAssetBundle, buildParameter.buildTarget, buildParameter.clearFolder))
            Debug.Log("打包资源清单成功~  ^^_");

        AssetDatabase.Refresh();

        string path1 = Path.Combine(buildParameter.buildOutPath, targetName, targetName);
        if (File.Exists(path1))
            File.Delete(path1);

        string path2 = Path.Combine(buildParameter.buildOutPath, targetName, targetName) + ".manifest";
        if (File.Exists(path2))
            File.Delete(path2);


        AssetDatabase.Refresh();

    }

    public static void RefreshAssetsBundleManifest(string path)
    {
        AssetBundle.UnloadAllAssetBundles(true);

        AssetManifest_AssetBundle assetManifest = GetAssetManifest();
        assetManifest.Clear();

        string[] allDir = Directory.GetDirectories(path);
        foreach (var childDir in allDir)
        {
            string fileName = Path.GetFileNameWithoutExtension(childDir);
            if (fileName == "000" || fileName == "001")
                continue;

            string manifestPath = Path.Combine(childDir, fileName);
            AssetBundle manifestAB = AssetBundle.LoadFromFile(manifestPath);
            if (manifestAB == null)
                continue;

            AssetBundleManifest manifest = manifestAB.LoadAsset<AssetBundleManifest>("assetbundlemanifest");
            string[] allAB = manifest.GetAllAssetBundles();
            foreach (var abPath in allAB)
            {
                string newABName = fileName + "/" + abPath;

                AssetBundle ab = AssetBundle.LoadFromFile(Path.Combine(path, newABName));

                //获得依赖
                List<string> dependBundleNames = manifest.GetAllDependencies(abPath).ToList<string>();
                List<string> newDependBundleNames = new List<string>(0);
                if (dependBundleNames != null && dependBundleNames.Count > 0)
                {
                    foreach (var depend in dependBundleNames)
                    {
                        newDependBundleNames.Add(fileName + "/" + depend);
                    }
                }

                string[] allAsset = ab.GetAllAssetNames();
                foreach (var assetName in allAsset)
                {
                    string name = Path.GetFileName(assetName);
                    string md5 = BuildUtility.GetMD5(Path.Combine(path, newABName));
                    assetManifest.Add(name, assetName, newABName, md5, newDependBundleNames);
                }

            }

        }

        AssetBundle.UnloadAllAssetBundles(true);

        EditorUtility.SetDirty(assetManifest);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();


        Debug.Log("更新AB资源清单完成");
    }

    public static AssetManifest_AssetBundle GetAssetManifest()
    {
        AssetManifest_AssetBundle assetManifest = AssetDatabase.LoadAssetAtPath<AssetManifest_AssetBundle>(AssetManifest_AssetBundle.s_abPath);

        if (assetManifest == null)
        {
            assetManifest = ScriptableObject.CreateInstance<AssetManifest_AssetBundle>();
            AssetDatabase.CreateAsset(assetManifest, AssetManifest_AssetBundle.s_abPath);
        }

        return assetManifest;
    }

    #endregion

    #region 更新版本文件
    public static void BuildVersion(LBuildParameter buildParameter)
    {
        string path = Path.Combine(buildParameter.buildOutPath, buildParameter.buildTarget.ToString());

        string filePath = path + "/file.txt";
        string versionPath = path + "/version.txt";

        if (File.Exists(filePath))
            File.Delete(filePath);

        if (File.Exists(versionPath))
            File.Delete(versionPath);

        StringBuilder file_str = new StringBuilder();

        string assetManifestName = "lgassetmanifest.asset";
        string assetManifestPath = Path.Combine(path, assetManifestName);
        if (!File.Exists(assetManifestPath))
        {
            Debug.LogError("没有找到资源清单AB");
            return;
        }

        string name = assetManifestName;
        string md5 = BuildUtility.GetMD5(assetManifestPath);
        int size = Utility.GetFileSize(assetManifestPath);
        //file_str.Append(string.Format("{0}|{1}\n", name, md5));
        List<AssetFile> files = new List<AssetFile>
        {
            new AssetFile() { path = name, md5 = md5, size = size }
        };


        string[] dir = Directory.GetDirectories(path);

        foreach (var child in dir)
        {

            string[] allFiles = Directory.GetFiles(child, "*", SearchOption.AllDirectories);

            foreach (var file in allFiles)
            {
                name = file.Substring(path.Length + 1);
                name = name.Replace("\\", "/");
                md5 = BuildUtility.GetMD5(file);
                size = Utility.GetFileSize(file);

                files.Add(new AssetFile() { path = name, md5 = md5, size = size });

                //file_str.Append(string.Format("{0}|{1}\n", name, md5));
            }
        }

        string str = LJsonUtility.ToJason(files);
        //File.WriteAllText(filePath, file_str.ToString());
        File.WriteAllText(filePath, str);
        File.WriteAllText(versionPath, "version|1.00");

        AssetDatabase.Refresh();
    }
    #endregion

}
