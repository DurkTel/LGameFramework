
using LGameFramework.GameCore.Asset;
using UnityEngine;
using UnityEngine.Rendering.PostProcessing;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore
{
    /// <summary>
    /// 轨道相机
    /// </summary>
    public class OrbitCamera : FrameworkModule
    {
        /// <summary>
        /// 焦点
        /// </summary>
        [SerializeField]
        private Transform m_Focus = default;
        /// <summary>
        /// 锁定
        /// </summary>
        private Transform m_Lockon = null;
        public Transform Lockon { get { return m_Lockon; } }
        /// <summary>
        /// 与焦点的距离
        /// </summary>
        [SerializeField, Range(1f, 20f)]
        private float distance = 5f;
        /// <summary>
        /// 焦点的缓动半径
        /// </summary>
        [SerializeField, UnityEngine.Min(0f)]
        private float m_FocusRadius = 1f;
        /// <summary>
        /// 焦点居中系数
        /// </summary>
        [SerializeField, Range(0f, 1f)]
        private float m_FocusCentering = 0.5f;
        /// <summary>
        /// 相机旋转速度
        /// </summary>
        [SerializeField, Range(1f, 360f)]
        private float m_RotationSpeed = 90f;
        /// <summary>
        /// 约束角度
        /// </summary>
        [SerializeField, Range(-89f, 89f)]
        private float m_MinVerticalAngle = -30f, m_MaxVerticalAngle = 60f;
        /// <summary>
        /// 对齐平滑范围
        /// </summary>
        [SerializeField, Range(0f, 90f)]
        private float m_AlignSmoothRange = 45f;
        /// <summary>
        /// 自动对齐
        /// </summary>
        [SerializeField]
        private float m_AlignDelay = 5f;
        /// <summary>
        /// 锁定时的平滑时间
        /// </summary>
        [SerializeField]
        private float m_LockonSmooth = 300f;
        /// <summary>
        /// 相机遮挡检测的层级
        /// </summary>
        [SerializeField]
        private LayerMask m_ObstructionMask = -1;
        /// <summary>
        /// 最后一次收到旋转发生时间
        /// </summary>
        private float m_LastManualRotationTime;
        /// <summary>
        /// 焦点对象的现在/以前的位置
        /// </summary>
        private Vector3 m_FocusPoint, m_PreviousFocusPoint;
        /// <summary>
        /// 摄像机轨道角
        /// </summary>
        private Vector2 m_OrbitAngles = new Vector2(45f, 0f);
        /// <summary>
        /// 规则相机
        /// </summary>
        private Camera m_RegularCamera;
        public Camera RegularCamera { get { return m_RegularCamera; } }
        [SerializeField]
        private bool m_InvertYAxis = true;
        [SerializeField]
        private bool m_InvertXAxis;

        public Vector2 inputDelta;
        [SerializeField]
        private float m_LockonHeight;

        [SerializeField, Header("锁定范围")]
        protected float m_lockonRadius = 10f;

        [SerializeField, Header("可锁定层级")]
        protected LayerMask m_lockonLayer;
        internal override int Priority => 999;

        private PostProcessLayer m_PostProcessLayer;
        private Vector3 CameraHalfExtends
        {
            get
            {
                Vector3 halfExtends;
                halfExtends.y = m_RegularCamera.nearClipPlane * Mathf.Tan(0.5f * Mathf.Deg2Rad * m_RegularCamera.fieldOfView);
                halfExtends.x = halfExtends.y * m_RegularCamera.aspect;
                halfExtends.z = 0f;
                return halfExtends;
            }
        }

        internal override void OnInit()
        {
            m_RegularCamera = GameObject.TryAddComponent<Camera>();
            Transform.localRotation = Quaternion.Euler(m_OrbitAngles);

            m_PostProcessLayer = GameObject.TryAddComponent<PostProcessLayer>();
            m_PostProcessLayer.Init(GameFrameworkEntry.GetModule<GMAssetManager>().LoadAsset<PostProcessResources>("PostProcessResources.asset"));
            m_PostProcessLayer.antialiasingMode = PostProcessLayer.Antialiasing.SubpixelMorphologicalAntialiasing;
            m_PostProcessLayer.volumeLayer = 1;
            m_PostProcessLayer.volumeTrigger = Transform;
            Cursor.lockState = CursorLockMode.Locked;
        }

        public void SetFocus(Transform focus)
        {
            m_Focus = focus;
            m_FocusPoint = focus.position;
        }

        private void OnValidate()
        {
            if (m_MaxVerticalAngle < m_MinVerticalAngle)
                m_MaxVerticalAngle = m_MinVerticalAngle;
        }

        internal override void LateUpdate(float deltaTime, float unscaleDeltaTime)
        {
            if (m_Focus == null) return;
            UpdateFocusPoint();
            Quaternion lookRotation;
            if (LockonRotation() || ManualRotation() || AutoMaticRotation())
            {
                ConstrainAngles();
                lookRotation = Quaternion.Euler(m_OrbitAngles);
            }
            else
                lookRotation = Transform.localRotation;

            Vector3 lookDirection = lookRotation * Vector3.forward;
            Vector3 lookPosition = m_FocusPoint - lookDirection * distance;

            Vector3 rectOffset = lookDirection * m_RegularCamera.nearClipPlane;
            Vector3 rectPosition = lookPosition + rectOffset;
            Vector3 castFrom = m_Focus.position;
            Vector3 castLine = rectPosition - castFrom;
            float castDistance = castLine.magnitude;
            Vector3 castDirection = castLine / castDistance;

            if (Physics.BoxCast(castFrom, CameraHalfExtends, castDirection,
                out RaycastHit hit, lookRotation, castDistance, m_ObstructionMask))
            {
                rectPosition = castFrom + castDirection * hit.distance;
                lookPosition = rectPosition - rectOffset;
            }

            Transform.SetPositionAndRotation(lookPosition, lookRotation);
        }

        /// <summary>
        /// 更新焦点对象的位置
        /// </summary>
        private void UpdateFocusPoint()
        {
            m_PreviousFocusPoint = m_FocusPoint;
            Vector3 targetPoint = m_Focus.position;
            if (m_FocusRadius > 0f)
            {
                float distance = Vector3.Distance(targetPoint, m_FocusPoint);
                float t = 1f;
                if (distance > 0.01f && m_FocusCentering > 0f)
                {
                    t = Mathf.Pow(1f - m_FocusCentering, Time.deltaTime);
                }
                //与上次相比 焦点的位移大于缓动半径才进行设值
                if (distance > m_FocusRadius)
                {
                    t = Mathf.Min(t, m_FocusRadius / distance);
                }
                m_FocusPoint = Vector3.Lerp(targetPoint, m_FocusPoint, t);
            }
            else
                m_FocusPoint = targetPoint;
        }

        /// <summary>
        /// 控制相机旋转
        /// </summary>
        private bool ManualRotation()
        {
            if (Lockon != null)
                return false;

            //输入误差
            const float e = 0.001f;
            if (inputDelta.x < -e || inputDelta.x > e || inputDelta.y < -e || inputDelta.y > e)
            {
                m_OrbitAngles += m_RotationSpeed * Time.deltaTime * inputDelta;
                m_LastManualRotationTime = Time.unscaledTime;
                return true;
            }
            return false;
        }

        /// <summary>
        /// 锁定相机旋转
        /// </summary>
        private bool LockonRotation()
        {
            if (Lockon == null)
                return false;

            Vector3 target = Lockon.position - m_Focus.position + Vector3.up * m_LockonHeight;
            m_OrbitAngles = Quaternion.LookRotation(target).eulerAngles;
            m_OrbitAngles.x = 10f;
            return true;
        }

        /// <summary>
        /// 角度限制
        /// </summary>
        private void ConstrainAngles()
        {
            m_OrbitAngles.x = Mathf.Clamp(m_OrbitAngles.x, m_MinVerticalAngle, m_MaxVerticalAngle);
            if (m_OrbitAngles.y < 0f)
            {
                m_OrbitAngles.y += 360f;
            }
            else if (m_OrbitAngles.y >= 360f)
            {
                m_OrbitAngles.y -= 360f;
            }
        }

        /// <summary>
        /// 自动对齐
        /// </summary>
        /// <returns></returns>
        private bool AutoMaticRotation()
        {
            if (Time.unscaledTime - m_LastManualRotationTime < m_AlignDelay)
            {
                return false;
            }

            Vector2 movement = new Vector2(m_FocusPoint.x - m_PreviousFocusPoint.x, m_FocusPoint.z - m_PreviousFocusPoint.z);
            float movementDeltaSqr = movement.sqrMagnitude;
            if (movementDeltaSqr < 0.0001f)
                return false;

            float headingAngle = GetAngle(movement / Mathf.Sqrt(movementDeltaSqr));
            float deltaAbs = Mathf.Abs(Mathf.DeltaAngle(m_OrbitAngles.y, headingAngle));
            float rotationChange = m_RotationSpeed * Mathf.Min(Time.deltaTime, movementDeltaSqr);
            if (deltaAbs < m_AlignSmoothRange)
                rotationChange *= deltaAbs / m_AlignSmoothRange;
            else if (180f - deltaAbs < m_AlignSmoothRange)
                rotationChange *= (180f - deltaAbs) / m_AlignSmoothRange;
            m_OrbitAngles.y = Mathf.MoveTowardsAngle(m_OrbitAngles.y, headingAngle, rotationChange);
            return true;
        }

        private static float GetAngle(Vector2 direction)
        {
            float angle = Mathf.Acos(direction.y) * Mathf.Rad2Deg;
            return direction.x < 0f ? 360f - angle : angle;
        }

        public void GetAxisInput(InputActionArgs actionArgs)
        {
            if (actionArgs.ActionName == "Look")
            {
                Vector2 input = actionArgs.Direction;
                if (m_InvertYAxis)
                    input.y = -input.y;

                if (m_InvertXAxis)
                    input.x = -input.x;

                inputDelta.Set(input.y, input.x);

            }
        }

        /// <summary>
        /// 检测锁定目标
        /// </summary>
        //public void CalculateLockon(bool value)
        //{
        //    if (value && m_lockon == null)
        //        m_lockon = focus.ObtainNearestTarget(m_lockonRadius, m_lockonLayer, focus.root);
        //    else if (!value)
        //        m_lockon = null;
        //}

    }
}