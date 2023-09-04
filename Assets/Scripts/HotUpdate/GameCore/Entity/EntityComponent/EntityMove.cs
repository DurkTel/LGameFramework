using UnityEngine;

namespace LGameFramework.GameCore.Entity
{
    public class EntityMove : IComponent
    {
        public int Priority => 0;

        private CharacterController m_CharacterController;
        public CharacterController CharacterController { get { return m_CharacterController; } }

        private Transform m_Transform;
        public Transform Transform { get { return m_Transform; } }

        private GameObject m_GameObject;
        public GameObject GameObject { get { return m_GameObject; } }

        private Vector3 m_MoveDirection;
        public Vector3 MoveDirection { get { return m_MoveDirection; } set { m_MoveDirection = value; } }

        private float m_MoveSpeed;
        public float MoveSpeed { get { return m_MoveSpeed; } }

        private float m_RotateSpeed;
        public float RotateSpeed { get { return m_RotateSpeed; } }

        private float m_GravityVertical;
        public float GravityVertical { get { return m_GravityVertical; } }

        private Animator m_Animator;

        private bool m_Enabled;
        public bool Enabled { get { return m_Enabled; } set { m_Enabled = value; } }

        private bool m_IsGrounded;
        public bool IsGrounded { get { return m_IsGrounded; } }

        private bool m_IsFall;
        public bool IsFall { get { return m_IsFall; } }

        private float m_GroundDistance;
        public float GroundDistance { get { return m_GroundDistance; } }
        public bool EnableGravity { get; set; }
        public float Gravity { get; set; }

        public Entity Entity => throw new System.NotImplementedException();

        public LayerMask groundLayer;

        #region 曲线运动
        /// <summary>
        /// 曲线运动目标位置
        /// </summary>
        private Vector3 m_CurveMoveTarget;
        /// <summary>
        /// 曲线旋转初始位置
        /// </summary>
        private Vector3 m_CurveMoveOriginal;
        /// <summary>
        /// 曲线旋转进度
        /// </summary>
        private float m_CurveMoveProgress;
        /// <summary>
        /// 曲线运动中
        /// </summary>
        private bool m_IsCurveMoving;
        /// <summary>
        /// 曲线运动开始时间
        /// </summary>
        private float m_CurveMoveBeginTime;
        /// <summary>
        /// 曲线运动间隔
        /// </summary>
        private float m_CurveMoveDelta;

        /// <summary>
        /// 曲线旋转目标位置
        /// </summary>
        private Quaternion m_CurveRotationTarget;
        /// <summary>
        /// 曲线旋转初始位置
        /// </summary>
        private Quaternion m_CurveRotationOriginal;
        /// <summary>
        /// 曲线旋转进度
        /// </summary>
        private float m_CurveRotationProgress;
        /// <summary>
        /// 曲线旋转中
        /// </summary>
        private bool m_IsCurveRotating;
        /// <summary>
        /// 曲线旋转开始时间
        /// </summary>
        private float m_CurveRotationBeginTime;
        /// <summary>
        /// 曲线旋转间隔
        /// </summary>
        private float m_CurveRotationDelta;

        /// <summary>
        /// 定点位移
        /// </summary>
        /// <param name="target"></param>
        /// <param name="time"></param>
        /// <param name="delay"></param>
        public void Move(Vector3 target, float time, float delay)
        {
            m_IsCurveMoving = true;
            m_CharacterController.enabled = false;
            m_CurveMoveTarget = target;
            m_CurveMoveBeginTime = Time.unscaledTime + delay;
            m_CurveMoveDelta = Time.fixedDeltaTime / time;
            m_CurveMoveOriginal = Transform.position;
            m_CurveMoveProgress = 0f;
        }

        private void CurveMove(float unscaledTime)
        {
            if (!m_IsCurveMoving || unscaledTime < m_CurveMoveBeginTime)
                return;

            if (m_CurveMoveProgress >= 1f)
            {
                m_IsCurveMoving = false;
                m_CharacterController.enabled = true;
                return;
            }

            Transform.position = Vector3.Lerp(m_CurveMoveOriginal, m_CurveMoveTarget, m_CurveMoveProgress += m_CurveMoveDelta);
        }


