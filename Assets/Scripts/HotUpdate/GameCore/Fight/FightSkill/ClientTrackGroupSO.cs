using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameCore.Fight
{
    [CreateAssetMenu(fileName = "ClientTrackGroup", menuName = "Fight/TrackGroup")]
    public class ClientTrackGroupSO : ScriptableObject
    {
        /// <summary>
        /// ººƒ‹πÏµ¿≈‰÷√
        /// </summary>
        public List<TrackCfg> AllTrackGroupSO;
        [System.Serializable]
        public class TrackCfg
        {
            public FightTrack Track;

            public ClipRange[] AllClip;
        }

    }
}
