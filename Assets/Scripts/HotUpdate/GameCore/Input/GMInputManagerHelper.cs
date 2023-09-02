using LGameFramework.GameCore.AOI;
using LGameFramework.GameCore.Asset;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Input
{
    public class GMInputManagerHelper : MonoBehaviour, IFrameworkEditorHelper<GMInputManager>
    {
        private GMInputManager m_DataSource;

        public GMInputManager DataSource { get { return m_DataSource; } }

        public void Attach(GMInputManager source)
        {
            m_DataSource = source;
        }
    }
}
