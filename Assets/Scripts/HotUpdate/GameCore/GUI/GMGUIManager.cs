using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.InputSystem.UI;
using System;
using LGameFramework.GameCore.Asset;

namespace LGameFramework.GameCore.GUI
{
    public partial class GMGUIManager : FrameworkModule
    {
        private Camera m_UICamera;
        public Camera UICamera { get { return m_UICamera; } }

        private Transform m_CanvasRoot;
        public Transform CanvasRoot { get { return m_CanvasRoot; } }

        private int m_UILayer = LayerMask.NameToLayer("UI");

        private Dictionary<UILayerLevel, GUIViewLayer> m_Layers = new Dictionary<UILayerLevel, GUIViewLayer>((int)UILayerLevel.LastFlag);

        private Dictionary<Type, GUIView> m_AllViewDict = new Dictionary<Type, GUIView>(50);

        private GMAssetManager m_AssetModule;

        private Dictionary<GUIView, float> m_WaitDestroy;

        private List<GUIView> m_DestroyList;

        private int m_OffsetOrder = 1000;

        internal override int Priority => 2;

        internal override GameObject GameObject { get; set; }
        internal override Transform Transform { get; set; }

        internal override void OnInit()
        {
            m_AssetModule = GameFrameworkEntry.GetModule<GMAssetManager>();

            InitializeCamera();

            InitializeCanvas();

            InitializeLayer();
        }

        internal override void Update(float deltaTime, float unscaledTime)
        {
            if (m_WaitDestroy == null || m_WaitDestroy.Count <= 0) return;

            foreach (var view in m_WaitDestroy)
            {
                if (Time.unscaledTime < view.Value)
                    continue;

                m_DestroyList ??= new List<GUIView>();
                m_DestroyList.Add(view.Key);
            }

            if (m_DestroyList == null || m_DestroyList.Count <= 0) return;

            foreach (var view in m_DestroyList)
            {
                m_WaitDestroy.Remove(view);
                m_AllViewDict.Remove(view.GetType());
                m_AssetModule.Destroy(view.PrefabInstantiate);
                UnityEngine.Object.Destroy(view.GameObject);

                view.OnDispose();
            }
            m_DestroyList.Clear();
        }


        public bool IsShowIng<T>()
        { 
            Type viewType = typeof(T);
            return m_AllViewDict.ContainsKey(viewType);
        }

        public bool IsCanOpenView<T>()
        {
            return true;
        }

        public bool CloseView<T>() where T : GUIView
        {
            return CloseView(typeof(T));
        }

        public bool CloseView(Type type)
        {
            GUIView view;
            if (m_AllViewDict.TryGetValue(type, out view))
            {
                view.OnBeforeDisableEffect();
                return true;
            }

            return false;
        }

        public T OpenView<T>() where T : GUIView, new()
        {
            GUIView view = null;
            if (!IsCanOpenView<T>()) return null;

            Type viewType = typeof(T);
            if (!m_AllViewDict.TryGetValue(viewType, out view))
            {
                view = CreateView<T>();
                if (view == null) return null;
                m_AllViewDict.Add(viewType, view);
            }
            else
            {
                view = m_AllViewDict[viewType];
                if (m_WaitDestroy != null && m_WaitDestroy.ContainsKey(view))
                    m_WaitDestroy.Remove(view);

                T guiView = view as T;
                GUIViewLayer layer = m_Layers[guiView.LayerLevel];
                layer.UpdateSortingOrder(view);
                layer.SetAsTop(view);
                guiView.OnBeforeOpenEffect();
            }

            return view as T;
        }

        private T CreateView<T>() where T : GUIView, new()
        {
            T view = new T();
            GameObject go = new GameObject(view.GetType().Name + "_Container");
            GUIViewLayer layer = m_Layers[view.LayerLevel];

            view.OnConstructor(go, layer);

            layer.AddView(view);

            Loader loader = m_AssetModule.LoadAssetAsync<GameObject>(view.PrefabName);
            loader.onComplete = (loader) => { view.OnLoadComplete(loader); };
            return view as T;
        }

        internal void WaitToDestroy(GUIView view, float destroyTime)
        {
            m_WaitDestroy ??= new Dictionary<GUIView, float>();

            if (!m_WaitDestroy.ContainsKey(view))
                m_WaitDestroy.Add(view, destroyTime + Time.unscaledTime);
        }

        #region ³õÊ¼»¯º¯Êý
        private void InitializeCamera()
        {
            Transform.localPosition = new Vector3(5000, 5000, 0);
            GameObject.layer = m_UILayer;
            GameObject cameraGO = new GameObject("UI_Camera");
            cameraGO.layer = m_UILayer;
            cameraGO.transform.SetParentZero(Transform);
            cameraGO.tag = "UICamera";
            m_UICamera = cameraGO.AddComponent<Camera>();
            m_UICamera.clearFlags = CameraClearFlags.Depth;
            m_UICamera.cullingMask = m_UILayer;
            m_UICamera.orthographic = true;
            m_UICamera.depth = 2;
            m_UICamera.farClipPlane = 50;
        }

        private void InitializeCanvas()
        {
            GameObject canvasGO = new GameObject("UI_Canvas");
            canvasGO.layer = m_UILayer;
            canvasGO.transform.SetParentZero(Transform);
            Canvas canvas = canvasGO.AddComponent<Canvas>();
            canvasGO.AddComponent<GraphicRaycaster>();
            canvas.renderMode = RenderMode.ScreenSpaceCamera;
            canvas.worldCamera = m_UICamera;
            canvas.planeDistance = 10;
            CanvasScaler canvasScaler = canvasGO.AddComponent<CanvasScaler>();
            canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
            canvasScaler.referenceResolution = new Vector2(1920, 1080);
            canvasScaler.screenMatchMode = CanvasScaler.ScreenMatchMode.MatchWidthOrHeight;
            canvasScaler.matchWidthOrHeight = 1f;
            m_CanvasRoot = canvasGO.transform;

            GameObject eventGO = new GameObject("EventSystem", typeof(InputSystemUIInputModule));
            eventGO.layer = m_UILayer;
            eventGO.transform.SetParentZero(Transform);
        }

        private void InitializeLayer()
        {
            UILayerLevel layerName;
            for (int i = 0; i < (int)UILayerLevel.LastFlag; i++)
            {
                layerName = (UILayerLevel)i;
                int order = i * m_OffsetOrder;
                Canvas canvas = SetGUILayer(layerName.ToString(), order);
                GUIViewLayer layer = new GUIViewLayer(canvas.gameObject, canvas);
                layer.SetSortingOrder(order, order + m_OffsetOrder);
                m_Layers.Add(layerName, layer);
            }
        }

        private Canvas SetGUILayer(string layerName, int order)
        {
            GameObject layerGO = new GameObject(layerName);
            RectTransform rect = layerGO.AddComponent<RectTransform>();
            rect.SetParentZero(m_CanvasRoot);
            rect.gameObject.layer = m_UILayer;

            rect.offsetMax = rect.offsetMin = rect.anchorMin = Vector2.zero;
            rect.anchorMax = Vector2.one;

            Canvas canvas = layerGO.AddComponent<Canvas>();
            canvas.overrideSorting = true;
            canvas.sortingOrder = order;
            canvas.sortingLayerName = "UI";
            layerGO.AddComponent<GraphicRaycaster>();

            return canvas;
        }

        #endregion
    }
}
