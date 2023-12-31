using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LGameFramework.GameCore.AOI;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore
{
    public class AOIUtility : ModuleUtility<GMAOIManager>
    {
        /// <summary>
        /// ���һ��Ԫ��
        /// </summary>
        /// <param name="element"></param>
        public static void AddElement(IGridElement element)
        {
            Instance.AddElement(element);
        }

        /// <summary>
        /// �Ƴ�һ��Ԫ��
        /// </summary>
        /// <param name="element"></param>
        public static void RemoveElement(IGridElement element)
        {
            Instance.RemoveElement(element);
        }

        /// <summary>
        /// ��ȡ��Ԫ�����ڵĸ���
        /// </summary>
        /// <param name="element"></param>
        /// <param name="blocks"></param>
        public static void GetNearGrid(IGridElement element, ref List<GMAOIManager.GridBlock> blocks)
        {
            Instance.GetNearGrid(element, ref blocks);
        }

        /// <summary>
        /// ����Ԫ�����ڸ���
        /// </summary>
        /// <param name="element"></param>
        /// <returns></returns>
        public static GMAOIManager.GridBlock GetBlockByElement(IGridElement element)
        {
            return Instance.GetBlockByElement(element);
        }

        /// <summary>
        /// ͨ����������������ڸ����±�
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public static int GetIndexByPosition(Vector3 position)
        {
            return Instance.GetIndexByPosition(position);
        }
    }
}
