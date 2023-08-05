using System;
using System.Collections.Generic;
using System.IO;

namespace LGameFramework.GameBase
{
    [System.Serializable]
    public class AssetFileInfo
    {
        /// <summary>
        /// ��Դ����
        /// </summary>
        public string assetName;

        /// <summary>
        /// ����AB����
        /// </summary>
        public string bundleName;

        public static AssetFileInfo GetAssetFile(string assetName, string bundleName)
        {
            AssetFileInfo file = new AssetFileInfo();
            file.assetName = Path.GetFileName(assetName);
            file.bundleName = Path.GetFileName(bundleName) ;
            return file;
        }
    }


    [System.Serializable]
    public class AssetBundleInfo
    {
        /// <summary>
        /// �װ���Դ��ʾ��ʼ�����Դ�����Դ
        /// ����������Դ��ʾ����Ϸ����ʱ�����µ���Դ
        /// ��չ��Դ��ʾ�õ���ʱ����ȥ����
        /// </summary>
        [Flags]
        public enum AssetFileFlag : int
        {
            /// <summary>
            /// �װ���Դ
            /// </summary>
            Build = 1,
            /// <summary>
            /// ������Դ
            /// </summary>
            Dll = 2,
            /// <summary>
            /// ����������Դ
            /// </summary>
            LaunchDownload = 4,
            /// <summary>
            /// ��չ��Դ
            /// </summary>
            ExtendDLC = 8,
        }

        /// <summary>
        /// ����AB����
        /// </summary>
        public string bundleName;

        /// <summary>
        /// ��Դ·��
        /// </summary>
        public string assetPath;

        /// <summary>
        /// ��ԴMD5���¼
        /// </summary>
        public string md5Code;

        /// <summary>
        /// ��Դ��С
        /// </summary>
        public int size;

        /// <summary>
        /// �������ȼ�
        /// </summary>
        public int priority;

        /// <summary>
        /// CrcУ��ֵ
        /// </summary>
        public uint crc;

        /// <summary>
        /// ��AB������������AB����
        /// </summary>
        public string[] dependencieBundleNames;

        /// <summary>
        /// ��AB����������Դ
        /// </summary>
        public string[] allFiles;

        /// <summary>
        /// ��Դ��ʶ
        /// </summary>
        public AssetFileFlag fileFlag = AssetFileFlag.Build;

        public static AssetBundleInfo GetAssetBundleInfo(string bundleName, string assetPath, string fullPath)
        {
            assetPath = assetPath.Replace("\\", "/");
            fullPath = fullPath.Replace("\\", "/");
            AssetBundleInfo file = new AssetBundleInfo();
            file.bundleName = Path.GetFileName(bundleName);
            file.assetPath = assetPath;
            file.md5Code = Utility.GetMD5(fullPath);
            file.size = Utility.GetFileSize(fullPath);
            return file;
        }
    }
}
