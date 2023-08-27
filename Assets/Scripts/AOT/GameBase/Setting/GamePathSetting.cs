using System.Collections.Generic;
using UnityEngine;

namespace LGameFramework.GameBase
{
    [CreateAssetMenu(fileName = "FilePath Setting", menuName = "LGameFramework/FilePath Setting")]
    public class GamePathSetting : GameSetting<GamePathSetting>
    {
        public List<FilePathStruct> filePathStructs = new List<FilePathStruct>();

        public FilePathStruct CurrentPlatform()
        {
            foreach (FilePathStruct filePathStruct in filePathStructs)
            {
                if (filePathStruct.platform == Application.platform)
                    return filePathStruct;
            }

            return default;
        }

        [System.Serializable]
        public struct FilePathStruct
        {
            /// <summary>
            /// ƽ̨
            /// </summary>
            public RuntimePlatform platform;

            /// <summary>
            /// �ױ��Ա��ļ�
            /// </summary>
            public string buildingFileName;

            /// <summary>
            /// ��Դ�嵥�ļ�
            /// </summary>
            public string assetManifestFileName;

            /// <summary>
            /// �汾�ļ�
            /// </summary>
            public string versionFileName;

            /// <summary>
            /// �����Դ·��
            /// </summary>
            public SpecialPathStruct downloadDataPath;

            /// <summary>
            /// ��������Դ��ַ
            /// </summary>
            public SpecialPathStruct serverDataPath;

            /// <summary>
            /// �װ�·��
            /// </summary>
            public SpecialPathStruct buildingPath;

            /// <summary>
            /// �ȸ�DLL·��
            /// </summary>
            public SpecialPathStruct hotUpdateDllPath;

            /// <summary>
            /// �ȸ�DLL����
            /// </summary>
            public string[] hotUpdateDll;
        }

        [System.Serializable]
        public struct SpecialPathStruct
        {
            public SpecialPath pathPrefix;

            [SerializeField]
            private string m_AssetPath;

            public string AssetPath 
            { 
                get 
                {
                    string prefix = "";
                    switch (pathPrefix)
                    {
                        case SpecialPath.DataPath:
                            prefix = Application.dataPath;
                            break;
                        case SpecialPath.StreamingAssetsPath:
                            prefix = Application.streamingAssetsPath;
                            break;
                        case SpecialPath.PersistentDataPath:
                            prefix = Application.persistentDataPath;
                            break;
                        case SpecialPath.TemporaryCachePath:
                            prefix = Application.temporaryCachePath;
                            break;
                        default:
                            break;
                    }
                    return prefix + m_AssetPath;
                } 
            }
        }

        public enum SpecialPath
        {
            None,
            DataPath,
            StreamingAssetsPath,
            PersistentDataPath,
            TemporaryCachePath
        }
    }
}
