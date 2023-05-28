using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TestScript : MonoBehaviour
{
    public TextMeshProUGUI text;
    public Image image;
    void Start()
    {
        text.text = "version:2.0";
        AssetManager.Initialize(AssetLoadMode.AssetBundle);
        GameObject go = AssetUtility.LoadAsset<GameObject>("Default_Loading_GUI.prefab");
        //image.sprite = AssetUtility.LoadAsset<Sprite>("create_role_bg_2.png");
        Instantiate(go);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
