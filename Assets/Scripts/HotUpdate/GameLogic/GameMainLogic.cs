using GameCore;
using UnityEngine;
using GameCore.Asset;
using System;
using GameCore.Entity;
using GameCore.Audio;
using GameLogic;

public class GameMainLogic : MonoBehaviour
{
    private void Awake()
    {
        GameWorldMessage.OninitWorld();
        GameWorldMessage.OninitWorldMessage();
    }
    void Start()
    {
        GameFrameworkEntry.GetModule<GMAudioManager>().Play("CityLoopAudio", "gate_new.ogg");
    }

    void Update()
    {
        GameWorldDrives.Update();
    }

}
