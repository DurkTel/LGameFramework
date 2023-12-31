using LGameFramework.GameBase;
using LGameFramework.GameCore;
using LGameFramework.GameCore.GameEntity;
using LGameFramework.GameLogic.Level;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ÓÎÏ·Ö÷Âß¼­
    /// </summary>
    public class GameMainLogic : MonoBehaviour
    {

        private void Awake()
        {
            GameLogicEntry.Instantiate();

            DefaultLoadingGUI.SetActive(false);

            GameWorldMessage.OnInit();

        }

        private void Start()
        {
            GameWorldMessage.OninitWorldMessage();

        }

        void Update()
        {
            GameWorldDrives.Update();

        }
    }
}