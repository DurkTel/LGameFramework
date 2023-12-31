using UnityEngine;
using LGameFramework.GameCore.Audio;
using LGameFramework.GameBase;

namespace LGameFramework.GameCore
{
    public class AudioUtility : ModuleUtility<GMAudioManager>
    {
        /// <summary>
        /// ������Ƶ
        /// </summary>
        /// <param name="audioGroupName"></param>
        /// <param name="assetName"></param>
        /// <param name="immediately"></param>
        /// <returns></returns>
        public static bool Play(string audioGroupName, string assetName, bool immediately = false)
        {
            return Instance.Play(audioGroupName, assetName, immediately);
        }

        /// <summary>
        /// ������Ƶ
        /// </summary>
        /// <param name="audioGroupName"></param>
        /// <param name="audioClip"></param>
        /// <returns></returns>
        public static bool Play(string audioGroupName, AudioClip audioClip)
        {
            return Instance.Play(audioGroupName, audioClip);
        }

        /// <summary>
        /// �Ƿ񲥷���
        /// </summary>
        /// <param name="audioGroupName"></param>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public static bool IsPlaying(string audioGroupName, string assetName)
        {
            return Instance.IsPlaying(audioGroupName, assetName);
        }

        /// <summary>
        /// �Ƿ񲥷���
        /// </summary>
        /// <param name="audioGroupName"></param>
        /// <param name="audioClip"></param>
        /// <returns></returns>
        public static bool IsPlaying(string audioGroupName, AudioClip audioClip)
        {
            return Instance.IsPlaying(audioGroupName, audioClip);
        }

        /// <summary>
        /// �Ƴ���Ƶ
        /// </summary>
        /// <param name="audioGroupName"></param>
        /// <param name="audioClip"></param>
        /// <returns></returns>
        public static bool Delete(string audioGroupName, AudioClip audioClip)
        {
            return Instance.IsPlaying(audioGroupName, audioClip);
        }

        /// <summary>
        /// �Ƴ���Ƶ
        /// </summary>
        /// <param name="audioGroupName"></param>
        /// <param name="assetName"></param>
        /// <returns></returns>
        public static bool Delete(string audioGroupName, string assetName)
        {
            return Instance.IsPlaying(audioGroupName, assetName);
        }

        /// <summary>
        /// ������Ч
        /// </summary>
        /// <param name="volume"></param>
        public static void SetTotalAudio(float volume)
        {
            Instance.SetTotalAudio(volume);
        }
    }
}
