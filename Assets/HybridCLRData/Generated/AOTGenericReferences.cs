public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// Assembly-GameBase.dll
	// System.dll
	// Unity.InputSystem.dll
	// UnityEngine.AssetBundleModule.dll
	// UnityEngine.CoreModule.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// DictionaryEx<object,object>
	// LGameFramework.GameBase.Pool.Pool<object>
	// System.Action<object>
	// System.Action<UnityEngine.InputSystem.InputAction.CallbackContext>
	// System.Collections.Generic.Dictionary<object,float>
	// System.Collections.Generic.Dictionary<GameCore.GUI.FMGUIManager.UILayerLevel,object>
	// System.Collections.Generic.Dictionary<GameCore.Entity.FMEntityManager.EntityType,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.Dictionary<GameCore.FMEventRegister,object>
	// System.Collections.Generic.Dictionary<int,object>
	// System.Collections.Generic.Dictionary<object,int>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.Enumerator<object,float>
	// System.Collections.Generic.Dictionary.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection<GameCore.Entity.FMEntityManager.EntityType,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<int,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<GameCore.Entity.FMEntityManager.EntityType,object>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.KeyValuePair<int,object>
	// System.Collections.Generic.KeyValuePair<object,float>
	// System.Collections.Generic.LinkedList<object>
	// System.Collections.Generic.LinkedList.Enumerator<object>
	// System.Collections.Generic.LinkedListNode<object>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List.Enumerator<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.Queue<object>
	// System.Comparison<object>
	// System.EventHandler<object>
	// UnityEngine.Events.UnityAction<object>
	// UnityEngine.Events.UnityAction<float>
	// UnityEngine.Events.UnityAction<UnityEngine.Vector2>
	// UnityEngine.Events.UnityAction<object,byte>
	// UnityEngine.Events.UnityAction<object,byte,object>
	// UnityEngine.Events.UnityAction<object,int,int>
	// UnityEngine.Events.UnityEvent<UnityEngine.Vector2>
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray<object>
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray.Enumerator<object>
	// }}

	public void RefMethods()
	{
		// object System.Activator.CreateInstance<object>()
		// object UnityEngine.AssetBundle.LoadAsset<object>(string)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// bool UnityEngine.GameObject.TryGetComponent<object>(object&)
		// UnityEngine.Vector2 UnityEngine.InputSystem.InputAction.ReadValue<UnityEngine.Vector2>()
		// object UnityEngine.Object.Instantiate<object>(object)
	}
}