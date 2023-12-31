using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace LGameFramework.GameLogic.GUI
{
    /// <summary>
    /// 触摸屏点击
    /// </summary>
    public class TouchClick : MonoBehaviour, IPointerClickHandler, IPointerDownHandler, IPointerUpHandler
    {
        public UnityAction<PointerEventData> onClick;

        public UnityAction<PointerEventData> onDownPointer;

        public UnityAction<PointerEventData> onUpPointer;

        //按下与抬起距离过远将不响应
        public float distance = -1f;

        public void OnPointerClick(PointerEventData eventData)
        {
            if (distance != -1)
            {
                if (Mathf.Abs((eventData.position - eventData.pressPosition).magnitude) > distance)
                    return;
            }

            onClick?.Invoke(eventData);
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            onDownPointer?.Invoke(eventData);
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            onUpPointer?.Invoke(eventData);
        }
    }
}
