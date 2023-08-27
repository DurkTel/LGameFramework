using LGameFramework.GameCore;
using LGameFramework.GameCore.Entity;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    /// <summary>
    /// ÓÎÏ·Ö÷Âß¼­
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
            if(Input.GetKeyUp(KeyCode.A))
            {
                Entity = GameFrameworkEntry.GetModule<GMEntityManager>().AddEntity(GMEntityManager.EntityType.LocalPlayer);
            }

            if (Input.GetKeyUp(KeyCode.B))
            {
                GameFrameworkEntry.GetModule<GMEntityManager>().ReleaseEntity(Entity.EntityData.EntityId);
            }
        }

    }
}