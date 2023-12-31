using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;

namespace LGameFramework.GameLogic.GUI
{
    /// <summary>
    /// ´¥ÃþÆÁ·Å´óËõÐ¡
    /// </summary>
    public class TouchPinch : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
    {
        public float deltaDisnatnce = 0.1f;
        public UnityAction<float> onPinch;

        private int m_PointerIdZero = -99;
        private Vector2 m_LastPosPointerZero = Vector2.zero;

        private int m_PointerIdOne = -99;
        private Vector2 m_LastPosPointerOne = Vector2.zero;


        public void OnDrag(PointerEventData eventData)
        {
            if (m_PointerIdZero < 0 || m_PointerIdOne < 0)
                return;

            if (!(eventData.pointerId == m_PointerIdZero || eventData.pointerId == m_PointerIdOne))
                return;


            Vector2 touchZeroPrevPos = m_LastPosPointerZero;
            Vector2 touchOnePrevPos = m_LastPosPointerOne;

            Vector2 touchZeroPos = touchZeroPrevPos;
            Vector2 touchOnePos = touchOnePrevPos;

            if (eventData.pointerId == m_PointerIdZero)
            {
                touchZeroPos = eventData.position;
                m_LastPosPointerZero = touchZeroPos;
            }
            else if (eventData.pointerId == m_PointerIdOne)
            {
                touchOnePos = eventData.position;
                m_LastPosPointerOne = touchOnePos;
            }


            float prevTouchDeltaMag = (touchZeroPrevPos - touchOnePrevPos).magnitude;
            float touchDeltaMag = (touchZeroPos - touchOnePos).magnitude;

            float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;

            if (Mathf.Abs(deltaMagnitudeDiff) >= deltaDisnatnce)
            {
                if (onPinch != null)
                    onPinch.Invoke(deltaMagnitudeDiff);
            }
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            if (eventData.pointerId < 0) return;


            if (m_PointerIdZero == -99)
            {
                m_PointerIdZero = eventData.pointerId;
                m_LastPosPointerZero = eventData.position;
            }
            else if (m_PointerIdOne == -99)
            {
                m_PointerIdOne = eventData.pointerId;
                m_LastPosPointerOne = eventData.position;
            }
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            if (m_PointerIdZero == eventData.pointerId)
            {
                m_PointerIdZero = -99;
                m_LastPosPointerZero = Vector2.zero;
            }
            else if (m_PointerIdOne == eventData.pointerId)
            {
                m_PointerIdOne = -99;
                m_LastPosPointerOne = Vector2.zero;
            }
        }


        void OnDestroy()
        {
            onPinch = null;
        }
    }
}
