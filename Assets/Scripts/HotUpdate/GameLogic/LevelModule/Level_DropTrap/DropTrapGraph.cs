using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic.Level
{
    public class DropTrapGraph
    {

        /// <summary>
        /// 顶点数组
        /// </summary>
        private int[] m_Vertiexes;

        /// <summary>
        /// 邻接矩阵
        /// </summary>
        private int[,] m_Adjmatrix;
        public int[,] Adjmatrix { get { return m_Adjmatrix; } }

        /// <summary>
        /// 数量
        /// </summary>
        private int m_Count;
        public int Count { get { return m_Count; } }

        /// <summary>
        /// 无效的顶点
        /// </summary>
        private HashSet<int> m_Invalid;

        public DropTrapGraph(int count)
        {
            m_Count = count;
            m_Vertiexes = new int[count];
            m_Adjmatrix = new int[count, count];

            for (int i = 0; i < count; i++)
            {
                for (int j = 0; j < count; j++)
                {
                    m_Adjmatrix[i, j] = 0;
                }
            }
            m_Invalid = new HashSet<int>(count);
        }

        public void AddVertex(int index, int part)
        {
            m_Vertiexes[index] = part;
        }

        public void AddEdge(int vert1, int vert2)
        {
            m_Adjmatrix[vert1, vert2] = 1;
        }

        public int GetPart(int index)
        { 
            return m_Vertiexes[index];
        }

        public bool IsInvalid(int index)
        {
            return m_Invalid.Contains(index);
        }

        public void SetInvalid(int index)
        { 
            m_Invalid.Add(index);
        }

        public bool CheckIsInvalid(int index)
        {
            for (int i = 0; i < Count; i++)
            {
                if (m_Adjmatrix[index, i] == 0)
                    continue;

                if (!IsInvalid(i))
                    return false;
            }

            return true;
        }
    }
}
