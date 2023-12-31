using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using LGameFramework.GameBase;
using UnityEngine.Events;
using System.Collections;

namespace LGameFramework.GameCore.Asset
{
    public enum AssetLoadMode
    {
        AssetBundle,
        Editor
    }
    public sealed class GMAssetManager : FrameworkModule
    {
        private static AssetLoadMode s_AssetLoadMode;
        public static AssetLoadMode AssetLoadMode { get { return s_AssetLoadMode; } }
        public override int Priority { get { return 99; } }
        internal GamePathSetting.FilePathStruct GamePath { get; set; }

        /// <summary>
        /// ���ڼ��ص���Դ������
        /// </summary>
        private GameDictionary<string, Loader> m_AssetLoaders;
        public GameDictionary<string, Loader> AssetLoaders { get { return m_AssetLoaders; } } 
        /// <summary>
        /// ���ڼ��ص�AB������
        /// </summary>
        private List<AssetBundleLoader> m_AssetBundleLoaders;
        public List<AssetBundleLoader> AssetBundleLoaders { get { return m_AssetBundleLoaders; } }
        /// <summary>
        /// ������ɵ��б�
        /// </summary>
        private List<string> m_CompleteList;
        public List<string> CompleteList { get { return m_CompleteList; } }
        /// <summary>
        /// ab����Դ�嵥
        /// </summary>
        private AssetManifest_Bundle m_FileManifest;
        /// <summary>
        /// ���м��ع���ab��
        /// </summary>
        private Dictionary<string, AssetBundleRecord> m_AllAB;
        public Dictionary<string, AssetBundleRecord> AllAB { get { return m_AllAB; } }
        /// <summary>
        /// �ȴ��ͷŵ���Դ
        /// </summary>
        private GameDictionary<string, float> m_WaitDestroyList;
        public GameDictionary<string, float> WaitDestroyList { get { return m_WaitDestroyList; } }
        /// <summary>
        /// �ȴ��ͷŵ�ab���б�
        /// </summary>
        private List<string> m_WaitDestroyABList;
        public List<string> WaitDestroyABList { get { return m_WaitDestroyABList; } set { m_WaitDestroyABList = value; } }
        /// <summary>
        /// �ȴ��ͷ�ab����ʱ��
        /// </summary>
        private float m_WaitDestroyTime;
        public float WaitDestroyTime { get { return m_WaitDestroyTime; } }
        /// <summary>
        /// �ļ�������
        /// </summary>
        private AssetFileDownloadQueue m_FileDownloadQueue;

        #region �������ں���
        public override void OnInit()
        {
            GamePath = GamePathSetting.Get().CurrentPlatform();
            s_AssetLoadMode = GameLaunchSetting.Get().assetLoadMode == GameLaunchSetting.AssetLoadMode.Editor ? AssetLoadMode.Editor : AssetLoadMode.AssetBundle;

            m_AssetLoaders = new GameDictionary<string, Loader>();
            m_CompleteList = new List<string>();
            m_AllAB = new Dictionary<string, AssetBundleRecord>(100);
            m_WaitDestroyList = new GameDictionary<string, float>(100);
            m_WaitDestroyABList = new List<string>(100);
            m_WaitDestroyTime = 10f;
        }

