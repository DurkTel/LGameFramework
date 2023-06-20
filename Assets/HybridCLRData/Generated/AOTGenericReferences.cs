public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// Assembly-GameBase.dll
	// UnityEngine.AssetBundleModule.dll
	// UnityEngine.CoreModule.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// DictionaryEx<object,object>
	// SingletonBase<object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<object,int>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List.Enumerator<object>
	// UnityEngine.Events.UnityAction<float>
	// UnityEngine.Events.UnityAction<object>
	// }}

	public void RefMethods()
	{
		// object UnityEngine.AssetBundle.LoadAsset<object>(string)
		// object UnityEngine.GameObject.AddComponent<object>()
	}
}