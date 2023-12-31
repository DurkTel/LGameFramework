using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace LGameFramework.GameLogic.GUI
{
    /// <summary>
    /// ´¥ÃþÆÁÍÏ×§
    /// </summary>
    public class TouchDrag : MonoBehaviour, IBeginDragHandler, IEndDragHandler, IDragHandler
    {
        public UnityAction<PointerEventData> onDragBegin;

        public UnityAction<PointerEventData> onDragIng;

        public UnityAction<PointerEventData> onDragEnd;

        public void OnBeginDrag(PointerEventData eventData)
        {
            onDragBegin?.Invoke(eventData);
        }

        public void OnDrag(PointerEventData eventData)
        {
            onDragIng?.Invoke(eventData);
        }

        public void OnEndDrag(PointerEventData eventData)
        {
            onDragEnd?.Invoke(eventData);
        }
        void OnDestroy()
        {
            onDragIng = null;
            onDragEnd = null;
            onDragBegin = null;
        }
    }
}
