using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEntry : MonoBehaviour
{
    void Start()
    {
        AssetManager.Initialize(AssetLoadMode.AssetBundle);
        AssetLoader loader = AssetUtility.LoadAssetAsync("Default_Loading_GUI.prefab", typeof(GameObject));
        loader.onComplete = (p) =>
        {
            Instantiate(p.rawObject as GameObject);
        };
    }

    void Update()
    {
        
    }

    public static void Instantiate()
    {
        GameObject go = new GameObject("GameEntry");
        go.AddComponent<GameEntry>();
        DontDestroyOnLoad(go);
        Debug.Log("��Ϸ���ʵ������ɣ�������Ϸ");
    }
}
