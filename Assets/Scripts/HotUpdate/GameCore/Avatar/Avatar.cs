using LGameFramework.GameBase.Pool;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace GameCore.Avatar
{
    /// <summary>
    /// 模型替身系统
    /// </summary>
    public partial class Avatar : MonoBehaviour
    {
        /// <summary>
        /// 部位字典
        /// </summary>
        private Dictionary<AvatarPartType, AvatarPart> m_PartDict;
        public Dictionary<AvatarPartType,AvatarPart> PartDict { get { return m_PartDict; } }

        private void Update()
        {
            foreach (var part in m_PartDict.Values)
            {
                part.Update();
            }
        }

        public void AddPart(AvatarPartType partType, string assetName)
        {
            AvatarPart part = Pool<AvatarPart>.Get();
            part.OnInit(this, partType);
            part.AssetName = assetName;

            m_PartDict ??= new Dictionary<AvatarPartType, AvatarPart>((int)AvatarPartType.End);
            m_PartDict.Add(partType, part);
        }
    }
}
