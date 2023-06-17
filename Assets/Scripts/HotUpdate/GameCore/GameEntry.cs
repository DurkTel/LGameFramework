using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEntry : MonoBehaviour
{
    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public static void Instantiate()
    {
        GameObject go = new GameObject("GameEntry");
        go.AddComponent<GameEntry>();
        DontDestroyOnLoad(go);
        Debug.Log("游戏入口实例化完成，进入游戏");
    }
}
