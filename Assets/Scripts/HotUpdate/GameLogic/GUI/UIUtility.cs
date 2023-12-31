using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.GUI
{
    public class UIUtility : ModuleUtility<GMGUIManager>
    {
        public static bool IsShowIng<T>()
        {
            return Instance.IsShowIng<T>();
        }

        public static bool IsCanOpenView<T>()
        {
            return Instance.IsCanOpenView<T>();
        }

        public static bool CloseView<T>() where T : GUIView
        {
            return Instance.CloseView<T>();
        }

        public static bool CloseView(Type type)
        {
            return Instance.CloseView(type);
        }

        public static T OpenView<T>() where T : GUIView, new()
        {
            return Instance.OpenView<T>();
        }

        public static void WaitToDestroy(GUIView view, float destroyTime)
        {
            Instance.WaitToDestroy(view, destroyTime);
        }

    }
}
