using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;
using static LGameFramework.GameCore.GameEntity.GMEntityManager;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// ���ܶ������
    /// </summary>
    public class TrackAnimation : FightTrack
    {
        public string animationName;

        public bool useRootMotion;

        public override void OnEnterClip(int index)
        {
            base.OnEnterClip(index);
            ////�����ݳ��н��÷����ƶ�
            //EntityUtility.DispatchComponentEvent(Entity, ComponentEvent.OnEnableMove,
            //    CommonEventArg.Get(SimpleMovement.MotionLevel.Direction, SimpleMovement.MotionMode.Move, false));

            ////�Ƿ�����RootMotion
            //EntityUtility.DispatchComponentEvent(Entity, ComponentEvent.OnEnableMove,
            //    CommonEventArg.Get(SimpleMovement.MotionLevel.Advanced, SimpleMovement.MotionMode.Both, useRootMotion));

            ////���Ŷ���
            //EntityUtility.DispatchComponentEvent(Entity, ComponentEvent.OnRequestAnimatiorOperation,
            //    CommonEventArg.Get(AnimationComponent.AnimatiorOperation.Play, animationName, -1));
        }

        public override void OnExitClip(int index)
        {
            base.OnExitClip(index);
            //EntityUtility.DispatchComponentEvent(Entity, ComponentEvent.OnEnableMove,
            //    CommonEventArg.Get(SimpleMovement.MotionLevel.Direction, SimpleMovement.MotionMode.Move, true));

            //EntityUtility.DispatchComponentEvent(Entity, ComponentEvent.OnEnableMove,
            //    CommonEventArg.Get(SimpleMovement.MotionLevel.Advanced, SimpleMovement.MotionMode.Both, false));
        }
    }
}
