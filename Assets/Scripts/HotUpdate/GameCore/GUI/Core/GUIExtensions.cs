using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace GameCore
{
    public static class GUIExtensions
    {
        public static void TileRectTransform(this RectTransform rect)
        {
            rect.anchorMin = Vector2.zero;
            rect.anchorMax = Vector2.one;
            rect.offsetMin = Vector2.zero;
            rect.offsetMax = Vector2.zero;
            rect.localPosition = Vector3.zero;
            rect.localScale = Vector3.one;
        }

        public static void UpdateCanvas(this GameObject go, int sortingOrder)
        {
            Canvas canvas;
            if (!go.TryGetComponent(out canvas))
            {
                canvas = go.AddComponent<Canvas>();
                canvas.overrideSorting = true;
            }

            if (!go.TryGetComponent(out CanvasScaler canvasScaler))
            {
                go.AddComponent<CanvasScaler>();

            }
            if (!go.TryGetComponent(out GraphicRaycaster graphicRaycaster))
            {
                go.AddComponent<GraphicRaycaster>();
            }
            canvas.sortingOrder = sortingOrder;
        }
    }
}
