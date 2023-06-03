using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MobileUtility
{

    public static void RestartApplication()
    {

#if UNITY_EDITOR

#elif UNITY_ANDROID
        using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            const int Kintent_FLAG_ACTIVITY_CLEAR_TASK = 0x00008000;
            const int Kintent_FLAG_ACTIVITY_NEW_TASK = 0x10000000;

            var currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            var pm = currentActivity.Call<AndroidJavaObject>("getPackageManager");
            var intent = pm.Call<AndroidJavaObject>("getLaunchIntentForPackage", Application.identifier);

            intent.Call<AndroidJavaObject>("setFlags", Kintent_FLAG_ACTIVITY_CLEAR_TASK | Kintent_FLAG_ACTIVITY_NEW_TASK);
            currentActivity.Call("startActivity", intent);
            currentActivity.Call("finish");
            var process = new AndroidJavaClass("android.os.Process");
            int pid = process.CallStatic<int>("myPid");
            process.CallStatic("killProcess", pid);
        }
#elif UNITY_STANDALONE_WIN
        Application.Quit();
        string exepath = Path.Combine(Application.dataPath, string.Format("../{0}.exe", Application.productName));
        System.Diagnostics.Process.Start(exepath);
#endif
    }
}
