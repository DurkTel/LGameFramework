using GameCore.Asset;
using GameCore.Audio;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(GMAssetManagerHelper))]
public class GMAssetManagerHelperEditor : Editor
{
    private static readonly string[] s_ExtendToolBar1 = new string[] { "Asset", "AssetBundle" };

    private static readonly string[] s_ExtendToolBar2 = new string[] { "当前内存", "加载中", "等待卸载" };

    private int m_CurrentToolBarIndex1, m_CurrentToolBarIndex2;

    private bool m_AssetFoldout = true;

    private bool m_AssetBundleFoldout = false;

    private GUISkin m_Skin;

    private GMAssetManager m_GMAssetManager;

    private Vector2 m_ScrollPos;

    public void OnEnable()
    {
        m_GMAssetManager = (target as GMAssetManagerHelper).DataSource;
        m_Skin = Resources.Load("GUISkin") as GUISkin;
    }

    public void OnDisable()
    {
        m_GMAssetManager = null;
    }

    public override bool RequiresConstantRepaint()
    {
        return true;
    }

    public override void OnInspectorGUI()
    {
        m_CurrentToolBarIndex1 = GUILayout.Toolbar(m_CurrentToolBarIndex1, s_ExtendToolBar1);
        m_CurrentToolBarIndex2 = GUILayout.Toolbar(m_CurrentToolBarIndex2, s_ExtendToolBar2);

        m_ScrollPos = EditorGUILayout.BeginScrollView(m_ScrollPos);

        if (m_CurrentToolBarIndex2 == 0)
            OnDrawNormal();
        else if (m_CurrentToolBarIndex2 == 1)
            OnDrawLoading();
        else
            OnDrawUnLoading();

        EditorGUILayout.EndScrollView();

    }

    private void OnDrawNormal()
    {
        if (m_CurrentToolBarIndex1 == 0)
        {
            m_AssetFoldout = EditorGUILayout.Foldout(m_AssetFoldout, "资源源对象", true);
            if (m_AssetFoldout)
            {
                EditorGUILayout.HelpBox("内存中的资源源对象", MessageType.Info);
                foreach (var item in AssetCache.RawAssetMap)
                {
                    EditorGUILayout.BeginVertical(m_Skin.box);
                    EditorGUILayout.SelectableLabel(string.Format("资源名称：<color=#ffffff>{0}</color>", item.Value.asstName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("所在AB包名称：<color=#77dc60>{0}</color>", item.Value.bundleName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("引用计数：<color=#77dc60>{0}</color>", item.Value.referenceCount), m_Skin.label);
                    EditorGUILayout.EndVertical();
                }
            }

            m_AssetBundleFoldout = EditorGUILayout.Foldout(m_AssetBundleFoldout, "资源实例化对象", true);
            if (m_AssetBundleFoldout)
            {
                EditorGUILayout.HelpBox("内存中的资源实例化对象", MessageType.Info);
                foreach (var item in AssetCache.InstanceAssetMap)
                {
                    EditorGUILayout.BeginVertical(m_Skin.box);
                    EditorGUILayout.SelectableLabel(string.Format("实例ID：<color=#ffffff>{0}</color>", item.Key), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("资源名称：<color=#ffffff>{0}</color>", item.Value.rawObjectInfo.asstName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("所在AB包名称：<color=#77dc60>{0}</color>", item.Value.rawObjectInfo.bundleName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("引用计数：<color=#77dc60>{0}</color>", item.Value.rawObjectInfo.referenceCount), m_Skin.label);
                    EditorGUILayout.EndVertical();
                }
            }
        }
        else
        {
            EditorGUILayout.HelpBox("内存中的AssetBundle", MessageType.Info);

            foreach (var item in m_GMAssetManager.AllAB)
            {
                EditorGUILayout.BeginVertical(m_Skin.box);
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle名称：<color=#ffffff>{0}</color>", item.Value.BundleName), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("此AB包加载出来的源对象计数：<color=#77dc60>{0}</color>", item.Value.RawReferenceCount), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("依赖此AB包的引用计数：<color=#77dc60>{0}</color>", item.Value.DpendsReferenceCount), m_Skin.label);
                EditorGUILayout.EndVertical();
            }
        }
    }

    private void OnDrawLoading()
    {
        if (m_CurrentToolBarIndex1 == 0)
        {
            if (m_GMAssetManager.AssetLoaders == null || m_GMAssetManager.AssetLoaders.Count == 0)
            {
                EditorGUILayout.HelpBox("无加载中的资源", MessageType.Warning);
                return;
            }
            EditorGUILayout.HelpBox("加载中的资源", MessageType.Info);
            foreach (var item in m_GMAssetManager.AssetLoaders)
            {
                EditorGUILayout.BeginVertical(m_Skin.box);
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle名称：<color=#ffffff>{0}</color>", item.Key), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("AssetBundle加载进度：<color=#77dc60>{0}</color>", item.Value.Progress), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("AssetBundle路径：<color=#77dc60>{0}</color>", item.Value.AssetName), m_Skin.label);
                EditorGUILayout.EndVertical();
            }
        }
        else
        {
            if (m_GMAssetManager.AssetBundleLoader == null || m_GMAssetManager.AssetBundleLoader.Count == 0)
            {
                EditorGUILayout.HelpBox("无加载中的AssetBundle", MessageType.Warning);
                return;
            }
            EditorGUILayout.HelpBox("加载中的AssetBundle", MessageType.Info);
            foreach (var item in m_GMAssetManager.AssetBundleLoader)
            {
                EditorGUILayout.BeginVertical(m_Skin.box);
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle路径：<color=#77dc60>{0}</color>", item.AssetName), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("AssetBundle加载进度：<color=#77dc60>{0}</color>", item.Progress), m_Skin.label);
                EditorGUILayout.EndVertical();
            }
        }
    }

    private void OnDrawUnLoading()
    {
        if (m_CurrentToolBarIndex1 == 0)
        {
            EditorGUILayout.HelpBox("源对象引用为0时直接销毁，暂无等待逻辑", MessageType.Info);
        }
        else
        {
            if (m_GMAssetManager.WaitDestroyABList == null || m_GMAssetManager.WaitDestroyABList.Count == 0)
            {
                EditorGUILayout.HelpBox("无等待卸载的AssetBundle", MessageType.Warning);
                return;
            }
            EditorGUILayout.HelpBox("等待卸载的AssetBundle", MessageType.Info);
            foreach (var name in m_GMAssetManager.WaitDestroyABList)
            {
                EditorGUILayout.BeginVertical(m_Skin.box);
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle名称：<color=#ffffff>{0}</color>", name), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("卸载剩余时间：<color=#77dc60>{0}</color>", m_GMAssetManager.WaitDestroyTime - (Time.unscaledTime - m_GMAssetManager.AllAB[name].BeginDestroyTime)), m_Skin.label);
                EditorGUILayout.EndVertical();
            }
        }
    }
}
