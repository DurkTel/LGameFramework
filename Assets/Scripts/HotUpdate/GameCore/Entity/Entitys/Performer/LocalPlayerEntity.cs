

using static LGameFramework.GameCore.Entity.GMEntityManager;
using static LGameFramework.GameCore.Input.GMInputManager;

namespace LGameFramework.GameCore.Entity
{
    public class LocalPlayerEntity : Entity
    {
        public override void OnInit(int eid, EntityType etype, EntityGroup egroup)
        {
            base.OnInit(eid, etype, egroup);

            AddComponent<AOIComponent>();
            AddComponent<CullingComponent>();
            AddComponent<SkinComponent>();
            AddComponent<AnimationComponent>();

            AddComponent<InputResponseComponent>().OnInputResponse = OnResponseInput;
        }

        private void OnResponseInput(InputActionArgs actionArgs)
        {
            if (actionArgs.ActionName == "Move")
            {

            }
        }
    }
}
