using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public interface IView
    {
        GameObject gameObject { get; }
        RectTransform rectTransform { get; }
        void OnInitView();
        void OnEnableView();
        void OnDisableView();
        void OnDisposeView();
        void SetVisible(bool value);
    }
}
