using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public abstract class PageWindow : EditorWindow
{
    public abstract class PageElement
    {
        protected EditorWindow m_EditorWindow;

        public virtual void OnInit(EditorWindow window)
        { 
            m_EditorWindow = window;
        }

        public abstract string Name { get; }

        public abstract void OnEnable();

        public abstract void OnDisable();

        public abstract void OnGUI();

        public virtual void OnInspectorUpdate() { }

        public void Repaint()
        {
            m_EditorWindow.Repaint();
        }
    }

    /// <summary>
    /// 当前选中页下标
    /// </summary>
    protected int m_FocusIndex;

    /// <summary>
    /// 当前选中页
    /// </summary>
    protected PageElement m_FocusPage;

    /// <summary>
    /// 所有分页
    /// </summary>
    protected abstract PageElement[] m_AllPages { get; }

    /// <summary>
    /// 分页名称
    /// </summary>
    protected string[] m_PagesNames;

    public virtual void OnEnable()
    {
        m_FocusIndex = 0;
        m_FocusPage = m_AllPages[m_FocusIndex];
        m_PagesNames = new string[m_AllPages.Length];
        for (int i = 0; i < m_AllPages.Length; i++)
        {
            m_AllPages[i].OnInit(this);
            m_PagesNames[i] = m_AllPages[i].Name;
        }

        m_FocusPage.OnEnable();
    }

    protected void OnDisable()
    {
        m_FocusPage.OnDisable();
    }

    protected void OnGUI()
    {
        EditorGUILayout.Space();
        EditorGUILayout.BeginHorizontal();
        EditorGUILayout.Space(50);

        EditorGUI.BeginChangeCheck();
        m_FocusIndex = GUILayout.Toolbar(m_FocusIndex, m_PagesNames, GUILayout.Height(25));
        if (EditorGUI.EndChangeCheck())
        {
            m_FocusPage.OnDisable();
            m_FocusPage = m_AllPages[m_FocusIndex];
            m_FocusPage.OnEnable();
        }
        EditorGUILayout.Space();
        EditorGUILayout.EndHorizontal();

        m_FocusPage.OnGUI();
    }

    private void OnInspectorUpdate()
    {
        m_FocusPage.OnInspectorUpdate();
    }
}
