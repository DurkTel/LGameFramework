
using LGameFramework.GameCore.GameEntity;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    /// <summary>
    /// �ܻ�����
    /// </summary>
    public class FightHitPerformance : TrackPerformance
    {
        public void OnInit(GMFightBroadcastManager.FightBroadcastObject fbObject, int entityId)
        {
            OnInit(fbObject);
            //var self = EntityUtility.GetTransform(entityId);
            //var form = EntityUtility.GetTransform(fbObject.FromEntityId);
            //float frontOrBack = Vector3.Dot(self.forward, form.forward);

            //string name = frontOrBack < 0 ? "�ܻ�����1.asset" : "�ܻ�����2.asset";
            //name = EntityUtility.GetEntityData<Config.RoleCareer>(entityId, "Career").ToString() + "_" + name;
            //TrackGroup.OnInit(name, entityId, fbObject.FightBroadId);
        }
    }
}
