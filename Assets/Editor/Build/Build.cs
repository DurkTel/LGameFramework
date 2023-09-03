using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using System;
using LGameFramework.GameCore.Asset;
using LGameFramework.GameBase;

public class Build : EditorWindow
{
    /// <summary>
    /// 默认打包路径
    /// </summary>
    private const string RREFS_BUILD_OUT_PAHT = "RREFS_BUILD_OUT_PAHT";
    /// <summary>
    /// 默认打包平台
    /// </summary>
    private const string RREFS_BUILD_TARGET = "RREFS_BUILD_TARGET";
    /// <summary>
    /// C#包名
    /// </summary>
    private static string s_outPutNameCSharp = "001.asset";
    /// <summary>
    /// 其他资源包名
    /// </summary>
    private static string s_outPutNameDev = "002";
    /// <summary>
    /// 需要进行热更的DLL名字
    /// </summary>
    public static string[] s_HotUpdateDllName = new string[] { "Assembly-GameCore.dll", "Assembly-GameLogic.dll" };
    /// <summary>
    /// 随机字节 用于加密AB包
    /// </summary>
    private static List<byte> s_RandomByteList = new List<byte>(4);

    private LBuildParameter m_LbuildParameter;

    [MenuItem("LGame/Build")]
    private static void OpenGUI()
    {
        Build resetPivot = (Build)EditorWindow.GetWindow(typeof(Build));
        resetPivot.titleContent = new GUIContent("AssetBundle Build");
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

        if (GUILayout.Button("Build Dll"))
        {
            BuildCShareBytes(m_LbuildParameter);
        }

        if (GUILayout.Button("Build Dev"))
        {
            BuildDevelopment(m_LbuildParameter);
        }

        EditorGUILayout.EndHorizontal();


        EditorGUILayout.HelpBox("第四步：生成资源清单", MessageType.Info);
        if (GUILayout.Button("更新资源清单"))
        {
            BuildManifest(m_LbuildParameter);
        }

        EditorGUILayout.HelpBox("第五步：修改资源清单里的首包TAG后 生成版本文件", MessageType.Info);
        if (GUILayout.Button("生成版本文件"))
        {
            BuildVersion(m_LbuildParameter);
        }

        if (GUILayout.Button("复制首包到streamingAssetsPath"))
        {

            string buildPath = Application.dataPath + "/../A_AssetBundles";
            if (Directory.Exists(buildPath))
                Directory.Delete(buildPath, true);

            AssetManifest_Bundle assetManifest = GetAssetManifest();
            string formPath = Path.Combine(m_LbuildParameter.buildOutPath, m_LbuildParameter.buildTarget.ToString());

            foreach (var file in assetManifest.bundleList)
            {
                if (file.fileFlag.HasFlag(AssetBundleInfo.AssetFileFlag.Build)
                    || file.fileFlag.HasFlag(AssetBundleInfo.AssetFileFlag.Dll))
                {
                    string fullPath = Path.Combine(buildPath, file.assetPath);
                    if (!Directory.Exists(Path.GetDirectoryName(fullPath)))
                        Directory.CreateDirectory(Path.GetDirectoryName(fullPath));

                    FileUtil.CopyFileOrDirectory(Path.Combine(formPath, file.assetPath), fullPath);
                }
            }

            FileUtil.CopyFileOrDirectory(Path.Combine(formPath, "assetManifest.json"), Path.Combine(buildPath, "assetManifest.json"));
            FileUtil.CopyFileOrDirectory(Path.Combine(formPath, "buildingFile.json"), Path.Combine(buildPath, "buildingFile.json"));
            FileUtil.CopyFileOrDirectory(Path.Combine(formPath, "version.txt"), Path.Combine(buildPath, "version.txt"));


            //应该上传服务器 这里先传在streamingAssets做测试

            string path = Path.Combine(Application.streamingAssetsPath, m_LbuildParameter.buildTarget.ToString());
            if (Directory.Exists(path))
                Directory.Delete(path, true);

            FileUtil.CopyFileOrDirectory(formPath, path);

            AssetDatabase.Refresh();
            GameLogger.DEBUG("复制完成");
        }
    }

