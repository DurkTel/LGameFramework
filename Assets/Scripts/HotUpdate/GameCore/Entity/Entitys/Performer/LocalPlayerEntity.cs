

using static LGameFramework.GameCore.Entity.GMEntityManager;
using static LGameFramework.GameCore.Input.GMCrossPlatformInput;

namespace LGameFramework.GameCore.Entity
{
    public class LocalPlayerEntity : Entity
    {
        private EntityMove2D m_EntityMove2D;

        public override void OnInit(int eid, EntityType etype, EntityGroup egroup)
        {
            base.OnInit(eid, etype, egroup);

            AddComponent<EntityAOIComponent>();
            AddComponent<EntityCullingComponent>();
            AddComponent<EntitySkinComponent>();
            m_EntityMove2D = AddComponent<EntityMove2D>();

            GameFrameworkEntry.GetModule<GMEventManager>().Register(FMEventRegister.INPUT_DISPATCH_HANDLE, OnResponseMove);
        }

        private void OnResponseMove(object sender, GameEventArg e)
        {
            InputActionArgs actionArgs = (InputActionArgs)e;
            if (actionArgs.ActionName == "Move")
            {
                m_EntityMove2D.MoveDirection = actionArgs.Direction;
            }
        }
    }
}
