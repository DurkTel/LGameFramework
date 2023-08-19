using GameCore.Asset;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore
{
    public class GameCoreSetting<T> : GameSetting<T> where T : ScriptableObject
    {
        public static T GetFormAssetBundle()
        {
            if (m_Value == null)
            {
                m_Value = GameEntry.GetModule<GMAssetManager>().LoadAsset<T>(typeof(T).Name + ".asset");
                //m_Value = CreateInstance<T>();
            }

            return m_Value;
        }
    }
}
