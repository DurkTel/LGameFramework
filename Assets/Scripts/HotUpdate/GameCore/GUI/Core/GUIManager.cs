using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.UI;
using GameCore;
using System;

public class GUIManager : SingletonMonoAuto<GUIManager>
{
    public Camera uiCamera;

    public Transform canvasRoot;

    private Dictionary<GUIDefine.UILayerLevel, GUIViewLayer> m_Layers = new Dictionary<GUIDefine.UILayerLevel, GUIViewLayer>((int)GUIDefine.UILayerLevel.LastFlag);

    private Dictionary<Type, IView> m_AllViewDict = new Dictionary<Type, IView>(50);

    private Dictionary<IView, float> m_WaitDestroy;

    private List<IView> m_DestroyList;

    private int m_OffsetOrder = 1000;

    private void Update()
    {
        if (m_WaitDestroy == null || m_WaitDestroy.Count <= 0) return;

        foreach (var view in m_WaitDestroy)
        {
            if (Time.unscaledTime < view.Value)
                continue;

            m_DestroyList ??= new List<IView>();
            m_DestroyList.Add(view.Key);
        }

        if (m_DestroyList == null || m_DestroyList.Count <= 0) return;

        foreach (var view in m_DestroyList)
        {
            m_WaitDestroy.Remove(view);
            m_AllViewDict.Remove(view.GetType());
            view.OnDisposeView();
        }
        m_DestroyList.Clear();
    }

    public void Initialize()
    {
        transform.localPosition = new Vector3(5000, 5000, 0);
        int layer = LayerMask.NameToLayer("UI");
        gameObject.layer = layer;
        GameObject cameraGO = new GameObject("UI_Camera");
        cameraGO.layer = layer;
        cameraGO.transform.SetParentZero(transform);
        cameraGO.tag = "UICamera";
        uiCamera = cameraGO.AddComponent<Camera>();
        uiCamera.clearFlags = CameraClearFlags.Depth;
        uiCamera.cullingMask = LayerMask.GetMask("UI");
        uiCamera.orthographic = true;
        uiCamera.depth = 2;
        uiCamera.farClipPlane = 50;

        GameObject canvasGO = new GameObject("UI_Canvas");
        canvasGO.layer = layer;
        canvasGO.transform.SetParentZero(transform);
        Canvas canvas = canvasGO.AddComponent<Canvas>();
        canvasGO.AddComponent<GraphicRaycaster>();
        canvas.renderMode = RenderMode.ScreenSpaceCamera;
        canvas.worldCamera = uiCamera;
        canvas.planeDistance = 10;
        CanvasScaler canvasScaler = canvasGO.AddComponent<CanvasScaler>();
        canvasScaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        canvasScaler.referenceResolution = new Vector2(1920, 1080);
        canvasScaler.screenMatchMode = CanvasScaler.ScreenMatchMode.MatchWidthOrHeight;
        canvasScaler.matchWidthOrHeight = 1f;
        canvasRoot = canvasGO.transform;

        GameObject eventGO = new GameObject("EventSystem", typeof(InputSystemUIInputModule));
        eventGO.layer = layer;
        eventGO.transform.SetParentZero(transform);

        for (int i = 0; i < (int)GUIDefine.UILayerLevel.LastFlag; i++)
        {
            int order = i * m_OffsetOrder;
            InitLayer((GUIDefine.UILayerLevel)i, order);
        }
    }

    public void InitLayer(GUIDefine.UILayerLevel layerName, int order)
    {
        Canvas canvas = SetGUILayer(layerName.ToString(), order);
        GUIViewLayer layer = new GUIViewLayer(canvas.gameObject, canvas);
        layer.SetSortingOrder(order, order + m_OffsetOrder);
        m_Layers.Add(layerName, layer);
    }

    private Canvas SetGUILayer(string layerName, int order)
    {
        GameObject layerGO = new GameObject(layerName);
        RectTransform rect = layerGO.AddComponent<RectTransform>();
        rect.SetParentZero(canvasRoot);
        rect.gameObject.layer = LayerMask.NameToLayer("UI");

        rect.offsetMax = rect.offsetMin = rect.anchorMin = Vector2.zero;
        rect.anchorMax = Vector2.one;

        Canvas canvas = layerGO.AddComponent<Canvas>();
        canvas.overrideSorting = true;
        canvas.sortingOrder = order;
        canvas.sortingLayerName = "UI";
        layerGO.AddComponent<GraphicRaycaster>();

        return canvas;
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
        IView view;
        if (m_AllViewDict.TryGetValue(type, out view))
        { 
            (view as GUIView).OnBeforeDisableEffect();
            return true;
        }

        return false;
    }

    public T OpenView<T>() where T : GUIView, new()
    {
        IView view = null;
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
            GUIViewLayer layer = m_Layers[guiView.layerLevel];
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
        GUIViewLayer layer = m_Layers[view.layerLevel];

        view.OnInit(go, layer);

        layer.AddView(view);

        AssetLoader loader = AssetUtility.LoadAssetAsync<GameObject>(view.prefabName);
        loader.onComplete = (loader) => { view.OnLoadComplete(loader); };
        return view as T;
    }

    public void WaitToDestroy(IView view, float destroyTime)
    {
        m_WaitDestroy ??= new Dictionary<IView, float>();

        if (!m_WaitDestroy.ContainsKey(view))
            m_WaitDestroy.Add(view, destroyTime + Time.unscaledTime);
    }
}
