using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// 技能打击点轨道
    /// </summary>
    public class TrackHit : FightTrack
    {
        /// <summary>
        /// 打击次数
        /// </summary>
        public int HitCount { get { return ClipCount; } }

        public override void OnEnterClip(int index)
        {
            base.OnEnterClip(index);
        }

        public override void OnExitClip(int index)
        {
            base.OnExitClip(index);

        }
    }
}
