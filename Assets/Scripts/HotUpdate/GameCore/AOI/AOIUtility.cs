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
        /// 添加一个元素
        /// </summary>
        /// <param name="element"></param>
        public static void AddElement(IGridElement element)
        {
            Instance.AddElement(element);
        }

        /// <summary>
        /// 移除一个元素
        /// </summary>
        /// <param name="element"></param>
        public static void RemoveElement(IGridElement element)
        {
            Instance.RemoveElement(element);
        }

        /// <summary>
        /// 获取该元素相邻的格子
        /// </summary>
        /// <param name="element"></param>
        /// <param name="blocks"></param>
        public static void GetNearGrid(IGridElement element, ref List<GMAOIManager.GridBlock> blocks)
        {
            Instance.GetNearGrid(element, ref blocks);
        }

        /// <summary>
        /// 返回元素所在格子
        /// </summary>
        /// <param name="element"></param>
        /// <returns></returns>
        public static GMAOIManager.GridBlock GetBlockByElement(IGridElement element)
        {
            return Instance.GetBlockByElement(element);
        }

        /// <summary>
        /// 通过世界坐标计算所在格子下标
        /// </summary>
        /// <param name="position"></param>
        /// <returns></returns>
        public static int GetIndexByPosition(Vector3 position)
        {
            return Instance.GetIndexByPosition(position);
        }
    }
}
