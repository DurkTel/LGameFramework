using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace LGameFramework.GameBase
{
    public class DefaultLoadingGUI : MonoBehaviour
    {
        private static DefaultLoadingGUI s_Instance;

        private static GameObject s_RootGameObject;

        private Injection m_Injection;

        public static void Instantiate()
        {
            var go = Resources.Load<GameObject>("DefaultLoading");
            s_RootGameObject = Instantiate(go);
            s_Instance = s_RootGameObject.AddComponent<DefaultLoadingGUI>();
            s_Instance.m_Injection = s_RootGameObject.GetComponent<Injection>();
            DontDestroyOnLoad(s_RootGameObject);
            GameLogger.DEBUG("加载进度页面");
        }

        public static void SetActive(bool value)
        {
            s_RootGameObject.SetActive(value);
        }

        public static void SetBackground(string spriteName)
        {
            //var image = s_Instance.m_Injection.Get<Image>("Background");
            //image.sprite = 
        }

        public static void SetProgress(float progress)
        {
            var slider = s_Instance.m_Injection.Get<Slider>("Progress");
            slider.value = progress;
        }

        public static void SetProgressText(string str)
        {
            var text = s_Instance.m_Injection.Get<TextMeshProUGUI>("ProgressText");
            text.text = str;
        }
    }
}
