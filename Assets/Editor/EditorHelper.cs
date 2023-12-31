using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.Events;

public class EditorHelper
{
    /// <summary>
    /// 绘制格子边界
    /// </summary>
    /// <param name="array">需要绘制的集合</param>
    /// <param name="row">列数</param>
    /// <param name="drawObj">绘制item的Render</param>
    /// <param name="skin"></param>
    public static void DrawBorder(ICollection array, int row, UnityAction<object, Rect, int> drawObj, GUISkin skin)
    {
        if (array == null) return;

        int flag = 0;
        int count = array.Count;
        EditorGUILayout.BeginVertical();

        foreach (var item in array)
        {

            if (flag % row == 0)
                EditorGUILayout.BeginHorizontal();

            Rect rect = EditorGUILayout.BeginVertical(skin.box);
            drawObj.Invoke(item, rect, flag);
            EditorGUILayout.EndVertical();

            flag++;

            if (flag % row == 0 || flag == count)
                EditorGUILayout.EndHorizontal();

        }

        EditorGUILayout.EndVertical();
    }
}
