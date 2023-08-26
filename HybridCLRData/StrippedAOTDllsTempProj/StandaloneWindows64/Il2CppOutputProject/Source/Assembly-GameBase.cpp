#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GameBase.FSM.FSM_Status`1<System.Object>>
struct Action_1_t9061A5C51A94DE99C3AE01F14F18895316F650A9;
// System.Action`1<GameBase.FSM.FSM_Status`1<System.String>>
struct Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,GameBase.FSM.FSM_Status`1<System.String>>
struct Dictionary_2_t83EB36D598B7EF91EE314AF098BE661F2C0F00EC;
// System.Collections.Generic.Dictionary`2<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>
struct Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9;
// GameBase.FSM.FSM_Condition`1<System.Boolean>
struct FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450;
// GameBase.FSM.FSM_Condition`1<System.Int32>
struct FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22;
// GameBase.FSM.FSM_Condition`1<System.Single>
struct FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263;
// GameBase.FSM.FSM_StateMachine`1<System.Object>
struct FSM_StateMachine_1_tB2B90C7211FEE0CCFA62FD6CA771EE574A38577B;
// GameBase.FSM.FSM_StateMachine`1<System.String>
struct FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1;
// GameBase.FSM.FSM_Status`1<System.Object>
struct FSM_Status_1_t258D8A5E387BE4382AC19770F01F8CCDB0EDDA6E;
// GameBase.FSM.FSM_Status`1<System.String>
struct FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132;
// GameBase.FSM.FSM_Transition`1<System.Object>
struct FSM_Transition_1_t68C6661F3E9893A9A8BE24A3828853D9C6E4BC33;
// GameBase.FSM.FSM_Transition`1<System.String>
struct FSM_Transition_1_t8BE906BAA156CF7FAC81A619C8CBF5219900CC5E;
// GameSetting`1<LGameFramework.GameBase.GameLaunchSetting>
struct GameSetting_1_tA339F7D4269DC6A2CAF43CD94EE66CCDAC9B9AF8;
// GameSetting`1<LGameFramework.GameBase.GamePathSetting>
struct GameSetting_1_t32D6F738F573D1546397C778B1854A9D5C6E883E;
// GameSetting`1<System.Object>
struct GameSetting_1_t775031D67363373C85FDE3F4EE883ED43AC52C5A;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// GameBase.FSM.IFSM_Machine`1<System.String>
struct IFSM_Machine_1_tEAE7C571499C89052F3B5CE68A6B2DAE4D26F150;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>
struct KeyCollection_t087D57224A86BAE3F60EC81BBC6612292EDFDDCB;
// System.Collections.Generic.List`1<GameBase.FSM.FSM_Transition`1<System.String>>
struct List_1_t5C05E4DA8E70D5CA1496AFC9310B093323A6DC15;
// System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>
struct List_1_tB17812479988EED86D6D0FCF7424F41FEC175756;
// System.Collections.Generic.List`1<GameBase.FSM.IFSM_Condition>
struct List_1_tF312FFA8D2FA2E711D4BA97AC3D4D41AB58D6C70;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>
struct List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6;
// System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>
struct Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>
struct ValueCollection_t544945FC5315FD242F2BD5A32ABCFE4065F29BFB;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>[]
struct EntryU5BU5D_tF1280FDD2EB8D01C15B63E61AE972A70B6F10BEA;
// LGameFramework.GameBase.AssetFileDownloader[]
struct AssetFileDownloaderU5BU5D_t0FADB52DFA056A2F8C68867A0B1FE699CEED30F1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.Encoding[]
struct EncodingU5BU5D_t5B701849305EF21A2CEB2067EE359A169247A72D;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// LGameFramework.GameBase.GamePathSetting/FilePathStruct[]
struct FilePathStructU5BU5D_t70FE253393DDA1D3698483D439FEAFDE2948333A;
// LGameFramework.GameBase.AESEncryptor
struct AESEncryptor_t193540838F209E5288EA53B3817712E1D8C98617;
// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// LGameFramework.GameBase.AssetBundleInfo
struct AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760;
// LGameFramework.GameBase.AssetFileDownloadQueue
struct AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620;
// LGameFramework.GameBase.AssetFileDownloader
struct AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46;
// LGameFramework.GameBase.AssetFileInfo
struct AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t801BFEA7C4C260D6666B4EB313E4CB49C4B151E9;
// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t8544B75B787DAFE823AD7A7CEFEDC4AD1CB29217;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// LGameFramework.GameBase.CSharpUtility
struct CSharpUtility_t764B39747639CB79F04111035B48EDC75FC19DF2;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Net.DownloadDataCompletedEventHandler
struct DownloadDataCompletedEventHandler_t887FCBDF034A6D1467BB9BE053C441E820B75C08;
// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3E6278F2B7F8BB28A20B0FE7297BB4BA0DC71E7C;
// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E;
// System.Net.DownloadStringCompletedEventHandler
struct DownloadStringCompletedEventHandler_t0B7A906C45E498692A81F4DA6929178C0BDF750F;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// GameBase.FSM.FSM_Condition_Booler
struct FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6;
// GameBase.FSM.FSM_Condition_Float
struct FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D;
// GameBase.FSM.FSM_Condition_Int
struct FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55;
// GameBase.FSM.FSM_Condition_Trigger
struct FSM_Condition_Trigger_t1E27C970AB281B18D1CD58F98126C4C612BE029E;
// GameBase.FSM.FSM_DataBase
struct FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D;
// GameBase.FSM.FSM_StateMachine
struct FSM_StateMachine_tBA06E1D7B73387BB82FD4A6EF32D9308EC06892D;
// GameBase.FSM.FSM_Status
struct FSM_Status_t3B7F20E10CFA9BA17847BF41B502B6145A2D0FEA;
// GameBase.FSM.FSM_Transition
struct FSM_Transition_tE3AFC1A95B669483FCB0C7712A36B6DF8DD4F076;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// FileUtility
struct FileUtility_t7087E0192C26FFE73276E839A861CDF212B1D856;
// LGameFramework.GameBase.GameLaunchSetting
struct GameLaunchSetting_t0C14BD4D7E9F2DB0F14EA949BA3AD06AC1E66206;
// LGameFramework.GameBase.GamePathSetting
struct GamePathSetting_t90635FDBB458D9776877AD87389060E85997AD77;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Net.ICredentials
struct ICredentials_t8FDA6AF64B852DA0631D4BE66962B20E51E230F0;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_tE6DA9E01069FDC62AB562B589C8E43EEC53B2377;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.Net.IWebProxy
struct IWebProxy_t3ECD2C773539B48B18734D61E87B685A9C93076D;
// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// MobileUtility
struct MobileUtility_t0F14651A10E7707F8C58A2DE0FE73397C08152D8;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// System.Net.OpenReadCompletedEventHandler
struct OpenReadCompletedEventHandler_tE6BFFC05DC7E69D402BD5B99496FCDAAC1E73D09;
// System.Net.OpenWriteCompletedEventHandler
struct OpenWriteCompletedEventHandler_tD9A2E1E2A8B15DF3CCA578CC71070C17717A5DC2;
// LGameFramework.GameBase.Pool.Pool
struct Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t5356EEBDD54D5434867C79874031F1730FE63D16;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Type
struct Type_t;
// System.Net.UploadDataCompletedEventHandler
struct UploadDataCompletedEventHandler_t5455037FE45460EFE36C2D57C9C4134C15A20BD9;
// System.Net.UploadFileCompletedEventHandler
struct UploadFileCompletedEventHandler_tC7C9B3F7EF098D2D3D3BBBF9BD6DF10817E0EFC9;
// System.Net.UploadProgressChangedEventHandler
struct UploadProgressChangedEventHandler_tE1C0F320E3892B000C468E5C3048E64B8A2A62D0;
// System.Net.UploadStringCompletedEventHandler
struct UploadStringCompletedEventHandler_t37A6636C795A36D9E088FE6CEA5F134A29093472;
// System.Net.UploadValuesCompletedEventHandler
struct UploadValuesCompletedEventHandler_t85D5296712ADB06F36627FF1193F01A2CAE880AF;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebClient
struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8;
// System.Net.WebRequest
struct WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B;
// System.Net.WebResponse
struct WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682;
// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// System.Net.WebClient/ProgressData
struct ProgressData_t1F3811B736C88415412A94F03AB8FE615640F96F;

IL2CPP_EXTERN_C RuntimeClass* Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB17812479988EED86D6D0FCF7424F41FEC175756_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_t9AD217009A18A248F7DC13722CC402782AA00080_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_1_tA9510604701B572F3E80604470D5D3E3BDCA2662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40;
IL2CPP_EXTERN_C String_t* _stringLiteral1DD6F9F67D8F81962E055551E00D31E081389090;
IL2CPP_EXTERN_C String_t* _stringLiteral2BB84B130322E3FCB48651A998BC00F60A084AFE;
IL2CPP_EXTERN_C String_t* _stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705;
IL2CPP_EXTERN_C String_t* _stringLiteral91B7E05ADFFCEE02E4AEECBDB4F352D4C643FA8A;
IL2CPP_EXTERN_C String_t* _stringLiteral9C40A2866193AC747B18FA56240D5C306619E3AB;
IL2CPP_EXTERN_C String_t* _stringLiteralB36231573E43663A3F7BA999008101ACA0AD2A8F;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF8AED81C080801A1595ED9CCCE8D48700DB86F7A;
IL2CPP_EXTERN_C const RuntimeMethod* AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AESEncryptor_Encrypt_mB490A464DAA93D38F0233F5B38BF72DCCEF281AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetFileDownloader_DownloadFileCompleted_mA264E8C5E62145DA32CCFB9821DB60BCF318D47F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetFileDownloader_DownloadProgressChanged_m98E27C47150979B46D48AF66CAC227546C02623D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8B57B660EEE2B13C34E3FF06CB4CC1179F2CA27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB9D2580913D91058D834DCB6CD9F3A929AC53F2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF58DF0F7AF0E0E631C059A8852156345FDD15908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_Tick_m872BDEFE92A42801D5AAED6CBFB4B2421AABD84C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_Tick_mF9D5993C13F56C530CA99A71AD511E1A2004E9AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1__ctor_m4024911136516042C3048DF5C26586610ED2C9B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1__ctor_m78BE2647ED688D12EB7F09CA3D51DCE44B985051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1__ctor_m7F8AD94F138B6D3993669421145362F2759A1B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1__ctor_mE53F15E2CD2C13198A14147D9E5850D8663A48C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_DataBase_SetData_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25FDA2FCEE5959CCC2208A4465CEAEB2E10FD2C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_StateMachine_1__ctor_m1BD22F603A420D54363B86FA84D9E8CDD473D345_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Status_1__ctor_m467A4CC2D24C3827141C60CD5BEA9AA10160D9EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FSM_Transition_1__ctor_m8400E1CB0A428BEF56B5FF7ADC9389882E32CB0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FileUtility_GetMD5_mE9E620E0163ABC9E98A1968301AD5B08D12CC572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameSetting_1__ctor_m190D77FFB9818F1B3597F35175CE3FCA8DD60386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameSetting_1__ctor_mF7855C860904CFFE25D690720DC4E14F5586BFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m38F2AB2D577F134DD7F3BA4CC898B0A221D90D50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m9EE0270ABC4329A04D017CD922C034F5767F444D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC9652874DD45711CBEBF106A437F9306EECFAF3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m3CF76534C6E57AFB20C2BED895BE06A318A054D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m046C62C6C6CA1E0BDF69571CEA7CDB1432FD18F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m484ACFB05503DE02969C4EF38A7D50A92770D926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9455A484939B86B3178E31F4BF7379E2A7C6AE4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_m68F864DC96C747FF1C50B269FFB2D9EAB870C068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Get_mD5863AEF5D7AD90AA18F41EFDB27396903C1C7FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_mB6D11B28938D592F0AD2069760C905553E72DBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pool_1_Release_mEF05A97533B7A662348DDAB737BE03705A8328CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m135614EFF1418D27B8B6DF19305BCD1B908E8951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m6278AEE0FFCE27C1C1608830E3BC8A7FBEC7E7CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m0DB17830938D31A733B94DF3A408CF9F4DE19836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m551A616064149645939015212FD9E626D6252D6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m8C3D1628DED4ADD4EBF493862DD27085FB481ED9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337;;
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com;
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com;;
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke;
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t19D8A9831B953AA76080F2B75613A562531D5288 
{
};

// System.Collections.Generic.Dictionary`2<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>
struct Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF1280FDD2EB8D01C15B63E61AE972A70B6F10BEA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t087D57224A86BAE3F60EC81BBC6612292EDFDDCB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t544945FC5315FD242F2BD5A32ABCFE4065F29BFB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// GameBase.FSM.FSM_Condition`1<System.Boolean>
struct FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450  : public RuntimeObject
{
	// System.String GameBase.FSM.FSM_Condition`1::<DataName>k__BackingField
	String_t* ___U3CDataNameU3Ek__BackingField_0;
	// T GameBase.FSM.FSM_Condition`1::<Target>k__BackingField
	bool ___U3CTargetU3Ek__BackingField_1;
	// T GameBase.FSM.FSM_Condition`1::<CurData>k__BackingField
	bool ___U3CCurDataU3Ek__BackingField_2;
};

// GameBase.FSM.FSM_Condition`1<System.Int32>
struct FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22  : public RuntimeObject
{
	// System.String GameBase.FSM.FSM_Condition`1::<DataName>k__BackingField
	String_t* ___U3CDataNameU3Ek__BackingField_0;
	// T GameBase.FSM.FSM_Condition`1::<Target>k__BackingField
	int32_t ___U3CTargetU3Ek__BackingField_1;
	// T GameBase.FSM.FSM_Condition`1::<CurData>k__BackingField
	int32_t ___U3CCurDataU3Ek__BackingField_2;
};

// GameBase.FSM.FSM_Condition`1<System.Single>
struct FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263  : public RuntimeObject
{
	// System.String GameBase.FSM.FSM_Condition`1::<DataName>k__BackingField
	String_t* ___U3CDataNameU3Ek__BackingField_0;
	// T GameBase.FSM.FSM_Condition`1::<Target>k__BackingField
	float ___U3CTargetU3Ek__BackingField_1;
	// T GameBase.FSM.FSM_Condition`1::<CurData>k__BackingField
	float ___U3CCurDataU3Ek__BackingField_2;
};

// GameBase.FSM.FSM_Status`1<System.String>
struct FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132  : public RuntimeObject
{
	// TStateId GameBase.FSM.FSM_Status`1::name
	String_t* ___name_0;
	// GameBase.FSM.IFSM_Machine`1<TStateId> GameBase.FSM.FSM_Status`1::subMachine
	RuntimeObject* ___subMachine_1;
	// System.Boolean GameBase.FSM.FSM_Status`1::activated
	bool ___activated_2;
	// GameBase.FSM.FSM_DataBase GameBase.FSM.FSM_Status`1::dataBase
	FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___dataBase_3;
	// System.Collections.Generic.List`1<GameBase.FSM.FSM_Transition`1<TStateId>> GameBase.FSM.FSM_Status`1::transitions
	List_1_t5C05E4DA8E70D5CA1496AFC9310B093323A6DC15* ___transitions_4;
	// System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>> GameBase.FSM.FSM_Status`1::m_OnAction
	Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___m_OnAction_5;
	// System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>> GameBase.FSM.FSM_Status`1::m_OnEnter
	Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___m_OnEnter_6;
	// System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>> GameBase.FSM.FSM_Status`1::m_OnExit
	Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___m_OnExit_7;
};

// GameBase.FSM.FSM_Transition`1<System.String>
struct FSM_Transition_1_t8BE906BAA156CF7FAC81A619C8CBF5219900CC5E  : public RuntimeObject
{
	// TStateId GameBase.FSM.FSM_Transition`1::m_FormStatusID
	String_t* ___m_FormStatusID_0;
	// TStateId GameBase.FSM.FSM_Transition`1::m_ToStatusID
	String_t* ___m_ToStatusID_1;
	// System.Int32 GameBase.FSM.FSM_Transition`1::m_WeightOrder
	int32_t ___m_WeightOrder_2;
	// System.Collections.Generic.List`1<GameBase.FSM.IFSM_Condition> GameBase.FSM.FSM_Transition`1::conditions
	List_1_tF312FFA8D2FA2E711D4BA97AC3D4D41AB58D6C70* ___conditions_3;
};

// System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>
struct List_1_tB17812479988EED86D6D0FCF7424F41FEC175756  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AssetFileDownloaderU5BU5D_t0FADB52DFA056A2F8C68867A0B1FE699CEED30F1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>
struct List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FilePathStructU5BU5D_t70FE253393DDA1D3698483D439FEAFDE2948333A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>
struct Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	AssetFileDownloaderU5BU5D_t0FADB52DFA056A2F8C68867A0B1FE699CEED30F1* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// LGameFramework.GameBase.AESEncryptor
struct AESEncryptor_t193540838F209E5288EA53B3817712E1D8C98617  : public RuntimeObject
{
};

// LGameFramework.GameBase.AssetBundleInfo
struct AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760  : public RuntimeObject
{
	// System.String LGameFramework.GameBase.AssetBundleInfo::bundleName
	String_t* ___bundleName_0;
	// System.String LGameFramework.GameBase.AssetBundleInfo::assetPath
	String_t* ___assetPath_1;
	// System.String LGameFramework.GameBase.AssetBundleInfo::md5Code
	String_t* ___md5Code_2;
	// System.Int32 LGameFramework.GameBase.AssetBundleInfo::size
	int32_t ___size_3;
	// System.UInt32 LGameFramework.GameBase.AssetBundleInfo::crc
	uint32_t ___crc_4;
	// System.String[] LGameFramework.GameBase.AssetBundleInfo::dependencieBundleNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___dependencieBundleNames_5;
	// System.String[] LGameFramework.GameBase.AssetBundleInfo::allFiles
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___allFiles_6;
	// LGameFramework.GameBase.AssetBundleInfo/AssetFileFlag LGameFramework.GameBase.AssetBundleInfo::fileFlag
	int32_t ___fileFlag_7;
};

// LGameFramework.GameBase.AssetFileDownloadQueue
struct AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620  : public RuntimeObject
{
	// System.Boolean LGameFramework.GameBase.AssetFileDownloadQueue::m_Pause
	bool ___m_Pause_0;
	// System.Int32 LGameFramework.GameBase.AssetFileDownloadQueue::m_MaximumSimultaneouslyDownloading
	int32_t ___m_MaximumSimultaneouslyDownloading_1;
	// System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader> LGameFramework.GameBase.AssetFileDownloadQueue::m_DownloaderQueuePrepare
	Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* ___m_DownloaderQueuePrepare_2;
	// System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader> LGameFramework.GameBase.AssetFileDownloadQueue::m_DownloadingCurrent
	List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* ___m_DownloadingCurrent_3;
};

