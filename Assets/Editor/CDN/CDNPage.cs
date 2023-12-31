using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using UnityEditor;
using UnityEngine;
using UnityEngine.UIElements;
using UosCdn;

public class CDNPage : PageWindow.PageElement
{
    public override string Name => "CDN";

    public ParametersBucket pb = ParametersBucket.GetParametersBucket();

    public ParametersEntry pe = ParametersEntry.GetParametersEntry();

    public int IndentSize = 20;

    public int LabelWidth = 120;

    private int m_UploadTypeIndex;

    private string[] m_UploadTypeName = new string[] { "ȫ������", "��������" };

    public override void OnEnable()
    {
        string buildOutPath = EditorPrefs.GetString(BuildPage.RREFS_BUILD_OUT_PAHT, Path.Combine(Application.dataPath, "../A_Build/"));
        string buildTatget = ((BuildTarget)EditorPrefs.GetInt(BuildPage.RREFS_BUILD_TARGET, 19)).ToString();

        pe.syncPath = Path.Combine(buildOutPath, buildTatget);
    }

    public override void OnDisable()
    {

    }

    public override void OnGUI()
    {
        BucketArea();
        EntryArea();
        UploadArea();
    }

    private void BucketArea()
    {

        pb.showBucketAreaText = string.Format("Bucket ( current bucket : {0})", pb.selectedBucketName);

        EditorGUILayout.HelpBox("��һ����ѡ���Ӧ����Ͱ", MessageType.Info);
        GUILayout.BeginHorizontal();
        GUILayout.Space(IndentSize);

        pb.selectedBucketIndex = EditorGUILayout.Popup("����Ͱ", pb.selectedBucketIndex, pb.bucketNameList);

        if (pb.bucketList.Length > pb.selectedBucketIndex)
        {
            pb.selectedBucketName = pb.bucketList[pb.selectedBucketIndex].name;
            pb.selectedBucketUuid = pb.bucketList[pb.selectedBucketIndex].id;
        }
        else
        {
            pb.selectedBucketName = "";
            pb.selectedBucketUuid = "";
        }

        GUI.enabled = pb.bucketPreviousButton;
        if (GUILayout.Button(new GUIContent("-", "������һ������Ͱ"), GUILayout.Width(30)))
        {
            BucketController.LoadBuckets(pb.currentBucketPage - 1);
        }

        GUI.enabled = true;
        GUILayout.Label(pb.currentBucketPage.ToString(), GUILayout.Width(15));

        GUI.enabled = pb.bucketNextButton;
        if (GUILayout.Button(new GUIContent("+", "������һ������Ͱ"), GUILayout.Width(30)))
        {
            BucketController.LoadBuckets(pb.currentBucketPage + 1);
        }
        GUI.enabled = true;

        if (GUILayout.Button(new GUIContent("Load", "�������д���Ͱ"), GUILayout.Width(50)))
        {
            BucketController.LoadBuckets();
        }

        GUILayout.EndHorizontal();

    }

