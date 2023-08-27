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
            /// 平台
            /// </summary>
            public RuntimePlatform platform;

            /// <summary>
            /// 首保对比文件
            /// </summary>
            public string buildingFileName;

            /// <summary>
            /// 资源清单文件
            /// </summary>
            public string assetManifestFileName;

            /// <summary>
            /// 版本文件
            /// </summary>
            public string versionFileName;

            /// <summary>
            /// 存放资源路径
            /// </summary>
            public SpecialPathStruct downloadDataPath;

            /// <summary>
            /// 服务器资源地址
            /// </summary>
            public SpecialPathStruct serverDataPath;

            /// <summary>
            /// 首包路径
            /// </summary>
            public SpecialPathStruct buildingPath;

            /// <summary>
            /// 热更DLL路径
            /// </summary>
            public SpecialPathStruct hotUpdateDllPath;

            /// <summary>
            /// 热更DLL名称
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
