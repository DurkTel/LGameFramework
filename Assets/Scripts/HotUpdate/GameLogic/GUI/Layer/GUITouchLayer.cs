using LGameFramework.GameCore;
using UnityEngine;
using UnityEngine.EventSystems;

namespace LGameFramework.GameLogic.GUI
{
    public class GUITouchLayer : GMGUIManager.GUIViewLayer
    {
        private GMOrbitCamera m_Camera; 
        public GUITouchLayer(GameObject go, Canvas canvas) : base(go, canvas)
        {
            m_GameObject.AddComponent<NoDrawing>();

            var drag = m_GameObject.AddComponent<TouchDrag>();
            drag.onDragIng = OnDarg;
            drag.onDragEnd = OnDarg;
            drag.onDragBegin = OnDarg;

            var click = m_GameObject.AddComponent<TouchClick>();
            click.onClick = OnClick;

            var pinch = m_GameObject.AddComponent<TouchPinch>();
            pinch.onPinch = OnPinch;


            m_Camera = GameFrameworkEntry.GetModule<GMOrbitCamera>();
        }

        private void OnDarg(PointerEventData eventData)
        {
            m_Camera.GetAxisInput(eventData.delta * 0.3f);
        }

        private void OnClick(PointerEventData eventData)
        {

        }

        private void OnPinch(float eventData)
        {

        }
    }
}