    /// <summary>
    /// AB打包写入
    /// </summary>
    /// <param name="list"></param>
    /// <param name="outPath"></param>
    /// <param name="options"></param>
    /// <param name="target"></param>
    /// <param name="childFolder"></param>
    /// <returns></returns>
    public static bool BuildWriteInfo(List<AssetBundleBuild> list, string outPath, BuildAssetBundleOptions options, BuildTarget target, string childFolder = "")
    {
        options = options | BuildAssetBundleOptions.DisableLoadAssetByFileNameWithExtension;

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

    #region 打包资源
    private static void BuildDevelopment(LBuildParameter buildParameter)
    {
        if (buildParameter.clearFolder && Directory.Exists(Path.Combine(buildParameter.buildOutPath, buildParameter.buildTarget.ToString())))
            Directory.Delete(Path.Combine(buildParameter.buildOutPath, buildParameter.buildTarget.ToString()), true);

        //记录当前AB包
        Dictionary<string, string> record = new Dictionary<string, string>();
        AssetBundleRecord(buildParameter, ref record);

        List<AssetBundleBuild> list = new List<AssetBundleBuild>();

        BuildUtility.CollectionFile(list, "Assets/ArtModules/GameMainLogic.prefab");

        CollectionAudio(ref list, BuildPath.s_AudioBuildPath);

        CollectionEffect(ref list, BuildPath.s_EffectBuildPath);

        CollectionUI(ref list, BuildPath.s_GuiBuildPath);

        CollectionFont(ref list, BuildPath.s_FontBuildPath);

        CollectionEffect(ref list, BuildPath.s_ModelBuildPath);

        CollectionEffect(ref list, BuildPath.s_ScriptObjectBuildPath);


        if (BuildWriteInfo(list, buildParameter.buildOutPath, BuildAssetBundleOptions.ChunkBasedCompression, buildParameter.buildTarget, s_outPutNameDev))
            GameLogger.DEBUG("打包Dev成功~  ^^_");

        //将新增/修改后的AB进行加密
        AssetBundleOffset(buildParameter, record);
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

        //EditorSettings.spritePackerMode = SpritePackerMode.BuildTimeOnlyAtlas;

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

    #region 打包代码
    private static void BuildCShareBytes(LBuildParameter buildParameter)
    {
        AssetBundleBuild abb = new AssetBundleBuild();
        abb.assetBundleName = s_outPutNameCSharp;
        abb.assetNames = new string[0];
        abb.addressableNames = new string[0];

        PlayerSettings.SetScriptingBackend(BuildTargetGroup.Android, ScriptingImplementation.IL2CPP);
        AssetDatabase.Refresh();

        HybridCLR.Editor.Commands.CompileDllCommand.CompileDll(buildParameter.buildTarget);
        AssetDatabase.Refresh();

        string[] deleteArray = new string[s_HotUpdateDllName.Length];

        for (int i = 0; i < s_HotUpdateDllName.Length; i++)
        {
            string dll = s_HotUpdateDllName[i];
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

                deleteArray[i] = targetPath;
            }
        }

        AssetDatabase.Refresh();

        if (BuildWriteInfo(new List<AssetBundleBuild>() { abb }, buildParameter.buildOutPath, BuildAssetBundleOptions.ChunkBasedCompression, buildParameter.buildTarget, Path.GetFileNameWithoutExtension(s_outPutNameCSharp)))
            GameLogger.DEBUG("打包Dll成功~  ^^_");


        foreach (var item in deleteArray)
        {
            File.Delete(item);
        }

    }
    #endregion

    #region 打包资源清单
    private static void BuildManifest(LBuildParameter buildParameter)
    {
        string targetName = buildParameter.buildTarget.ToString();
        
        AssetManifest_Bundle assetManifest = RefreshAssetsBundleManifest(Path.Combine(buildParameter.buildOutPath, targetName));
        string assetJson = JsonHelper.ToJason(assetManifest, true);
        File.WriteAllText(Path.Combine(buildParameter.buildOutPath, targetName, "assetManifest.json"), assetJson);


        AssetDatabase.Refresh();

    }

    public static AssetManifest_Bundle RefreshAssetsBundleManifest(string path)
    {
        AssetBundle.UnloadAllAssetBundles(true);

        AssetManifest_Bundle assetManifest = GetAssetManifest();
        assetManifest.Clear();

        string[] allDir = Directory.GetDirectories(path);
        foreach (var childDir in allDir)
        {
            string childDirName = Path.GetFileNameWithoutExtension(childDir);
            string manifestPath = Path.Combine(childDir, childDirName);
            
            AssetBundle manifestAB = AssetBundle.LoadFromFile(manifestPath);
            if (manifestAB == null)
                continue;

            AssetBundleManifest manifest = manifestAB.LoadAsset<AssetBundleManifest>("assetbundlemanifest");
            string[] allAB = manifest.GetAllAssetBundles();
            foreach (var abName in allAB)
            {
                string fullABName = childDirName + "/" + abName;
                string fullABPath = Path.Combine(path, fullABName);

                //获得依赖
                string[] dependBundleNames = manifest.GetAllDependencies(abName);
                string[] newDependBundleNames = new string[dependBundleNames.Length];
                if (dependBundleNames != null && dependBundleNames.Length > 0)
                {
                    for (int i = 0; i < dependBundleNames.Length; i++)
                        newDependBundleNames[i] = Path.GetFileName(dependBundleNames[i]);
                }
                AssetBundleInfo assetBundleInfo = AssetBundleInfo.GetAssetBundleInfo(abName, fullABName, fullABPath);
                assetBundleInfo.dependencieBundleNames = newDependBundleNames;
                uint crc = 0;
                if (BuildPipeline.GetCRCForAssetBundle(fullABPath, out crc))
                    assetBundleInfo.crc = crc;

                AssetBundle ab = AssetBundle.LoadFromFile(fullABPath, crc, 4);
                string[] allAsset = ab.GetAllAssetNames();
                assetBundleInfo.allFiles = allAsset;
                assetManifest.AddAssetBundle(assetBundleInfo);

                foreach (var assetName in allAsset)
                {
                    AssetFileInfo file = AssetFileInfo.GetAssetFile(assetName, abName);
                    assetManifest.Add(file);
                }

            }

        }

        AssetBundle.UnloadAllAssetBundles(true);

        EditorUtility.SetDirty(assetManifest);
        AssetDatabase.SaveAssets();
        AssetDatabase.Refresh();


        GameLogger.DEBUG("更新AB资源清单完成");
        return assetManifest;
    }

    public static AssetManifest_Bundle GetAssetManifest()
    {
        AssetManifest_Bundle assetManifest = AssetDatabase.LoadAssetAtPath<AssetManifest_Bundle>(AssetManifest_Bundle.s_AbPath);

        if (assetManifest == null)
        {
            assetManifest = ScriptableObject.CreateInstance<AssetManifest_Bundle>();
            AssetDatabase.CreateAsset(assetManifest, AssetManifest_Bundle.s_AbPath);
        }

        return assetManifest;
    }

    #endregion

    #region 更新版本/首包文件
    public static void BuildVersion(LBuildParameter buildParameter)
    {
        string path = Path.Combine(buildParameter.buildOutPath, buildParameter.buildTarget.ToString());

        string filePath = path + "/buildingFile.json";
        string versionPath = path + "/version.txt";

        if (File.Exists(filePath))
            File.Delete(filePath);

        if (File.Exists(versionPath))
            File.Delete(versionPath);


        Dictionary<string, AssetBundleInfo> buildingFile = new Dictionary<string, AssetBundleInfo>();
        AssetManifest_Bundle assetManifest = GetAssetManifest();

        foreach (var file in assetManifest.bundleList)
        {
            if (file.fileFlag.HasFlag(AssetBundleInfo.AssetFileFlag.Build)
                || file.fileFlag.HasFlag(AssetBundleInfo.AssetFileFlag.Dll))
                buildingFile.Add(file.bundleName, file);
        }

        string str = JsonHelper.ToJason<string, AssetBundleInfo>(buildingFile, true);
        File.WriteAllText(filePath, str);
        File.WriteAllText(versionPath, "version|1.00");
        AssetDatabase.Refresh();
        GameLogger.DEBUG("生成版本文件完成");

    }
    #endregion


    #region AB包偏移 做个简单的加密
    public static void AssetBundleOffset(LBuildParameter buildParameter, Dictionary<string, string> record)
    {
        string path = Path.Combine(buildParameter.buildOutPath, buildParameter.buildTarget.ToString());

        string[] allFiles = Directory.GetFiles(path, "*.asset", SearchOption.AllDirectories);
        foreach (var childFile in allFiles)
        {
            if (!File.Exists(childFile))
                continue;

            if (record != null && record.TryGetValue(childFile, out string md5) && md5 == FileUtility.GetMD5(childFile))
                continue;

            byte[] bytes = File.ReadAllBytes(childFile);

            List<byte> byteList = new List<byte>(bytes);

            s_RandomByteList.Clear();

            for (byte i = 0; i < 4; i++)
            {
                byte b = (byte)(UnityEngine.Random.Range(0.0f, 1.0f) * (float)byte.MaxValue);
                s_RandomByteList.Add(b);
            }

            byteList.InsertRange(0, s_RandomByteList);

            File.WriteAllBytes(childFile, byteList.ToArray());
        }
        GameLogger.DEBUG("AB包偏移加密完成，偏移字节数为4");
    }

    /// <summary>
    /// 记录当前已有AB MD5码 用于分辨是否新打的
    /// </summary>
    /// <param name="buildParameter"></param>
    /// <param name="record"></param>
    public static void AssetBundleRecord(LBuildParameter buildParameter, ref Dictionary<string, string> record)
    {
        record.Clear();
        string path = Path.Combine(buildParameter.buildOutPath, buildParameter.buildTarget.ToString());
        if (!Directory.Exists(path))
            Directory.CreateDirectory(path);

        string[] allFiles = Directory.GetFiles(path, "*.asset", SearchOption.AllDirectories);
        foreach (var childFile in allFiles)
        {
            if (File.Exists(childFile))
            {
                string md5 = FileUtility.GetMD5(childFile);
                record.Add(childFile, md5);
                //record.Add(childFile.Substring(path.Length + s_outPutNameDev.Length + 2), md5);
            }
        }
    }
    #endregion
}
