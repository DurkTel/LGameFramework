using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.GUI
{
    public interface IUIBehaviour
    {
        GameObject gameObject { get; }
        RectTransform rectTransform { get; }
        void OnInit();
        void OnEnable();
        void OnDisable();
        void OnDispose();
        void SetVisible(bool value);
    }
}
