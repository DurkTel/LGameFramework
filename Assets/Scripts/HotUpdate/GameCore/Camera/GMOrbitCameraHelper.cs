using UnityEngine;

namespace LGameFramework.GameCore
{
    public class GMOrbitCameraHelper : MonoBehaviour, IFrameworkEditorHelper<GMOrbitCamera>
    {
        [SerializeField]
        private GMOrbitCamera m_DataSource;
        public GMOrbitCamera DataSource
        {
            get
            {
                return m_DataSource;
            }
        }

        public void Attach(GMOrbitCamera source)
        {
            m_DataSource = source;
        }

    }
}
