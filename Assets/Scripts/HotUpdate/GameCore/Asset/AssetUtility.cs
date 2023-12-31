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
        /// ��ȡ��Դ�嵥
        /// </summary>
        public static AssetManifest_Bundle GetAssetManifest_Bundle()
        {
            return Instance.GetAssetManifest_Bundle();
        }

        /// <summary>
        /// ��ȡһ��AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <param name="bundle">��</param>
        /// <returns>�Ƿ��ȡ�ɹ�</returns>
        public static bool TryGetAssetBundle(string abName, out AssetBundleRecord bundle)
        {
            return Instance.TryGetAssetBundle(abName, out bundle);
        }

        /// <summary>
        /// �첽����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public static Loader LoadAssetAsync<T>(string assetName)
        {
            return Instance.LoadAssetAsync<T>(assetName);
        }

        /// <summary>
        /// �첽����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="assetName"></param>
        /// <param name="callBack"></param>
        public static void LoadAssetAsync<T>(string assetName, UnityAction<Loader> callBack)
        {
            Instance.LoadAssetAsync<T>(assetName, callBack);
        }

        /// <summary>
        /// �첽����
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public static Loader LoadAssetAsync(string assetName, Type type)
        {
            return Instance.LoadAssetAsync(assetName, type);
        }

        /// <summary>
        /// ͬ������
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public static T LoadAsset<T>(string assetName) where T : UnityEngine.Object
        {
            return Instance.LoadAsset<T>(assetName);
        }

        /// <summary>
        /// ����AB��
        /// </summary>
        /// <param name="abName">����</param>
        public static Loader LoadAssetBundle(string abName)
        {
            return Instance.LoadAssetBundle(abName);
        }

        /// <summary>
        /// �첽����AB��
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        public static Coroutine LoadAssetBundleAsync(string abName)
        {
            return Instance.LoadAssetBundleAsync(abName);
        }

        /// <summary>
        /// ����/�ͷ���Դ
        /// </summary>
        /// <param name="obj"></param>
        public static void Destroy(UnityEngine.Object obj)
        {
            Instance.Destroy(obj);
        }
    }
}
