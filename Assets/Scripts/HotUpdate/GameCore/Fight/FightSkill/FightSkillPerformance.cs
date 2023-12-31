using LGameFramework.GameBase;
using LGameFramework.GameCore.Config;
using LGameFramework.GameCore.GameEntity;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// ս�����ܱ���
    /// </summary>
    public class FightSkillPerformance : TrackPerformance
    {
        /// <summary>
        /// �����Ƿ�����
        /// </summary>
        public bool IsLeftHand { get { return false; } }

        public override void OnInit(GMFightBroadcastManager.FightBroadcastObject fbObject)
        {
            base.OnInit(fbObject);

            //string name = entity.EntityData.commonData.career + "_��ͨ����1.asset";
            //if (fbObject.SkillCode == 1001)
            //    name = entity.EntityData.commonData.career + "_��ͨ����2.asset";
            //else if (fbObject.SkillCode == 1002)
            //    name = entity.EntityData.commonData.career + "_���й���.asset";

            TrackGroup.OnInit("", fbObject.FromEntityId, fbObject.FightBroadId); //todo ͨ��codeȥȡ��Ӧ�Ĺ������
        }

        /// <summary>
        /// �Ƿ������������
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
