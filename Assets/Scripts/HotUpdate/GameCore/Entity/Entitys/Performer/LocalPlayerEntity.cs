

using static LGameFramework.GameCore.Entity.GMEntityManager;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore.Entity
{
    public class LocalPlayerEntity : Entity
    {
        private EntityMove2D m_EntityMove2D;

        public override void OnInit(int eid, EntityType etype, EntityGroup egroup)
        {
            base.OnInit(eid, etype, egroup);

            AddComponent<AOIComponent>();
            AddComponent<CullingComponent>();
            AddComponent<SkinComponent>();
            AddComponent<InputResponseComponent>().OnInputResponse = OnResponseInput;
            m_EntityMove2D = AddComponent<EntityMove2D>();
        }

        private void OnResponseInput(InputActionArgs actionArgs)
        {
            if (actionArgs.ActionName == "Move")
            {
                m_EntityMove2D.MoveDirection = actionArgs.Direction;
            }
        }
    }
}
