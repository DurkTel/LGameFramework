using GameCore.AOI;
using UnityEngine;

namespace GameCore.AOI
{
    public class GMAOIManagerHelper : MonoBehaviour, IFrameworkEditorHelper<GMAOIManager>
    {
        private GMAOIManager m_DataSource;
        public GMAOIManager DataSource { get { return m_DataSource; } }

        public void Attach(GMAOIManager source)
        {
            m_DataSource = source;
        }


        private void OnDrawGizmos()
        {
            if (m_DataSource.AllGridBlock == null)
                return;

            Vector3 size = Vector3.one * m_DataSource.GridSize;
            Vector3 pos = Vector3.zero;
            Color gizColor = Gizmos.color;

            Vector2Int vector = Vector2Int.zero;
            float y, z;
            float halfSize = m_DataSource.GridSize * 0.5f;
            foreach (var item in m_DataSource.AllGridBlock)
            {
                if (m_DataSource.TargetNearGrid.Contains(item))
                    Gizmos.color = Color.red;
                else
                    Gizmos.color = Color.green;

                vector = item.GridPosition * m_DataSource.GridSize;
                y = m_DataSource.Axis == GMAOIManager.AOIAxis.XY ? vector[1] + halfSize : 0;
                z = m_DataSource.Axis == GMAOIManager.AOIAxis.XYZ ? vector[1] + halfSize : 0;
                pos.Set(vector[0] + halfSize, y, z);

                Gizmos.DrawWireCube(pos, size);

            }
            Gizmos.color = gizColor;

        }
    }
}
