using LGameFramework.GameCore;
using LGameFramework.GameCore.Asset;
using LGameFramework.GameCore.Input;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using static LGameFramework.GameCore.Input.GMInputManager;

[CustomEditor(typeof(GMInputManagerHelper))]
public class GMInputManagerHelperEditor : Editor
{
    private GMInputManager m_GMInputManager;

    private GUISkin m_Skin;


    public void OnEnable()
    {
        m_GMInputManager = (target as GMInputManagerHelper).DataSource;
        m_Skin = Resources.Load("GUISkin") as GUISkin;
    }

    public void OnDisable()
    {
        m_GMInputManager = null;
    }

    public override void OnInspectorGUI()
    {
        EditorHelper.DrawBorder(m_GMInputManager.inputBehaviour.Values, 1, (p, r, i) =>
        {
            InputBehaviour info = (InputBehaviour)p;
            EditorGUILayout.LabelField(string.Format("��Ϊ���ƣ�<color=#ffffff>{0}</color>", info.ActionName), m_Skin.label);
            foreach (var item in info.InputAction.bindings)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(string.Format("�󶨰�����<color=#ffffff>{0}</color>", item.effectivePath), m_Skin.label);
                if (GUILayout.Button("�޸�", GUILayout.Width(100)))
                {
                    GameFrameworkEntry.GetModule<GMInputManager>().StartInteractiveRebind(info.InputAction, item.id.ToString());
                }
                if (GUILayout.Button("����", GUILayout.Width(100)))
                {
                    GameFrameworkEntry.GetModule<GMInputManager>().ResetToDefault(info.InputAction, item.id.ToString());
                }
                EditorGUILayout.EndHorizontal();
            }


        }, m_Skin);

    }
}
