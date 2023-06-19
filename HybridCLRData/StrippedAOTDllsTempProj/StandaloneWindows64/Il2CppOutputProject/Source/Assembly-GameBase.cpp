#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// AssetFile
struct AssetFile_t01FC6EC1F95844E4C5A9981989CECF5DE91B05F0;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



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

// AssetFile
struct AssetFile_t01FC6EC1F95844E4C5A9981989CECF5DE91B05F0  : public RuntimeObject
{
	// System.String AssetFile::path
	String_t* ___path_0;
	// System.String AssetFile::md5
	String_t* ___md5_1;
	// System.Int32 AssetFile::size
	int32_t ___size_2;
	// AssetFile/AssetFileFlag AssetFile::flag
	int32_t ___flag_3;
};

// LJsonUtility
struct LJsonUtility_t5D300386F8E0FC17ABABFED257A98ECF1EC28DB7  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// <Module>

// <Module>

// AssetFile

// AssetFile

// LJsonUtility

// LJsonUtility

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Void

// System.Void

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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A (String_t* ___0_json, Type_t* ___1_type, const RuntimeMethod* method) ;
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56 (String_t* ___0_json, RuntimeObject* ___1_objectToOverwrite, const RuntimeMethod* method) ;
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
// System.Void AssetFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetFile__ctor_m8BDCF6B261B0B6C46648A4AA82C9AE2FA882B2B0 (AssetFile_t01FC6EC1F95844E4C5A9981989CECF5DE91B05F0* __this, const RuntimeMethod* method) 
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
// System.String LJsonUtility::ToJason(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LJsonUtility_ToJason_mE87C5DB102A88916529F6CB1EFC0620E42E3586A (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		// return JsonUtility.ToJson(obj);
		RuntimeObject* L_0 = ___0_obj;
		String_t* L_1;
		L_1 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_0, NULL);
		return L_1;
	}
}
// System.Object LJsonUtility::FromJson(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LJsonUtility_FromJson_m6F20E51A99F6BDE972FA18F3196994E7AB7F1D82 (String_t* ___0_json, Type_t* ___1_type, const RuntimeMethod* method) 
{
	{
		// return JsonUtility.FromJson(json, type);
		String_t* L_0 = ___0_json;
		Type_t* L_1 = ___1_type;
		RuntimeObject* L_2;
		L_2 = JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void LJsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LJsonUtility_FromJsonOverwrite_mC10822A8D458883024FC5DDA9ADC456C3187730D (String_t* ___0_json, RuntimeObject* ___1_objectToOverwrite, const RuntimeMethod* method) 
{
	{
		// JsonUtility.FromJsonOverwrite(json, objectToOverwrite);
		String_t* L_0 = ___0_json;
		RuntimeObject* L_1 = ___1_objectToOverwrite;
		JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56(L_0, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
