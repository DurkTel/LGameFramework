using GameCore;
using UnityEngine;
using GameCore.Asset;
using System;
using LGameFramework.GameCore.Input;
public class GameLogic : MonoBehaviour
{
    GameObject tmep;

    // Start is called before the first frame update
    void Start()
    {
        //GameEntry.GetModule<FMCrossPlatformInput>().InitGameInput();


        //GameEntry.GetModule<FMEventManager>().Register(FMEventRegister.INPUT_DISPATCH_HANDLE_BUTTON, EventTest);
        Loader loader = GameEntry.GetModule<FMAssetManager>().LoadAssetAsync<GameObject>("Default_Loading_GUI.prefab");
        loader.onComplete = (p) =>
        {
            tmep = p.GetInstantiate<GameObject>();
        };
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            GameEntry.GetModule<FMAssetManager>().Destroy(tmep);
        }
    }
    private void EventTest(object sender, EventArgs arg)
    {
        FMCrossPlatformInput.InputActionArgs arg1 = (FMCrossPlatformInput.InputActionArgs)arg;
        print(arg1.ToString());
    }

}
