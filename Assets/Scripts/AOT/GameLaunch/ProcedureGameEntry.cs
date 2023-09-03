using LGameFramework.GameBase.FSM;
using HybridCLR;
using LGameFramework.GameBase;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;

public class ProcedureGameEntry : FSM_Status<ProcedureLaunchProcess>
{
    private GamePathSetting.FilePathStruct m_GamePath;

    public override void OnEnter()
    {
        m_GamePath = GamePathSetting.Get().CurrentPlatform();

        LoadMetadataForAOTAssemblies();

        Assembly coreAssembly = null;

#if !UNITY_EDITOR
        foreach (var dll in m_GamePath.hotUpdateDll)
        {
            var assembly = Assembly.Load(File.ReadAllBytes($"{m_GamePath.hotUpdateDllPath}/{dll}.bytes"));
            if (coreAssembly == null)
                coreAssembly = assembly;
        }
#else
        foreach (var dll in m_GamePath.hotUpdateDll)
        {
            string name = Path.GetFileNameWithoutExtension(dll);
            var assembly = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == name);
            if (coreAssembly == null)
                coreAssembly = assembly;
        }
#endif

        Type type = coreAssembly.GetType("LGameFramework.GameCore.GameFrameworkEntry");
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
            string path = $"{m_GamePath.hotUpdateDll}/{aotDllName}.bytes";
            if (!File.Exists(path))
                continue;

            byte[] dllBytes = File.ReadAllBytes(path);
            // ����assembly��Ӧ��dll�����Զ�Ϊ��hook��һ��aot���ͺ�����native���������ڣ��ý������汾����
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            GameLogger.INFO($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}
