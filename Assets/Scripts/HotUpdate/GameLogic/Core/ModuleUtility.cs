
namespace LGameFramework.GameLogic
{
    public class ModuleUtility<T> where T : LogicModule, new()
    {
        private static T m_Instance;

        protected static T Instance
        {
            get
            {
                if (m_Instance == null)
                    m_Instance = GameLogicEntry.GetModule<T>();

                return m_Instance;
            }
        }
    }
}
