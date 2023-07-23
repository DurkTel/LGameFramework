public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// Assembly-GameBase.dll
	// System.dll
	// UnityEngine.AssetBundleModule.dll
	// UnityEngine.CoreModule.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// DictionaryEx<object,object>
	// Pool<object>
	// SingletonMono<object>
	// System.Action<object>
	// System.Collections.Generic.Dictionary<object,int>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<GameCore.GUI.GUIModule.UILayerLevel,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<object,float>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,float>
	// System.Collections.Generic.Dictionary.ValueCollection<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.KeyValuePair<object,float>
	// System.Collections.Generic.LinkedList<object>
	// System.Collections.Generic.LinkedList.Enumerator<object>
	// System.Collections.Generic.LinkedListNode<object>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List.Enumerator<object>
	// UnityEngine.Events.UnityAction<float>
	// UnityEngine.Events.UnityAction<object>
	// UnityEngine.Events.UnityAction<UnityEngine.Vector2>
	// UnityEngine.Events.UnityAction<object,byte>
	// UnityEngine.Events.UnityAction<object,byte,object>
	// UnityEngine.Events.UnityAction<object,int,int>
	// UnityEngine.Events.UnityEvent<UnityEngine.Vector2>
	// }}

	public void RefMethods()
	{
		// object System.Activator.CreateInstance<object>()
		// object UnityEngine.AssetBundle.LoadAsset<object>(string)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// bool UnityEngine.GameObject.TryGetComponent<object>(object&)
		// object UnityEngine.Object.Instantiate<object>(object)
	}
}