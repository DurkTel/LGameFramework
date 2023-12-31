using LGameFramework.GameBase;
using LGameFramework.GameCore.Asset;
using System;
using UnityEngine;
using UnityEngine.Events;

namespace LGameFramework.GameCore
{
    public class AssetUtility : ModuleUtility<GMAssetManager>
    {

        /// <summary>
        /// 获取资源清单
        /// </summary>
        public static AssetManifest_Bundle GetAssetManifest_Bundle()
        {
            return Instance.GetAssetManifest_Bundle();
        }

        /// <summary>
        /// 获取一个AB包
        /// </summary>
        /// <param name="abName">包名</param>
        /// <param name="bundle">包</param>
        /// <returns>是否获取成功</returns>
        public static bool TryGetAssetBundle(string abName, out AssetBundleRecord bundle)
        {
            return Instance.TryGetAssetBundle(abName, out bundle);
        }

        /// <summary>
        /// 异步加载
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public static Loader LoadAssetAsync<T>(string assetName)
        {
            return Instance.LoadAssetAsync<T>(assetName);
        }

        /// <summary>
        /// 异步加载
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="assetName"></param>
        /// <param name="callBack"></param>
        public static void LoadAssetAsync<T>(string assetName, UnityAction<Loader> callBack)
        {
            Instance.LoadAssetAsync<T>(assetName, callBack);
        }

        /// <summary>
        /// 异步加载
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public static Loader LoadAssetAsync(string assetName, Type type)
        {
            return Instance.LoadAssetAsync(assetName, type);
        }

        /// <summary>
        /// 同步加载
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public static T LoadAsset<T>(string assetName) where T : UnityEngine.Object
        {
            return Instance.LoadAsset<T>(assetName);
        }

        /// <summary>
        /// 加载AB包
        /// </summary>
        /// <param name="abName">包名</param>
        public static Loader LoadAssetBundle(string abName)
        {
            return Instance.LoadAssetBundle(abName);
        }

        /// <summary>
        /// 异步加载AB包
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        public static Coroutine LoadAssetBundleAsync(string abName)
        {
            return Instance.LoadAssetBundleAsync(abName);
        }

        /// <summary>
        /// 销毁/释放资源
        /// </summary>
        /// <param name="obj"></param>
        public static void Destroy(UnityEngine.Object obj)
        {
            Instance.Destroy(obj);
        }
    }
}
