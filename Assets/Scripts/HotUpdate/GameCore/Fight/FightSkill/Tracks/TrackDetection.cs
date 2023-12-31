using LGameFramework.GameBase;

namespace LGameFramework.GameCore.Fight
{
    public class TrackDetection : FightTrack
    {
        public override void OnEnterClip(int index)
        {
            //Entity.Entity entity = Entity.EntityData.fightData.SelectTarget;
            //if (entity != null)
            //{
            //    ValueVariable3 variable3 = new ValueVariable3();
            //    float length = (float)GetLength(index);
            //    variable3.valueType1 = entity.Transform.position;
            //    variable3.valueType2 = length;
            //    variable3.valueType3 = length / 2f;
            //    Entity.DispatchComponentEvent(ComponentEvent.OnRequestFixedMove, ComponentEventArg.Get(null, variable3));
            //    Entity.EntityData.fightData.SelectTarget = null;
            //}
        }
    }
}
