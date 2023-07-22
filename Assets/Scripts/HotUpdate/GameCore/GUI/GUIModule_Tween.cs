using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace GameCore.GUI
{
    public partial class GUIModule
    {
        public static void GUITweenDefault(GUIView view, bool open, UnityAction callBack)
        {
            callBack?.Invoke();
        }
    }
}
