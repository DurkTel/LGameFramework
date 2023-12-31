using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.GameEntity
{
    /// <summary>
    /// 实体属性字段
    /// </summary>
    public class EntityAttribute
    {
        #region SimpleMovement 移动组件相关
        /// <summary>
        /// 移动类型
        /// float
        /// </summary>
        public const string c_MoveType = "SimpleMovement.MoveType";
        /// <summary>
        /// 速度比例
        /// float
        /// </summary>
        public const string c_SpeedScale = "SimpleMovement.SpeedScale";
        /// <summary>
        /// 移动速度
        /// float
        /// </summary>
        public const string c_MoveSpeed = "SimpleMovement.MoveSpeed";
        /// <summary>
        /// 旋转速度
        /// float
        /// </summary>
        public const string c_RotationSpeed = "SimpleMovement.RotationSpeed";
        /// <summary>
        /// 是否路径移动中
        /// bool
        /// </summary>
        public const string c_IsNavMeshMoving = "SimpleMovement.IsNavMeshMoving";
        /// <summary>
        /// 是否曲线移动中
        /// bool
        /// </summary>
        public const string c_IsCurveMoving = "SimpleMovement.IsCurveMoving";
        /// <summary>
        /// 当前移动方向
        /// </summary>
        public const string c_CurrentMoveDirection = "SimpleMovement.CurrentMoveDirection";
        /// <summary>
        /// 本地移动方向
        /// Vector3
        /// </summary>
        public const string c_LocalMoveDirection = "SimpleMovement.LocalMoveDirection";
        /// <summary>
        /// 目标移动方向
        /// Vector3
        /// </summary>
        public const string c_TargetMoveDirection = "SimpleMovement.TargetMoveDirection";
        /// <summary>
        /// 上一帧前进方向
        /// Vector3
        /// </summary>
        public const string c_PreviousFrameForward = "SimpleMovement.PreviousFrameForward";
        /// <summary>
        /// 目标角度与当前角度的夹角
        /// float
        /// </summary>
        public const string c_TargetDeg = "SimpleMovement.TargetDeg";
        /// <summary>
        /// 角速度
        /// float
        /// </summary>
        public const string c_AngularVelocity = "SimpleMovement.AngularVelocity";
        /// <summary>
        /// 水平移动
        /// float
        /// </summary>
        public const string c_MoveHorizontal = "SimpleMovement.MoveHorizontal";
        /// <summary>
        /// 垂直移动
        /// float
        /// </summary>
        public const string c_MoveVertical = "SimpleMovement.MoveVertical";


        #endregion

        #region SkinComponent 实体外观组件相关
        /// <summary>
        /// 外观是否已经开始进行初始化
        /// bool
        /// </summary>
        public const string c_SkinIsInited = "SkinComponent.SkinIsInited";
        /// <summary>
        /// 外观是否加载完毕
        /// bool
        /// </summary>
        public const string c_SkinIsLoaddone = "SkinComponent.SkinIsLoaddone";
        /// <summary>
        /// 外观资源名称
        /// Dictionary<GameAvatar.AvatarPartType, string>
        /// </summary>
        public const string c_SkinAssetNames = "SkinComponent.SkinAssetNames";
        /// <summary>
        /// 外观所有骨骼
        /// Dictionary<string, Transform>
        /// </summary>
        public const string c_SkeletonBone = "SkinComponent.SkeletonBone";
        /// <summary>
        /// 人形骨骼
        /// Dictionary<HumanBodyBones, Transform>
        /// </summary>
        public const string c_HumanBodyBones = "SkinComponent.HumanBodyBones";
        #endregion

        #region AnimationComponent 动画组件相关
        /// <summary>
        /// 动画控制器名称
        /// string
        /// </summary>
        public const string c_ControllerName = "AnimationComponent.ControllerName";
        /// <summary>
        /// 动画的每帧位移
        /// Vector3
        /// </summary>
        public const string c_DeltaPosition = "AnimationComponent.DeltaPosition";
        /// <summary>
        /// 动画的每帧旋转
        /// Vector3
        /// </summary>
        public const string c_DeltaRotation = "AnimationComponent.DeltaRotation";
        #endregion

        #region AOIComponent AOI组件相关
        /// <summary>
        /// AOI等级
        /// AOI.InterestLevel
        /// </summary>
        public const string c_InterestLevel = "AOIComponent.InterestLevel";
        #endregion

        #region HotRadiusComponent 热半径组件相关
        /// <summary>
        /// 热半径
        /// float[]
        /// </summary>
        public const string c_HotRadiusValue = "HotRadiusComponent.HotRadiusValue";
        #endregion

        #region ParentComponent 父实体组件相关
        /// <summary>
        /// 父实体id
        /// int
        /// </summary>
        public const string c_ParentId = "ParentComponent.ParentId";
        /// <summary>
        /// 需要绑定的骨骼名称
        /// string
        /// </summary>
        public const string c_BindingBone = "ParentComponent.BindingBone";
        #endregion

        #region ClimbComponent 攀爬组件相关
        /// <summary>
        /// 正在攀爬
        /// bool
        /// </summary>
        public const string c_IsClimbing = "ClimbComponent.IsClimbing";

        #endregion

        #region PushPullComponent 推拉组件相关
        /// <summary>
        /// 正在推拉
        /// bool
        /// </summary>
        public const string c_IsPushPull = "PushPullComponent.IsPushPull";

        #endregion

        #region FightComponent 战斗组件相关
        /// <summary>
        /// 是否处于攻击前摇
        /// bool
        /// </summary>
        public const string c_IsAttackPoint = "FightComponent.IsAttackPoint";
        /// <summary>
        /// 生命值
        /// int
        /// </summary>
        public const string c_Life = "FightComponent.Life";
        #endregion

        #region JumpComponent 跳跃组件相关
        /// <summary>
        /// 起跳时的速度方向
        /// </summary>
        public const string c_JumpDirection = "JumpComponent.JumpDirection";
        /// <summary>
        /// 跳跃高度
        /// </summary>
        public const string c_JumpHeight = "JumpComponent.JumpHeight";
        /// <summary>
        /// 是否跳跃中
        /// bool
        /// </summary>
        public const string c_IsJumping = "JumpComponent.IsJumping";
        /// <summary>
        /// 是否下坠中
        /// bool
        /// </summary>
        public const string c_IsFalling = "JumpComponent.IsFalling";
        /// <summary>
        /// 是否着地
        /// bool
        /// </summary>
        public const string c_IsGrounded = "JumpComponent.IsGrounded";
        /// <summary>
        /// 上升速度
        /// float
        /// </summary>
        public const string c_RisingSpeed = "JumpComponent.RisingSpeed";
        #endregion
    }
}