    private void EntryArea()
    {
        if (UosCdnSettings.Settings == null)
        {
            Debug.LogError("Something went wrong when init Unity Online Service settings.");
        }

        EditorGUILayout.HelpBox("�ڶ������ϴ����¶�Ӧ��Ŀ", MessageType.Info);

        pe.showEntryAreaText = "Entry";
        GUILayout.BeginHorizontal();

        m_UploadTypeIndex = EditorGUILayout.Popup("���·�ʽ", m_UploadTypeIndex, m_UploadTypeName);

        GUILayout.Space(IndentSize);

        pe.refreshSyncPath();

        GUILayout.EndHorizontal();
        GUILayout.BeginHorizontal();
        if (m_UploadTypeIndex == 0)
        {
            EditorGUILayout.LabelField("���������ļ���", pe.syncPath);
            if (GUILayout.Button(new GUIContent("ѡ���ļ���", "ѡ��Ҫ��Զ�̷�����ͬ�����ļ���"), GUILayout.Width(84)))
            {
                pe.syncPath = EditorUtility.OpenFolderPanel("ͬ���ļ���", pe.syncPath, "");
            }

            if (GUILayout.Button(new GUIContent("ͬ��", "����ѡ���ļ����е����ļ�������ļ�"), GUILayout.Width(50)))
            {
                if (ParametersUpload.syncFinished)
                {
                    //UploadWindow.uploadWindow();
                    Thread thread = new Thread(new ParameterizedThreadStart(EntryController.SyncEntries));
                    thread.Start(pe.syncPath);
                }
                else
                {
                    //UploadWindow.uploadWindow();
                }
            }
        }
        else
        {
            pe.selectedEntryIndex = EditorGUILayout.Popup("ѡ���ļ�", pe.selectedEntryIndex, pe.entryNameList);

            if (pe.entryList.Length > pe.selectedEntryIndex)
            {
                pe.selectedEntryName = pe.entryList[pe.selectedEntryIndex].path;
                pe.selectedEntryUuid = pe.entryList[pe.selectedEntryIndex].entryid;
            }
            else
            {
                pe.selectedEntryName = "";
                pe.selectedEntryUuid = "";
            }

            GUI.enabled = pe.entryPreviousButton;
            if (GUILayout.Button("-", GUILayout.Width(30)))
            {
                EntryController.LoadEntries(pe.currentEntryPage - 1);
            }

            GUI.enabled = true;
            GUILayout.Label(pe.currentEntryPage.ToString(), GUILayout.Width(15));

            GUI.enabled = pe.entryNextButton;
            if (GUILayout.Button("+", GUILayout.Width(30)))
            {
                EntryController.LoadEntries(pe.currentEntryPage + 1);
            }
            GUI.enabled = true;

            if (GUILayout.Button(new GUIContent("����", "��ҳ�����������Ŀ"), GUILayout.Width(50)))
            {
                EntryController.LoadEntries();
            }
            GUILayout.EndHorizontal();

            GUILayout.BeginHorizontal();
            GUILayout.Space(LabelWidth + IndentSize + 2);

            if (GUILayout.Button(new GUIContent("�ϴ�", "��������µ����ļ�������ȡ���ڷ��������Ƿ����")))
            {
                if (!ParametersUpload.syncFinished)
                {
                    //UploadWindow.uploadWindow();
                }
                else
                {
                    string fileToUpload = EditorUtility.OpenFilePanel("ѡ��Ҫ���ص��ļ�", "", "");
                    if (string.IsNullOrEmpty(fileToUpload))
                    {
                        return;
                    }

                    //UploadWindow.uploadWindow();
                    Thread thread = new Thread(new ParameterizedThreadStart(EntryController.UploadFileManual));
                    thread.Start(fileToUpload);
                }
            }

            if (GUILayout.Button("Delete"))
            {
                int option = EditorUtility.DisplayDialogComplex("ɾ���ļ�",
                    string.Format("�Ƿ�ȷʵҪɾ���ļ� - {0}", pe.selectedEntryName),
                    "Yes", "Cancel", "No");

                if (option == 0)
                {
                    EntryController.DeleteEntry(pe.selectedEntryUuid, pe.selectedEntryName);
                    EntryController.LoadEntries();
                }

            }

            if (GUILayout.Button(new GUIContent("��Ϣ", "��ʾ��ϸ���ļ���Ϣ")))
            {
                EntryController.ViewEntry();
            }
        }

        GUILayout.EndHorizontal();
    }

    private void UploadArea()
    {
        EditorGUILayout.HelpBox("���������ȴ��ϴ�CDN���", MessageType.Info);

        EditorGUILayout.LabelField("�ϴ����ļ���", string.Format("{0} / {1}", ParametersUpload.alreadyUploadFiles, ParametersUpload.totalUploadFiles));
        EditorGUILayout.LabelField("�ϴ����ȣ�", string.Format("{0} MB / {1} MB", ParametersUpload.alreadyUploadSize / 1048576.00f, ParametersUpload.totalUploadSize / 1048576.00f));
        EditorGUI.ProgressBar(new Rect(3, m_EditorWindow.position.height - 25, m_EditorWindow.position.width - 6, 20), ParametersUpload.totalUploadSize4Current == 0 ? 0 : (float)ParametersUpload.alreadyUploadSize4Current / ParametersUpload.totalUploadSize4Current,
            string.Format("{0} MB / {1} MB", ParametersUpload.alreadyUploadSize4Current / 1048576.00f, ParametersUpload.totalUploadSize4Current / 1048576.00f));
    }

    public override void OnInspectorUpdate()
    {
        Repaint();
    }
}