// LGameFramework.GameBase.AssetFileDownloader
struct AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46  : public RuntimeObject
{
	// System.Object LGameFramework.GameBase.AssetFileDownloader::m_Current
	RuntimeObject* ___m_Current_0;
	// System.String LGameFramework.GameBase.AssetFileDownloader::m_DownloadURL
	String_t* ___m_DownloadURL_1;
	// System.String LGameFramework.GameBase.AssetFileDownloader::m_DownloadPath
	String_t* ___m_DownloadPath_2;
	// System.Single LGameFramework.GameBase.AssetFileDownloader::m_Progress
	float ___m_Progress_3;
	// System.Boolean LGameFramework.GameBase.AssetFileDownloader::m_IsDone
	bool ___m_IsDone_4;
	// System.Net.WebClient LGameFramework.GameBase.AssetFileDownloader::m_WebClient
	WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* ___m_WebClient_5;
};

// LGameFramework.GameBase.AssetFileInfo
struct AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2  : public RuntimeObject
{
	// System.String LGameFramework.GameBase.AssetFileInfo::assetName
	String_t* ___assetName_0;
	// System.String LGameFramework.GameBase.AssetFileInfo::bundleName
	String_t* ___bundleName_1;
};

// LGameFramework.GameBase.CSharpUtility
struct CSharpUtility_t764B39747639CB79F04111035B48EDC75FC19DF2  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// FileUtility
struct FileUtility_t7087E0192C26FFE73276E839A861CDF212B1D856  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// LGameFramework.GameBase.JsonHelper
struct JsonHelper_t1A4FBAE67151EC4C396F7E1EA3807BC489253C24  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// MobileUtility
struct MobileUtility_t0F14651A10E7707F8C58A2DE0FE73397C08152D8  : public RuntimeObject
{
};

// LGameFramework.GameBase.Pool.Pool
struct Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_1;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IVValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GameBase.FSM.FSM_StateMachine`1<System.String>
struct FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1  : public FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132
{
	// GameBase.FSM.FSM_Status`1<TStateId> GameBase.FSM.FSM_StateMachine`1::<ActiveState>k__BackingField
	FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132* ___U3CActiveStateU3Ek__BackingField_8;
	// GameBase.FSM.FSM_Status`1<TStateId> GameBase.FSM.FSM_StateMachine`1::<LastState>k__BackingField
	FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132* ___U3CLastStateU3Ek__BackingField_9;
	// GameBase.FSM.FSM_Status`1<TStateId> GameBase.FSM.FSM_StateMachine`1::<DefaultState>k__BackingField
	FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132* ___U3CDefaultStateU3Ek__BackingField_10;
	// System.Collections.Generic.Dictionary`2<TStateId,GameBase.FSM.FSM_Status`1<TStateId>> GameBase.FSM.FSM_StateMachine`1::allStatus
	Dictionary_2_t83EB36D598B7EF91EE314AF098BE661F2C0F00EC* ___allStatus_11;
	// System.Collections.Generic.List`1<GameBase.FSM.FSM_Transition`1<TStateId>> GameBase.FSM.FSM_StateMachine`1::transitionsFromAny
	List_1_t5C05E4DA8E70D5CA1496AFC9310B093323A6DC15* ___transitionsFromAny_12;
	// System.Collections.Generic.List`1<GameBase.FSM.FSM_Transition`1<TStateId>> GameBase.FSM.FSM_StateMachine`1::activeTransitions
	List_1_t5C05E4DA8E70D5CA1496AFC9310B093323A6DC15* ___activeTransitions_13;
};

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047  : public SymmetricAlgorithm_t8C631E4E7B9073CCBD856F8D559A62EB5616BBE8
{
};

// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t801BFEA7C4C260D6666B4EB313E4CB49C4B151E9  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Exception System.ComponentModel.AsyncCompletedEventArgs::error
	Exception_t* ___error_1;
	// System.Boolean System.ComponentModel.AsyncCompletedEventArgs::cancelled
	bool ___cancelled_2;
	// System.Object System.ComponentModel.AsyncCompletedEventArgs::userState
	RuntimeObject* ___userState_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

// GameBase.FSM.FSM_Condition_Booler
struct FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6  : public FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450
{
	// GameBase.FSM.FSM_Condition_Booler/BoolerCondition GameBase.FSM.FSM_Condition_Booler::<Condition>k__BackingField
	int32_t ___U3CConditionU3Ek__BackingField_3;
};

// GameBase.FSM.FSM_Condition_Float
struct FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D  : public FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263
{
	// GameBase.FSM.FSM_Condition_Float/FloatCondition GameBase.FSM.FSM_Condition_Float::<Condition>k__BackingField
	int32_t ___U3CConditionU3Ek__BackingField_3;
};

// GameBase.FSM.FSM_Condition_Int
struct FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55  : public FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22
{
	// GameBase.FSM.FSM_Condition_Int/IntCondition GameBase.FSM.FSM_Condition_Int::<Condition>k__BackingField
	int32_t ___U3CConditionU3Ek__BackingField_3;
};

// GameBase.FSM.FSM_Condition_Trigger
struct FSM_Condition_Trigger_t1E27C970AB281B18D1CD58F98126C4C612BE029E  : public FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450
{
};

// GameBase.FSM.FSM_Status
struct FSM_Status_t3B7F20E10CFA9BA17847BF41B502B6145A2D0FEA  : public FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132
{
};

// GameBase.FSM.FSM_Transition
struct FSM_Transition_tE3AFC1A95B669483FCB0C7712A36B6DF8DD4F076  : public FSM_Transition_1_t8BE906BAA156CF7FAC81A619C8CBF5219900CC5E
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t5356EEBDD54D5434867C79874031F1730FE63D16  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Int32 System.ComponentModel.ProgressChangedEventArgs::progressPercentage
	int32_t ___progressPercentage_1;
	// System.Object System.ComponentModel.ProgressChangedEventArgs::userState
	RuntimeObject* ___userState_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337 
{
	// LGameFramework.GameBase.GamePathSetting/SpecialPath LGameFramework.GameBase.GamePathSetting/SpecialPathStruct::pathPrefix
	int32_t ___pathPrefix_0;
	// System.String LGameFramework.GameBase.GamePathSetting/SpecialPathStruct::m_AssetPath
	String_t* ___m_AssetPath_1;
};
// Native definition for P/Invoke marshalling of LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke
{
	int32_t ___pathPrefix_0;
	char* ___m_AssetPath_1;
};
// Native definition for COM marshalling of LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
struct SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com
{
	int32_t ___pathPrefix_0;
	Il2CppChar* ___m_AssetPath_1;
};

// Interop/Kernel32/FILE_TIME
struct FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 
{
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwLowDateTime
	uint32_t ___dwLowDateTime_0;
	// System.UInt32 Interop/Kernel32/FILE_TIME::dwHighDateTime
	uint32_t ___dwHighDateTime_1;
};

