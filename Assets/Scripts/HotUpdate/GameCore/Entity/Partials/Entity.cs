using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

public partial class Entity
{
    /// <summary>
    /// 实体id
    /// </summary>
    public int entityId { get; private set; }
    /// <summary>
    /// 实体类型
    /// </summary>
    public int entityType { get; private set; }
    /// <summary>
    /// 实体状态
    /// </summary>
    public int status { get; private set; }
    /// <summary>
    /// 皮肤是否已经初始化
    /// </summary>
    public bool skinInitialized { get; private set; }
    /// <summary>
    /// 皮肤是否已经开始初始化
    /// </summary>
    public bool skinIniting { get; private set; }

    private InputReader m_inputReader;
    /// <summary>
    /// 输入模块
    /// </summary>
    public InputReader inputReader
    {
        get
        {
            if(m_inputReader == null)
                m_inputReader = InputReader.GetInputAsset();

            return m_inputReader;
        }
    }
    /// <summary>
    /// 当前游戏对象
    /// </summary>
    public GameObject gameObject;
    /// <summary>
    /// 当前变换组件
    /// </summary>
    public Transform transform;
    /// <summary>
    /// 实体创建完成回调
    /// </summary>
    public static Action<int> onCreateEvent { get; set; }
    /// <summary>
    /// 实体回收完成回调
    /// </summary>
    public static Action<int> onDestroyEvent { get; set; }
    /// <summary>
    /// avatar加载完成
    /// </summary>
    public static Action<int> onLuaAvatarLoadComplete { get; set; }


    public void Init(int uid, int type , GameObject go)
    {
        entityId = uid;
        entityType = type;
        gameObject = go;
        transform = go.transform;
        
        MoveInit();
        JumpInit();
        CullGroupInit();
        ColliderInit();
    }

    public virtual void FixedUpdate(float deltaTime)
    {
        //刷新动画
        UpdateAnimation(deltaTime);
        //刷新移动
        UpdateMove(deltaTime);
    }

    public virtual void Update(float deltaTime)
    {
        //刷新剔除
        CullGroupUpdate(deltaTime);
    }

    public void LateUpdate()
    {
        //刷新特效
        UpdateEffect();
    }

    public void WaitCreate()
    {
        if (!skinInitialized)
            Skin_CreateAvatar();
    }

    public void Release()
    {
        entityId = -1;
        m_inputReader = null;
        skinIniting = false;
        ReleaseSkin();
        ReleaseCullGroup();
        ReleaseMove();
        ReleaseCollider();
        ReleaseHotRadius();
    }


    public void Dispose()
    {
        onCreateEvent = null;
        onDestroyEvent = null;
    }

    public void SetEntityPosition(Vector3 vector)
    {
        transform.localPosition = vector;
    }

}
