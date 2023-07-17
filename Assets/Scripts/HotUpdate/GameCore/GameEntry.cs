using GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEntry : MonoBehaviour
{

    public GameObject test;
    void Start()
    {
        AssetManager.Initialize(AssetLoadMode.AssetBundle);
        GUIManager.instance.Initialize();
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.A)) 
        {
            GUIManager.instance.OpenView<TestView>();

        }

        if (Input.GetKeyDown(KeyCode.S))
        {
            GUIManager.instance.CloseView<TestView>();

        }
    }

    public static void Instantiate()
    {
        GameObject go = new GameObject("GameEntry");
        go.AddComponent<GameEntry>();
        DontDestroyOnLoad(go);
        Debug.Log("游戏入口实例化完成，进入游戏");
    }
}
