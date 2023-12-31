using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// ʵ�������ֶ�
    /// </summary>
    public class EntityAttribute
    {
        #region SimpleMovement �ƶ�������
        /// <summary>
        /// �ƶ�����
        /// float
        /// </summary>
        public const string c_MoveType = "SimpleMovement.MoveType";
        /// <summary>
        /// �ٶȱ���
        /// float
        /// </summary>
        public const string c_SpeedScale = "SimpleMovement.SpeedScale";
        /// <summary>
        /// �ƶ��ٶ�
        /// float
        /// </summary>
        public const string c_MoveSpeed = "SimpleMovement.MoveSpeed";
        /// <summary>
        /// ��ת�ٶ�
        /// float
        /// </summary>
        public const string c_RotationSpeed = "SimpleMovement.RotationSpeed";
        /// <summary>
        /// �Ƿ�·���ƶ���
        /// bool
        /// </summary>
        public const string c_IsNavMeshMoving = "SimpleMovement.IsNavMeshMoving";
        /// <summary>
        /// �Ƿ������ƶ���
        /// bool
        /// </summary>
        public const string c_IsCurveMoving = "SimpleMovement.IsCurveMoving";
        /// <summary>
        /// ��ǰ�ƶ�����
        /// </summary>
        public const string c_CurrentMoveDirection = "SimpleMovement.CurrentMoveDirection";
        /// <summary>
        /// �����ƶ�����
        /// Vector3
        /// </summary>
        public const string c_LocalMoveDirection = "SimpleMovement.LocalMoveDirection";
        /// <summary>
        /// Ŀ���ƶ�����
        /// Vector3
        /// </summary>
        public const string c_TargetMoveDirection = "SimpleMovement.TargetMoveDirection";
        /// <summary>
        /// ��һ֡ǰ������
        /// Vector3
        /// </summary>
        public const string c_PreviousFrameForward = "SimpleMovement.PreviousFrameForward";
        /// <summary>
        /// Ŀ��Ƕ��뵱ǰ�Ƕȵļн�
        /// float
        /// </summary>
        public const string c_TargetDeg = "SimpleMovement.TargetDeg";
        /// <summary>
        /// ���ٶ�
        /// float
        /// </summary>
        public const string c_AngularVelocity = "SimpleMovement.AngularVelocity";
        /// <summary>
        /// ˮƽ�ƶ�
        /// float
        /// </summary>
        public const string c_MoveHorizontal = "SimpleMovement.MoveHorizontal";
        /// <summary>
        /// ��ֱ�ƶ�
        /// float
        /// </summary>
        public const string c_MoveVertical = "SimpleMovement.MoveVertical";


        #endregion

        #region SkinComponent ʵ�����������
        /// <summary>
        /// ����Ƿ��Ѿ���ʼ���г�ʼ��
        /// bool
        /// </summary>
        public const string c_SkinIsInited = "SkinComponent.SkinIsInited";
        /// <summary>
        /// ����Ƿ�������
        /// bool
        /// </summary>
        public const string c_SkinIsLoaddone = "SkinComponent.SkinIsLoaddone";
        /// <summary>
        /// �����Դ����
        /// Dictionary<GameAvatar.AvatarPartType, string>
        /// </summary>
        public const string c_SkinAssetNames = "SkinComponent.SkinAssetNames";
        /// <summary>
        /// ������й���
        /// Dictionary<string, Transform>
        /// </summary>
        public const string c_SkeletonBone = "SkinComponent.SkeletonBone";
        /// <summary>
        /// ���ι���
        /// Dictionary<HumanBodyBones, Transform>
        /// </summary>
        public const string c_HumanBodyBones = "SkinComponent.HumanBodyBones";
        #endregion

        #region AnimationComponent ����������
        /// <summary>
        /// ��������������
        /// string
        /// </summary>
        public const string c_ControllerName = "AnimationComponent.ControllerName";
        /// <summary>
        /// ������ÿ֡λ��
        /// Vector3
        /// </summary>
        public const string c_DeltaPosition = "AnimationComponent.DeltaPosition";
        /// <summary>
        /// ������ÿ֡��ת
        /// Vector3
        /// </summary>
        public const string c_DeltaRotation = "AnimationComponent.DeltaRotation";
        #endregion

        #region AOIComponent AOI������
        /// <summary>
        /// AOI�ȼ�
        /// AOI.InterestLevel
        /// </summary>
        public const string c_InterestLevel = "AOIComponent.InterestLevel";
        #endregion

        #region HotRadiusComponent �Ȱ뾶������
        /// <summary>
        /// �Ȱ뾶
        /// float[]
        /// </summary>
        public const string c_HotRadiusValue = "HotRadiusComponent.HotRadiusValue";
        #endregion

        #region ParentComponent ��ʵ��������
        /// <summary>
        /// ��ʵ��id
        /// int
        /// </summary>
        public const string c_ParentId = "ParentComponent.ParentId";
        /// <summary>
        /// ��Ҫ�󶨵Ĺ�������
        /// string
        /// </summary>
        public const string c_BindingBone = "ParentComponent.BindingBone";
        #endregion

        #region ClimbComponent ����������
        /// <summary>
        /// ��������
        /// bool
        /// </summary>
        public const string c_IsClimbing = "ClimbComponent.IsClimbing";

        #endregion

        #region PushPullComponent ����������
        /// <summary>
        /// ��������
        /// bool
        /// </summary>
        public const string c_IsPushPull = "PushPullComponent.IsPushPull";

        #endregion

        #region FightComponent ս��������
        /// <summary>
        /// �Ƿ��ڹ���ǰҡ
        /// bool
        /// </summary>
        public const string c_IsAttackPoint = "FightComponent.IsAttackPoint";
        /// <summary>
        /// ����ֵ
        /// int
        /// </summary>
        public const string c_Life = "FightComponent.Life";
        #endregion

        #region JumpComponent ��Ծ������
        /// <summary>
        /// ����ʱ���ٶȷ���
        /// </summary>
        public const string c_JumpDirection = "JumpComponent.JumpDirection";
        /// <summary>
        /// ��Ծ�߶�
        /// </summary>
        public const string c_JumpHeight = "JumpComponent.JumpHeight";
        /// <summary>
        /// �Ƿ���Ծ��
        /// bool
        /// </summary>
        public const string c_IsJumping = "JumpComponent.IsJumping";
        /// <summary>
        /// �Ƿ���׹��
        /// bool
        /// </summary>
        public const string c_IsFalling = "JumpComponent.IsFalling";
        /// <summary>
        /// �Ƿ��ŵ�
        /// bool
        /// </summary>
        public const string c_IsGrounded = "JumpComponent.IsGrounded";
        /// <summary>
        /// �����ٶ�
        /// float
        /// </summary>
        public const string c_RisingSpeed = "JumpComponent.RisingSpeed";
        #endregion
    }
}
