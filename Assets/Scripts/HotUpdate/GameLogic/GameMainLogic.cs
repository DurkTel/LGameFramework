using LGameFramework.GameBase;
using LGameFramework.GameCore;
using LGameFramework.GameCore.Entity;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ��Ϸ���߼�
    /// </summary>
    public class GameMainLogic : MonoBehaviour
    {
        public Entity Entity;
        private void Awake()
        {
            GameWorldMessage.OninitWorld();
            GameWorldMessage.OninitWorldMessage();
        }

        void Update()
        {
            GameWorldDrives.Update();
        }

    }
}