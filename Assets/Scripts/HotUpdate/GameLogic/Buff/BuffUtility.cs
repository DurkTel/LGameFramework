using LGameFramework.GameBase;
using LGameFramework.GameCore.GameEntity;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static LGameFramework.GameLogic.Buff.GMBuffManager;

namespace LGameFramework.GameLogic.Buff
{
    public class BuffUtility : ModuleUtility<GMBuffManager>
    {

        /// <summary>
        /// ���buff
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="buffData"></param>
        public static int AddBuff<T>(BuffData buffData) where T : class, IGameBuff, new()
        {
            return Instance.AddBuff<T>(buffData);
        }

        /// <summary>
        /// �Ƴ�buff
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public static bool RemoveBuff(int id)
        {
            return Instance.RemoveBuff(id);
        }

        /// <summary>
        /// ��ȡʵ�����ϵ�����buff
        /// </summary>
        /// <param name="entity"></param>
        /// <param name="buffs"></param>
        public static void GetBuffsByEntity(int entity, ref List<IGameBuff> buffs)
        {
            Instance.GetBuffsByEntity(entity, ref buffs);
        }
    }
}