        /// <summary>
        /// 顶点旋转
        /// </summary>
        /// <param name="target"></param>
        /// <param name="time"></param>
        /// <param name="delay"></param>
        public void Rotate(Quaternion target, float time, float delay)
        {
            m_IsCurveRotating = true;
            m_CurveRotationTarget = target;
            m_CurveRotationBeginTime = Time.unscaledTime + delay;
            m_CurveRotationDelta = Time.fixedDeltaTime / time;
            m_CurveRotationOriginal = Transform.rotation;
            m_CurveRotationProgress = 0f;
        }

        private void CurveRotate(float unscaledTime)
        {
            if (!m_IsCurveRotating || unscaledTime < m_CurveRotationBeginTime)
                return;

            if (m_CurveRotationProgress >= 1f)
            {
                m_IsCurveRotating = false;
                return;
            }

            Transform.rotation = Quaternion.Lerp(m_CurveRotationOriginal, m_CurveRotationTarget, m_CurveRotationProgress += m_CurveRotationDelta);
        }
        #endregion

        #region 动画根运动
        public static int Compensation_Custom_Hash = Animator.StringToHash("Compensation_Custom");
        public static int Compensation_Front_Hash = Animator.StringToHash("Compensation_Front");
        public static int Compensation_Up_Hash = Animator.StringToHash("Compensation_Up");
        public static int Compensation_Right_Hash = Animator.StringToHash("Compensation_Right");
        /// <summary>
        /// 动画位移
        /// </summary>
        public void Move()
        {
            if (m_Animator == null) return;
            m_CharacterController.Move(m_Animator.deltaPosition);
        }

        /// <summary>
        /// 动画旋转
        /// </summary>
        public void Rotate()
        {
            if (m_Animator = null) return;
            Transform.rotation *= m_Animator.deltaRotation;
        }


        /// <summary>
        /// 动画位置补偿
        /// </summary>
        /// <param name="direction">补偿方向</param>
        public void MoveCompensation(Vector3 direction = default)
        {
            float x = m_Animator.GetFloat(Compensation_Right_Hash);
            float z = m_Animator.GetFloat(Compensation_Front_Hash);
            float y = m_Animator.GetFloat(Compensation_Up_Hash);

            Vector3 moveCompensation = Transform.forward * z + Transform.right * x + Transform.up * y;
            m_CharacterController.Move(m_Animator.deltaPosition + moveCompensation + direction);
        }

        public void MoveCompensation(float planePower, float airPower)
        {
            float x = m_Animator.GetFloat(Compensation_Right_Hash);
            float z = m_Animator.GetFloat(Compensation_Front_Hash);
            float y = m_Animator.GetFloat(Compensation_Up_Hash);

            Vector3 moveCompensation = Transform.forward * z * planePower + Transform.right * x * planePower + Transform.up * y * airPower;
            m_CharacterController.Move(m_Animator.deltaPosition + moveCompensation);
        }

        /// <summary>
        /// 动画旋转补偿
        /// </summary>
        /// <param name="direction">补偿方向</param>
        public void RotateCompensation()
        {
            Transform.rotation *= m_Animator.deltaRotation;
        }
        #endregion

        #region 方向运动
        /// <summary>
        /// 方向位移
        /// </summary>
        /// <param name="deltaTime"></param>
        public void Move(float deltaTime)
        {
            if (!m_Enabled || m_MoveDirection.Equals(Vector3.zero)) return;

            m_MoveDirection.y = 0f;
            m_MoveDirection = m_MoveDirection.normalized * Mathf.Clamp(m_MoveDirection.magnitude, 0, 1f);
            //这一帧的移动位置
            Vector3 targetPosition = Transform.position + m_MoveDirection * m_MoveSpeed * deltaTime;
            //这一帧的移动速度
            Vector3 targetVelocity = (targetPosition - Transform.position) / deltaTime;
            targetVelocity.y = m_GravityVertical * deltaTime;

            m_CharacterController.Move(targetVelocity);
        }

