using DG.Tweening;
using LGameFramework.GameBase;
using LGameFramework.GameCore;
using LGameFramework.GameCore.GameScene;
using LGameFramework.GameLogic.Level;
using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameLogic
{
    public class DropTrapCopyLogic : BaseCopyLogic
    {
        private DropTrapGraph m_Graph;

        private DropTrapNode[] m_AllNode;

        private List<DropTrapNode> m_Temp;

        private float m_RandomInterval = 5f;
 
        public override void OnInit()
        {
            base.OnInit();
            m_Temp = new List<DropTrapNode>(5);
        }

        public override void OnCopyIn()
        {
            base.OnCopyIn();
            OnInitGraph();

        }

        public override void OnCopyOut()
        {
            base.OnCopyOut();
        }

        public override void OnCopyLogicBegin()
        {
            base.OnCopyLogicBegin();

            TimerUtility.AddTimer(RandomTriggerTrap, 0, m_RandomInterval, m_AllNode.Length);

        }

        private void OnInitGraph()
        { 
            var scene = SceneUtility.GetCurrentScene();
            m_AllNode = scene.Root.transform.Find("ProgramControl").GetComponentsInChildren<DropTrapNode>();
            m_Graph = new DropTrapGraph(m_AllNode.Length);

            for (int i = 0; i < m_AllNode.Length; i++)
            {
                var node = m_AllNode[i];
                node.index = i;
                m_Graph.AddVertex(i, int.Parse(node.name));
            }

            foreach (var node in m_AllNode)
            {
                foreach (var link in node.linkNode)
                { 
                    m_Graph.AddEdge(node.index, link.index);
                }
            }

        }
        private void RandomTriggerTrap()
        {
            int flag = 0;
            int index = 0;
            Random.InitState((int)Time.time);
            while (true)
            {
                if (flag++ > 100000)
                    break;

                index = Random.Range(0, m_AllNode.Length);
                if (!m_Graph.IsInvalid(index))
                    break;

            }

            TriggerTrap(index);
        }

        private void TriggerTrap(int index)
        {
            if (index < 0 || index >= m_Graph.Count) return;

            bool invalid = m_Graph.IsInvalid(index);
            if (invalid) return;

            var node = m_AllNode[index];
            m_Graph.SetInvalid(index);

            TrapAnimation(node);
        }

        private void TrapAnimation(DropTrapNode node)
        {
            m_Temp.Clear();
            m_Temp.Add(node);
            foreach (var item in node.linkNode)
            {
                if (m_Graph.IsInvalid(item.index))
                {
                    //把相邻的检测一下是否已经没有支点了
                    m_Temp.Add(item);
                }
            }
            node.transform.DOShakePosition(2f, 0.2f);

            foreach (var item in m_Temp)
            {
                m_Graph.SetInvalid(item.index);

                item.transform.DOLocalMoveY(-999, 2f).SetEase(Ease.InExpo).SetDelay(1.5f).OnComplete(() =>
                {
                    item.transform.SetActive(false);
                });
            }

        }
    }
}
