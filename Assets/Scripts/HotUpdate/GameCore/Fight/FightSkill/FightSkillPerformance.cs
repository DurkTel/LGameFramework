using LGameFramework.GameBase;
using LGameFramework.GameCore.Config;
using LGameFramework.GameCore.GameEntity;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// 战斗技能表现
    /// </summary>
    public class FightSkillPerformance : TrackPerformance
    {
        /// <summary>
        /// 技能是否脱手
        /// </summary>
        public bool IsLeftHand { get { return false; } }

        public override void OnInit(GMFightBroadcastManager.FightBroadcastObject fbObject)
        {
            base.OnInit(fbObject);

            //string name = entity.EntityData.commonData.career + "_普通攻击1.asset";
            //if (fbObject.SkillCode == 1001)
            //    name = entity.EntityData.commonData.career + "_普通攻击2.asset";
            //else if (fbObject.SkillCode == 1002)
            //    name = entity.EntityData.commonData.career + "_索敌攻击.asset";

            TrackGroup.OnInit("", fbObject.FromEntityId, fbObject.FightBroadId); //todo 通过code去取对应的轨道配置
        }

        /// <summary>
        /// 是否可以派生连招
        /// </summary>
        /// <returns></returns>
        public int IsOnCombo()
        {
            int isCombo = -1;
            if (TrackGroup.AllTrack == null || TrackGroup.AllTrack.Length <= 0) return isCombo;

            foreach (var track in TrackGroup.AllTrack)
            {
                if (track is TrackCombo point && point.InClip)
                    return point.allCombo[point.CurrentIndex];
            }

            return isCombo;
        }
    }
}
