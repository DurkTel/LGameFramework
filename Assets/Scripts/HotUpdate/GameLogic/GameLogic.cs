using GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameCore.Asset;
using GameCore.Entity;
using System;
using LGameFramework.GameCore.Input;

public class GameLogic : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        //GameEntry.GetModule<FMCrossPlatformInput>().InitGameInput();


        //GameEntry.GetModule<FMEventManager>().Register(FMEventRegister.INPUT_DISPATCH_HANDLE_BUTTON, EventTest);

    }

    // Update is called once per frame
    void Update()
    {
       
    }


    private void EventTest(object sender, EventArgs arg)
    {
        FMCrossPlatformInput.InputActionArgs arg1 = (FMCrossPlatformInput.InputActionArgs)arg;
        print(arg1.ToString());
    }

}
