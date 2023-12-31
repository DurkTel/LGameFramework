using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace LGameFramework.GameCore.GameScene
{
    public class GameScene
    {
        private string m_SceneName;
        public string SceneName { get { return m_SceneName; } }

        private LoadSceneMode m_LoadSceneMode;
        public LoadSceneMode LoadSceneMode { get { return m_LoadSceneMode; } }

        private bool m_IsLoadComplete;
        public bool IsLoadComplete { get {  return m_IsLoadComplete; } }

        private Scene m_Scene;
        public Scene Scene { get { return m_Scene; } }

        private GameObject m_Root;
        public GameObject Root { get { return m_Root; } }

        public void OnInit(string name, LoadSceneMode mode) 
        {
            m_SceneName = name;
            m_LoadSceneMode = mode;
            m_IsLoadComplete = false;
        }

        public void OnLoadComplete(Scene scene)
        {
            m_Scene = scene;
            m_IsLoadComplete = true;
            m_Root = GameObject.Find("Scene");

        }

        public void OnEnable()
        { 
            
        }

        public void OnDisable()
        { 
            
        }
    }
}
