using GameCore.AOI;
using UnityEngine;

namespace GameCore.AOI
{
    public class GMNGridAOIManagerHelper : MonoBehaviour, IFrameworkEditorHelper<GMNGridAOIManager>
    {
        private GMNGridAOIManager m_DataSource;
        public GMNGridAOIManager DataSource { get { return m_DataSource; } }

        public void Attach(GMNGridAOIManager source)
        {
            m_DataSource = source;
        }


        private void OnDrawGizmos()
        {
            if (m_DataSource.AllGridBlock == null)
                return;

            Vector3 size = Vector3.one * m_DataSource.GridSize;
            Vector3 pos = Vector3.zero;
            Vector2Int vector = Vector2Int.zero;
            Gizmos.color = Color.green;
            foreach (var item in m_DataSource.AllGridBlock)
            {
                vector = item.GridPosition * m_DataSource.GridSize;
                pos.Set(vector[0], 0, vector[1]);
                Gizmos.DrawWireCube(pos, size);

            }
        }
    }
}
