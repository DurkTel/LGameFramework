using System.Collections.Generic;
using System.IO;

namespace LGameFramework.GameBase
{
    [System.Serializable]
    public class AssetFile
    {
        /// <summary>
        /// �װ���Դ��ʾ��ʼ�����Դ�����Դ
        /// ����������Դ��ʾ����Ϸ����ʱ�����µ���Դ
        /// ��չ��Դ��ʾ�õ���ʱ����ȥ����
        /// </summary>
        public enum AssetFileFlag : int
        {
            /// <summary>
            /// �װ���Դ
            /// </summary>
            Build = 0,
            /// <summary>
            /// ������Դ
            /// </summary>
            Dll = 1,
            /// <summary>
            /// ����������Դ
            /// </summary>
            LaunchDownload = 2,
            /// <summary>
            /// ��չ��Դ
            /// </summary>
            ExtendDLC = 4,
        }

        /// <summary>
        /// ��Դ����
        /// </summary>
        public string assetName;

        /// <summary>
        /// ��Դ·��
        /// </summary>
        public string assetPath;

        /// <summary>
        /// ����AB����
        /// </summary>
        public string bundleName;

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
        /// ����Դ����������AB����
        /// </summary>
        public List<string> dependencieBundleNames;

        /// <summary>
        /// ��Դ��ʶ
        /// </summary>
        public AssetFileFlag fileFlag = AssetFileFlag.Build;

        public static AssetFile GetAssetFile(string assetName, string assetPath)
        {
            assetPath = assetPath.Replace("\\", "/");
            AssetFile file = new AssetFile();
            file.assetName = Path.GetFileName(assetName);
            file.assetPath = assetPath;
            file.md5Code = Utility.GetMD5(assetPath);
            file.size = Utility.GetFileSize(assetPath);
            return file;
        }
    }

}
