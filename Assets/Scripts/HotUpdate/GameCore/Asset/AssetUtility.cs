using System;
using System.CodeDom;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;

public class AssetUtility
{
    /// <summary>
    /// 异步加载
    /// </summary>
    /// <param name="assetName"></param>
    /// <param name="type"></param>
    /// <returns></returns>
    public static AssetLoader LoadAssetAsync(string assetName, System.Type type)
    {
        return AssetManager.instance.LoadAssetAsync(assetName, type);
    }

    /// <summary>
    /// 异步加载
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="assetName"></param>
    /// <returns></returns>
    public static AssetLoader LoadAssetAsync<T>(string assetName)
    { 
        return LoadAssetAsync(assetName, typeof(T));
    }

    /// <summary>
    /// 同步加载
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="assetName"></param>
    /// <returns></returns>
    public static T LoadAsset<T>(string assetName) where T : UnityEngine.Object
    { 
        return AssetManager.instance.LoadAsset<T>(assetName);
    }

    /// <summary>
    /// 停止加载
    /// </summary>
    /// <param name="asstName"></param>
    public static void StopLoadingAsset(string asstName)
    { 
        AssetManager.instance.RemoveAssetLoader(asstName);
    }

    /// <summary>
    /// 获取AB包资源清单
    /// </summary>
    /// <returns></returns>
    public static AssetManifest_AssetBundle GetAssetManifest_Bundle()
    {
        return AssetManager.instance.GetAssetManifest_Bundle();
    }

    /// <summary>
    /// 添加已加载的AB包
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="bundle"></param>
    public static void AddAssetBundle(string abName, AssetBundle bundle)
    {
        AssetManager.instance.AddAssetBundle(abName, bundle);
    }

    /// <summary>
    /// 获取AB包
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="bundle"></param>
    /// <returns></returns>
    public static bool TryGetAssetBundle(string abName, out AssetBundle bundle)
    {
        return AssetManager.instance.TryGetAssetBundle(abName, out bundle);
    }

    /// <summary>
    /// 是否存在这个AB包
    /// </summary>
    /// <param name="abName"></param>
    /// <param name="bundle"></param>
    /// <returns></returns>
    public static bool IsExistAssetBundle(string abName)
    {
        return AssetManager.instance.IsExistAssetBundle(abName);
    }

    /// <summary>
    /// 加载AB包依赖
    /// </summary>
    /// <param name="abNames"></param>
    public static void LoadDependencies(List<string> abNames)
    {
        AssetManager.instance.LoadDependencies(abNames);
    }

    /// <summary>
    /// 清除已加载的AB包
    /// </summary>
    /// <param name="abName"></param>
    public static void RemoveAssetBundle(string abName)
    {
        AssetManager.instance.RemoveAssetBundle(abName);
    }

    /// <summary>
    /// 销毁/释放资源
    /// </summary>
    /// <param name="obj"></param>
    public static void Destroy(UnityEngine.Object obj)
    {
        AssetCache.Destroy(obj);
    }
}
