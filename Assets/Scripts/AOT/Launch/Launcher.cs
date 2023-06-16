﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using UnityEngine;
using UnityEngine.Events;
using System.IO;
using HybridCLR;

public class Launcher : MonoBehaviour
{

    void Start()
    {
        DontDestroyOnLoad(gameObject);

        LaunchUpdate update = gameObject.AddComponent<LaunchUpdate>();
        update.UpdateComplete = () =>
        {
            print("游戏更新完成！进入加载流程");
            StartCoroutine(LaunchGame());
        };


    }

    private IEnumerator LaunchGame()
    {
        LoadMetadataForAOTAssemblies();
#if !UNITY_EDITOR
        
        //Assembly hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{LaunchDefine.s_HotUpdateDll}/HotUpdate.dll.bytes"));
        foreach (var dll in LaunchDefine.s_HotUpdateDllName)
        {
            Assembly.Load(File.ReadAllBytes($"{LaunchDefine.s_HotUpdateDll}/{dll}.bytes"));
        }
#else
        //Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
        foreach (var dll in LaunchDefine.s_HotUpdateDllName)
        {
            string name = Path.GetFileNameWithoutExtension(dll);
            System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == name);
        }
#endif



        //Type type = hotUpdateAss.GetType("GameEntry");
        //type.GetMethod("Instantiate").Invoke(null, null);

        GameEntry.Instantiate();
        yield return null;

    }


    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        /// 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            string path = $"{LaunchDefine.s_HotUpdateDll}/{aotDllName}.bytes";
            if (!File.Exists(path))
                continue;

            byte[] dllBytes = File.ReadAllBytes(path);
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}
