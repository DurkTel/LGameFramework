using GameCore;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GameCore.Asset;
using GameCore.Entity;
using System;

public class GameLogic : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        GameEntry.GetModule<FMEventManager>().Register(1, EventTest);
        GameEntry.GetModule<FMEventManager>().Register(1, EventTest2);
        GameEntry.GetModule<FMEventManager>().UnRegister(1, EventTest2);

    }

    Entity entity;

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.A))
        {
            GameEntry.GetModule<FMEventManager>().Dispatch(1, this, new EventTestArg());
        }

    }

    private class EventTestArg : EventArgs
    {
        public bool show = false;
        public EventTestArg()
        {
            show = true;
        }
    }

    private void EventTest(object sender, EventArgs arg)
    {
        EventTestArg arg1 = (EventTestArg)arg;
        for (int i = 0; i < 1000; i++) 
        {
            print(i);
        }
    }

    private void EventTest2(object sender, EventArgs arg)
    {
        EventTestArg arg1 = (EventTestArg)arg;
        for (int i = 1000; i < 2000; i++)
        {
            print(i);
        }
        print(arg1.show);
    }
}
