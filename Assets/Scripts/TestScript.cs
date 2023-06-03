using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TestScript : SingletonMono<TestScript>
{
    public TextMeshProUGUI text;
    public TextMeshProUGUI title;
    void Start()
    {
        title.text = "version:2.0";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