        public override void Update(float deltaTime, float unscaledTime)
        {
            if (m_FileDownloadQueue != null)
                m_FileDownloadQueue.Update();

            if (m_AssetBundleLoaders != null && m_AssetBundleLoaders.Count > 0)
            {
                AssetBundleLoader abLoader;
                for (int i = m_AssetBundleLoaders.Count; i > 0; i--)
                {
                    abLoader = m_AssetBundleLoaders[i];
                    abLoader.Update();
                    if (abLoader.IsDone)
                    {
                        abLoader.onComplete?.Invoke(abLoader);
                        abLoader.Dispose();
                        m_AssetBundleLoaders.RemoveAt(i);
                    }
                }
            }

            if (m_AssetLoaders.Count <= 0) return;

            Loader loader;

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

        public override void LateUpdate(float deltaTime, float unscaleDeltaTime)
        {
            //�ȼ����Ҫ���ٵ���Դ
            if (m_WaitDestroyList.Count > 0)
            {
                AssetCache.RawObjectInfo rawInfo;
                int count = m_WaitDestroyList.Count - 1;
                string name;
                for (int i = count; i >= 0; i--)
                {
                    name = m_WaitDestroyList.keyList[i];
                    if (unscaleDeltaTime - m_WaitDestroyList[name] >= m_WaitDestroyTime)
                    {
                        AssetCache.RawAssetMap.TryGetValue(name, out rawInfo);
                        //AB��ģʽ�¼�������
                        if (AssetLoadMode == AssetLoadMode.AssetBundle)
                        {
                            //�����Դ��AB���ü�1
                            if (TryGetAssetBundle(rawInfo.bundleName, out AssetBundleRecord ab))
                                ab.RawReferenceCount--;
                        }

                        //����Դ����
                        if (rawInfo.rawObject is TextAsset)
                            UnityEngine.Object.DestroyImmediate(rawInfo.rawObject);
                        if (!(rawInfo.rawObject is GameObject))
                            Resources.UnloadAsset(rawInfo.rawObject);

                        AssetCache.RemoveRawObject(rawInfo.asstName);
                        m_WaitDestroyList.Remove(name);
                    }
                }
            }

            //�ټ����Ҫ���ٵ�AB��
            if (m_AllAB.Count <= 0) return;

            string abName;
            AssetBundleRecord record;
            foreach (var ab in m_AllAB)
            {
                abName = ab.Key;
                record = ab.Value;
                if (m_WaitDestroyABList.Contains(abName) || !record.IsLoadComplete)
                    continue;

                //��������Ϊ0 ��Դ��������Ϊ0 �Ҳ��ڼ�����Դ�� ׼����ʼж��
                if (record.DpendsReferenceCount <= 0 && record.RawReferenceCount <= 0 && !record.IsAssetLoading)
                {
                    record.BeginUnloadTime = unscaleDeltaTime;
                    m_WaitDestroyABList.Add(abName);
                }
            }

            for (int i = m_WaitDestroyABList.Count - 1; i >= 0; i--)
            {
                abName = m_WaitDestroyABList[i];
                record = m_AllAB[abName];
                if (unscaleDeltaTime - record.BeginUnloadTime >= m_WaitDestroyTime)
                {
                    record.Unload(true);
                    Pool.Release(record);
                    m_WaitDestroyABList.RemoveAt(i);
                    m_AllAB.Remove(abName);

                    //������������
                    AssetManifest_Bundle assetManifest = GetAssetManifest_Bundle();
                    string[] depends = assetManifest.GetDependsName(abName);
                    foreach (string depend in depends)
                        if (TryGetAssetBundle(depend, out record))
                            record.DpendsReferenceCount--;
                }
            }
        }
        #endregion

        #region AB�����
        /// <summary>
        /// ��ȡ��Դ�嵥
        /// </summary>
        /// <returns></returns>
        internal AssetManifest_Bundle GetAssetManifest_Bundle()
        {
            if (m_FileManifest == null)
            {
                m_FileManifest = ScriptableObject.CreateInstance<AssetManifest_Bundle>();
                string path = Path.Combine(GamePath.downloadDataPath.AssetPath, GamePath.assetManifestFileName);
                if(!File.Exists(path))
                    path = Path.Combine(GamePath.buildingPath.AssetPath, GamePath.assetManifestFileName);

                string allData = File.ReadAllText(path);
                if (!string.IsNullOrEmpty(allData))
                    JsonHelper.FromJsonOverwrite(allData, m_FileManifest, true);
            }

            return m_FileManifest;
        }

        /// <summary>
        /// ��¼һ��AB����ʶ
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        internal AssetBundleRecord RecordAssetBundle(string abName)
        {
            AssetBundleRecord record;
            if (!m_AllAB.TryGetValue(abName, out record))
            {
                record = Pool.Get<AssetBundleRecord>();
                record.BundleName = abName;
                m_AllAB.Add(abName, record);
            }

            return record;
        }

        /// <summary>
        /// ��¼һ��AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <param name="bundle">��</param>
        internal AssetBundleRecord AddAssetBundle(string abName, AssetBundle bundle)
        {
            AssetBundleRecord record;
            if (!m_AllAB.TryGetValue(abName, out record))
                record = RecordAssetBundle(abName);

            record.AssetBundle = bundle;

            return record;
        }

        /// <summary>
        /// �Ƴ�һ��AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <returns>�Ƿ��Ƴ��ɹ�</returns>
        internal bool RemoveAssetBundle(string abName)
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
        /// ��ȡһ��AB��
        /// </summary>
        /// <param name="abName">����</param>
        public AssetBundleRecord GetAssetBundle(string abName)
        {
            return m_AllAB.ContainsKey(abName) ? m_AllAB[abName] : null;
        }

        /// <summary>
        /// �Ƿ�������AB��
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        internal bool IsExistAssetBundle(string abName)
        {
            return m_AllAB.ContainsKey(abName);
        }

        /// <summary>
        /// ����AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <param name="async">�Ƿ��첽</param>
        internal Loader LoadAssetBundle(string abName)
        {
            string[] depends = GetAssetManifest_Bundle().GetDependsName(abName);
        
            foreach (string depend in depends) //�ȼ�������
                LoadAssetBundleInternal(depend, false, true);

            return LoadAssetBundleInternal(abName, false);
        }

        /// <summary>
        /// �첽����AB��
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        internal Coroutine LoadAssetBundleAsync(string abName)
        {
            return StartCoroutine(LoadDependsAssetBundle(abName));
        }

        /// <summary>
        /// �첽��������
        /// </summary>
        /// <param name="abName"></param>
        /// <returns></returns>
        private IEnumerator LoadDependsAssetBundle(string abName)
        {
            string[] depends = GetAssetManifest_Bundle().GetDependsName(abName);
            int length = depends.Length;
            int index = 0;
            while (index < length)
            { 
                var depend = depends[index];
                Loader loader = LoadAssetBundleInternal(depend, true, true);
                yield return loader;
                index++;
            }

            yield return LoadAssetBundleInternal(abName, true);
            GameLogger.DEBUG("������AB"+ abName);
        }

        /// <summary>
        /// ����AB��
        /// </summary>
        /// <param name="abName">����</param>
        /// <param name="async">�Ƿ��첽</param>
        /// <param name="passive">�Ƿ񱻶�</param>
        private Loader LoadAssetBundleInternal(string abName, bool async, bool passive = false)
        {
            AssetBundleRecord record;
            if (!TryGetAssetBundle(abName, out record) && !m_AssetLoaders.ContainsKey(abName))
            {
                AssetBundleLoader loader = Pool.Get<AssetBundleLoader>();
                loader.SetData(abName, async, passive);
                loader.AssetModule = this;
                loader.Update();
                m_AssetLoaders.Add(abName, loader);

            }
            else if (passive)
                record.DpendsReferenceCount++; //�Ѿ����ع��� ���ü�����1

            //����ǵȴ����ٵ� �Ƴ���ʶ
            RemoveABWaitDestroy(abName);

            return m_AssetLoaders.GetValueOrDefault(abName, null);
        }

        #endregion

        #region �ⲿ���ؽӿ�
        /// <summary>
        /// �첽����
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="assetName"></param>
        /// <returns></returns>
        internal Loader LoadAssetAsync<T>(string assetName)
        {
            return LoadAssetAsync(assetName, typeof(T));
        }

        internal void LoadAssetAsync<T>(string assetName, UnityAction<Loader> callBack)
        {
            Loader loader = LoadAssetAsync(assetName, typeof(T));
            loader.onComplete += callBack;
        }

        /// <summary>
        /// �첽����
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        internal Loader LoadAssetAsync(string assetName, Type type)
        {
            return LoadAssetInternal(assetName, type, true);
        }

        /// <summary>
        /// ͬ������
        /// </summary>
        /// <param name="assetName"></param>
        /// <param name="type"></param>
        /// <returns></returns>
        internal T LoadAsset<T>(string assetName) where T : UnityEngine.Object
        {
            Loader loader = LoadAssetInternal(assetName, typeof(T), false);
            loader.Update();

            if (typeof(T) == typeof(GameObject))
                return loader.GetInstantiate<T>();

            return loader.GetRawObject<T>();
        }

        private Loader LoadAssetInternal(string assetName, Type type, bool async)
        {
            Loader loader;

            RemoveWaitDestroy(assetName);
            if (!m_AssetLoaders.TryGetValue(assetName, out loader))
            {
                switch (s_AssetLoadMode)
                {
                    case AssetLoadMode.AssetBundle:
                        loader = Pool.Get<AssetLoader>();
                        loader.SetData(assetName.ToLower(), type, async);
                        break;
                    case AssetLoadMode.Editor:
                        loader = Pool.Get<AssetEditorLoader>();
                        loader.SetData(assetName, type);
                        break;
                }

                loader.AssetModule = this;
                m_AssetLoaders.Add(assetName, loader);
            }

            return loader;
        }


        /// <summary>
        /// ���һ�������ص���Դ
        /// </summary>
        /// <param name="downloadURL"></param>
        /// <param name="downloadPath"></param>
        /// <returns></returns>
        internal AssetFileDownloader EnqueueDownload(string downloadURL, string downloadPath)
        {
            m_FileDownloadQueue ??= new AssetFileDownloadQueue();
            return m_FileDownloadQueue.Enqueue(downloadURL, downloadPath);
        }

        /// <summary>
        /// �Ƴ�������
        /// </summary>
        /// <param name="assetName"></param>
        internal void RemoveAssetLoader(string assetName)
        {
            if (m_AssetLoaders.TryGetValue(assetName, out Loader loader))
            {
                loader.Dispose();
                m_AssetLoaders.Remove(assetName);
            }
        }

        /// <summary>
        /// �Ƴ��ȴ����� 
        /// </summary>
        /// <param name="abName"></param>
        internal void RemoveABWaitDestroy(string abName)
        { 
            if (m_WaitDestroyABList.Contains(abName))
                m_WaitDestroyABList.Remove(abName);
        }

        /// <summary>
        /// �Ƴ��ȴ����� 
        /// </summary>
        /// <param name="name"></param>
        internal void RemoveWaitDestroy(string name)
        {
            if (m_WaitDestroyList.ContainsKey(name))
                m_WaitDestroyList.Remove(name);
        }

        /// <summary>
        /// ����/�ͷ���Դ
        /// </summary>
        /// <param name="obj"></param>
        public void Destroy(UnityEngine.Object obj)
        {
            AssetCache.Destroy(obj);
        }
        #endregion
    }
}