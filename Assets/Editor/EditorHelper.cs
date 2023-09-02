using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

public class EditorHelper
{
    public static void DrawBorder(ICollection array, int row, UnityAction<object> drawObj, GUISkin skin)
    {
        int flag = 0;
        int count = array.Count;
        EditorGUILayout.BeginVertical();

        foreach (var item in array)
        {

            if (flag % row == 0)
                EditorGUILayout.BeginHorizontal();

            EditorGUILayout.BeginVertical(skin.box);
            drawObj.Invoke(item);
            EditorGUILayout.EndVertical();

            flag++;

            if (flag % row == 0 || flag == count)
                EditorGUILayout.EndHorizontal();

        }

        EditorGUILayout.EndVertical();
    }
}
