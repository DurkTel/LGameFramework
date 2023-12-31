using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// ���ܴ������
    /// </summary>
    public class TrackHit : FightTrack
    {
        /// <summary>
        /// �������
        /// </summary>
        public int HitCount { get { return ClipCount; } }

        public override void OnEnterClip(int index)
        {
            base.OnEnterClip(index);
            EntityUtility.DispatchComponentEvent(Entity, GMEntityManager.ComponentEvent.OnEnableFightContactDetection,
                CommonEventArg.Get(true, TrackGroup.GroupID, HitCount));
        }

        public override void OnExitClip(int index)
        {
            base.OnExitClip(index);

            EntityUtility.DispatchComponentEvent(Entity, GMEntityManager.ComponentEvent.OnEnableFightContactDetection,
                CommonEventArg.Get(false, TrackGroup.GroupID, HitCount));
        }
    }
}
