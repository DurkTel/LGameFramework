using GameCore;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using LGameFramework.GameBase.Pool;
using LGameFramework.GameBase;

namespace GameCore.Asset
{
    public enum AssetLoadMode
    {
        AssetBundle,
        Editor
    }
    public class FMAssetManager : FrameworkModule
    {
        private static AssetLoadMode s_AssetLoadMode;
        public static AssetLoadMode AssetLoadMode { get { return s_AssetLoadMode; } }
        internal override int Priority { get { return 99; } }
        internal override GameObject GameObject { get; set; }
        internal override Transform Transform { get; set; }

        /// <summary>
        /// ���ڼ��ص���Դ������
        /// </summary>
        private DictionaryEx<string, AssetLoader> m_AssetLoaders = new DictionaryEx<string, AssetLoader>();
        /// <summary>
        /// ������ɵ��б�
        /// </summary>
        private List<string> m_CompleteList = new List<string>();
        /// <summary>
        /// ab����Դ�嵥
        /// </summary>
        private AssetManifest_Bundle m_FileManifest;
        /// <summary>
        /// ���м��ع���ab��
        /// </summary>
        private Dictionary<string, AssetBundleRecord> m_AllAB = new Dictionary<string, AssetBundleRecord>(100);
        /// <summary>
        /// �ȴ��ͷŵ�ab���б�
        /// </summary>
        private List<string> m_WaitDestroyABList = new List<string>(100);
        /// <summary>
        /// �ȴ��ͷ�ab����ʱ��
        /// </summary>
        private float m_WaitDestroyTime;

        internal override void OnInit()
        {
            s_AssetLoadMode = AssetLoadMode.AssetBundle;
        }

        internal override void Update(float deltaTime, float unscaledTime)
        {
            if (m_AssetLoaders.Count <= 0) return;

            AssetLoader loader;

            //���µ�ǰÿ���������Ľ���
            for (int i = 0; i < m_AssetLoaders.keyList.Count; i++)
            {
                string name = m_AssetLoaders.keyList[i];
                loader = m_AssetLoaders[name];
                loader.onProgress?.Invoke(loader.Progress);

                loader.Update();

                if (loader.IsDone)
                    m_CompleteList.Add(name);
            }


            if (m_CompleteList.Count <= 0) return;

            //������� �Ƴ�������
            foreach (string name in m_CompleteList)
            {
                if (m_AssetLoaders.TryGetValue(name, out loader))
                {
                    loader.onComplete?.Invoke(loader);
                    loader.Dispose();
                    m_AssetLoaders.Remove(name);
                }
            }

            m_CompleteList.Clear();
        }

        internal override void LateUpdate(float deltaTime, float unscaleDeltaTime)
        {
            if (m_AllAB.Count <= 0) return;

            string abName;
            AssetBundleRecord record;
            foreach (var ab in m_AllAB)
            {
                abName = ab.Key;
                record = ab.Value;
                if (m_WaitDestroyABList.Contains(abName))
                    continue;

                if (record.DpendsReferenceCount <= 0 && record.RawReferenceCount <= 0 && !record.IsAssetLoading)
                {
                    record.BeginDestroyTime = unscaleDeltaTime;
                    m_WaitDestroyABList.Add(abName);
                }
            }

            for (int i = m_WaitDestroyABList.Count - 1; i >= 0; i--)
            {
                abName = m_WaitDestroyABList[i];
                record = m_AllAB[abName];
                if (unscaleDeltaTime - record.BeginDestroyTime >= m_WaitDestroyTime)
                {
                    record.Unload(true);
                    Pool<AssetBundleRecord>.Release(record);
                    m_WaitDestroyABList.RemoveAt(i);
                    m_AllAB.Remove(abName);
                }
            }
        }