        /// <summary>
        /// 方向旋转
        /// </summary>
        /// <param name="deltaTime"></param>
        public void Rotate(float deltaTime)
        {
            if (!m_Enabled || m_MoveDirection.Equals(Vector3.zero)) return;

            m_MoveDirection.y = 0f;
            if (m_MoveDirection.normalized.magnitude == 0)
                m_MoveDirection = Transform.forward;

            var euler = Transform.rotation.eulerAngles.NormalizeAngle();
            var targetEuler = Quaternion.LookRotation(m_MoveDirection.normalized).eulerAngles.NormalizeAngle();
            euler.y = Mathf.LerpAngle(euler.y, targetEuler.y, m_RotateSpeed * deltaTime);
            Quaternion newRotation = Quaternion.Euler(euler);
            Transform.rotation = newRotation;
        }
        #endregion

        public void OnInit(Entity entity)
        {
            m_GameObject = entity.GameObject;
            m_Transform = entity.Transform;
            m_CharacterController = m_GameObject.TryAddComponent<CharacterController>();
            m_Animator = m_GameObject.GetComponent<Animator>();
            Enabled = true;
            EnableGravity = true;
        }

        public void Update(float deltaTime, float unscaledTime)
        {
            Move(deltaTime);
            Rotate(deltaTime);
        }

        public void FixedUpdate(float fixedDeltaTime, float unscaledTime) 
        {
            if (!m_Enabled) return;
            m_IsGrounded = Physics.SphereCast(Transform.position + Vector3.up * 0.5f, m_CharacterController.radius,
                    Vector3.down, out RaycastHit hitInfo, 0.5f - m_CharacterController.radius + m_CharacterController.skinWidth * 3, groundLayer);

            m_IsFall = !m_IsGrounded && !Physics.Raycast(Transform.position, Vector3.down, 0.3f, groundLayer);

            if (!m_IsGrounded && Physics.Raycast(Transform.position, Vector3.down, out RaycastHit groundHit, 9999, groundLayer))
                m_GroundDistance = groundHit.distance;
            else
                m_GroundDistance = 0;

            CalculateGravity(fixedDeltaTime);
            CurveMove(unscaledTime);
            CurveRotate(unscaledTime);
        }

        /// <summary>
        /// 设置重力加速度
        /// </summary>
        /// <param name="height">高度</param>
        public void SetGravityAccelerationByHeight(float height, bool isVertical = false)
        {
            m_GravityVertical = isVertical ? height : Mathf.Sqrt(-2 * Gravity * height);
        }

        /// <summary>
        /// 计算重力
        /// </summary>
        private void CalculateGravity(float fixedDeltaTime)
        {
            if (!EnableGravity || !Enabled) return;
            if (m_IsGrounded && m_GravityVertical <= 0f)
            {
                m_GravityVertical = Gravity * fixedDeltaTime;
                return;
            }

            if (m_GravityVertical >= 0f)
                m_GravityVertical += Gravity * 0.75f * fixedDeltaTime;
            else
                m_GravityVertical += Gravity * fixedDeltaTime;

            m_GravityVertical = Mathf.Max(-8.5f, m_GravityVertical);
        }

        /// <summary>
        /// 获得相应角色的方向
        /// </summary>
        /// <param name="move"></param>
        /// <returns></returns>
        public Vector2 GetRelativeMove(Vector3 move)
        {
            float x = Vector3.Dot(move.normalized, Transform.right);
            float y = Vector3.Dot(move.normalized, Transform.forward);
            Vector2 relative = new Vector2(x.NormalizeFloat(), y.NormalizeFloat());
            return relative;
        }

        public void Dispose()
        {
            
        }

        public void Release()
        {
            
        }
    }
}