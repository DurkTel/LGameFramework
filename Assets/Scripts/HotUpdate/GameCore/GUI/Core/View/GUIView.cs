using Unity.VisualScripting.YamlDotNet.Core.Tokens;
using UnityEngine;
using UnityEngine.Events;

namespace GameCore
{
    public class GUIView : IView
    {
        private static Vector2 s_HidePosition = new Vector2 (9999, 9999);

        #region 内部属性
        protected GameObject m_GameObject;
        public GameObject gameObject { get { return m_GameObject; } }

        protected RectTransform m_RectTransform;
        public RectTransform rectTransform { get { return m_RectTransform; } }

        protected GameObject m_PrefabInstantiate;
        public GameObject prefabInstantiate { get { return m_PrefabInstantiate; } }

        protected Injection m_Injection;
        public Injection Injection { get { return m_Injection; } }

        protected bool m_IsLoading;
        public bool isLoading { get { return m_IsLoading; } }

        protected GUIViewLayer m_GUIViewLayer;
        public GUIViewLayer guiViewLayer { get { return m_GUIViewLayer; } }
        #endregion

        #region 派生参数
        /// <summary>
        /// 该界面对应预制体
        /// </summary>
        protected virtual string m_PrefabName { get { return "GUI_Default_View.prefab"; } }
        public string prefabName { get { return m_PrefabName; } }
        /// <summary>
        /// 该界面对应层级
        /// </summary>
        protected virtual GUIDefine.UILayerLevel m_LayerLevel { get { return GUIDefine.UILayerLevel.ViewUILayer; } }
        public GUIDefine.UILayerLevel layerLevel { get { return m_LayerLevel; } }
        /// <summary>
        /// 界面动画
        /// </summary>
        protected virtual UnityAction<GUIView, bool, UnityAction> m_OpenTween { get { return GUITween.GUITweenDefault; } }
        protected UnityAction<GUIView, bool, UnityAction> openTween { get { return m_OpenTween; } }
        /// <summary>
        /// 销毁时间
        /// </summary>
        protected virtual float m_DestroyTime { get { return 5f; } }
        public float destroyTime { get { return m_DestroyTime; } }

        #endregion

        public virtual void OnInit(GameObject go, GUIViewLayer layer)
        {
            m_GUIViewLayer = layer;
            m_GameObject = go;
            m_RectTransform = m_GameObject.TryAddComponent<RectTransform>();
            m_IsLoading = true;
        }

        public virtual void OnLoadComplete(AssetLoader loader)
        {
            m_IsLoading = false;
            m_PrefabInstantiate = loader.GetInstantiate<GameObject>();
            RectTransform rect = m_PrefabInstantiate.TryAddComponent<RectTransform>();
            rect.SetParentZero(m_RectTransform);
            rect.TileRectTransform();

            m_Injection = m_PrefabInstantiate.GetComponent<Injection>();

            OnInitView();
        }

        public virtual void OnInitView()
        {
            OnBeforeOpenEffect();
        }

        public virtual void OnBeforeOpenEffect()
        {
            SetVisible(true);
            OnOpenEffect();
        }

        public virtual void OnOpenEffect()
        {
            if (openTween != null)
                openTween.Invoke(this, true, OnEnableView);
            else
                OnEnableView();
        }

        public virtual void OnEnableView()
        {
            
        }

        public virtual void OnBeforeDisableEffect()
        {
            OnDisableEffect();
        }

        public virtual void OnDisableEffect()
        {
            if (openTween != null)
                openTween.Invoke(this, false, OnDisableView);
            else
                OnDisableView();
        }

        public virtual void OnDisableView()
        {
            SetVisible(false);
            GUIManager.instance.WaitToDestroy(this, destroyTime);
        }

        public virtual void OnDisposeView()
        {
            AssetUtility.Destroy(m_PrefabInstantiate);
            Object.Destroy(m_GameObject);
        }

        public virtual void Close()
        {
            GUIManager.instance.CloseView(GetType());
        }

        public void SetVisible(bool value)
        {
            m_RectTransform.anchoredPosition = value ? Vector2.zero : s_HidePosition;
        }
    }
}
