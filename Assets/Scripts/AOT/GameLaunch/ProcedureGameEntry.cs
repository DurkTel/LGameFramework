using GameBase.FSM;
using HybridCLR;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;

public class ProcedureGameEntry : FSM_Status<ProcedureLaunchProcess>
{
    public override void OnEnter()
    {
        LoadMetadataForAOTAssemblies();

        Assembly coreAssembly = null;

#if !UNITY_EDITOR
        foreach (var dll in ProcedureLaunchPath.s_HotUpdateDllName)
        {
            var assembly = Assembly.Load(File.ReadAllBytes($"{ProcedureLaunchPath.s_HotUpdateDll}/{dll}.bytes"));
            if (coreAssembly == null)
                coreAssembly = assembly;
        }
#else
        foreach (var dll in ProcedureLaunchPath.s_HotUpdateDllName)
        {
            string name = Path.GetFileNameWithoutExtension(dll);
            var assembly = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == name);
            if (coreAssembly == null)
                coreAssembly = assembly;
        }
#endif

        Type type = coreAssembly.GetType("GameCore.GameEntry");
        type.GetMethod("Instantiate").Invoke(null, null);

        //������Ϸ�ɹ� ����������
        UnityEngine.Object.Destroy(dataBase.gameObject);
    }

    private void LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            "mscorlib.dll",
            "System.dll",
            "System.Core.dll",
        };
        /// ע�⣬����Ԫ�����Ǹ�AOT dll����Ԫ���ݣ������Ǹ��ȸ���dll����Ԫ���ݡ�
        /// �ȸ���dll��ȱԪ���ݣ�����Ҫ���䣬�������LoadMetadataForAOTAssembly�᷵�ش���
        /// 
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            string path = $"{ProcedureLaunchPath.s_HotUpdateDll}/{aotDllName}.bytes";
            if (!File.Exists(path))
                continue;

            byte[] dllBytes = File.ReadAllBytes(path);
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}