// System.Security.Cryptography.CryptoStream
struct CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_4;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_5;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_transformMode
	int32_t ____transformMode_6;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_inputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____inputBuffer_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBufferIndex
	int32_t ____inputBufferIndex_8;
	// System.Int32 System.Security.Cryptography.CryptoStream::_inputBlockSize
	int32_t ____inputBlockSize_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_outputBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____outputBuffer_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBufferIndex
	int32_t ____outputBufferIndex_11;
	// System.Int32 System.Security.Cryptography.CryptoStream::_outputBlockSize
	int32_t ____outputBlockSize_12;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canRead
	bool ____canRead_13;
	// System.Boolean System.Security.Cryptography.CryptoStream::_canWrite
	bool ____canWrite_14;
	// System.Boolean System.Security.Cryptography.CryptoStream::_finalBlockTransformed
	bool ____finalBlockTransformed_15;
	// System.Threading.SemaphoreSlim System.Security.Cryptography.CryptoStream::_lazyAsyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____lazyAsyncActiveSemaphore_16;
	// System.Boolean System.Security.Cryptography.CryptoStream::_leaveOpen
	bool ____leaveOpen_17;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t3E6278F2B7F8BB28A20B0FE7297BB4BA0DC71E7C  : public ProgressChangedEventArgs_t5356EEBDD54D5434867C79874031F1730FE63D16
{
	// System.Int64 System.Net.DownloadProgressChangedEventArgs::<BytesReceived>k__BackingField
	int64_t ___U3CBytesReceivedU3Ek__BackingField_3;
	// System.Int64 System.Net.DownloadProgressChangedEventArgs::<TotalBytesToReceive>k__BackingField
	int64_t ___U3CTotalBytesToReceiveU3Ek__BackingField_4;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// GameBase.FSM.FSM_StateMachine
struct FSM_StateMachine_tBA06E1D7B73387BB82FD4A6EF32D9308EC06892D  : public FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1
{
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B  : public MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

// System.Net.WebClient
struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Uri System.Net.WebClient::_baseAddress
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____baseAddress_4;
	// System.Net.ICredentials System.Net.WebClient::_credentials
	RuntimeObject* ____credentials_5;
	// System.Net.WebHeaderCollection System.Net.WebClient::_headers
	WebHeaderCollection_tAF1CF77FB39D8E1EB782174E30566BAF55F71AE8* ____headers_6;
	// System.Collections.Specialized.NameValueCollection System.Net.WebClient::_requestParameters
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____requestParameters_7;
	// System.Net.WebResponse System.Net.WebClient::_webResponse
	WebResponse_t7CDE1F20895C8D5AD392425F9AD4BE8E8696B682* ____webResponse_8;
	// System.Net.WebRequest System.Net.WebClient::_webRequest
	WebRequest_t89050438AE9A5AA9221ECAE223584127F7C1294B* ____webRequest_9;
	// System.Text.Encoding System.Net.WebClient::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_10;
	// System.String System.Net.WebClient::_method
	String_t* ____method_11;
	// System.Int64 System.Net.WebClient::_contentLength
	int64_t ____contentLength_12;
	// System.Boolean System.Net.WebClient::_initWebClientAsync
	bool ____initWebClientAsync_13;
	// System.Boolean System.Net.WebClient::_canceled
	bool ____canceled_14;
	// System.Net.WebClient/ProgressData System.Net.WebClient::_progress
	ProgressData_t1F3811B736C88415412A94F03AB8FE615640F96F* ____progress_15;
	// System.Net.IWebProxy System.Net.WebClient::_proxy
	RuntimeObject* ____proxy_16;
	// System.Boolean System.Net.WebClient::_proxySet
	bool ____proxySet_17;
	// System.Int32 System.Net.WebClient::_callNesting
	int32_t ____callNesting_18;
	// System.ComponentModel.AsyncOperation System.Net.WebClient::_asyncOp
	AsyncOperation_t8544B75B787DAFE823AD7A7CEFEDC4AD1CB29217* ____asyncOp_19;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_downloadDataOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____downloadDataOperationCompleted_20;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_openReadOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____openReadOperationCompleted_21;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_openWriteOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____openWriteOperationCompleted_22;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_downloadStringOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____downloadStringOperationCompleted_23;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_downloadFileOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____downloadFileOperationCompleted_24;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_uploadStringOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____uploadStringOperationCompleted_25;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_uploadDataOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____uploadDataOperationCompleted_26;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_uploadFileOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____uploadFileOperationCompleted_27;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_uploadValuesOperationCompleted
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____uploadValuesOperationCompleted_28;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_reportDownloadProgressChanged
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____reportDownloadProgressChanged_29;
	// System.Threading.SendOrPostCallback System.Net.WebClient::_reportUploadProgressChanged
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ____reportUploadProgressChanged_30;
	// System.Net.DownloadStringCompletedEventHandler System.Net.WebClient::DownloadStringCompleted
	DownloadStringCompletedEventHandler_t0B7A906C45E498692A81F4DA6929178C0BDF750F* ___DownloadStringCompleted_31;
	// System.Net.DownloadDataCompletedEventHandler System.Net.WebClient::DownloadDataCompleted
	DownloadDataCompletedEventHandler_t887FCBDF034A6D1467BB9BE053C441E820B75C08* ___DownloadDataCompleted_32;
	// System.ComponentModel.AsyncCompletedEventHandler System.Net.WebClient::DownloadFileCompleted
	AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D* ___DownloadFileCompleted_33;
	// System.Net.UploadStringCompletedEventHandler System.Net.WebClient::UploadStringCompleted
	UploadStringCompletedEventHandler_t37A6636C795A36D9E088FE6CEA5F134A29093472* ___UploadStringCompleted_34;
	// System.Net.UploadDataCompletedEventHandler System.Net.WebClient::UploadDataCompleted
	UploadDataCompletedEventHandler_t5455037FE45460EFE36C2D57C9C4134C15A20BD9* ___UploadDataCompleted_35;
	// System.Net.UploadFileCompletedEventHandler System.Net.WebClient::UploadFileCompleted
	UploadFileCompletedEventHandler_tC7C9B3F7EF098D2D3D3BBBF9BD6DF10817E0EFC9* ___UploadFileCompleted_36;
	// System.Net.UploadValuesCompletedEventHandler System.Net.WebClient::UploadValuesCompleted
	UploadValuesCompletedEventHandler_t85D5296712ADB06F36627FF1193F01A2CAE880AF* ___UploadValuesCompleted_37;
	// System.Net.OpenReadCompletedEventHandler System.Net.WebClient::OpenReadCompleted
	OpenReadCompletedEventHandler_tE6BFFC05DC7E69D402BD5B99496FCDAAC1E73D09* ___OpenReadCompleted_38;
	// System.Net.OpenWriteCompletedEventHandler System.Net.WebClient::OpenWriteCompleted
	OpenWriteCompletedEventHandler_tD9A2E1E2A8B15DF3CCA578CC71070C17717A5DC2* ___OpenWriteCompleted_39;
	// System.Net.DownloadProgressChangedEventHandler System.Net.WebClient::DownloadProgressChanged
	DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E* ___DownloadProgressChanged_40;
	// System.Net.UploadProgressChangedEventHandler System.Net.WebClient::UploadProgressChanged
	UploadProgressChangedEventHandler_tE1C0F320E3892B000C468E5C3048E64B8A2A62D0* ___UploadProgressChanged_41;
	// System.Net.Cache.RequestCachePolicy System.Net.WebClient::<CachePolicy>k__BackingField
	RequestCachePolicy_tF15C94C5E458478914D5EB17753294BD488B0550* ___U3CCachePolicyU3Ek__BackingField_42;
};

// LGameFramework.GameBase.GamePathSetting/FilePathStruct
struct FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 
{
	// UnityEngine.RuntimePlatform LGameFramework.GameBase.GamePathSetting/FilePathStruct::platform
	int32_t ___platform_0;
	// System.String LGameFramework.GameBase.GamePathSetting/FilePathStruct::buildingFileName
	String_t* ___buildingFileName_1;
	// System.String LGameFramework.GameBase.GamePathSetting/FilePathStruct::assetManifestFileName
	String_t* ___assetManifestFileName_2;
	// System.String LGameFramework.GameBase.GamePathSetting/FilePathStruct::versionFileName
	String_t* ___versionFileName_3;
	// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct LGameFramework.GameBase.GamePathSetting/FilePathStruct::downloadDataPath
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337 ___downloadDataPath_4;
	// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct LGameFramework.GameBase.GamePathSetting/FilePathStruct::serverDataPath
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337 ___serverDataPath_5;
	// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct LGameFramework.GameBase.GamePathSetting/FilePathStruct::buildingPath
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337 ___buildingPath_6;
	// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct LGameFramework.GameBase.GamePathSetting/FilePathStruct::hotUpdateDllPath
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337 ___hotUpdateDllPath_7;
	// System.String[] LGameFramework.GameBase.GamePathSetting/FilePathStruct::hotUpdateDll
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___hotUpdateDll_8;
};
// Native definition for P/Invoke marshalling of LGameFramework.GameBase.GamePathSetting/FilePathStruct
struct FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_pinvoke
{
	int32_t ___platform_0;
	char* ___buildingFileName_1;
	char* ___assetManifestFileName_2;
	char* ___versionFileName_3;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke ___downloadDataPath_4;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke ___serverDataPath_5;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke ___buildingPath_6;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke ___hotUpdateDllPath_7;
	char** ___hotUpdateDll_8;
};
// Native definition for COM marshalling of LGameFramework.GameBase.GamePathSetting/FilePathStruct
struct FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_com
{
	int32_t ___platform_0;
	Il2CppChar* ___buildingFileName_1;
	Il2CppChar* ___assetManifestFileName_2;
	Il2CppChar* ___versionFileName_3;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com ___downloadDataPath_4;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com ___serverDataPath_5;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com ___buildingPath_6;
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com ___hotUpdateDllPath_7;
	Il2CppChar** ___hotUpdateDll_8;
};

// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA
struct WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B 
{
	// System.Int32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::dwFileAttributes
	int32_t ___dwFileAttributes_0;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftCreationTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftCreationTime_1;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastAccessTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastAccessTime_2;
	// Interop/Kernel32/FILE_TIME Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::ftLastWriteTime
	FILE_TIME_tBD950B410C18B85474477EEA8F3651A2BD367965 ___ftLastWriteTime_3;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeHigh
	uint32_t ___nFileSizeHigh_4;
	// System.UInt32 Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA::nFileSizeLow
	uint32_t ___nFileSizeLow_5;
};

// System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>
struct Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// Interop/Kernel32/WIN32_FILE_ATTRIBUTE_DATA System.IO.FileSystemInfo::_data
	WIN32_FILE_ATTRIBUTE_DATA_tD093F8658579DA72CCD2E158A681DDE37834F73B ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialized
	int32_t ____dataInitialized_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_5;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action`1<GameBase.FSM.FSM_Status`1<System.String>>
struct Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A  : public MulticastDelegate_t
{
};

// GameSetting`1<LGameFramework.GameBase.GameLaunchSetting>
struct GameSetting_1_tA339F7D4269DC6A2CAF43CD94EE66CCDAC9B9AF8  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// GameSetting`1<LGameFramework.GameBase.GamePathSetting>
struct GameSetting_1_t32D6F738F573D1546397C778B1854A9D5C6E883E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E  : public MulticastDelegate_t
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// LGameFramework.GameBase.GameLaunchSetting
struct GameLaunchSetting_t0C14BD4D7E9F2DB0F14EA949BA3AD06AC1E66206  : public GameSetting_1_tA339F7D4269DC6A2CAF43CD94EE66CCDAC9B9AF8
{
	// System.Int32 LGameFramework.GameBase.GameLaunchSetting::frameRate
	int32_t ___frameRate_5;
	// System.Single LGameFramework.GameBase.GameLaunchSetting::gameSpeed
	float ___gameSpeed_6;
	// System.Boolean LGameFramework.GameBase.GameLaunchSetting::runInBackground
	bool ___runInBackground_7;
	// System.Boolean LGameFramework.GameBase.GameLaunchSetting::neverSleep
	bool ___neverSleep_8;
	// LGameFramework.GameBase.GameLaunchSetting/AssetLoadMode LGameFramework.GameBase.GameLaunchSetting::assetLoadMode
	int32_t ___assetLoadMode_9;
};

// LGameFramework.GameBase.GamePathSetting
struct GamePathSetting_t90635FDBB458D9776877AD87389060E85997AD77  : public GameSetting_1_t32D6F738F573D1546397C778B1854A9D5C6E883E
{
	// System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct> LGameFramework.GameBase.GamePathSetting::filePathStructs
	List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* ___filePathStructs_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GameBase.FSM.FSM_DataBase
struct FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Object> GameBase.FSM.FSM_DataBase::m_DataBase
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_DataBase_4;
	// System.Collections.Generic.List`1<System.String> GameBase.FSM.FSM_DataBase::m_DataName
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_DataName_5;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>

// System.Collections.Generic.Dictionary`2<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>

// GameBase.FSM.FSM_Condition`1<System.Boolean>

// GameBase.FSM.FSM_Condition`1<System.Boolean>

// GameBase.FSM.FSM_Condition`1<System.Int32>

// GameBase.FSM.FSM_Condition`1<System.Int32>

// GameBase.FSM.FSM_Condition`1<System.Single>

// GameBase.FSM.FSM_Condition`1<System.Single>

// GameBase.FSM.FSM_Status`1<System.String>

// GameBase.FSM.FSM_Status`1<System.String>

// GameBase.FSM.FSM_Transition`1<System.String>

// GameBase.FSM.FSM_Transition`1<System.String>

// System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>
struct List_1_tB17812479988EED86D6D0FCF7424F41FEC175756_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AssetFileDownloaderU5BU5D_t0FADB52DFA056A2F8C68867A0B1FE699CEED30F1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>
struct List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FilePathStructU5BU5D_t70FE253393DDA1D3698483D439FEAFDE2948333A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>

// System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>

// System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// LGameFramework.GameBase.AESEncryptor

// LGameFramework.GameBase.AESEncryptor

// LGameFramework.GameBase.AssetBundleInfo

// LGameFramework.GameBase.AssetBundleInfo

// LGameFramework.GameBase.AssetFileDownloadQueue

// LGameFramework.GameBase.AssetFileDownloadQueue

// LGameFramework.GameBase.AssetFileDownloader

// LGameFramework.GameBase.AssetFileDownloader

// LGameFramework.GameBase.AssetFileInfo

// LGameFramework.GameBase.AssetFileInfo

// LGameFramework.GameBase.CSharpUtility

// LGameFramework.GameBase.CSharpUtility

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// FileUtility

// FileUtility

// System.Security.Cryptography.HashAlgorithm

// System.Security.Cryptography.HashAlgorithm

// LGameFramework.GameBase.JsonHelper

// LGameFramework.GameBase.JsonHelper

// MobileUtility

// MobileUtility

// LGameFramework.GameBase.Pool.Pool
struct Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,LGameFramework.GameBase.Pool.Pool/IPool> LGameFramework.GameBase.Pool.Pool::s_SubPools
	Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9* ___s_SubPools_0;
};

// LGameFramework.GameBase.Pool.Pool

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// System.Security.Cryptography.SymmetricAlgorithm

// System.Security.Cryptography.SymmetricAlgorithm

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// GameBase.FSM.FSM_StateMachine`1<System.String>
struct FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1_StaticFields
{
	// System.Collections.Generic.List`1<GameBase.FSM.FSM_Transition`1<TStateId>> GameBase.FSM.FSM_StateMachine`1::s_NoTransitions
	List_1_t5C05E4DA8E70D5CA1496AFC9310B093323A6DC15* ___s_NoTransitions_14;
};

// GameBase.FSM.FSM_StateMachine`1<System.String>

// System.Security.Cryptography.Aes
struct Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_StaticFields
{
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalBlockSizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalBlockSizes_9;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.Aes::s_legalKeySizes
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___s_legalKeySizes_10;
};

// System.Security.Cryptography.Aes

// System.ComponentModel.AsyncCompletedEventArgs

// System.ComponentModel.AsyncCompletedEventArgs

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.ComponentModel.Component

// GameBase.FSM.FSM_Condition_Booler

// GameBase.FSM.FSM_Condition_Booler

// GameBase.FSM.FSM_Condition_Float

// GameBase.FSM.FSM_Condition_Float

// GameBase.FSM.FSM_Condition_Int

// GameBase.FSM.FSM_Condition_Int

// GameBase.FSM.FSM_Condition_Trigger

// GameBase.FSM.FSM_Condition_Trigger

// GameBase.FSM.FSM_Status

// GameBase.FSM.FSM_Status

// GameBase.FSM.FSM_Transition

// GameBase.FSM.FSM_Transition

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.ComponentModel.ProgressChangedEventArgs

// System.ComponentModel.ProgressChangedEventArgs

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.IO.TextWriter

// System.Void

// System.Void

// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct

// LGameFramework.GameBase.GamePathSetting/SpecialPathStruct

// System.Security.Cryptography.CryptoStream

// System.Security.Cryptography.CryptoStream

// System.Net.DownloadProgressChangedEventArgs

// System.Net.DownloadProgressChangedEventArgs

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// GameBase.FSM.FSM_StateMachine

// GameBase.FSM.FSM_StateMachine

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// System.IO.FileStream

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_StaticFields
{
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___K_9;
};

// System.Security.Cryptography.MD5CryptoServiceProvider

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamReader

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// System.IO.StreamWriter

// System.Net.WebClient
struct WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268_StaticFields
{
	// System.Char[] System.Net.WebClient::s_parseContentTypeSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_parseContentTypeSeparators_43;
	// System.Text.Encoding[] System.Net.WebClient::s_knownEncodings
	EncodingU5BU5D_t5B701849305EF21A2CEB2067EE359A169247A72D* ___s_knownEncodings_44;
};

// System.Net.WebClient

// LGameFramework.GameBase.GamePathSetting/FilePathStruct

// LGameFramework.GameBase.GamePathSetting/FilePathStruct

// System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>

// System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action`1<GameBase.FSM.FSM_Status`1<System.String>>

// System.Action`1<GameBase.FSM.FSM_Status`1<System.String>>

// GameSetting`1<LGameFramework.GameBase.GameLaunchSetting>
struct GameSetting_1_tA339F7D4269DC6A2CAF43CD94EE66CCDAC9B9AF8_StaticFields
{
	// T GameSetting`1::m_Value
	GameLaunchSetting_t0C14BD4D7E9F2DB0F14EA949BA3AD06AC1E66206* ___m_Value_4;
};

// GameSetting`1<LGameFramework.GameBase.GameLaunchSetting>

// GameSetting`1<LGameFramework.GameBase.GamePathSetting>
struct GameSetting_1_t32D6F738F573D1546397C778B1854A9D5C6E883E_StaticFields
{
	// T GameSetting`1::m_Value
	GamePathSetting_t90635FDBB458D9776877AD87389060E85997AD77* ___m_Value_4;
};

// GameSetting`1<LGameFramework.GameBase.GamePathSetting>

// System.ComponentModel.AsyncCompletedEventHandler

// System.ComponentModel.AsyncCompletedEventHandler

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.Net.DownloadProgressChangedEventHandler

// System.Net.DownloadProgressChangedEventHandler

// System.IO.FileInfo

// System.IO.FileInfo

// System.ArgumentNullException

// System.ArgumentNullException

// LGameFramework.GameBase.GameLaunchSetting

// LGameFramework.GameBase.GameLaunchSetting

// LGameFramework.GameBase.GamePathSetting

// LGameFramework.GameBase.GamePathSetting

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// GameBase.FSM.FSM_DataBase

// GameBase.FSM.FSM_DataBase
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6  : public RuntimeArray
{
	ALIGN_FIELD (8) FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* m_Items[1];

	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_pinvoke(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_pinvoke_back(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke& marshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled);
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_pinvoke_cleanup(SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_com(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_com_back(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com& marshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled);
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_com_cleanup(SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com& marshaled);

// System.Void GameBase.FSM.FSM_Condition`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_1__ctor_mE53F15E2CD2C13198A14147D9E5850D8663A48C5_gshared (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Condition`1<System.Single>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_1__ctor_m7F8AD94F138B6D3993669421145362F2759A1B42_gshared (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, String_t* ___0_dataName, float ___1_target, const RuntimeMethod* method) ;
// System.Boolean GameBase.FSM.FSM_Condition`1<System.Single>::Tick(GameBase.FSM.FSM_DataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_Condition_1_Tick_m872BDEFE92A42801D5AAED6CBFB4B2421AABD84C_gshared (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Single>::get_CurData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_gshared_inline (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Single>::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_gshared_inline (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Condition`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_1__ctor_m4024911136516042C3048DF5C26586610ED2C9B9_gshared (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Condition`1<System.Int32>::.ctor(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_1__ctor_m78BE2647ED688D12EB7F09CA3D51DCE44B985051_gshared (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, String_t* ___0_dataName, int32_t ___1_target, const RuntimeMethod* method) ;
// System.Boolean GameBase.FSM.FSM_Condition`1<System.Int32>::Tick(GameBase.FSM.FSM_DataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_Condition_1_Tick_mF9D5993C13F56C530CA99A71AD511E1A2004E9AB_gshared (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Int32>::get_CurData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_gshared_inline (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Int32>::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_gshared_inline (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Condition`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_gshared (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Condition`1<System.Boolean>::set_DataName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_gshared_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean GameBase.FSM.FSM_Condition`1<System.Boolean>::Tick(GameBase.FSM.FSM_DataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4_gshared (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Boolean>::get_CurData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_gshared_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method) ;
// System.String GameBase.FSM.FSM_Condition`1<System.Boolean>::get_DataName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_gshared_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_DataBase::SetData<System.Boolean>(System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_DataBase_SetData_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25FDA2FCEE5959CCC2208A4465CEAEB2E10FD2C5_gshared (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* __this, String_t* ___0_dataName, bool ___1_data, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_StateMachine`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_StateMachine_1__ctor_m3473D4B0BA0560EEF5AC9B628AD0AE2AC8845970_gshared (FSM_StateMachine_1_tB2B90C7211FEE0CCFA62FD6CA771EE574A38577B* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Status`1<System.Object>::.ctor(System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>>,System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>>,System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Status_1__ctor_mB133064CCB4EF31F5322749C7D3AA2E965210A9A_gshared (FSM_Status_1_t258D8A5E387BE4382AC19770F01F8CCDB0EDDA6E* __this, Action_1_t9061A5C51A94DE99C3AE01F14F18895316F650A9* ___0_onEnter, Action_1_t9061A5C51A94DE99C3AE01F14F18895316F650A9* ___1_onExit, Action_1_t9061A5C51A94DE99C3AE01F14F18895316F650A9* ___2_onAction, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Transition`1<System.Object>::.ctor(TStateId,TStateId,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Transition_1__ctor_mFDDACC6E91CD4790180588BE93F5D57FB39D9149_gshared (FSM_Transition_1_t68C6661F3E9893A9A8BE24A3828853D9C6E4BC33* __this, RuntimeObject* ___0_formStatus, RuntimeObject* ___1_toStatus, int32_t ___2_weightOrder, const RuntimeMethod* method) ;
// T LGameFramework.GameBase.Pool.Pool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pool_1_Get_m2A0B83035F4535CDCF26821AF4353A4712A880ED_gshared (const RuntimeMethod* method) ;
// System.Void LGameFramework.GameBase.Pool.Pool`1<System.Object>::Release(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool_1_Release_m1767BB80AE5634BD107A6D601A37FE1EE49C035F_gshared (RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void GameSetting`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSetting_1__ctor_mB11173EA7086A1D008AAC3141E7FF86C220DE5F0_gshared (GameSetting_1_t775031D67363373C85FDE3F4EE883ED43AC52C5A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B List_1_GetEnumerator_mC9652874DD45711CBEBF106A437F9306EECFAF3C_gshared (List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB9D2580913D91058D834DCB6CD9F3A929AC53F2E_gshared (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_gshared_inline (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF58DF0F7AF0E0E631C059A8852156345FDD15908_gshared (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m484ACFB05503DE02969C4EF38A7D50A92770D926_gshared (List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles(System.String,System.IO.SearchOption)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* DirectoryInfo_GetFiles_mD211EA86FEDAF3944C8451AD2EB35E7BD9BA9542 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, String_t* ___0_searchPattern, int32_t ___1_searchOption, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___0_path, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067 (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30 (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_inputStream, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_Condition`1<System.Single>::.ctor()
inline void FSM_Condition_1__ctor_mE53F15E2CD2C13198A14147D9E5850D8663A48C5 (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method)
{
	((  void (*) (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263*, const RuntimeMethod*))FSM_Condition_1__ctor_mE53F15E2CD2C13198A14147D9E5850D8663A48C5_gshared)(__this, method);
}
// System.Void GameBase.FSM.FSM_Condition`1<System.Single>::.ctor(System.String,T)
inline void FSM_Condition_1__ctor_m7F8AD94F138B6D3993669421145362F2759A1B42 (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, String_t* ___0_dataName, float ___1_target, const RuntimeMethod* method)
{
	((  void (*) (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263*, String_t*, float, const RuntimeMethod*))FSM_Condition_1__ctor_m7F8AD94F138B6D3993669421145362F2759A1B42_gshared)(__this, ___0_dataName, ___1_target, method);
}
// System.Void GameBase.FSM.FSM_Condition_Float::set_Condition(GameBase.FSM.FSM_Condition_Float/FloatCondition)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_Float_set_Condition_m51EFDF9066FF55D22AAE29E9FF543D55BF22BF73_inline (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean GameBase.FSM.FSM_Condition`1<System.Single>::Tick(GameBase.FSM.FSM_DataBase)
inline bool FSM_Condition_1_Tick_m872BDEFE92A42801D5AAED6CBFB4B2421AABD84C (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method)
{
	return ((  bool (*) (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263*, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D*, const RuntimeMethod*))FSM_Condition_1_Tick_m872BDEFE92A42801D5AAED6CBFB4B2421AABD84C_gshared)(__this, ___0_dataBase, method);
}
// GameBase.FSM.FSM_Condition_Float/FloatCondition GameBase.FSM.FSM_Condition_Float::get_Condition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_Float_get_Condition_mFAB40C9B37534CA4C7E217C405072AA65079078F_inline (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Single>::get_CurData()
inline float FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_inline (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263*, const RuntimeMethod*))FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_gshared_inline)(__this, method);
}
// T GameBase.FSM.FSM_Condition`1<System.Single>::get_Target()
inline float FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_inline (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method)
{
	return ((  float (*) (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263*, const RuntimeMethod*))FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_gshared_inline)(__this, method);
}
// System.Void GameBase.FSM.FSM_Condition`1<System.Int32>::.ctor()
inline void FSM_Condition_1__ctor_m4024911136516042C3048DF5C26586610ED2C9B9 (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method)
{
	((  void (*) (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22*, const RuntimeMethod*))FSM_Condition_1__ctor_m4024911136516042C3048DF5C26586610ED2C9B9_gshared)(__this, method);
}
// System.Void GameBase.FSM.FSM_Condition`1<System.Int32>::.ctor(System.String,T)
inline void FSM_Condition_1__ctor_m78BE2647ED688D12EB7F09CA3D51DCE44B985051 (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, String_t* ___0_dataName, int32_t ___1_target, const RuntimeMethod* method)
{
	((  void (*) (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22*, String_t*, int32_t, const RuntimeMethod*))FSM_Condition_1__ctor_m78BE2647ED688D12EB7F09CA3D51DCE44B985051_gshared)(__this, ___0_dataName, ___1_target, method);
}
// System.Void GameBase.FSM.FSM_Condition_Int::set_Condition(GameBase.FSM.FSM_Condition_Int/IntCondition)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_Int_set_Condition_mB24F2799B37B0B8C63B2CDA746B27DA870E60791_inline (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean GameBase.FSM.FSM_Condition`1<System.Int32>::Tick(GameBase.FSM.FSM_DataBase)
inline bool FSM_Condition_1_Tick_mF9D5993C13F56C530CA99A71AD511E1A2004E9AB (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method)
{
	return ((  bool (*) (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22*, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D*, const RuntimeMethod*))FSM_Condition_1_Tick_mF9D5993C13F56C530CA99A71AD511E1A2004E9AB_gshared)(__this, ___0_dataBase, method);
}
// GameBase.FSM.FSM_Condition_Int/IntCondition GameBase.FSM.FSM_Condition_Int::get_Condition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_Int_get_Condition_m06D2B634884C4545337B660A55CB2AA9CC29124F_inline (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Int32>::get_CurData()
inline int32_t FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_inline (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22*, const RuntimeMethod*))FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_gshared_inline)(__this, method);
}
// T GameBase.FSM.FSM_Condition`1<System.Int32>::get_Target()
inline int32_t FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_inline (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22*, const RuntimeMethod*))FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_gshared_inline)(__this, method);
}
// System.Void GameBase.FSM.FSM_Condition`1<System.Boolean>::.ctor()
inline void FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969 (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method)
{
	((  void (*) (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450*, const RuntimeMethod*))FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_gshared)(__this, method);
}
// System.Void GameBase.FSM.FSM_Condition`1<System.Boolean>::set_DataName(System.String)
inline void FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, String_t* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450*, String_t*, const RuntimeMethod*))FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_gshared_inline)(__this, ___0_value, method);
}
// System.Void GameBase.FSM.FSM_Condition_Booler::set_Condition(GameBase.FSM.FSM_Condition_Booler/BoolerCondition)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_Booler_set_Condition_m9C49DCC965545C599BFAE5C2F7D9BA185CE16F92_inline (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean GameBase.FSM.FSM_Condition`1<System.Boolean>::Tick(GameBase.FSM.FSM_DataBase)
inline bool FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4 (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method)
{
	return ((  bool (*) (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450*, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D*, const RuntimeMethod*))FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4_gshared)(__this, ___0_dataBase, method);
}
// GameBase.FSM.FSM_Condition_Booler/BoolerCondition GameBase.FSM.FSM_Condition_Booler::get_Condition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_Booler_get_Condition_m2715682184E4D422F3C289ADAC3BDC3E44E999A0_inline (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, const RuntimeMethod* method) ;
// T GameBase.FSM.FSM_Condition`1<System.Boolean>::get_CurData()
inline bool FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450*, const RuntimeMethod*))FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_gshared_inline)(__this, method);
}
// System.String GameBase.FSM.FSM_Condition`1<System.Boolean>::get_DataName()
inline String_t* FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450*, const RuntimeMethod*))FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_gshared_inline)(__this, method);
}
// System.Void GameBase.FSM.FSM_DataBase::SetData<System.Boolean>(System.String,T)
inline void FSM_DataBase_SetData_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25FDA2FCEE5959CCC2208A4465CEAEB2E10FD2C5 (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* __this, String_t* ___0_dataName, bool ___1_data, const RuntimeMethod* method)
{
	((  void (*) (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D*, String_t*, bool, const RuntimeMethod*))FSM_DataBase_SetData_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25FDA2FCEE5959CCC2208A4465CEAEB2E10FD2C5_gshared)(__this, ___0_dataName, ___1_data, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 GameBase.FSM.FSM_DataBase::GetIndexOfDataId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FSM_DataBase_GetIndexOfDataId_m1ED5A3AB02D43EE13EBE9EEE48B902B8726F415C (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* __this, String_t* ___0_dataName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void GameBase.FSM.FSM_StateMachine`1<System.String>::.ctor()
inline void FSM_StateMachine_1__ctor_m1BD22F603A420D54363B86FA84D9E8CDD473D345 (FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1* __this, const RuntimeMethod* method)
{
	((  void (*) (FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1*, const RuntimeMethod*))FSM_StateMachine_1__ctor_m3473D4B0BA0560EEF5AC9B628AD0AE2AC8845970_gshared)(__this, method);
}
// System.Void GameBase.FSM.FSM_Status`1<System.String>::.ctor(System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>>,System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>>,System.Action`1<GameBase.FSM.FSM_Status`1<TStateId>>)
inline void FSM_Status_1__ctor_m467A4CC2D24C3827141C60CD5BEA9AA10160D9EA (FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132* __this, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___0_onEnter, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___1_onExit, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___2_onAction, const RuntimeMethod* method)
{
	((  void (*) (FSM_Status_1_t14DF08C77B7AA7929BDE77D816811CF7A0E0C132*, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A*, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A*, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A*, const RuntimeMethod*))FSM_Status_1__ctor_mB133064CCB4EF31F5322749C7D3AA2E965210A9A_gshared)(__this, ___0_onEnter, ___1_onExit, ___2_onAction, method);
}
// System.Void GameBase.FSM.FSM_Transition`1<System.String>::.ctor(TStateId,TStateId,System.Int32)
inline void FSM_Transition_1__ctor_m8400E1CB0A428BEF56B5FF7ADC9389882E32CB0B (FSM_Transition_1_t8BE906BAA156CF7FAC81A619C8CBF5219900CC5E* __this, String_t* ___0_formStatus, String_t* ___1_toStatus, int32_t ___2_weightOrder, const RuntimeMethod* method)
{
	((  void (*) (FSM_Transition_1_t8BE906BAA156CF7FAC81A619C8CBF5219900CC5E*, String_t*, String_t*, int32_t, const RuntimeMethod*))FSM_Transition_1__ctor_mFDDACC6E91CD4790180588BE93F5D57FB39D9149_gshared)(__this, ___0_formStatus, ___1_toStatus, ___2_weightOrder, method);
}
// System.Void LGameFramework.GameBase.AssetFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileInfo__ctor_m54C9B84DBE3A49459AC0F706F2551BFD472BC85B (AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.Void LGameFramework.GameBase.AssetBundleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleInfo__ctor_m540CA9F0A0F24E70CF66C480B504BDCECF56242F (AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* __this, const RuntimeMethod* method) ;
// System.String FileUtility::GetMD5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileUtility_GetMD5_mE9E620E0163ABC9E98A1968301AD5B08D12CC572 (String_t* ___0_file, const RuntimeMethod* method) ;
// System.Int32 FileUtility::GetFileSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileUtility_GetFileSize_m92D9E002E996B728E9A61D23A8AE67F23537D726 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386 (String_t* ___0_path, const RuntimeMethod* method) ;
// T LGameFramework.GameBase.Pool.Pool`1<System.Net.WebClient>::Get()
inline WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* Pool_1_Get_m68F864DC96C747FF1C50B269FFB2D9EAB870C068 (const RuntimeMethod* method)
{
	return ((  WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* (*) (const RuntimeMethod*))Pool_1_Get_m2A0B83035F4535CDCF26821AF4353A4712A880ED_gshared)(method);
}
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___0_uriString, const RuntimeMethod* method) ;
// System.Void System.Net.WebClient::DownloadFileAsync(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient_DownloadFileAsync_mCE0E802EEFF77DDFF47C7C732E3B0BB700FAD58F (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_address, String_t* ___1_fileName, const RuntimeMethod* method) ;
// System.Void System.Net.DownloadProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadProgressChangedEventHandler__ctor_mCBF41060161532F78D4016F0BE9B42D92670A898 (DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Net.WebClient::add_DownloadProgressChanged(System.Net.DownloadProgressChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient_add_DownloadProgressChanged_m6A86D93E9770A1344220EEE2AEB5023E3B284767 (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.AsyncCompletedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncCompletedEventHandler__ctor_m38B62DB0D9EFF138FE4453B878EA9C57C492DC8B (AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Net.WebClient::add_DownloadFileCompleted(System.ComponentModel.AsyncCompletedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient_add_DownloadFileCompleted_m958910568BFD58E9A54C09FD99F0BB984EBDBDA6 (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D* ___0_value, const RuntimeMethod* method) ;
// System.Void LGameFramework.GameBase.AssetFileDownloader::SetData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_SetData_mF7ED7267E32693A4F42E273FF78CAA14AA770554 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, String_t* ___0_downloadURL, String_t* ___1_downloadPath, const RuntimeMethod* method) ;
// System.Void LGameFramework.GameBase.AssetFileDownloader::Download()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_Download_mD43C1CC330DD1803920B420AC8B075745E12BDF1 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void LGameFramework.GameBase.AssetFileDownloader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_Dispose_m9A551E01C4CD109A2A464C5CC362CB5440478FE4 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) ;
// System.Void System.Net.WebClient::remove_DownloadProgressChanged(System.Net.DownloadProgressChangedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient_remove_DownloadProgressChanged_m36C662DE4A1744A57755366C24C26B76A8C5D544 (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Net.WebClient::remove_DownloadFileCompleted(System.ComponentModel.AsyncCompletedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient_remove_DownloadFileCompleted_mDECB26E05557AED8290B1F6FAA4821F15CAB3620 (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Net.WebClient::CancelAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebClient_CancelAsync_mF73C9195F97D3430E137002024473A942183B3EB (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
// System.Void LGameFramework.GameBase.Pool.Pool`1<System.Net.WebClient>::Release(T)
inline void Pool_1_Release_mB6D11B28938D592F0AD2069760C905553E72DBDC (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268*, const RuntimeMethod*))Pool_1_Release_m1767BB80AE5634BD107A6D601A37FE1EE49C035F_gshared)(___0_item, method);
}
// System.Int32 System.ComponentModel.ProgressChangedEventArgs::get_ProgressPercentage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProgressChangedEventArgs_get_ProgressPercentage_m8D441B22C07732024891772E3C644F49BD3A977C_inline (ProgressChangedEventArgs_t5356EEBDD54D5434867C79874031F1730FE63D16* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T LGameFramework.GameBase.Pool.Pool`1<LGameFramework.GameBase.AssetFileDownloader>::Get()
inline AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* Pool_1_Get_mD5863AEF5D7AD90AA18F41EFDB27396903C1C7FF (const RuntimeMethod* method)
{
	return ((  AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* (*) (const RuntimeMethod*))Pool_1_Get_m2A0B83035F4535CDCF26821AF4353A4712A880ED_gshared)(method);
}
// LGameFramework.GameBase.AssetFileDownloader LGameFramework.GameBase.AssetFileDownloadQueue::Enqueue(LGameFramework.GameBase.AssetFileDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* AssetFileDownloadQueue_Enqueue_m4863B66AB9DC2148EA5310542FBBDB0A811B7174 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* ___0_loader, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>::.ctor()
inline void Queue_1__ctor_m551A616064149645939015212FD9E626D6252D6D (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>::Enqueue(T)
inline void Queue_1_Enqueue_m0DB17830938D31A733B94DF3A408CF9F4DE19836 (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* __this, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void LGameFramework.GameBase.AssetFileDownloadQueue::DownloadStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloadQueue_DownloadStart_m120D8E1B17754FCFDB2BA42F39C907B5731A0107 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>::.ctor()
inline void List_1__ctor_m046C62C6C6CA1E0BDF69571CEA7CDB1432FD18F4 (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>::get_Count()
inline int32_t Queue_1_get_Count_m8C3D1628DED4ADD4EBF493862DD27085FB481ED9_inline (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>::get_Count()
inline int32_t List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_inline (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>::Dequeue()
inline AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* Queue_1_Dequeue_m6278AEE0FFCE27C1C1608830E3BC8A7FBEC7E7CB (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* __this, const RuntimeMethod* method)
{
	return ((  AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* (*) (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_Reset_m4C37408BB39995FF24FDDEF151269FF1A6580594 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>::Add(T)
inline void List_1_Add_m38F2AB2D577F134DD7F3BA4CC898B0A221D90D50_inline (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* __this, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// T System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>::get_Item(System.Int32)
inline AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* List_1_get_Item_m9455A484939B86B3178E31F4BF7379E2A7C6AE4E (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* (*) (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Boolean LGameFramework.GameBase.AssetFileDownloader::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AssetFileDownloader_get_IsDone_m524BD60A1137AF6808AEE564DE101BBA78463D64_inline (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>::Remove(T)
inline bool List_1_Remove_m3CF76534C6E57AFB20C2BED895BE06A318A054D7 (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* __this, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void LGameFramework.GameBase.Pool.Pool`1<LGameFramework.GameBase.AssetFileDownloader>::Release(T)
inline void Pool_1_Release_mEF05A97533B7A662348DDAB737BE03705A8328CC (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46*, const RuntimeMethod*))Pool_1_Release_m1767BB80AE5634BD107A6D601A37FE1EE49C035F_gshared)(___0_item, method);
}
// System.Void System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader>::Clear()
inline void List_1_Clear_m9EE0270ABC4329A04D017CD922C034F5767F444D_inline (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader>::Clear()
inline void Queue_1_Clear_m135614EFF1418D27B8B6DF19305BCD1B908E8951 (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void GameSetting`1<LGameFramework.GameBase.GameLaunchSetting>::.ctor()
inline void GameSetting_1__ctor_mF7855C860904CFFE25D690720DC4E14F5586BFAC (GameSetting_1_tA339F7D4269DC6A2CAF43CD94EE66CCDAC9B9AF8* __this, const RuntimeMethod* method)
{
	((  void (*) (GameSetting_1_tA339F7D4269DC6A2CAF43CD94EE66CCDAC9B9AF8*, const RuntimeMethod*))GameSetting_1__ctor_mB11173EA7086A1D008AAC3141E7FF86C220DE5F0_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::GetEnumerator()
inline Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B List_1_GetEnumerator_mC9652874DD45711CBEBF106A437F9306EECFAF3C (List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B (*) (List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6*, const RuntimeMethod*))List_1_GetEnumerator_mC9652874DD45711CBEBF106A437F9306EECFAF3C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::Dispose()
inline void Enumerator_Dispose_mB9D2580913D91058D834DCB6CD9F3A929AC53F2E (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B*, const RuntimeMethod*))Enumerator_Dispose_mB9D2580913D91058D834DCB6CD9F3A929AC53F2E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::get_Current()
inline FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_inline (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B* __this, const RuntimeMethod* method)
{
	return ((  FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 (*) (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B*, const RuntimeMethod*))Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_gshared_inline)(__this, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::MoveNext()
inline bool Enumerator_MoveNext_mF58DF0F7AF0E0E631C059A8852156345FDD15908 (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B*, const RuntimeMethod*))Enumerator_MoveNext_mF58DF0F7AF0E0E631C059A8852156345FDD15908_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LGameFramework.GameBase.GamePathSetting/FilePathStruct>::.ctor()
inline void List_1__ctor_m484ACFB05503DE02969C4EF38A7D50A92770D926 (List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6*, const RuntimeMethod*))List_1__ctor_m484ACFB05503DE02969C4EF38A7D50A92770D926_gshared)(__this, method);
}
// System.Void GameSetting`1<LGameFramework.GameBase.GamePathSetting>::.ctor()
inline void GameSetting_1__ctor_m190D77FFB9818F1B3597F35175CE3FCA8DD60386 (GameSetting_1_t32D6F738F573D1546397C778B1854A9D5C6E883E* __this, const RuntimeMethod* method)
{
	((  void (*) (GameSetting_1_t32D6F738F573D1546397C778B1854A9D5C6E883E*, const RuntimeMethod*))GameSetting_1__ctor_mB11173EA7086A1D008AAC3141E7FF86C220DE5F0_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D (const RuntimeMethod* method) ;
// System.String LGameFramework.GameBase.GamePathSetting/SpecialPathStruct::get_AssetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpecialPathStruct_get_AssetPath_m3472DD23FCF8E176133DD18235710CDC8E1B6D26 (SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String LGameFramework.GameBase.AESEncryptor::Encrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AESEncryptor_Encrypt_mB490A464DAA93D38F0233F5B38BF72DCCEF281AC (String_t* ___0_plainText, const RuntimeMethod* method) ;
// System.String LGameFramework.GameBase.AESEncryptor::Decrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00 (String_t* ___0_cipherStr, const RuntimeMethod* method) ;
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A (String_t* ___0_json, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56 (String_t* ___0_json, RuntimeObject* ___1_objectToOverwrite, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Security.Cryptography.Aes System.Security.Cryptography.Aes::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* Aes_Create_m8E61A098683C7BBB8ADF0D030CA032317AE6F890 (const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6 (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_transform, int32_t ___2_mode, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m1E6CB00AA57A3E35968208F705E444511AD9B5DC (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inArray, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LGameFramework.GameBase.Pool.Pool/IPool>::.ctor()
inline void Dictionary_2__ctor_m8B57B660EEE2B13C34E3FF06CB4CC1179F2CA27A (Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 FileUtility::GetFileSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileUtility_GetFileSize_m92D9E002E996B728E9A61D23A8AE67F23537D726 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!File.Exists(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000a:
	{
		// FileInfo fileInfo = new FileInfo(path);
		String_t* L_2 = ___0_path;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_3 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_3, L_2, NULL);
		// int size = (int)fileInfo.Length;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_3, NULL);
		// return size;
		return ((int32_t)L_4);
	}
}
// System.Int32 FileUtility::GetDirectorySize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FileUtility_GetDirectorySize_m7C37AA0BD631D1861E39C1823C759DBC33F36CF7 (String_t* ___0_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* V_1 = NULL;
	int32_t V_2 = 0;
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* V_3 = NULL;
	{
		// if(!Directory.Exists(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_000a:
	{
		// DirectoryInfo directoryInfo = new DirectoryInfo(path);
		String_t* L_2 = ___0_path;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3 = (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)il2cpp_codegen_object_new(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DirectoryInfo__ctor_m36BC476C58B55083046C0A738157D84E2323E0E9(L_3, L_2, NULL);
		// FileInfo[] fileInfos = directoryInfo.GetFiles("*.*", SearchOption.AllDirectories);
		NullCheck(L_3);
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_4;
		L_4 = DirectoryInfo_GetFiles_mD211EA86FEDAF3944C8451AD2EB35E7BD9BA9542(L_3, _stringLiteral855DC2CE49DCC1C549D22D5DB0CF5A8D5ABF0987, 1, NULL);
		// int size = 0;
		V_0 = 0;
		// foreach(FileInfo fileInfo in fileInfos)
		V_1 = L_4;
		V_2 = 0;
		goto IL_0034;
	}

IL_0022:
	{
		// foreach(FileInfo fileInfo in fileInfos)
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// size += (int)fileInfo.Length;
		int32_t L_9 = V_0;
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_10 = V_3;
		NullCheck(L_10);
		int64_t L_11;
		L_11 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_10, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)L_11)));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0034:
	{
		// foreach(FileInfo fileInfo in fileInfos)
		int32_t L_13 = V_2;
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0022;
		}
	}
	{
		// return size;
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String FileUtility::GetMD5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileUtility_GetMD5_mE9E620E0163ABC9E98A1968301AD5B08D12CC572 (String_t* ___0_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	StringBuilder_t* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// FileStream fs = new FileStream(file, FileMode.Open);
			String_t* L_0 = ___0_file;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_1 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_1, L_0, 3, NULL);
			V_0 = L_1;
			// System.Security.Cryptography.MD5 md5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
			MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B* L_2 = (MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B*)il2cpp_codegen_object_new(MD5CryptoServiceProvider_tEBA22E49E733DDFE74A3F52711BB1EF82FBF653B_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			MD5CryptoServiceProvider__ctor_m3A1A5B12FFB04CB3A02E525558BA83A24F828067(L_2, NULL);
			// byte[] retVal = md5.ComputeHash(fs);
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_3 = V_0;
			NullCheck(L_2);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
			L_4 = HashAlgorithm_ComputeHash_m30AB167D918EF1DB488ECB6D83B573F1A7781E30(L_2, L_3, NULL);
			V_1 = L_4;
			// fs.Close();
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_5 = V_0;
			NullCheck(L_5);
			VirtualActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Close() */, L_5);
			// StringBuilder sb = new StringBuilder();
			StringBuilder_t* L_6 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_6, NULL);
			V_2 = L_6;
			// for (int i = 0; i < retVal.Length; i++)
			V_3 = 0;
			goto IL_0040_1;
		}

IL_0024_1:
		{
			// sb.Append(retVal[i].ToString("x2"));
			StringBuilder_t* L_7 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
			int32_t L_9 = V_3;
			NullCheck(L_8);
			String_t* L_10;
			L_10 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
			NullCheck(L_7);
			StringBuilder_t* L_11;
			L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, L_10, NULL);
			// for (int i = 0; i < retVal.Length; i++)
			int32_t L_12 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		}

IL_0040_1:
		{
			// for (int i = 0; i < retVal.Length; i++)
			int32_t L_13 = V_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
			NullCheck(L_14);
			if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
			{
				goto IL_0024_1;
			}
		}
		{
			// return sb.ToString();
			StringBuilder_t* L_15 = V_2;
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			V_4 = L_16;
			goto IL_0069;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0050;
		}
		throw e;
	}

CATCH_0050:
	{// begin catch(System.Exception)
		// catch (System.Exception ex)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// throw new System.Exception("md5file() fail, error:" + ex.Message);
		Exception_t* L_17 = V_5;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BB84B130322E3FCB48651A998BC00F60A084AFE)), L_18, NULL);
		Exception_t* L_20 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FileUtility_GetMD5_mE9E620E0163ABC9E98A1968301AD5B08D12CC572_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0069:
	{
		// }
		String_t* L_21 = V_4;
		return L_21;
	}
}
// System.Void FileUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileUtility__ctor_mCE07B24C09AAAB64C52F62D1BC65DC2970BC8650 (FileUtility_t7087E0192C26FFE73276E839A861CDF212B1D856* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MobileUtility::RestartApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileUtility_RestartApplication_mC3CF1B6DFEFD17E7D5B4B5917224A7E93B6FDA55 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MobileUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileUtility__ctor_m1536591162EB02C523289AECBD985FBBA17E1A90 (MobileUtility_t0F14651A10E7707F8C58A2DE0FE73397C08152D8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameBase.FSM.FSM_Condition_Float/FloatCondition GameBase.FSM.FSM_Condition_Float::get_Condition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FSM_Condition_Float_get_Condition_mFAB40C9B37534CA4C7E217C405072AA65079078F (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, const RuntimeMethod* method) 
{
	{
		// public FloatCondition Condition { get; set; }
		int32_t L_0 = __this->___U3CConditionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Float::set_Condition(GameBase.FSM.FSM_Condition_Float/FloatCondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Float_set_Condition_m51EFDF9066FF55D22AAE29E9FF543D55BF22BF73 (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatCondition Condition { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CConditionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Float::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Float__ctor_m032636E5F431ECACAF45A6D9E56DDEC922DDD5F6 (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_mE53F15E2CD2C13198A14147D9E5850D8663A48C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Float() { }
		FSM_Condition_1__ctor_mE53F15E2CD2C13198A14147D9E5850D8663A48C5(__this, FSM_Condition_1__ctor_mE53F15E2CD2C13198A14147D9E5850D8663A48C5_RuntimeMethod_var);
		// public FSM_Condition_Float() { }
		return;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Float::.ctor(System.String,System.Single,GameBase.FSM.FSM_Condition_Float/FloatCondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Float__ctor_m64D0937FD4DB20A4633B1F40690B8848627E283D (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, String_t* ___0_dataName, float ___1_target, int32_t ___2_condition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_m7F8AD94F138B6D3993669421145362F2759A1B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Float(string dataName, float target, FloatCondition condition) : base(dataName, target) { this.Condition = condition; }
		String_t* L_0 = ___0_dataName;
		float L_1 = ___1_target;
		FSM_Condition_1__ctor_m7F8AD94F138B6D3993669421145362F2759A1B42(__this, L_0, L_1, FSM_Condition_1__ctor_m7F8AD94F138B6D3993669421145362F2759A1B42_RuntimeMethod_var);
		// public FSM_Condition_Float(string dataName, float target, FloatCondition condition) : base(dataName, target) { this.Condition = condition; }
		int32_t L_2 = ___2_condition;
		FSM_Condition_Float_set_Condition_m51EFDF9066FF55D22AAE29E9FF543D55BF22BF73_inline(__this, L_2, NULL);
		// public FSM_Condition_Float(string dataName, float target, FloatCondition condition) : base(dataName, target) { this.Condition = condition; }
		return;
	}
}
// System.Boolean GameBase.FSM.FSM_Condition_Float::Tick(GameBase.FSM.FSM_DataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_Condition_Float_Tick_m7A105AA53B631343BC6452B347F31D3775573FE4 (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_Tick_m872BDEFE92A42801D5AAED6CBFB4B2421AABD84C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Tick(dataBase);
		FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* L_0 = ___0_dataBase;
		bool L_1;
		L_1 = FSM_Condition_1_Tick_m872BDEFE92A42801D5AAED6CBFB4B2421AABD84C(__this, L_0, FSM_Condition_1_Tick_m872BDEFE92A42801D5AAED6CBFB4B2421AABD84C_RuntimeMethod_var);
		// switch (Condition)
		int32_t L_2;
		L_2 = FSM_Condition_Float_get_Condition_mFAB40C9B37534CA4C7E217C405072AA65079078F_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0036;
	}

IL_0018:
	{
		// return CurData > Target;
		float L_5;
		L_5 = FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_inline(__this, FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_RuntimeMethod_var);
		float L_6;
		L_6 = FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_inline(__this, FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_RuntimeMethod_var);
		return (bool)((((float)L_5) > ((float)L_6))? 1 : 0);
	}

IL_0027:
	{
		// return CurData < Target;
		float L_7;
		L_7 = FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_inline(__this, FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_RuntimeMethod_var);
		float L_8;
		L_8 = FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_inline(__this, FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_RuntimeMethod_var);
		return (bool)((((float)L_7) < ((float)L_8))? 1 : 0);
	}

IL_0036:
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameBase.FSM.FSM_Condition_Int/IntCondition GameBase.FSM.FSM_Condition_Int::get_Condition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FSM_Condition_Int_get_Condition_m06D2B634884C4545337B660A55CB2AA9CC29124F (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, const RuntimeMethod* method) 
{
	{
		// public IntCondition Condition { get; set; }
		int32_t L_0 = __this->___U3CConditionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Int::set_Condition(GameBase.FSM.FSM_Condition_Int/IntCondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Int_set_Condition_mB24F2799B37B0B8C63B2CDA746B27DA870E60791 (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntCondition Condition { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CConditionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Int::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Int__ctor_mBE0DAE85D7DC3DAEFD48C94B8214F7EB43A8CC19 (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_m4024911136516042C3048DF5C26586610ED2C9B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Int() { }
		FSM_Condition_1__ctor_m4024911136516042C3048DF5C26586610ED2C9B9(__this, FSM_Condition_1__ctor_m4024911136516042C3048DF5C26586610ED2C9B9_RuntimeMethod_var);
		// public FSM_Condition_Int() { }
		return;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Int::.ctor(System.String,System.Int32,GameBase.FSM.FSM_Condition_Int/IntCondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Int__ctor_m7A172FE51BA4A7E75C7F49DC187989A129F63605 (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, String_t* ___0_dataName, int32_t ___1_target, int32_t ___2_condition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_m78BE2647ED688D12EB7F09CA3D51DCE44B985051_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Int(string dataName, int target, IntCondition condition) : base(dataName, target) { this.Condition = condition; }
		String_t* L_0 = ___0_dataName;
		int32_t L_1 = ___1_target;
		FSM_Condition_1__ctor_m78BE2647ED688D12EB7F09CA3D51DCE44B985051(__this, L_0, L_1, FSM_Condition_1__ctor_m78BE2647ED688D12EB7F09CA3D51DCE44B985051_RuntimeMethod_var);
		// public FSM_Condition_Int(string dataName, int target, IntCondition condition) : base(dataName, target) { this.Condition = condition; }
		int32_t L_2 = ___2_condition;
		FSM_Condition_Int_set_Condition_mB24F2799B37B0B8C63B2CDA746B27DA870E60791_inline(__this, L_2, NULL);
		// public FSM_Condition_Int(string dataName, int target, IntCondition condition) : base(dataName, target) { this.Condition = condition; }
		return;
	}
}
// System.Boolean GameBase.FSM.FSM_Condition_Int::Tick(GameBase.FSM.FSM_DataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_Condition_Int_Tick_mEA4E9FBC5E21F4325B794FF2D1D6F6CD5B76F323 (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_Tick_mF9D5993C13F56C530CA99A71AD511E1A2004E9AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Tick(dataBase);
		FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* L_0 = ___0_dataBase;
		bool L_1;
		L_1 = FSM_Condition_1_Tick_mF9D5993C13F56C530CA99A71AD511E1A2004E9AB(__this, L_0, FSM_Condition_1_Tick_mF9D5993C13F56C530CA99A71AD511E1A2004E9AB_RuntimeMethod_var);
		// switch (Condition)
		int32_t L_2;
		L_2 = FSM_Condition_Int_get_Condition_m06D2B634884C4545337B660A55CB2AA9CC29124F_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_0054;
			}
		}
	}
	{
		goto IL_0066;
	}

IL_0027:
	{
		// return CurData > Target;
		int32_t L_4;
		L_4 = FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_inline(__this, FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_RuntimeMethod_var);
		int32_t L_5;
		L_5 = FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_inline(__this, FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_RuntimeMethod_var);
		return (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
	}

IL_0036:
	{
		// return CurData < Target;
		int32_t L_6;
		L_6 = FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_inline(__this, FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_RuntimeMethod_var);
		int32_t L_7;
		L_7 = FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_inline(__this, FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_RuntimeMethod_var);
		return (bool)((((int32_t)L_6) < ((int32_t)L_7))? 1 : 0);
	}

IL_0045:
	{
		// return CurData == Target;
		int32_t L_8;
		L_8 = FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_inline(__this, FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_RuntimeMethod_var);
		int32_t L_9;
		L_9 = FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_inline(__this, FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_RuntimeMethod_var);
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}

IL_0054:
	{
		// return CurData != Target;
		int32_t L_10;
		L_10 = FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_inline(__this, FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_RuntimeMethod_var);
		int32_t L_11;
		L_11 = FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_inline(__this, FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_RuntimeMethod_var);
		return (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0066:
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameBase.FSM.FSM_Condition_Booler/BoolerCondition GameBase.FSM.FSM_Condition_Booler::get_Condition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FSM_Condition_Booler_get_Condition_m2715682184E4D422F3C289ADAC3BDC3E44E999A0 (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, const RuntimeMethod* method) 
{
	{
		// public BoolerCondition Condition { get; set; }
		int32_t L_0 = __this->___U3CConditionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Booler::set_Condition(GameBase.FSM.FSM_Condition_Booler/BoolerCondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Booler_set_Condition_m9C49DCC965545C599BFAE5C2F7D9BA185CE16F92 (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoolerCondition Condition { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CConditionU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Booler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Booler__ctor_mBBA1DCFFDEAAD00EC3C3EFADDAF1343E8EB8381D (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Booler() { }
		FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969(__this, FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		// public FSM_Condition_Booler() { }
		return;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Booler::.ctor(System.String,GameBase.FSM.FSM_Condition_Booler/BoolerCondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Booler__ctor_mA92856A84F876088AD70B74E14761A56C573E5E1 (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, String_t* ___0_dataName, int32_t ___1_condition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Booler(string dataName, BoolerCondition condition)
		FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969(__this, FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		// this.DataName = dataName;
		String_t* L_0 = ___0_dataName;
		FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_inline(__this, L_0, FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_RuntimeMethod_var);
		// this.Condition = condition;
		int32_t L_1 = ___1_condition;
		FSM_Condition_Booler_set_Condition_m9C49DCC965545C599BFAE5C2F7D9BA185CE16F92_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean GameBase.FSM.FSM_Condition_Booler::Tick(GameBase.FSM.FSM_DataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_Condition_Booler_Tick_m962F2957E5E214E1BFFB2B4C5BF2EC085C10D35F (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// base.Tick(dataBase);
		FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* L_0 = ___0_dataBase;
		bool L_1;
		L_1 = FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4(__this, L_0, FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4_RuntimeMethod_var);
		// switch (Condition)
		int32_t L_2;
		L_2 = FSM_Condition_Booler_get_Condition_m2715682184E4D422F3C289ADAC3BDC3E44E999A0_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0029;
	}

IL_0018:
	{
		// return CurData == true;
		bool L_5;
		L_5 = FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_inline(__this, FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_RuntimeMethod_var);
		return L_5;
	}

IL_001f:
	{
		// return CurData == false;
		bool L_6;
		L_6 = FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_inline(__this, FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_RuntimeMethod_var);
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0029:
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameBase.FSM.FSM_Condition_Trigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Trigger__ctor_m0311396D1BE5C853D38F397244E0E21DA1CF2415 (FSM_Condition_Trigger_t1E27C970AB281B18D1CD58F98126C4C612BE029E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Trigger() { }
		FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969(__this, FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		// public FSM_Condition_Trigger() { }
		return;
	}
}
// System.Void GameBase.FSM.FSM_Condition_Trigger::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Condition_Trigger__ctor_mB53C8F5D6B063A5A7FB61C964E3C66A8364218AE (FSM_Condition_Trigger_t1E27C970AB281B18D1CD58F98126C4C612BE029E* __this, String_t* ___0_dataName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Condition_Trigger(string dataName)
		FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969(__this, FSM_Condition_1__ctor_m688733FB611B2AE506D8DFA96BCA01DBF1681969_RuntimeMethod_var);
		// this.DataName = dataName;
		String_t* L_0 = ___0_dataName;
		FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_inline(__this, L_0, FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean GameBase.FSM.FSM_Condition_Trigger::Tick(GameBase.FSM.FSM_DataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_Condition_Trigger_Tick_mF70239A6520226B9613F3ECEE0A1549FD4318332 (FSM_Condition_Trigger_t1E27C970AB281B18D1CD58F98126C4C612BE029E* __this, FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* ___0_dataBase, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_DataBase_SetData_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25FDA2FCEE5959CCC2208A4465CEAEB2E10FD2C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Tick(dataBase);
		FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* L_0 = ___0_dataBase;
		bool L_1;
		L_1 = FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4(__this, L_0, FSM_Condition_1_Tick_m2704E5B9D8F845B05AFBAE1C21B6C4AD170D0CE4_RuntimeMethod_var);
		// dataBase.SetData<bool>(DataName, false);
		FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* L_2 = ___0_dataBase;
		String_t* L_3;
		L_3 = FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_inline(__this, FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_RuntimeMethod_var);
		NullCheck(L_2);
		FSM_DataBase_SetData_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25FDA2FCEE5959CCC2208A4465CEAEB2E10FD2C5(L_2, L_3, (bool)0, FSM_DataBase_SetData_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m25FDA2FCEE5959CCC2208A4465CEAEB2E10FD2C5_RuntimeMethod_var);
		// return CurData;
		bool L_4;
		L_4 = FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_inline(__this, FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 GameBase.FSM.FSM_DataBase::GetIndexOfDataId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FSM_DataBase_GetIndexOfDataId_m1ED5A3AB02D43EE13EBE9EEE48B902B8726F415C (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* __this, String_t* ___0_dataName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_DataName.Count; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// if (m_DataName[i].Equals(dataName))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___m_DataName_5;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_0, L_1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		String_t* L_3 = ___0_dataName;
		NullCheck(L_2);
		bool L_4;
		L_4 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return i;
		int32_t L_5 = V_0;
		return L_5;
	}

IL_001a:
	{
		// for (int i = 0; i < m_DataName.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < m_DataName.Count; i++)
		int32_t L_7 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = __this->___m_DataName_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_8, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Int32 GameBase.FSM.FSM_DataBase::TryGetDataId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FSM_DataBase_TryGetDataId_mE0CA23EA16A5E3E0F8F34320A9BD1C290764FB9B (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* __this, String_t* ___0_dataName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int dataId = GetIndexOfDataId(dataName);
		String_t* L_0 = ___0_dataName;
		int32_t L_1;
		L_1 = FSM_DataBase_GetIndexOfDataId_m1ED5A3AB02D43EE13EBE9EEE48B902B8726F415C(__this, L_0, NULL);
		V_0 = L_1;
		// if (dataId == -1)
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0032;
		}
	}
	{
		// m_DataName.Add(dataName);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = __this->___m_DataName_5;
		String_t* L_4 = ___0_dataName;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// m_DataBase.Add(null);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = __this->___m_DataBase_4;
		NullCheck(L_5);
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_5, NULL, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		// dataId = m_DataName.Count - 1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6 = __this->___m_DataName_5;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_6, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0032:
	{
		// return dataId;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Boolean GameBase.FSM.FSM_DataBase::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FSM_DataBase_Contains_mF2D80870C5E15D49554D2E755C275E44D35FFE36 (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* __this, String_t* ___0_dataName, const RuntimeMethod* method) 
{
	{
		// return GetIndexOfDataId(dataName) != -1;
		String_t* L_0 = ___0_dataName;
		int32_t L_1;
		L_1 = FSM_DataBase_GetIndexOfDataId_m1ED5A3AB02D43EE13EBE9EEE48B902B8726F415C(__this, L_0, NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void GameBase.FSM.FSM_DataBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_DataBase__ctor_m45705B091E7A34FBE0975351E59F03261399859A (FSM_DataBase_tFE3F2EF2B383130C649018106B9663CC0857807D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<object> m_DataBase = new List<object>();
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		__this->___m_DataBase_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataBase_4), (void*)L_0);
		// private readonly List<string> m_DataName = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___m_DataName_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DataName_5), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameBase.FSM.FSM_StateMachine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_StateMachine__ctor_m91755EA0F2A7A5D3C91A993E4C3C53C6B014F6EF (FSM_StateMachine_tBA06E1D7B73387BB82FD4A6EF32D9308EC06892D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_StateMachine_1__ctor_m1BD22F603A420D54363B86FA84D9E8CDD473D345_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FSM_StateMachine_1_tFABD6AA99A6DFDC7100C77745C14C62CD7EDA9E1_il2cpp_TypeInfo_var);
		FSM_StateMachine_1__ctor_m1BD22F603A420D54363B86FA84D9E8CDD473D345(__this, FSM_StateMachine_1__ctor_m1BD22F603A420D54363B86FA84D9E8CDD473D345_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameBase.FSM.FSM_Status::.ctor(System.Action`1<GameBase.FSM.FSM_Status`1<System.String>>,System.Action`1<GameBase.FSM.FSM_Status`1<System.String>>,System.Action`1<GameBase.FSM.FSM_Status`1<System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Status__ctor_mD2DCCDE785FA0CEBD7D0B07F8E50E71681D726A9 (FSM_Status_t3B7F20E10CFA9BA17847BF41B502B6145A2D0FEA* __this, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___0_onEnter, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___1_onExit, Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* ___2_onAction, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Status_1__ctor_m467A4CC2D24C3827141C60CD5BEA9AA10160D9EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Status(Action<FSM_Status<string>> onEnter = null, Action<FSM_Status<string>> onExit = null, Action<FSM_Status<string>> onAction = null) : base(onEnter, onExit, onAction)
		Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* L_0 = ___0_onEnter;
		Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* L_1 = ___1_onExit;
		Action_1_tBF2C75B2BD2406756167067B6E7D008A7A55871A* L_2 = ___2_onAction;
		FSM_Status_1__ctor_m467A4CC2D24C3827141C60CD5BEA9AA10160D9EA(__this, L_0, L_1, L_2, FSM_Status_1__ctor_m467A4CC2D24C3827141C60CD5BEA9AA10160D9EA_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameBase.FSM.FSM_Transition::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FSM_Transition__ctor_m6FD8F3180477E44843BF15BB45381E41D1C3F753 (FSM_Transition_tE3AFC1A95B669483FCB0C7712A36B6DF8DD4F076* __this, String_t* ___0_formStatus, String_t* ___1_toStatus, int32_t ___2_weightOrder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FSM_Transition_1__ctor_m8400E1CB0A428BEF56B5FF7ADC9389882E32CB0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public FSM_Transition(string formStatus, string toStatus, int weightOrder = 0) : base(formStatus, toStatus, weightOrder)
		String_t* L_0 = ___0_formStatus;
		String_t* L_1 = ___1_toStatus;
		int32_t L_2 = ___2_weightOrder;
		FSM_Transition_1__ctor_m8400E1CB0A428BEF56B5FF7ADC9389882E32CB0B(__this, L_0, L_1, L_2, FSM_Transition_1__ctor_m8400E1CB0A428BEF56B5FF7ADC9389882E32CB0B_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LGameFramework.GameBase.AssetFileInfo LGameFramework.GameBase.AssetFileInfo::GetAssetFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2* AssetFileInfo_GetAssetFile_m979702E8221757B5FA8781D64C826023BF5DDE9F (String_t* ___0_assetName, String_t* ___1_bundleName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AssetFileInfo file = new AssetFileInfo();
		AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2* L_0 = (AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2*)il2cpp_codegen_object_new(AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AssetFileInfo__ctor_m54C9B84DBE3A49459AC0F706F2551BFD472BC85B(L_0, NULL);
		// file.assetName = Path.GetFileName(assetName);
		AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2* L_1 = L_0;
		String_t* L_2 = ___0_assetName;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_2, NULL);
		NullCheck(L_1);
		L_1->___assetName_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___assetName_0), (void*)L_3);
		// file.bundleName = Path.GetFileName(bundleName) ;
		AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2* L_4 = L_1;
		String_t* L_5 = ___1_bundleName;
		String_t* L_6;
		L_6 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_5, NULL);
		NullCheck(L_4);
		L_4->___bundleName_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___bundleName_1), (void*)L_6);
		// return file;
		return L_4;
	}
}
// System.Void LGameFramework.GameBase.AssetFileInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileInfo__ctor_m54C9B84DBE3A49459AC0F706F2551BFD472BC85B (AssetFileInfo_t7DED5D93F5EDBBA9A58D92702D518BAA290534B2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LGameFramework.GameBase.AssetBundleInfo LGameFramework.GameBase.AssetBundleInfo::GetAssetBundleInfo(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* AssetBundleInfo_GetAssetBundleInfo_m0904416A766EF4FF2A2C3C236F68CB953B98D618 (String_t* ___0_bundleName, String_t* ___1_assetPath, String_t* ___2_fullPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// assetPath = assetPath.Replace("\\", "/");
		String_t* L_0 = ___1_assetPath;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		___1_assetPath = L_1;
		// fullPath = fullPath.Replace("\\", "/");
		String_t* L_2 = ___2_fullPath;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteral09B11B6CC411D8B9FFB75EAAE9A35B2AF248CE40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, NULL);
		___2_fullPath = L_3;
		// AssetBundleInfo file = new AssetBundleInfo();
		AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* L_4 = (AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760*)il2cpp_codegen_object_new(AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AssetBundleInfo__ctor_m540CA9F0A0F24E70CF66C480B504BDCECF56242F(L_4, NULL);
		// file.bundleName = Path.GetFileName(bundleName);
		AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* L_5 = L_4;
		String_t* L_6 = ___0_bundleName;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Path_GetFileName_mB1A8CE314EE250B06E3D33142315E2BD3A75D1D6(L_6, NULL);
		NullCheck(L_5);
		L_5->___bundleName_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___bundleName_0), (void*)L_7);
		// file.assetPath = assetPath;
		AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* L_8 = L_5;
		String_t* L_9 = ___1_assetPath;
		NullCheck(L_8);
		L_8->___assetPath_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___assetPath_1), (void*)L_9);
		// file.md5Code = FileUtility.GetMD5(fullPath);
		AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* L_10 = L_8;
		String_t* L_11 = ___2_fullPath;
		String_t* L_12;
		L_12 = FileUtility_GetMD5_mE9E620E0163ABC9E98A1968301AD5B08D12CC572(L_11, NULL);
		NullCheck(L_10);
		L_10->___md5Code_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___md5Code_2), (void*)L_12);
		// file.size = FileUtility.GetFileSize(fullPath);
		AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* L_13 = L_10;
		String_t* L_14 = ___2_fullPath;
		int32_t L_15;
		L_15 = FileUtility_GetFileSize_m92D9E002E996B728E9A61D23A8AE67F23537D726(L_14, NULL);
		NullCheck(L_13);
		L_13->___size_3 = L_15;
		// return file;
		return L_13;
	}
}
// System.Void LGameFramework.GameBase.AssetBundleInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleInfo__ctor_m540CA9F0A0F24E70CF66C480B504BDCECF56242F (AssetBundleInfo_t12F483ECEAC2774C1E9FCA3BCDB9912BEAFF0760* __this, const RuntimeMethod* method) 
{
	{
		// public AssetFileFlag fileFlag = AssetFileFlag.Build;
		__this->___fileFlag_7 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object LGameFramework.GameBase.AssetFileDownloader::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetFileDownloader_get_Current_m079E8AE1F052BA5800AC3EA2BFEDB12BFB1E7850 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// public object Current { get { return m_Current; } }
		RuntimeObject* L_0 = __this->___m_Current_0;
		return L_0;
	}
}
// System.String LGameFramework.GameBase.AssetFileDownloader::get_DownloadURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssetFileDownloader_get_DownloadURL_m90D3AE3B32C1E4D9A7D153CBD9CF50E52091F348 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// public string DownloadURL { get { return m_DownloadURL; } }
		String_t* L_0 = __this->___m_DownloadURL_1;
		return L_0;
	}
}
// System.String LGameFramework.GameBase.AssetFileDownloader::get_DownloadPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssetFileDownloader_get_DownloadPath_mF2271940C32F6E945B47A51804425F9D5C59D75B (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// public string DownloadPath { get { return m_DownloadPath; } }
		String_t* L_0 = __this->___m_DownloadPath_2;
		return L_0;
	}
}
// System.Single LGameFramework.GameBase.AssetFileDownloader::get_Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AssetFileDownloader_get_Progress_m05957A6AC87E5093E710B43196979E6B8A04778D (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// public float Progress { get { return m_Progress; } }
		float L_0 = __this->___m_Progress_3;
		return L_0;
	}
}
// System.Boolean LGameFramework.GameBase.AssetFileDownloader::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetFileDownloader_get_IsDone_m524BD60A1137AF6808AEE564DE101BBA78463D64 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get { return m_IsDone; } }
		bool L_0 = __this->___m_IsDone_4;
		return L_0;
	}
}
// System.Net.WebClient LGameFramework.GameBase.AssetFileDownloader::get_WebClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* AssetFileDownloader_get_WebClient_m6746BE18E9D6A2A9BD04EDC1CC3786E13EAE384D (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// public WebClient WebClient { get { return m_WebClient; } }
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_0 = __this->___m_WebClient_5;
		return L_0;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::Download()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_Download_mD43C1CC330DD1803920B420AC8B075745E12BDF1 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetFileDownloader_DownloadFileCompleted_mA264E8C5E62145DA32CCFB9821DB60BCF318D47F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetFileDownloader_DownloadProgressChanged_m98E27C47150979B46D48AF66CAC227546C02623D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Get_m68F864DC96C747FF1C50B269FFB2D9EAB870C068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_tA9510604701B572F3E80604470D5D3E3BDCA2662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Directory.Exists(Path.GetDirectoryName(m_DownloadPath)))
		String_t* L_0 = __this->___m_DownloadPath_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_0, NULL);
		bool L_2;
		L_2 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_1, NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Directory.CreateDirectory(Path.GetDirectoryName(m_DownloadPath));
		String_t* L_3 = __this->___m_DownloadPath_2;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_3, NULL);
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
		L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
	}

IL_0023:
	{
		// if (File.Exists(m_DownloadPath))
		String_t* L_6 = __this->___m_DownloadPath_2;
		bool L_7;
		L_7 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_6, NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		// File.Delete(m_DownloadPath);
		String_t* L_8 = __this->___m_DownloadPath_2;
		File_Delete_mE29829DA504F3E1B8BCB78F21E2862C9ED7EC386(L_8, NULL);
	}

IL_003b:
	{
		// m_WebClient = Pool<WebClient>.Get();
		il2cpp_codegen_runtime_class_init_inline(Pool_1_tA9510604701B572F3E80604470D5D3E3BDCA2662_il2cpp_TypeInfo_var);
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_9;
		L_9 = Pool_1_Get_m68F864DC96C747FF1C50B269FFB2D9EAB870C068(Pool_1_Get_m68F864DC96C747FF1C50B269FFB2D9EAB870C068_RuntimeMethod_var);
		__this->___m_WebClient_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_WebClient_5), (void*)L_9);
		// m_WebClient.DownloadFileAsync(new System.Uri(m_DownloadURL), m_DownloadPath);
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_10 = __this->___m_WebClient_5;
		String_t* L_11 = __this->___m_DownloadURL_1;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_12 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_12, L_11, NULL);
		String_t* L_13 = __this->___m_DownloadPath_2;
		NullCheck(L_10);
		WebClient_DownloadFileAsync_mCE0E802EEFF77DDFF47C7C732E3B0BB700FAD58F(L_10, L_12, L_13, NULL);
		// m_WebClient.DownloadProgressChanged += DownloadProgressChanged;
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_14 = __this->___m_WebClient_5;
		DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E* L_15 = (DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E*)il2cpp_codegen_object_new(DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		DownloadProgressChangedEventHandler__ctor_mCBF41060161532F78D4016F0BE9B42D92670A898(L_15, __this, (intptr_t)((void*)AssetFileDownloader_DownloadProgressChanged_m98E27C47150979B46D48AF66CAC227546C02623D_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		WebClient_add_DownloadProgressChanged_m6A86D93E9770A1344220EEE2AEB5023E3B284767(L_14, L_15, NULL);
		// m_WebClient.DownloadFileCompleted += DownloadFileCompleted;
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_16 = __this->___m_WebClient_5;
		AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D* L_17 = (AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D*)il2cpp_codegen_object_new(AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		AsyncCompletedEventHandler__ctor_m38B62DB0D9EFF138FE4453B878EA9C57C492DC8B(L_17, __this, (intptr_t)((void*)AssetFileDownloader_DownloadFileCompleted_mA264E8C5E62145DA32CCFB9821DB60BCF318D47F_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		WebClient_add_DownloadFileCompleted_m958910568BFD58E9A54C09FD99F0BB984EBDBDA6(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::DownloadFileAsync(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_DownloadFileAsync_m0F9D9091D9B5D1E443D2555A5935D323C93ABC04 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, String_t* ___0_downloadURL, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	{
		// SetData(downloadURL, downloadPath);
		String_t* L_0 = ___0_downloadURL;
		String_t* L_1 = ___1_downloadPath;
		AssetFileDownloader_SetData_mF7ED7267E32693A4F42E273FF78CAA14AA770554(__this, L_0, L_1, NULL);
		// Download();
		AssetFileDownloader_Download_mD43C1CC330DD1803920B420AC8B075745E12BDF1(__this, NULL);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::SetData(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_SetData_mF7ED7267E32693A4F42E273FF78CAA14AA770554 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, String_t* ___0_downloadURL, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD6F9F67D8F81962E055551E00D31E081389090);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(downloadURL) || string.IsNullOrEmpty(downloadPath))
		String_t* L_0 = ___0_downloadURL;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_2 = ___1_downloadPath;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		// Debug.LogError("??????????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1DD6F9F67D8F81962E055551E00D31E081389090, NULL);
		// return;
		return;
	}

IL_001b:
	{
		// m_DownloadURL = downloadURL;
		String_t* L_4 = ___0_downloadURL;
		__this->___m_DownloadURL_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownloadURL_1), (void*)L_4);
		// m_DownloadPath = downloadPath;
		String_t* L_5 = ___1_downloadPath;
		__this->___m_DownloadPath_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownloadPath_2), (void*)L_5);
		// }
		return;
	}
}
// System.Boolean LGameFramework.GameBase.AssetFileDownloader::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetFileDownloader_MoveNext_mFFC8768A3F8129BFB925B3CB4C64DAF2C0A027C3 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// return !m_IsDone;
		bool L_0 = __this->___m_IsDone_4;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_Reset_m4C37408BB39995FF24FDDEF151269FF1A6580594 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// Dispose();
		AssetFileDownloader_Dispose_m9A551E01C4CD109A2A464C5CC362CB5440478FE4(__this, NULL);
		// Download();
		AssetFileDownloader_Download_mD43C1CC330DD1803920B420AC8B075745E12BDF1(__this, NULL);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_Dispose_m9A551E01C4CD109A2A464C5CC362CB5440478FE4 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetFileDownloader_DownloadFileCompleted_mA264E8C5E62145DA32CCFB9821DB60BCF318D47F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetFileDownloader_DownloadProgressChanged_m98E27C47150979B46D48AF66CAC227546C02623D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Release_mB6D11B28938D592F0AD2069760C905553E72DBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_tA9510604701B572F3E80604470D5D3E3BDCA2662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_WebClient == null) return;
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_0 = __this->___m_WebClient_5;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (m_WebClient == null) return;
		return;
	}

IL_0009:
	{
		// m_WebClient.DownloadProgressChanged -= DownloadProgressChanged;
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_1 = __this->___m_WebClient_5;
		DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E* L_2 = (DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E*)il2cpp_codegen_object_new(DownloadProgressChangedEventHandler_tED4A580CA8394ECEAE28C54210297C3B5C51F85E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DownloadProgressChangedEventHandler__ctor_mCBF41060161532F78D4016F0BE9B42D92670A898(L_2, __this, (intptr_t)((void*)AssetFileDownloader_DownloadProgressChanged_m98E27C47150979B46D48AF66CAC227546C02623D_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		WebClient_remove_DownloadProgressChanged_m36C662DE4A1744A57755366C24C26B76A8C5D544(L_1, L_2, NULL);
		// m_WebClient.DownloadFileCompleted -= DownloadFileCompleted;
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_3 = __this->___m_WebClient_5;
		AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D* L_4 = (AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D*)il2cpp_codegen_object_new(AsyncCompletedEventHandler_tCF3E9DBCBA16361DB3602FB594FEADB76702605D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AsyncCompletedEventHandler__ctor_m38B62DB0D9EFF138FE4453B878EA9C57C492DC8B(L_4, __this, (intptr_t)((void*)AssetFileDownloader_DownloadFileCompleted_mA264E8C5E62145DA32CCFB9821DB60BCF318D47F_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		WebClient_remove_DownloadFileCompleted_mDECB26E05557AED8290B1F6FAA4821F15CAB3620(L_3, L_4, NULL);
		// m_WebClient.CancelAsync();
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_5 = __this->___m_WebClient_5;
		NullCheck(L_5);
		WebClient_CancelAsync_mF73C9195F97D3430E137002024473A942183B3EB(L_5, NULL);
		// m_WebClient.Dispose();
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_6 = __this->___m_WebClient_5;
		NullCheck(L_6);
		Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2(L_6, NULL);
		// m_Current = null;
		__this->___m_Current_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Current_0), (void*)NULL);
		// Pool<WebClient>.Release(m_WebClient);
		WebClient_tDAF482E6631A91D5FDF2138E6932A323B913F268* L_7 = __this->___m_WebClient_5;
		il2cpp_codegen_runtime_class_init_inline(Pool_1_tA9510604701B572F3E80604470D5D3E3BDCA2662_il2cpp_TypeInfo_var);
		Pool_1_Release_mB6D11B28938D592F0AD2069760C905553E72DBDC(L_7, Pool_1_Release_mB6D11B28938D592F0AD2069760C905553E72DBDC_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::DownloadProgressChanged(System.Object,System.Net.DownloadProgressChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_DownloadProgressChanged_m98E27C47150979B46D48AF66CAC227546C02623D (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, RuntimeObject* ___0_obj, DownloadProgressChangedEventArgs_t3E6278F2B7F8BB28A20B0FE7297BB4BA0DC71E7C* ___1_eventArgs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91B7E05ADFFCEE02E4AEECBDB4F352D4C643FA8A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Progress = eventArgs.ProgressPercentage;
		DownloadProgressChangedEventArgs_t3E6278F2B7F8BB28A20B0FE7297BB4BA0DC71E7C* L_0 = ___1_eventArgs;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ProgressChangedEventArgs_get_ProgressPercentage_m8D441B22C07732024891772E3C644F49BD3A977C_inline(L_0, NULL);
		__this->___m_Progress_3 = ((float)L_1);
		// Debug.Log("????????" + m_DownloadPath + m_Progress);
		String_t* L_2 = __this->___m_DownloadPath_2;
		float* L_3 = (float*)(&__this->___m_Progress_3);
		String_t* L_4;
		L_4 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_3, NULL);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral91B7E05ADFFCEE02E4AEECBDB4F352D4C643FA8A, L_2, L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::DownloadFileCompleted(System.Object,System.ComponentModel.AsyncCompletedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader_DownloadFileCompleted_mA264E8C5E62145DA32CCFB9821DB60BCF318D47F (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, RuntimeObject* ___0_obj, AsyncCompletedEventArgs_t801BFEA7C4C260D6666B4EB313E4CB49C4B151E9* ___1_eventArgs, const RuntimeMethod* method) 
{
	{
		// m_IsDone = true;
		__this->___m_IsDone_4 = (bool)1;
		// m_Current = obj;
		RuntimeObject* L_0 = ___0_obj;
		__this->___m_Current_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Current_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloader__ctor_m2EF677CC96B4738A2BF6C2626B13E3284FD2F6B6 (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean LGameFramework.GameBase.AssetFileDownloadQueue::get_Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetFileDownloadQueue_get_Pause_m5C0B6BA352EBCDA33BD5FD227674AECFCC5FFF7B (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	{
		// public bool Pause { get { return m_Pause; } }
		bool L_0 = __this->___m_Pause_0;
		return L_0;
	}
}
// System.Int32 LGameFramework.GameBase.AssetFileDownloadQueue::get_MaximumSimultaneouslyDownloading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AssetFileDownloadQueue_get_MaximumSimultaneouslyDownloading_mB90097A395E12052EE2B29EC786CE93943B6FC6D (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	{
		// public int MaximumSimultaneouslyDownloading { get { return m_MaximumSimultaneouslyDownloading; } }
		int32_t L_0 = __this->___m_MaximumSimultaneouslyDownloading_1;
		return L_0;
	}
}
// System.Collections.Generic.Queue`1<LGameFramework.GameBase.AssetFileDownloader> LGameFramework.GameBase.AssetFileDownloadQueue::get_DownloaderQueuePrepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* AssetFileDownloadQueue_get_DownloaderQueuePrepare_mC30F28A14B219E82DA2146AB03547EF846E2A4BD (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	{
		// public Queue<AssetFileDownloader> DownloaderQueuePrepare { get { return m_DownloaderQueuePrepare; } }
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_0 = __this->___m_DownloaderQueuePrepare_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<LGameFramework.GameBase.AssetFileDownloader> LGameFramework.GameBase.AssetFileDownloadQueue::get_DownloadingCurrent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* AssetFileDownloadQueue_get_DownloadingCurrent_m9F7AEE5D23B057F4F2467D7A0CC43A5DEEFFD6A9 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	{
		// public List<AssetFileDownloader> DownloadingCurrent { get { return m_DownloadingCurrent; } }
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_0 = __this->___m_DownloadingCurrent_3;
		return L_0;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloadQueue::SetPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloadQueue_SetPause_m844845F712E67DD3C42FA8587940A1C9939019E6 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// m_Pause = value;
		bool L_0 = ___0_value;
		__this->___m_Pause_0 = L_0;
		// }
		return;
	}
}
// LGameFramework.GameBase.AssetFileDownloader LGameFramework.GameBase.AssetFileDownloadQueue::Enqueue(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* AssetFileDownloadQueue_Enqueue_m8702B60BB1C75618CA8DC8A68ADB4AAC6DCBA237 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, String_t* ___0_downloadURL, String_t* ___1_downloadPath, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Get_mD5863AEF5D7AD90AA18F41EFDB27396903C1C7FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_t9AD217009A18A248F7DC13722CC402782AA00080_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* V_0 = NULL;
	{
		// AssetFileDownloader assetFileDownloader = Pool<AssetFileDownloader>.Get();
		il2cpp_codegen_runtime_class_init_inline(Pool_1_t9AD217009A18A248F7DC13722CC402782AA00080_il2cpp_TypeInfo_var);
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_0;
		L_0 = Pool_1_Get_mD5863AEF5D7AD90AA18F41EFDB27396903C1C7FF(Pool_1_Get_mD5863AEF5D7AD90AA18F41EFDB27396903C1C7FF_RuntimeMethod_var);
		V_0 = L_0;
		// assetFileDownloader.SetData(downloadURL, downloadPath);
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_1 = V_0;
		String_t* L_2 = ___0_downloadURL;
		String_t* L_3 = ___1_downloadPath;
		NullCheck(L_1);
		AssetFileDownloader_SetData_mF7ED7267E32693A4F42E273FF78CAA14AA770554(L_1, L_2, L_3, NULL);
		// return Enqueue(assetFileDownloader);
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_4 = V_0;
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_5;
		L_5 = AssetFileDownloadQueue_Enqueue_m4863B66AB9DC2148EA5310542FBBDB0A811B7174(__this, L_4, NULL);
		return L_5;
	}
}
// LGameFramework.GameBase.AssetFileDownloader LGameFramework.GameBase.AssetFileDownloadQueue::Enqueue(LGameFramework.GameBase.AssetFileDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* AssetFileDownloadQueue_Enqueue_m4863B66AB9DC2148EA5310542FBBDB0A811B7174 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* ___0_loader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m0DB17830938D31A733B94DF3A408CF9F4DE19836_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m551A616064149645939015212FD9E626D6252D6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DownloaderQueuePrepare ??= new Queue<AssetFileDownloader>();
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_0 = __this->___m_DownloaderQueuePrepare_2;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_1 = (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*)il2cpp_codegen_object_new(Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_m551A616064149645939015212FD9E626D6252D6D(L_1, Queue_1__ctor_m551A616064149645939015212FD9E626D6252D6D_RuntimeMethod_var);
		__this->___m_DownloaderQueuePrepare_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownloaderQueuePrepare_2), (void*)L_1);
	}

IL_0013:
	{
		// m_DownloaderQueuePrepare.Enqueue(loader);
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_2 = __this->___m_DownloaderQueuePrepare_2;
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_3 = ___0_loader;
		NullCheck(L_2);
		Queue_1_Enqueue_m0DB17830938D31A733B94DF3A408CF9F4DE19836(L_2, L_3, Queue_1_Enqueue_m0DB17830938D31A733B94DF3A408CF9F4DE19836_RuntimeMethod_var);
		// DownloadStart();
		AssetFileDownloadQueue_DownloadStart_m120D8E1B17754FCFDB2BA42F39C907B5731A0107(__this, NULL);
		// return loader;
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_4 = ___0_loader;
		return L_4;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloadQueue::DownloadStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloadQueue_DownloadStart_m120D8E1B17754FCFDB2BA42F39C907B5731A0107 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m38F2AB2D577F134DD7F3BA4CC898B0A221D90D50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m046C62C6C6CA1E0BDF69571CEA7CDB1432FD18F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB17812479988EED86D6D0FCF7424F41FEC175756_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m6278AEE0FFCE27C1C1608830E3BC8A7FBEC7E7CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m8C3D1628DED4ADD4EBF493862DD27085FB481ED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* V_0 = NULL;
	{
		// m_DownloadingCurrent ??= new List<AssetFileDownloader>();
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_0 = __this->___m_DownloadingCurrent_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_1 = (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*)il2cpp_codegen_object_new(List_1_tB17812479988EED86D6D0FCF7424F41FEC175756_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m046C62C6C6CA1E0BDF69571CEA7CDB1432FD18F4(L_1, List_1__ctor_m046C62C6C6CA1E0BDF69571CEA7CDB1432FD18F4_RuntimeMethod_var);
		__this->___m_DownloadingCurrent_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownloadingCurrent_3), (void*)L_1);
	}

IL_0013:
	{
		// if (m_DownloaderQueuePrepare == null || m_DownloaderQueuePrepare.Count == 0 || m_DownloadingCurrent.Count >= m_MaximumSimultaneouslyDownloading)
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_2 = __this->___m_DownloaderQueuePrepare_2;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_3 = __this->___m_DownloaderQueuePrepare_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Queue_1_get_Count_m8C3D1628DED4ADD4EBF493862DD27085FB481ED9_inline(L_3, Queue_1_get_Count_m8C3D1628DED4ADD4EBF493862DD27085FB481ED9_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_5 = __this->___m_DownloadingCurrent_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_inline(L_5, List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_RuntimeMethod_var);
		int32_t L_7 = __this->___m_MaximumSimultaneouslyDownloading_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		// return;
		return;
	}

IL_003c:
	{
		// AssetFileDownloader loader = m_DownloaderQueuePrepare.Dequeue();
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_8 = __this->___m_DownloaderQueuePrepare_2;
		NullCheck(L_8);
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_9;
		L_9 = Queue_1_Dequeue_m6278AEE0FFCE27C1C1608830E3BC8A7FBEC7E7CB(L_8, Queue_1_Dequeue_m6278AEE0FFCE27C1C1608830E3BC8A7FBEC7E7CB_RuntimeMethod_var);
		V_0 = L_9;
		// loader.Reset();
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_10 = V_0;
		NullCheck(L_10);
		AssetFileDownloader_Reset_m4C37408BB39995FF24FDDEF151269FF1A6580594(L_10, NULL);
		// m_DownloadingCurrent.Add(loader);
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_11 = __this->___m_DownloadingCurrent_3;
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_12 = V_0;
		NullCheck(L_11);
		List_1_Add_m38F2AB2D577F134DD7F3BA4CC898B0A221D90D50_inline(L_11, L_12, List_1_Add_m38F2AB2D577F134DD7F3BA4CC898B0A221D90D50_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloadQueue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloadQueue_Update_m71F7EE7B2727EE5B4FED33E5F642A141449F4352 (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m3CF76534C6E57AFB20C2BED895BE06A318A054D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9455A484939B86B3178E31F4BF7379E2A7C6AE4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_Release_mEF05A97533B7A662348DDAB737BE03705A8328CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_1_t9AD217009A18A248F7DC13722CC402782AA00080_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (m_Pause || m_DownloadingCurrent == null || m_DownloadingCurrent.Count == 0)
		bool L_0 = __this->___m_Pause_0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_1 = __this->___m_DownloadingCurrent_3;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_2 = __this->___m_DownloadingCurrent_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_inline(L_2, List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_001e;
		}
	}

IL_001d:
	{
		// return;
		return;
	}

IL_001e:
	{
		// AssetFileDownloader loader = null;
		V_0 = (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46*)NULL;
		// for (int i = m_DownloadingCurrent.Count - 1; i >= 0; i--)
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_4 = __this->___m_DownloadingCurrent_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_inline(L_4, List_1_get_Count_m504138B7699BE68921AD73E2E4FD012C8BA9F45E_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0068;
	}

IL_0030:
	{
		// loader = m_DownloadingCurrent[i];
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_6 = __this->___m_DownloadingCurrent_3;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_8;
		L_8 = List_1_get_Item_m9455A484939B86B3178E31F4BF7379E2A7C6AE4E(L_6, L_7, List_1_get_Item_m9455A484939B86B3178E31F4BF7379E2A7C6AE4E_RuntimeMethod_var);
		V_0 = L_8;
		// if (loader.IsDone)
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = AssetFileDownloader_get_IsDone_m524BD60A1137AF6808AEE564DE101BBA78463D64_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// m_DownloadingCurrent.Remove(loader);
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_11 = __this->___m_DownloadingCurrent_3;
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Remove_m3CF76534C6E57AFB20C2BED895BE06A318A054D7(L_11, L_12, List_1_Remove_m3CF76534C6E57AFB20C2BED895BE06A318A054D7_RuntimeMethod_var);
		// loader.Dispose();
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_14 = V_0;
		NullCheck(L_14);
		AssetFileDownloader_Dispose_m9A551E01C4CD109A2A464C5CC362CB5440478FE4(L_14, NULL);
		// Pool<AssetFileDownloader>.Release(loader);
		AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Pool_1_t9AD217009A18A248F7DC13722CC402782AA00080_il2cpp_TypeInfo_var);
		Pool_1_Release_mEF05A97533B7A662348DDAB737BE03705A8328CC(L_15, Pool_1_Release_mEF05A97533B7A662348DDAB737BE03705A8328CC_RuntimeMethod_var);
		// DownloadStart();
		AssetFileDownloadQueue_DownloadStart_m120D8E1B17754FCFDB2BA42F39C907B5731A0107(__this, NULL);
	}

IL_0064:
	{
		// for (int i = m_DownloadingCurrent.Count - 1; i >= 0; i--)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0068:
	{
		// for (int i = m_DownloadingCurrent.Count - 1; i >= 0; i--)
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloadQueue::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloadQueue_Dispose_mE650D1E28EF5F86E2D9345BC65AC9864132F9B8D (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m9EE0270ABC4329A04D017CD922C034F5767F444D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m135614EFF1418D27B8B6DF19305BCD1B908E8951_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_DownloadingCurrent != null)
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_0 = __this->___m_DownloadingCurrent_3;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_DownloadingCurrent.Clear();
		List_1_tB17812479988EED86D6D0FCF7424F41FEC175756* L_1 = __this->___m_DownloadingCurrent_3;
		NullCheck(L_1);
		List_1_Clear_m9EE0270ABC4329A04D017CD922C034F5767F444D_inline(L_1, List_1_Clear_m9EE0270ABC4329A04D017CD922C034F5767F444D_RuntimeMethod_var);
	}

IL_0013:
	{
		// m_DownloadingCurrent = null;
		__this->___m_DownloadingCurrent_3 = (List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownloadingCurrent_3), (void*)(List_1_tB17812479988EED86D6D0FCF7424F41FEC175756*)NULL);
		// if (m_DownloaderQueuePrepare != null)
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_2 = __this->___m_DownloaderQueuePrepare_2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// m_DownloaderQueuePrepare.Clear();
		Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020* L_3 = __this->___m_DownloaderQueuePrepare_2;
		NullCheck(L_3);
		Queue_1_Clear_m135614EFF1418D27B8B6DF19305BCD1B908E8951(L_3, Queue_1_Clear_m135614EFF1418D27B8B6DF19305BCD1B908E8951_RuntimeMethod_var);
	}

IL_002d:
	{
		// m_DownloaderQueuePrepare = null;
		__this->___m_DownloaderQueuePrepare_2 = (Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DownloaderQueuePrepare_2), (void*)(Queue_1_t9C0F14A00EBBB8D904EDB2CF581EEA06FDEB9020*)NULL);
		// }
		return;
	}
}
// System.Void LGameFramework.GameBase.AssetFileDownloadQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFileDownloadQueue__ctor_mBBF3B302DAE29BE07C43E4F5BCA4577ADE02E45D (AssetFileDownloadQueue_t68C3DB1E188D3C9B6CF8F194930B783CA3D71620* __this, const RuntimeMethod* method) 
{
	{
		// private readonly int m_MaximumSimultaneouslyDownloading = 10;
		__this->___m_MaximumSimultaneouslyDownloading_1 = ((int32_t)10);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LGameFramework.GameBase.GameLaunchSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameLaunchSetting__ctor_m7A196EC83A6904A2AE925E69CBEAF8583616BBC6 (GameLaunchSetting_t0C14BD4D7E9F2DB0F14EA949BA3AD06AC1E66206* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSetting_1__ctor_mF7855C860904CFFE25D690720DC4E14F5586BFAC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int frameRate = 60;
		__this->___frameRate_5 = ((int32_t)60);
		// public float gameSpeed = 1f;
		__this->___gameSpeed_6 = (1.0f);
		// public bool runInBackground = true;
		__this->___runInBackground_7 = (bool)1;
		// public bool neverSleep = true;
		__this->___neverSleep_8 = (bool)1;
		// public AssetLoadMode assetLoadMode = AssetLoadMode.AssetBundle;
		__this->___assetLoadMode_9 = 1;
		GameSetting_1__ctor_mF7855C860904CFFE25D690720DC4E14F5586BFAC(__this, GameSetting_1__ctor_mF7855C860904CFFE25D690720DC4E14F5586BFAC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LGameFramework.GameBase.GamePathSetting/FilePathStruct LGameFramework.GameBase.GamePathSetting::CurrentPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 GamePathSetting_CurrentPlatform_mF6B080B988CA3FCB199D700A9294971DE46EEE06 (GamePathSetting_t90635FDBB458D9776877AD87389060E85997AD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB9D2580913D91058D834DCB6CD9F3A929AC53F2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF58DF0F7AF0E0E631C059A8852156345FDD15908_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC9652874DD45711CBEBF106A437F9306EECFAF3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B V_0;
	memset((&V_0), 0, sizeof(V_0));
	FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 V_1;
	memset((&V_1), 0, sizeof(V_1));
	FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 V_2;
	memset((&V_2), 0, sizeof(V_2));
	FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// foreach (FilePathStruct filePathStruct in filePathStructs)
		List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* L_0 = __this->___filePathStructs_5;
		NullCheck(L_0);
		Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B L_1;
		L_1 = List_1_GetEnumerator_mC9652874DD45711CBEBF106A437F9306EECFAF3C(L_0, List_1_GetEnumerator_mC9652874DD45711CBEBF106A437F9306EECFAF3C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mB9D2580913D91058D834DCB6CD9F3A929AC53F2E((&V_0), Enumerator_Dispose_mB9D2580913D91058D834DCB6CD9F3A929AC53F2E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_000e_1:
			{
				// foreach (FilePathStruct filePathStruct in filePathStructs)
				FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 L_2;
				L_2 = Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_inline((&V_0), Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_RuntimeMethod_var);
				V_1 = L_2;
				// if (filePathStruct.platform == Application.platform)
				FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 L_3 = V_1;
				int32_t L_4 = L_3.___platform_0;
				int32_t L_5;
				L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
				if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
				{
					goto IL_0027_1;
				}
			}
			{
				// return filePathStruct;
				FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 L_6 = V_1;
				V_2 = L_6;
				goto IL_004a;
			}

IL_0027_1:
			{
				// foreach (FilePathStruct filePathStruct in filePathStructs)
				bool L_7;
				L_7 = Enumerator_MoveNext_mF58DF0F7AF0E0E631C059A8852156345FDD15908((&V_0), Enumerator_MoveNext_mF58DF0F7AF0E0E631C059A8852156345FDD15908_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// return default;
		il2cpp_codegen_initobj((&V_3), sizeof(FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35));
		FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 L_8 = V_3;
		return L_8;
	}

IL_004a:
	{
		// }
		FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 L_9 = V_2;
		return L_9;
	}
}
// System.Void LGameFramework.GameBase.GamePathSetting::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePathSetting__ctor_mE696ECE351D5D5948DC437AE9215FEC122093A18 (GamePathSetting_t90635FDBB458D9776877AD87389060E85997AD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSetting_1__ctor_m190D77FFB9818F1B3597F35175CE3FCA8DD60386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m484ACFB05503DE02969C4EF38A7D50A92770D926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<FilePathStruct> filePathStructs = new List<FilePathStruct>();
		List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6* L_0 = (List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6*)il2cpp_codegen_object_new(List_1_tDFF17E466A9A0D010CA6B6265EE5528055A64DC6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m484ACFB05503DE02969C4EF38A7D50A92770D926(L_0, List_1__ctor_m484ACFB05503DE02969C4EF38A7D50A92770D926_RuntimeMethod_var);
		__this->___filePathStructs_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___filePathStructs_5), (void*)L_0);
		GameSetting_1__ctor_m190D77FFB9818F1B3597F35175CE3FCA8DD60386(__this, GameSetting_1__ctor_m190D77FFB9818F1B3597F35175CE3FCA8DD60386_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif








// Conversion methods for marshalling of: LGameFramework.GameBase.GamePathSetting/FilePathStruct
IL2CPP_EXTERN_C void FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshal_pinvoke(const FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35& unmarshaled, FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_pinvoke& marshaled)
{
	Exception_t* ___hotUpdateDll_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'hotUpdateDll' of type 'FilePathStruct'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___hotUpdateDll_8Exception, NULL);
}
IL2CPP_EXTERN_C void FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshal_pinvoke_back(const FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_pinvoke& marshaled, FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35& unmarshaled)
{
	Exception_t* ___hotUpdateDll_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'hotUpdateDll' of type 'FilePathStruct'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___hotUpdateDll_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: LGameFramework.GameBase.GamePathSetting/FilePathStruct
IL2CPP_EXTERN_C void FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshal_pinvoke_cleanup(FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_pinvoke& marshaled)
{
}








// Conversion methods for marshalling of: LGameFramework.GameBase.GamePathSetting/FilePathStruct
IL2CPP_EXTERN_C void FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshal_com(const FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35& unmarshaled, FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_com& marshaled)
{
	Exception_t* ___hotUpdateDll_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'hotUpdateDll' of type 'FilePathStruct'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___hotUpdateDll_8Exception, NULL);
}
IL2CPP_EXTERN_C void FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshal_com_back(const FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_com& marshaled, FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35& unmarshaled)
{
	Exception_t* ___hotUpdateDll_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'hotUpdateDll' of type 'FilePathStruct'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___hotUpdateDll_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: LGameFramework.GameBase.GamePathSetting/FilePathStruct
IL2CPP_EXTERN_C void FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshal_com_cleanup(FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_pinvoke(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke& marshaled)
{
	marshaled.___pathPrefix_0 = unmarshaled.___pathPrefix_0;
	marshaled.___m_AssetPath_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_AssetPath_1);
}
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_pinvoke_back(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke& marshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled)
{
	int32_t unmarshaledpathPrefix_temp_0 = 0;
	unmarshaledpathPrefix_temp_0 = marshaled.___pathPrefix_0;
	unmarshaled.___pathPrefix_0 = unmarshaledpathPrefix_temp_0;
	unmarshaled.___m_AssetPath_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_AssetPath_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_AssetPath_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_AssetPath_1));
}
// Conversion method for clean up from marshalling of: LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_pinvoke_cleanup(SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_AssetPath_1);
	marshaled.___m_AssetPath_1 = NULL;
}
// Conversion methods for marshalling of: LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_com(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com& marshaled)
{
	marshaled.___pathPrefix_0 = unmarshaled.___pathPrefix_0;
	marshaled.___m_AssetPath_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_AssetPath_1);
}
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_com_back(const SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com& marshaled, SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337& unmarshaled)
{
	int32_t unmarshaledpathPrefix_temp_0 = 0;
	unmarshaledpathPrefix_temp_0 = marshaled.___pathPrefix_0;
	unmarshaled.___pathPrefix_0 = unmarshaledpathPrefix_temp_0;
	unmarshaled.___m_AssetPath_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_AssetPath_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_AssetPath_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_AssetPath_1));
}
// Conversion method for clean up from marshalling of: LGameFramework.GameBase.GamePathSetting/SpecialPathStruct
IL2CPP_EXTERN_C void SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshal_com_cleanup(SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_AssetPath_1);
	marshaled.___m_AssetPath_1 = NULL;
}
// System.String LGameFramework.GameBase.GamePathSetting/SpecialPathStruct::get_AssetPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpecialPathStruct_get_AssetPath_m3472DD23FCF8E176133DD18235710CDC8E1B6D26 (SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string prefix = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// switch (pathPrefix)
		int32_t L_0 = __this->___pathPrefix_0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_002f;
			}
			case 2:
			{
				goto IL_0037;
			}
			case 3:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_0027:
	{
		// prefix = Application.dataPath;
		String_t* L_2;
		L_2 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		V_0 = L_2;
		// break;
		goto IL_0045;
	}

IL_002f:
	{
		// prefix = Application.streamingAssetsPath;
		String_t* L_3;
		L_3 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		V_0 = L_3;
		// break;
		goto IL_0045;
	}

IL_0037:
	{
		// prefix = Application.persistentDataPath;
		String_t* L_4;
		L_4 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		V_0 = L_4;
		// break;
		goto IL_0045;
	}

IL_003f:
	{
		// prefix = Application.temporaryCachePath;
		String_t* L_5;
		L_5 = Application_get_temporaryCachePath_mE4483A939988E69570C19F8B31AB9FB17B0FD97D(NULL);
		V_0 = L_5;
	}

IL_0045:
	{
		// return prefix + m_AssetPath;
		String_t* L_6 = V_0;
		String_t* L_7 = __this->___m_AssetPath_1;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_6, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C  String_t* SpecialPathStruct_get_AssetPath_m3472DD23FCF8E176133DD18235710CDC8E1B6D26_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SpecialPathStruct_t3E7BC00BD8A6CE6FA1B40705ECB9CD11010BB337*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SpecialPathStruct_get_AssetPath_m3472DD23FCF8E176133DD18235710CDC8E1B6D26(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LGameFramework.GameBase.CSharpUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CSharpUtility__ctor_m8C198F750E36D7C2E578F2BDEDF116D6E7FADB9C (CSharpUtility_t764B39747639CB79F04111035B48EDC75FC19DF2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String LGameFramework.GameBase.JsonHelper::ToJason(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonHelper_ToJason_m8A11F271DAA08C470A32E171F42A18003D0FC285 (RuntimeObject* ___0_obj, bool ___1_encrypt, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// string json = JsonUtility.ToJson(obj);
		RuntimeObject* L_0 = ___0_obj;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_0, NULL);
		V_0 = L_1;
		// return encrypt ? AESEncryptor.Encrypt(json) : json;
		bool L_2 = ___1_encrypt;
		if (L_2)
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = AESEncryptor_Encrypt_mB490A464DAA93D38F0233F5B38BF72DCCEF281AC(L_4, NULL);
		return L_5;
	}
}
// System.Object LGameFramework.GameBase.JsonHelper::FromJson(System.String,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonHelper_FromJson_m484E59CB418FE97087636738DBA49D48638223C2 (String_t* ___0_json, Type_t* ___1_type, bool ___2_decrypt, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// string str = decrypt ? AESEncryptor.Decrypt(json) : json;
		bool L_0 = ___2_decrypt;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___0_json;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_0006:
	{
		String_t* L_2 = ___0_json;
		String_t* L_3;
		L_3 = AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_000c:
	{
		// return JsonUtility.FromJson(str, type);
		Type_t* L_4 = ___1_type;
		RuntimeObject* L_5;
		L_5 = JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A(G_B3_0, L_4, NULL);
		return L_5;
	}
}
// System.Void LGameFramework.GameBase.JsonHelper::FromJsonOverwrite(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonHelper_FromJsonOverwrite_mAE036116087EA08D5F93273F287F58F5F9FFB8F4 (String_t* ___0_json, RuntimeObject* ___1_objectToOverwrite, bool ___2_decrypt, const RuntimeMethod* method) 
{
	String_t* G_B3_0 = NULL;
	{
		// string str = decrypt ? AESEncryptor.Decrypt(json) : json;
		bool L_0 = ___2_decrypt;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___0_json;
		G_B3_0 = L_1;
		goto IL_000c;
	}

IL_0006:
	{
		String_t* L_2 = ___0_json;
		String_t* L_3;
		L_3 = AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00(L_2, NULL);
		G_B3_0 = L_3;
	}

IL_000c:
	{
		// JsonUtility.FromJsonOverwrite(str, objectToOverwrite);
		RuntimeObject* L_4 = ___1_objectToOverwrite;
		JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56(G_B3_0, L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String LGameFramework.GameBase.AESEncryptor::Encrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AESEncryptor_Encrypt_mB490A464DAA93D38F0233F5B38BF72DCCEF281AC (String_t* ___0_plainText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_4 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_5 = NULL;
	{
		// if (plainText == null || plainText.Length <= 0)
		String_t* L_0 = ___0_plainText;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_1 = ___0_plainText;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}

IL_000c:
	{
		// throw new ArgumentNullException("plainText");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8AED81C080801A1595ED9CCCE8D48700DB86F7A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AESEncryptor_Encrypt_mB490A464DAA93D38F0233F5B38BF72DCCEF281AC_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (Key == null || Key.Length <= 0)
		NullCheck(_stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705, NULL);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		// throw new ArgumentNullException("Key");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AESEncryptor_Encrypt_mB490A464DAA93D38F0233F5B38BF72DCCEF281AC_RuntimeMethod_var)));
	}

IL_002f:
	{
		// if (IV == null || IV.Length <= 0)
		NullCheck(_stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B, NULL);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		// throw new ArgumentNullException("IV");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_7 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB36231573E43663A3F7BA999008101ACA0AD2A8F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AESEncryptor_Encrypt_mB490A464DAA93D38F0233F5B38BF72DCCEF281AC_RuntimeMethod_var)));
	}

IL_0047:
	{
		// using (Aes aesAlg = Aes.Create())
		il2cpp_codegen_runtime_class_init_inline(Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_8;
		L_8 = Aes_Create_m8E61A098683C7BBB8ADF0D030CA032317AE6F890(NULL);
		V_1 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dd:
			{// begin finally (depth: 1)
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_9 = V_1;
					if (!L_9)
					{
						goto IL_00e6;
					}
				}
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_10 = V_1;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00e6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// aesAlg.Key = Encoding.ASCII.GetBytes(Key);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_11 = V_1;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_12;
				L_12 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				NullCheck(L_12);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
				L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705);
				NullCheck(L_11);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_11, L_13);
				// aesAlg.IV = Encoding.ASCII.GetBytes(IV);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_14 = V_1;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
				L_15 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				NullCheck(L_15);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
				L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_15, _stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B);
				NullCheck(L_14);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_14, L_16);
				// ICryptoTransform encryptor = aesAlg.CreateEncryptor(aesAlg.Key, aesAlg.IV);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_17 = V_1;
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_18 = V_1;
				NullCheck(L_18);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_18);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_20 = V_1;
				NullCheck(L_20);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21;
				L_21 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_20);
				NullCheck(L_17);
				RuntimeObject* L_22;
				L_22 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(21 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_17, L_19, L_21);
				V_2 = L_22;
				// using (MemoryStream msEncrypt = new MemoryStream())
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_23);
				MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_23, NULL);
				V_3 = L_23;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d3_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_24 = V_3;
							if (!L_24)
							{
								goto IL_00dc_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = V_3;
							NullCheck(L_25);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
						}

IL_00dc_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (CryptoStream csEncrypt = new CryptoStream(msEncrypt, encryptor, CryptoStreamMode.Write))
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_3;
						RuntimeObject* L_27 = V_2;
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_28 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_28);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_28, L_26, L_27, 1, NULL);
						V_4 = L_28;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00c7_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_29 = V_4;
									if (!L_29)
									{
										goto IL_00d2_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_30 = V_4;
									NullCheck(L_30);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
								}

IL_00d2_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (StreamWriter swEncrypt = new StreamWriter(csEncrypt, Encoding.UTF8))
								CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_31 = V_4;
								Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_32;
								L_32 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_33 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
								NullCheck(L_33);
								StreamWriter__ctor_m1E6CB00AA57A3E35968208F705E444511AD9B5DC(L_33, L_31, L_32, NULL);
								V_5 = L_33;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_00b2_3:
									{// begin finally (depth: 4)
										{
											StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_34 = V_5;
											if (!L_34)
											{
												goto IL_00bd_3;
											}
										}
										{
											StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_35 = V_5;
											NullCheck(L_35);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_35);
										}

IL_00bd_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									// swEncrypt.Write(plainText);
									StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_36 = V_5;
									String_t* L_37 = ___0_plainText;
									NullCheck(L_36);
									VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void System.IO.TextWriter::Write(System.String) */, L_36, L_37);
									// }
									goto IL_00be_3;
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}

IL_00be_3:
							{
								// encrypted = msEncrypt.ToArray();
								MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_38 = V_3;
								NullCheck(L_38);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
								L_39 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(41 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_38);
								V_0 = L_39;
								// }
								goto IL_00e7;
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e7:
	{
		// return Convert.ToBase64String(encrypted);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_41;
		L_41 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_40, NULL);
		return L_41;
	}
}
// System.String LGameFramework.GameBase.AESEncryptor::Decrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00 (String_t* ___0_cipherStr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_4 = NULL;
	CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* V_5 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_6 = NULL;
	{
		// var cipherText = Convert.FromBase64String(cipherStr);
		String_t* L_0 = ___0_cipherStr;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_0, NULL);
		V_0 = L_1;
		// if (cipherText == null || cipherText.Length <= 0)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		if ((((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0019;
		}
	}

IL_000e:
	{
		// throw new ArgumentNullException("cipherText");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9C40A2866193AC747B18FA56240D5C306619E3AB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00_RuntimeMethod_var)));
	}

IL_0019:
	{
		// if (Key == null || Key.Length <= 0)
		NullCheck(_stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705, NULL);
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		// throw new ArgumentNullException("Key");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00_RuntimeMethod_var)));
	}

IL_0031:
	{
		// if (IV == null || IV.Length <= 0)
		NullCheck(_stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B, NULL);
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		// throw new ArgumentNullException("IV");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_8 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB36231573E43663A3F7BA999008101ACA0AD2A8F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AESEncryptor_Decrypt_mCD39D7B39C885C81AA3EFA0AFDC39CF775129D00_RuntimeMethod_var)));
	}

IL_0049:
	{
		// string plaintext = null;
		V_1 = (String_t*)NULL;
		// using (Aes aesAlg = Aes.Create())
		il2cpp_codegen_runtime_class_init_inline(Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047_il2cpp_TypeInfo_var);
		Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_9;
		L_9 = Aes_Create_m8E61A098683C7BBB8ADF0D030CA032317AE6F890(NULL);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00dd:
			{// begin finally (depth: 1)
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_10 = V_2;
					if (!L_10)
					{
						goto IL_00e6;
					}
				}
				{
					Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_11 = V_2;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_00e6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// aesAlg.Key = Encoding.ASCII.GetBytes(Key);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_12 = V_2;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_13;
				L_13 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				NullCheck(L_13);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
				L_14 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_13, _stringLiteral9066636DBF5AF247660361EB8AEC4D9981727705);
				NullCheck(L_12);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_12, L_14);
				// aesAlg.IV = Encoding.ASCII.GetBytes(IV);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_15 = V_2;
				Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_16;
				L_16 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
				NullCheck(L_16);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
				L_17 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, _stringLiteral42999765E8F9A12D7E91F60FFDA59B42745D539B);
				NullCheck(L_15);
				VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_15, L_17);
				// ICryptoTransform decryptor = aesAlg.CreateDecryptor(aesAlg.Key, aesAlg.IV);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_18 = V_2;
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_19 = V_2;
				NullCheck(L_19);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
				L_20 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_19);
				Aes_tC72E711D7751C8AEAF59C51CA0E61A3857068047* L_21 = V_2;
				NullCheck(L_21);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
				L_22 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_21);
				NullCheck(L_18);
				RuntimeObject* L_23;
				L_23 = VirtualFuncInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(23 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_18, L_20, L_22);
				V_3 = L_23;
				// using (MemoryStream msDecrypt = new MemoryStream(cipherText))
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_25 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_25);
				MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_25, L_24, NULL);
				V_4 = L_25;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00d1_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_26 = V_4;
							if (!L_26)
							{
								goto IL_00dc_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_27 = V_4;
							NullCheck(L_27);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
						}

IL_00dc_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						// using (CryptoStream csDecrypt = new CryptoStream(msDecrypt, decryptor, CryptoStreamMode.Read))
						MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_28 = V_4;
						RuntimeObject* L_29 = V_3;
						CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_30 = (CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65*)il2cpp_codegen_object_new(CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65_il2cpp_TypeInfo_var);
						NullCheck(L_30);
						CryptoStream__ctor_mFCB7E1F2B96287E968978AC12DC1B1F4E44851B6(L_30, L_28, L_29, 0, NULL);
						V_5 = L_30;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_00c5_2:
							{// begin finally (depth: 3)
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_31 = V_5;
									if (!L_31)
									{
										goto IL_00d0_2;
									}
								}
								{
									CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_32 = V_5;
									NullCheck(L_32);
									InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_32);
								}

IL_00d0_2:
								{
									return;
								}
							}// end finally (depth: 3)
						});
						try
						{// begin try (depth: 3)
							{
								// using (StreamReader srDecrypt = new StreamReader(csDecrypt, Encoding.UTF8))
								CryptoStream_t8258B5E90AA951C21358547EA7C7BEB444441F65* L_33 = V_5;
								Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_34;
								L_34 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_35 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
								NullCheck(L_35);
								StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1(L_35, L_33, L_34, NULL);
								V_6 = L_35;
							}
							{
								auto __finallyBlock = il2cpp::utils::Finally([&]
								{

FINALLY_00b9_3:
									{// begin finally (depth: 4)
										{
											StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_36 = V_6;
											if (!L_36)
											{
												goto IL_00c4_3;
											}
										}
										{
											StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_37 = V_6;
											NullCheck(L_37);
											InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_37);
										}

IL_00c4_3:
										{
											return;
										}
									}// end finally (depth: 4)
								});
								try
								{// begin try (depth: 4)
									// plaintext = srDecrypt.ReadToEnd();
									StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_38 = V_6;
									NullCheck(L_38);
									String_t* L_39;
									L_39 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_38);
									V_1 = L_39;
									// }
									goto IL_00e7;
								}// end try (depth: 4)
								catch(Il2CppExceptionWrapper& e)
								{
									__finallyBlock.StoreException(e.ex);
								}
							}
						}// end try (depth: 3)
						catch(Il2CppExceptionWrapper& e)
						{
							__finallyBlock.StoreException(e.ex);
						}
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e7:
	{
		// return plaintext;
		String_t* L_40 = V_1;
		return L_40;
	}
}
// System.Void LGameFramework.GameBase.AESEncryptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AESEncryptor__ctor_m6E77D8950DD574A9FAEDCBEC22DF708DBAA9FE8F (AESEncryptor_t193540838F209E5288EA53B3817712E1D8C98617* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.Type,LGameFramework.GameBase.Pool.Pool/IPool> LGameFramework.GameBase.Pool.Pool::get_SubPools()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9* Pool_get_SubPools_m51617CCA4F65A4EAC8D37575BD58C2A7761646EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<Type, IPool> SubPools { get { return s_SubPools; } }
		il2cpp_codegen_runtime_class_init_inline(Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_il2cpp_TypeInfo_var);
		Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9* L_0 = ((Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_StaticFields*)il2cpp_codegen_static_fields_for(Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_il2cpp_TypeInfo_var))->___s_SubPools_0;
		return L_0;
	}
}
// System.Void LGameFramework.GameBase.Pool.Pool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool__ctor_m6CCB1996462764D319A6D73FD76529F536A8972D (Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void LGameFramework.GameBase.Pool.Pool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool__cctor_mD5E744273B11BCC4BD2B086C5547987DF1A019D9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m8B57B660EEE2B13C34E3FF06CB4CC1179F2CA27A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<Type, IPool> s_SubPools = new Dictionary<Type, IPool>();
		Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9* L_0 = (Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9*)il2cpp_codegen_object_new(Dictionary_2_tAA8595B0BC0F05F4F6A9FB1DE8182DE3CF1A9CF9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m8B57B660EEE2B13C34E3FF06CB4CC1179F2CA27A(L_0, Dictionary_2__ctor_m8B57B660EEE2B13C34E3FF06CB4CC1179F2CA27A_RuntimeMethod_var);
		((Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_StaticFields*)il2cpp_codegen_static_fields_for(Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_il2cpp_TypeInfo_var))->___s_SubPools_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_StaticFields*)il2cpp_codegen_static_fields_for(Pool_t2CEF24A726DF10C2D8AC3AF0D263B37BEDEE27FD_il2cpp_TypeInfo_var))->___s_SubPools_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_Float_set_Condition_m51EFDF9066FF55D22AAE29E9FF543D55BF22BF73_inline (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public FloatCondition Condition { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CConditionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_Float_get_Condition_mFAB40C9B37534CA4C7E217C405072AA65079078F_inline (FSM_Condition_Float_t123ADFA4230DA6BFBA12E02ED7F3A58D3F0AA03D* __this, const RuntimeMethod* method) 
{
	{
		// public FloatCondition Condition { get; set; }
		int32_t L_0 = __this->___U3CConditionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_Int_set_Condition_mB24F2799B37B0B8C63B2CDA746B27DA870E60791_inline (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public IntCondition Condition { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CConditionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_Int_get_Condition_m06D2B634884C4545337B660A55CB2AA9CC29124F_inline (FSM_Condition_Int_t4D40E4127E53AEE1A551EC3152A55F85CE638B55* __this, const RuntimeMethod* method) 
{
	{
		// public IntCondition Condition { get; set; }
		int32_t L_0 = __this->___U3CConditionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_Booler_set_Condition_m9C49DCC965545C599BFAE5C2F7D9BA185CE16F92_inline (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public BoolerCondition Condition { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CConditionU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_Booler_get_Condition_m2715682184E4D422F3C289ADAC3BDC3E44E999A0_inline (FSM_Condition_Booler_t329E11FFC8B3EB96516F56A7253F9403078122C6* __this, const RuntimeMethod* method) 
{
	{
		// public BoolerCondition Condition { get; set; }
		int32_t L_0 = __this->___U3CConditionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProgressChangedEventArgs_get_ProgressPercentage_m8D441B22C07732024891772E3C644F49BD3A977C_inline (ProgressChangedEventArgs_t5356EEBDD54D5434867C79874031F1730FE63D16* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___progressPercentage_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AssetFileDownloader_get_IsDone_m524BD60A1137AF6808AEE564DE101BBA78463D64_inline (AssetFileDownloader_tBBB0747F4710B98462AE7A01DC95D371BE62DC46* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get { return m_IsDone; } }
		bool L_0 = __this->___m_IsDone_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FSM_Condition_1_get_CurData_m9ABCBB87F6A6493FFA4FC43F76B7F26E6E820F43_gshared_inline (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method) 
{
	{
		// public T CurData { get; set; }
		float L_0 = __this->___U3CCurDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float FSM_Condition_1_get_Target_m3E5640CD9F454A8C695A6F24B34E4259B64F893A_gshared_inline (FSM_Condition_1_t69CFA298493D02AEE755C42705AB30F1D6DB7263* __this, const RuntimeMethod* method) 
{
	{
		// public T Target { get; set; }
		float L_0 = __this->___U3CTargetU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_1_get_CurData_mA5B088C025D0459932362ABB4975CB1155110F5D_gshared_inline (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method) 
{
	{
		// public T CurData { get; set; }
		int32_t L_0 = __this->___U3CCurDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FSM_Condition_1_get_Target_m9CAB75D678A55052112FA56B3D6DAAA19B82C26F_gshared_inline (FSM_Condition_1_tB3211E2B89600EDA3080DCF1905120BBF5623E22* __this, const RuntimeMethod* method) 
{
	{
		// public T Target { get; set; }
		int32_t L_0 = __this->___U3CTargetU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FSM_Condition_1_set_DataName_mCEE5A51D7F48C7B4AB1AB982387A67410ADEC1FE_gshared_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string DataName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CDataNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FSM_Condition_1_get_CurData_mA8A9397D708DBB5278B6DCB41D569D95FFF3B593_gshared_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method) 
{
	{
		// public T CurData { get; set; }
		bool L_0 = __this->___U3CCurDataU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FSM_Condition_1_get_DataName_m59604C74F80A603713D70760ED2513FBD1C106E3_gshared_inline (FSM_Condition_1_t097DC45027DED54D101FC9632B600ED8EC97B450* __this, const RuntimeMethod* method) 
{
	{
		// public string DataName { get; set; }
		String_t* L_0 = __this->___U3CDataNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 Enumerator_get_Current_m018580165B0EE9ACA3DAB66EF1C2191446B2BD08_gshared_inline (Enumerator_tCBADEB21E3F5859593E518D9A35E8A376C7B2B0B* __this, const RuntimeMethod* method) 
{
	{
		FilePathStruct_t65A14226D56E2BE3BD39DBAD23F4F2DF35CBCD35 L_0 = __this->____current_3;
		return L_0;
	}
}
