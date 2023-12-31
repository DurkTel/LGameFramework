namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        public enum ComponentEvent
        {
            /// <summary>
            /// 子实体变更
            /// </summary>
            OnChildEntityUpdate,
            /// <summary>
            /// 夫实体变更
            /// </summary>
            OnParentEntityUpdate,
            /// <summary>
            /// 实体皮肤部位加载完成
            /// </summary>
            OnSkinLoadComplete,
            /// <summary>
            /// 实体动画机加载完成
            /// </summary>
            OnAnimatorLoadComplete,
            /// <summary>
            /// 实体动画机状态进入
            /// </summary>
            OnAnimatorStateEnter,
            /// <summary>
            /// 实体动画机状态退出
            /// </summary>
            OnAnimatorStateExit,
            /// <summary>
            /// 动画帧事件
            /// </summary>
            OnAnimatorFrameEvent,
            /// <summary>
            /// 请求动画机操作
            /// </summary>
            OnRequestAnimatiorOperation,
            /// <summary>
            /// 请求攻击
            /// </summary>
            OnRequestAttack,
            /// <summary>
            /// 攻击生效
            /// </summary>
            OnAttackSuccess,
            /// <summary>
            /// 请求受击
            /// </summary>
            OnRequestHit,
            /// <summary>
            /// 启动/禁用 移动
            /// </summary>
            OnEnableMove,
            /// <summary>
            /// 请求定点移动
            /// </summary>
            OnRequestFixedMove,
            /// <summary>
            /// 请求路径移动
            /// </summary>
            OnRequestNavMeshMove,
            /// <summary>
            /// 请求跳跃
            /// </summary>
            OnRequestJump,
            /// <summary>
            /// 请求丢弃
            /// </summary>
            OnRequestDiscard,
            /// <summary>
            /// 请求闪避
            /// </summary>
            OnRequestEscape,
            /// <summary>
            /// 启动/禁用 攻击接触检测
            /// </summary>
            OnEnableFightContactDetection,
            /// <summary>
            /// 启动/禁用 行为树
            /// </summary>
            OnEnableBehaviorTree,
            /// <summary>
            /// 实体进入自己热半径
            /// </summary>
            OnHotRadiusChange,
            /// <summary>
            /// 请求交互
            /// </summary>
            OnRequestInteract,
            /// <summary>
            /// 请求注视
            /// </summary>
            OnRequestLookAt,
            /// <summary>
            /// 所在区域改变
            /// </summary>
            OnZoneAreaChange,
        }

    }
}