        public AssetManifest_Bundle GetAssetManifest_Bundle()
        {
            if (m_FileManifest == null)
            {
                m_FileManifest = ScriptableObject.CreateInstance<AssetManifest_Bundle>();
                string path = Path.Combine(AssetDefine.localDataPath, "assetManifest.json");
                if(!File.Exists(path))
                    path = Path.Combine(AssetDefine.s_BuildInPath, "assetManifest.json");

                string allData = File.ReadAllText(path);
                if (!string.IsNullOrEmpty(allData))
                    JsonHelper.FromJsonOverwrite(allData, m_FileManifest, true);
            }

            return m_FileManifest;
        }

        /// <summary>
        /// ��¼һ��AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <param name="bundle">��</param>
        public AssetBundleRecord AddAssetBundle(string abName, AssetBundle bundle)
        {
            AssetBundleRecord record = Pool<AssetBundleRecord>.Get();
            record.AssetBundle = bundle;
            record.BundleName = abName;

            if (!m_AllAB.ContainsKey(abName))
                m_AllAB.Add(abName, record);

            return record;
        }

        /// <summary>
        /// �Ƴ�һ��AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <returns>�Ƿ��Ƴ��ɹ�</returns>
        public bool RemoveAssetBundle(string abName)
        {
            AssetBundleRecord bundle;
            if (m_AllAB.TryGetValue(abName, out bundle))
            {
                bundle.Unload(true);
                m_AllAB.Remove(abName);
                return true;
            }

            return false;
        }

        /// <summary>
        /// ��ȡһ��AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <param name="bundle">��</param>
        /// <returns>�Ƿ��ȡ�ɹ�</returns>
        public bool TryGetAssetBundle(string abName, out AssetBundleRecord bundle)
        {
            return m_AllAB.TryGetValue(abName, out bundle);
        }

        /// <summary>
        /// �Ƿ�������AB��
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        public bool IsExistAssetBundle(string abName)
        {
            return m_AllAB.ContainsKey(abName);
        }

        public AssetLoader LoadAssetAsync<T>(string assetName)
        {
            return LoadAssetAsync(assetName, typeof(T));
        }

        /// <summary>
        /// �첽����
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public AssetLoader LoadAssetAsync(string assetName, Type type)
        {
            AssetLoader loader;

            if (!m_AssetLoaders.TryGetValue(assetName, out loader))
            {
                switch (s_AssetLoadMode)
                {
                    case AssetLoadMode.AssetBundle:
                        loader = new AssetBundleLoader(assetName.ToLower(), type, true);
                        break;
                    case AssetLoadMode.Editor:
                        loader = new AssetEditorLoader(assetName, type);
                        break;
                }

                loader.Module = this;
                m_AssetLoaders.Add(assetName, loader);
            }


            return loader;
        }

        /// <summary>
        /// ͬ������
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        public T LoadAsset<T>(string assetName) where T : UnityEngine.Object
        {
            AssetLoader loader;

            if (!m_AssetLoaders.TryGetValue(assetName, out loader))
            {
                switch (s_AssetLoadMode)
                {
                    case AssetLoadMode.AssetBundle:
                        loader = new AssetBundleLoader(assetName.ToLower(), typeof(T), false);
                        break;
                    case AssetLoadMode.Editor:
                        loader = new AssetEditorLoader(assetName, typeof(T));
                        break;
                }

                loader.Module = this;
                loader.Update();
                m_AssetLoaders.Add(assetName, loader);
            }

            if (typeof(T) == typeof(GameObject))
                return loader.GetInstantiate<T>();

            return loader.GetRawObject<T>();
        }

        /// <summary>
        /// �Ƴ�������
        /// </summary>
        /// <param name="assetName"></param>
        public void RemoveAssetLoader(string assetName)
        {
            if (m_AssetLoaders.TryGetValue(assetName, out AssetLoader loader))
            {
                loader.Dispose();
                m_AssetLoaders.Remove(assetName);
            }
        }

        /// <summary>
        /// ����/�ͷ���Դ
        /// </summary>
        /// <param name="obj"></param>
        public void Destroy(UnityEngine.Object obj)
        {
            AssetCache.Destroy(obj);
        }

    }
}