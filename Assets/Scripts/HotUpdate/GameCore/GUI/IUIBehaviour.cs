using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GUI
{
    public interface IUIBehaviour
    {
        GameObject GameObject { get; }
        RectTransform RectTransform { get; }
        void OnInit();
        void OnEnable();
        void OnDisable();
        void OnDispose();
        void SetVisible(bool value);
    }
}
