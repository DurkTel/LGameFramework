
namespace LGameFramework.GameCore
{
    public class ModuleUtility<T> where T : FrameworkModule, new()
    {
        private static T m_Instance;

        protected static T Instance
        {
            get
            {
                if (m_Instance == null)
                    m_Instance = GameFrameworkEntry.GetModule<T>();

                return m_Instance;
            }
        }
    }
}
