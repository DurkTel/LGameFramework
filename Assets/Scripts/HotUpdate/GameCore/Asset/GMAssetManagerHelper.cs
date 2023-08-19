using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Asset
{
    public class GMAssetManagerHelper : MonoBehaviour, IFrameworkEditorHelper<GMAssetManager>
    {
        private GMAssetManager m_DataSource;
        public GMAssetManager DataSource
        {
            get
            {
                return m_DataSource;
            }
        }

        public void Attach(GMAssetManager source)
        {
            m_DataSource = source;
        }

    }
}
