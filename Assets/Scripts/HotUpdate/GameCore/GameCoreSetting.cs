using LGameFramework.GameCore.Asset;
using LGameFramework.GameBase;
using UnityEngine;

namespace LGameFramework.GameCore
{
    public class GameCoreSetting<T> : GameSetting<T> where T : ScriptableObject
    {
        public static T GetFormAssetBundle()
        {
            if (m_Value == null)
            {
                m_Value = AssetUtility.LoadAsset<T>(typeof(T).Name + ".asset");
                //m_Value = CreateInstance<T>();
            }

            return m_Value;
        }
    }
}
