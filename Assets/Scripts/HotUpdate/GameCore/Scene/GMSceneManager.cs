using LGameFramework.GameBase;
using LGameFramework.GameCore.Asset;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace LGameFramework.GameCore.GameScene
{
    public class GMSceneManager : FrameworkModule
    {
        public override int Priority => 99;
        /// <summary>
        /// 加载的携程
        /// </summary>
        private Coroutine m_LoadCoroutine;
        /// <summary>
        /// 加载场景异步
        /// </summary>
        private AsyncOperation m_AsyncOperation;
        /// <summary>
        /// 所有场景
        /// </summary>
        private Dictionary<string, GameScene> m_AllScene;
        public Dictionary<string, GameScene> AllScene { get { return m_AllScene; } }
        /// <summary>
        /// 场景加载进度
        /// </summary>
        public float SceneProgress { get { return m_AsyncOperation != null ? m_AsyncOperation.progress : 0f; } }
        /// <summary>
        /// 当前场景
        /// </summary>
        private GameScene m_CurrentScene;
        public GameScene CurrentScene { get { return m_CurrentScene; } }
        /// <summary>
        /// 上一个场景
        /// </summary>
        private GameScene m_LastScene;
        public GameScene LastScene { get { return m_LastScene; } }

        public override void OnInit()
        {
            m_AllScene = new Dictionary<string, GameScene>();
        }

        internal void SwitchScene(string name, LoadSceneMode mode = LoadSceneMode.Single)
        {
            EventUtility.DispatchImmediately(GMEventRegister.SCENE_LOAD_BEGIN, null, CommonEventArg.Get(name));
            GameScene scene = null;

            if (!m_AllScene.TryGetValue(name, out scene))
            {
                scene = Pool.Get<GameScene>();
                scene.OnInit(name, mode);
                m_AllScene.Add(name, scene);
            }

            //if (scene.IsLoadComplete)
            //{
            //    SwitchSceneInternal(scene);
            //    return;
            //}

            if (m_LoadCoroutine != null)
                StopCoroutine(m_LoadCoroutine);

            m_LoadCoroutine = StartCoroutine(LoadScene(name, mode));
        }

        internal IEnumerator LoadScene(string name, LoadSceneMode mode)
        {
            var fullSceneName = name;
            if (GameLaunchSetting.Get().assetLoadMode == GameLaunchSetting.AssetLoadMode.AssetBundle)
            {
                string abName = name.ToLower() + ".asset"; ;
                var loader = AssetUtility.LoadAssetBundleAsync(abName);
                yield return loader;
                //yield return new WaitForSeconds(2);
                AssetUtility.TryGetAssetBundle(abName, out var abRecord);
                fullSceneName = abRecord.AssetBundle.GetAllScenePaths()[0];
            }

            SceneManager.sceneLoaded += OnSceneLoadComplete;
            GameLogger.DEBUG("加载场景");
            m_AsyncOperation = SceneManager.LoadSceneAsync(fullSceneName, mode);
        }

        private void OnSceneLoadComplete(Scene scene, LoadSceneMode mode)
        {
            SceneManager.sceneLoaded -= OnSceneLoadComplete;
            GameLogger.DEBUG("加载完成", Color.green);

            if (m_AllScene.TryGetValue(scene.name, out GameScene gameScene))
            {
                gameScene.OnLoadComplete(scene);
                EventUtility.Dispatch(GMEventRegister.SCENE_LOAD_COMPLETE, this, CommonEventArg.Get(gameScene.SceneName, m_LastScene == null));

                SwitchSceneInternal(gameScene);
            }
        }

        private void SwitchSceneInternal(GameScene scene)
        {
            if (m_CurrentScene == scene) return;
            m_LastScene = m_CurrentScene;
            m_CurrentScene = scene;
            SceneManager.SetActiveScene(scene.Scene);
            scene.OnEnable();
        }
    }
}
