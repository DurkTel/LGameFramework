namespace LGameFramework.GameCore.GameEntity
{
    public sealed partial class GMEntityManager : FrameworkModule
    {
        public enum ComponentEvent
        {
            /// <summary>
            /// ��ʵ����
            /// </summary>
            OnChildEntityUpdate,
            /// <summary>
            /// ��ʵ����
            /// </summary>
            OnParentEntityUpdate,
            /// <summary>
            /// ʵ��Ƥ����λ�������
            /// </summary>
            OnSkinLoadComplete,
            /// <summary>
            /// ʵ�嶯�����������
            /// </summary>
            OnAnimatorLoadComplete,
            /// <summary>
            /// ʵ�嶯����״̬����
            /// </summary>
            OnAnimatorStateEnter,
            /// <summary>
            /// ʵ�嶯����״̬�˳�
            /// </summary>
            OnAnimatorStateExit,
            /// <summary>
            /// ����֡�¼�
            /// </summary>
            OnAnimatorFrameEvent,
            /// <summary>
            /// ���󶯻�������
            /// </summary>
            OnRequestAnimatiorOperation,
            /// <summary>
            /// ���󹥻�
            /// </summary>
            OnRequestAttack,
            /// <summary>
            /// ������Ч
            /// </summary>
            OnAttackSuccess,
            /// <summary>
            /// �����ܻ�
            /// </summary>
            OnRequestHit,
            /// <summary>
            /// ����/���� �ƶ�
            /// </summary>
            OnEnableMove,
            /// <summary>
            /// ���󶨵��ƶ�
            /// </summary>
            OnRequestFixedMove,
            /// <summary>
            /// ����·���ƶ�
            /// </summary>
            OnRequestNavMeshMove,
            /// <summary>
            /// ������Ծ
            /// </summary>
            OnRequestJump,
            /// <summary>
            /// ������
            /// </summary>
            OnRequestDiscard,
            /// <summary>
            /// ��������
            /// </summary>
            OnRequestEscape,
            /// <summary>
            /// ����/���� �����Ӵ����
            /// </summary>
            OnEnableFightContactDetection,
            /// <summary>
            /// ����/���� ��Ϊ��
            /// </summary>
            OnEnableBehaviorTree,
            /// <summary>
            /// ʵ������Լ��Ȱ뾶
            /// </summary>
            OnHotRadiusChange,
            /// <summary>
            /// ���󽻻�
            /// </summary>
            OnRequestInteract,
            /// <summary>
            /// ����ע��
            /// </summary>
            OnRequestLookAt,
            /// <summary>
            /// ��������ı�
            /// </summary>
            OnZoneAreaChange,
        }

    }
}
