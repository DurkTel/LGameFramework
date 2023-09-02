using LGameFramework.GameCore.Asset;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

[CustomEditor(typeof(GMAssetManagerHelper))]
public class GMAssetManagerHelperEditor : Editor
{
    private static readonly string[] s_ExtendToolBar1 = new string[] { "Asset", "AssetBundle" };

    private static readonly string[] s_ExtendToolBar2 = new string[] { "��ǰ�ڴ�", "������", "�ȴ�ж��" };

    private int m_CurrentToolBarIndex1, m_CurrentToolBarIndex2;

    private bool m_ShowHelper;

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
        //if (GUILayout.Button(m_ShowHelper ? "�ر���Դ���" : "������Դ���"))
        //    m_ShowHelper = !m_ShowHelper;

        //if (!m_ShowHelper) return;

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
            m_AssetFoldout = EditorGUILayout.Foldout(m_AssetFoldout, "��ԴԴ����", true);
            if (m_AssetFoldout)
            {
                EditorGUILayout.HelpBox("�ڴ��е���ԴԴ����", MessageType.Info);
                OnDrawBorder(AssetCache.RawAssetMap.Values, (p) =>
                {
                    AssetCache.RawObjectInfo info = (AssetCache.RawObjectInfo)p;
                    EditorGUILayout.SelectableLabel(string.Format("��Դ���ƣ�<color=#ffffff>{0}</color>", info.asstName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("����AB�����ƣ�<color=#77dc60>{0}</color>", info.bundleName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("���ü�����<color=#77dc60>{0}</color>", info.referenceCount), m_Skin.label);
                });
            }

            m_AssetBundleFoldout = EditorGUILayout.Foldout(m_AssetBundleFoldout, "��Դʵ��������", true);
            if (m_AssetBundleFoldout)
            {
                EditorGUILayout.HelpBox("�ڴ��е���Դʵ��������", MessageType.Info);
                OnDrawBorder(AssetCache.InstanceAssetMap, (p) =>
                {
                    KeyValuePair<int, AssetCache.InstanceObjectInfo> info = (KeyValuePair<int, AssetCache.InstanceObjectInfo>)p;
                    EditorGUILayout.SelectableLabel(string.Format("ʵ��ID��<color=#ffffff>{0}</color>", info.Key), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("��Դ���ƣ�<color=#ffffff>{0}</color>", info.Value.rawObjectInfo.asstName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("����AB�����ƣ�<color=#77dc60>{0}</color>", info.Value.rawObjectInfo.bundleName), m_Skin.label);
                    EditorGUILayout.LabelField(string.Format("���ü�����<color=#77dc60>{0}</color>", info.Value.rawObjectInfo.referenceCount), m_Skin.label);
                });
            }
        }
        else
        {
            EditorGUILayout.HelpBox("�ڴ��е�AssetBundle", MessageType.Info);
            OnDrawBorder(m_GMAssetManager.AllAB.Values, (p) =>
            {
                AssetBundleRecord info = (AssetBundleRecord)p;
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle���ƣ�<color=#ffffff>{0}</color>", info.BundleName), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("��AB�����س�����Դ���������<color=#77dc60>{0}</color>", info.RawReferenceCount), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("������AB�������ü�����<color=#77dc60>{0}</color>", info.DpendsReferenceCount), m_Skin.label);
            });
        }
    }

    private void OnDrawLoading()
    {
        if (m_CurrentToolBarIndex1 == 0)
        {
            if (m_GMAssetManager.AssetLoaders == null || m_GMAssetManager.AssetLoaders.Count == 0)
            {
                EditorGUILayout.HelpBox("�޼����е���Դ", MessageType.Warning);
                return;
            }
            EditorGUILayout.HelpBox("�����е���Դ", MessageType.Info);
            OnDrawBorder(m_GMAssetManager.AssetLoaders, (p) =>
            {
                KeyValuePair<string, Loader> info = (KeyValuePair<string, Loader>)p;
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle���ƣ�<color=#ffffff>{0}</color>", info.Key), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("AssetBundle���ؽ��ȣ�<color=#77dc60>{0}</color>", info.Value.Progress), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("AssetBundle·����<color=#77dc60>{0}</color>", info.Value.AssetName), m_Skin.label);
            });
        }
        else
        {
            if (m_GMAssetManager.AssetBundleLoader == null || m_GMAssetManager.AssetBundleLoader.Count == 0)
            {
                EditorGUILayout.HelpBox("�޼����е�AssetBundle", MessageType.Warning);
                return;
            }
            EditorGUILayout.HelpBox("�����е�AssetBundle", MessageType.Info);
            OnDrawBorder(m_GMAssetManager.AssetBundleLoader, (p) =>
            {
                AssetBundleLoader info = (AssetBundleLoader)p;
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle·����<color=#77dc60>{0}</color>", info.AssetName), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("AssetBundle���ؽ��ȣ�<color=#77dc60>{0}</color>", info.Progress), m_Skin.label);
            });
        }
    }

    private void OnDrawUnLoading()
    {
        if (m_CurrentToolBarIndex1 == 0)
        {
            EditorGUILayout.HelpBox("�ȴ�ж�ص�Դ������Դ", MessageType.Info);
            OnDrawBorder(m_GMAssetManager.WaitDestroyList, (p) =>
            {
                KeyValuePair<string, float> info = (KeyValuePair<string, float>)p;
                EditorGUILayout.SelectableLabel(string.Format("Դ�������ƣ�<color=#ffffff>{0}</color>", info.Key), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("ж��ʣ��ʱ�䣺<color=#77dc60>{0}</color>", m_GMAssetManager.WaitDestroyTime - (Time.unscaledTime - info.Value)), m_Skin.label);
            });
        }
        else
        {
            if (m_GMAssetManager.WaitDestroyABList == null || m_GMAssetManager.WaitDestroyABList.Count == 0)
            {
                EditorGUILayout.HelpBox("�޵ȴ�ж�ص�AssetBundle", MessageType.Warning);
                return;
            }
            EditorGUILayout.HelpBox("�ȴ�ж�ص�AssetBundle", MessageType.Info);
            OnDrawBorder(m_GMAssetManager.WaitDestroyABList, (p) =>
            {
                string info = (string)p;
                EditorGUILayout.SelectableLabel(string.Format("AssetBundle���ƣ�<color=#ffffff>{0}</color>", info), m_Skin.label);
                EditorGUILayout.LabelField(string.Format("ж��ʣ��ʱ�䣺<color=#77dc60>{0}</color>", m_GMAssetManager.WaitDestroyTime - (Time.unscaledTime - m_GMAssetManager.AllAB[info].BeginDestroyTime)), m_Skin.label);
            });
        }
    }

    private void OnDrawBorder(ICollection array, UnityAction<object> drawObj)
    {
        int flag = 0;
        int count = array.Count - 1;
        EditorGUILayout.BeginVertical();

        foreach (var item in array)
        {
            if (flag % 2 == 0)
                EditorGUILayout.BeginHorizontal();

            EditorGUILayout.BeginVertical(m_Skin.box);
            drawObj.Invoke(item);
            EditorGUILayout.EndVertical();

            if (flag % 2 == 1 || flag == count)
                EditorGUILayout.EndHorizontal();

            flag++;
        }

        EditorGUILayout.EndVertical();
    }
}
