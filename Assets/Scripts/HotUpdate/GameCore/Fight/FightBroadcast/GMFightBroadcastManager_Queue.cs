using LGameFramework.GameBase;
using System.Collections.Generic;

namespace LGameFramework.GameCore.Fight
{
    public partial class GMFightBroadcastManager
    {
        public class FightBroadcastQueue
        {
            /// <summary>
            /// �ȴ��ͷŵĶ���
            /// ��Ϊ�п��ܶ������ͬʱ���� ��һ�Ķ����޷����� �������ֵļ���
            /// </summary>
            private Queue<FightBroadcastObject> m_WaitQueue;
            public Queue<FightBroadcastObject> WaitQueue { get { return m_WaitQueue; } }
            /// <summary>
            /// �����ͷŵĶ��У�ͬʱ���У�
            /// </summary>
            private List<FightBroadcastObject> m_ActiveQueue;
            public List<FightBroadcastObject> ActiveQueue { get { return m_ActiveQueue; } }
            /// <summary>
            /// �Ƿ����
            /// </summary>
            public bool IsFinish { get { return (m_WaitQueue == null && m_ActiveQueue == null) || (m_WaitQueue.Count <= 0 && m_ActiveQueue.Count <= 0); } }

            public void OnInit()
            {
                m_WaitQueue = new Queue<FightBroadcastObject>();
                m_ActiveQueue = new List<FightBroadcastObject>();
            }

            public FightBroadcastObject WaitActive(FightBroadInfoBegin info)
            {
                FightBroadcastObject fbObject = Pool.Get<FightBroadcastObject>();
                fbObject.OnInit(info);
                
                m_WaitQueue.Enqueue(fbObject);
                return fbObject;
            }

            public void Update(float deltaTime, float unscaledTime)
            {
                //��ӵ��ͷ��б��������
                //1.û�������ͷŵļ���
                //2.ȫ���Ѿ����ֻ����ǿɴ�ϵļ���
                int length = m_ActiveQueue.Count;
                bool isAdd = length <= 0;
                if (!isAdd) //�������ͷŵļ���
                {
                    bool flag = true;
                    for (int i = length - 1; i >= 0; i--)
                    {
                        FightBroadcastObject fbObject = m_ActiveQueue[i];
                        fbObject.Update(deltaTime);
                        flag = flag && (fbObject.FightSkillPerformance != null && fbObject.FightSkillPerformance.IsLeftHand || fbObject.FightSkillCfg.AllowBreak);
                        //Ԥ���б����м��� ֱ�Ӵ�ϵ�ǰ ս����������Դ�ϣ�
                        bool needBreak = fbObject.FightSkillCfg.AllowBreak && m_WaitQueue.Count > 0;

                        if (fbObject.IsFinish || needBreak)
                        {
                            fbObject.Release();
                            Pool.Release(fbObject);
                            m_ActiveQueue.RemoveAt(i);  
                        }
                    }

                    isAdd = m_ActiveQueue.Count <= 0 || flag;
                }
                
                if (isAdd && m_WaitQueue.Count > 0)
                    m_ActiveQueue.Add(m_WaitQueue.Dequeue());
            }

            /// <summary>
            /// ����
            /// </summary>
            public void Release()
            {
                m_WaitQueue.Clear();
                m_ActiveQueue.Clear();
                m_WaitQueue = null;
                m_ActiveQueue = null;
            }

            /// <summary>
            /// ���
            /// </summary>
            public void Break()
            {
                if (m_WaitQueue == null || m_ActiveQueue == null) return;
                foreach (var fbObject in m_WaitQueue)
                {
                    fbObject.Release();
                    Pool.Release(fbObject);
                }
                foreach (var fbObject in m_ActiveQueue)
                {
                    fbObject.Release();
                    Pool.Release(fbObject);
                }
                m_WaitQueue.Clear();
                m_ActiveQueue.Clear();
            }

            /// <summary>
            /// �Ƿ���Դ��
            /// </summary>
            /// <returns></returns>
            public bool IsCanBreak()
            {
                if (m_ActiveQueue == null) return false;
                bool isBreak = false;
                foreach (var fbObject in m_ActiveQueue)
                {
                    if (fbObject.FightSkillCfg != null && !fbObject.FightSkillCfg.AllowBreak)
                    {
                        isBreak = true;
                        break;
                    }
                }

                return isBreak;
            }


            /// <summary>
            /// �Ƿ������������
            /// </summary>
            /// <returns></returns>
            public bool IsOnCombo(ref int code)
            {
                if (m_ActiveQueue == null) return false;

                foreach (var fbObject in m_ActiveQueue)
                {
                    code = fbObject.FightSkillPerformance.IsOnCombo();
                    if (code != -1) return true;
                }

                return false;
            }
        }
    }
}
