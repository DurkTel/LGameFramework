#include <codegen/il2cpp-codegen-metadata.h>
#include "vm/ClassInlines.h"
#include "vm/Object.h"
#include "vm/Class.h"

#include "../metadata/MetadataModule.h"
#include "../metadata/MetadataUtil.h"

#include "../interpreter/MethodBridge.h"
#include "../interpreter/Interpreter.h"
#include "../interpreter/MemoryUtil.h"
#include "../interpreter/InstrinctDef.h"

using namespace hybridclr::interpreter;

#if HYBRIDCLR_ABI_UNIVERSAL_32
//!!!{{CODE

// System.Numerics.Vector`1<T> System.Numerics.Vector`1::get_Zero()
static void __M2N_C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Decimal System.Math::Abs(System.Decimal)
static void __M2N_C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Math::Max(System.Decimal,System.Decimal)
static void __M2N_C16C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Math::Clamp(System.Decimal,System.Decimal,System.Decimal)
static void __M2N_C16C16C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Decimal System.Math::Round(System.Decimal,System.Int32)
static void __M2N_C16C16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Math::Round(System.Decimal,System.Int32,System.MidpointRounding)
static void __M2N_C16C16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.DateTimeOffset System.DateTimeOffset::op_Implicit(System.DateTime)
static void __M2N_C16C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.SByte)
static void __M2N_C16i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int16)
static void __M2N_C16i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int32)
static void __M2N_C16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Nullable`1::GetValueOrDefault(T)
static void __M2N_C16i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Object,System.IFormatProvider)
static void __M2N_C16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_C16i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Int64)
static void __M2N_C16i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Single)
static void __M2N_C16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Double)
static void __M2N_C16r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.Byte)
static void __M2N_C16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt16)
static void __M2N_C16u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt32)
static void __M2N_C16u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Decimal System.Convert::ToDecimal(System.UInt64)
static void __M2N_C16u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<16> (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
static void __M2N_C24C8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<24> (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign8<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFloatingDateRule(System.DateTime,System.Int32,System.Int32,System.DayOfWeek)
static void __M2N_C24C8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<24> (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSizeAlign8<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/AdjustmentRule::get_DaylightTransitionStart()
static void __M2N_C24i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<24> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.DisplayInfo UnityEngine.Screen::get_mainWindowDisplayInfo()
static void __M2N_C48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<48> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign8<48>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.DateTime System.DateTime::get_Now()
static void __M2N_C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.TimeSpan System.TimeSpan::op_UnaryNegation(System.TimeSpan)
static void __M2N_C8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
static void __M2N_C8C8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
static void __M2N_C8C8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
static void __M2N_C8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime)
static void __M2N_C8i4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), method);
}


// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_C8i4C8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
static void __M2N_C8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_C8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.DateTime System.DateTime::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
static void __M2N_C8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_C8i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.DateTime System.DateTime::AddTicks(System.Int64)
static void __M2N_C8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::AddDays(System.Double)
static void __M2N_C8i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.DateTime System.DateTime::FromBinary(System.Int64)
static void __M2N_C8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.TimeSpan System.TimeSpan::FromDays(System.Double)
static void __M2N_C8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSizeAlign8<8> (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(ValueTypeSizeAlign8<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Numerics.ConstantHelper::GetSByteWithAllBitsSet()
static void __M2N_i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.SByte System.Convert::ToSByte(System.Decimal)
static void __M2N_i1C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Math::Abs(System.SByte)
static void __M2N_i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Math::Max(System.SByte,System.SByte)
static void __M2N_i1i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int8_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.SByte System.Math::Clamp(System.SByte,System.SByte,System.SByte)
static void __M2N_i1i1i1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int8_t __arg0, int8_t __arg1, int8_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), *(int8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.SByte System.Convert::ToSByte(System.Int16)
static void __M2N_i1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Object)
static void __M2N_i1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Object,System.IFormatProvider)
static void __M2N_i1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.SByte System.SByte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.SByte System.Convert::ToSByte(System.Int64)
static void __M2N_i1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Single)
static void __M2N_i1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Double)
static void __M2N_i1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Boolean)
static void __M2N_i1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.Char)
static void __M2N_i1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.UInt32)
static void __M2N_i1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.SByte System.Convert::ToSByte(System.UInt64)
static void __M2N_i1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Numerics.ConstantHelper::GetInt16WithAllBitsSet()
static void __M2N_i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Int16 System.Convert::ToInt16(System.Decimal)
static void __M2N_i2C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.SByte)
static void __M2N_i2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Math::Abs(System.Int16)
static void __M2N_i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Math::Max(System.Int16,System.Int16)
static void __M2N_i2i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int16_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.Math::Clamp(System.Int16,System.Int16,System.Int16)
static void __M2N_i2i2i2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int16_t __arg0, int16_t __arg1, int16_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int16 System.Convert::ToInt16(System.Object)
static void __M2N_i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Nullable`1::GetValueOrDefault(T)
static void __M2N_i2i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.Convert::ToInt16(System.Object,System.IFormatProvider)
static void __M2N_i2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int16 System.Int16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i2i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int16 System.Convert::ToInt16(System.Int64)
static void __M2N_i2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Single)
static void __M2N_i2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Double)
static void __M2N_i2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Boolean)
static void __M2N_i2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.Char)
static void __M2N_i2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.UInt32)
static void __M2N_i2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int16 System.Convert::ToInt16(System.UInt64)
static void __M2N_i2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// Mono.Security.Cryptography.MD2 Mono.Security.Cryptography.MD2::Create()
static void __M2N_i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Int32 System.Convert::ToInt32(System.Decimal)
static void __M2N_i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatDecimal(System.Decimal,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo)
static void __M2N_i4C16S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String System.Security.Cryptography.X509Certificates.X509Certificate::FormatDate(System.DateTime)
static void __M2N_i4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.DateTime::Compare(System.DateTime,System.DateTime)
static void __M2N_i4C8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Math::Sign(System.SByte)
static void __M2N_i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Convert::ToInt32(System.Int16)
static void __M2N_i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// Interop/NtDll/FILE_FULL_DIR_INFORMATION* Interop/NtDll/FILE_FULL_DIR_INFORMATION::GetNextInfo(Interop/NtDll/FILE_FULL_DIR_INFORMATION*)
static void __M2N_i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
static void __M2N_i4i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,UnityEngine.Hash128,System.UInt32)
static void __M2N_i4i4C16u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, uint32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::GetAssetBundle(System.String,UnityEngine.CachedAssetBundle,System.UInt32)
static void __M2N_i4i4C24u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<24> __arg1, uint32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.DateTime::CompareTo(System.DateTime)
static void __M2N_i4i4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
static void __M2N_i4i4C8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_i4i4C8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Threading.WaitHandle::WaitAny(System.Threading.WaitHandle[],System.TimeSpan,System.Boolean)
static void __M2N_i4i4C8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.SByte::CompareTo(System.SByte)
static void __M2N_i4i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Int16::CompareTo(System.Int16)
static void __M2N_i4i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String Locale::GetText(System.String,System.Object[])
static void __M2N_i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Decimal)
static void __M2N_i4i4i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.SByte)
static void __M2N_i4i4i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Int16)
static void __M2N_i4i4i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int16_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Mono.CertificateImportFlags)
static void __M2N_i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Threading.RegisteredWaitHandle System.Threading.ThreadPool::RegisterWaitForSingleObject(System.Threading.WaitHandle,System.Threading.WaitOrTimerCallback,System.Object,System.TimeSpan,System.Boolean)
static void __M2N_i4i4i4i4C8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign8<8> __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
static void __M2N_i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,Mono.CertificateImportFlags)
static void __M2N_i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CultureInfo,System.Globalization.CompareOptions)
static void __M2N_i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Int32,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
static void __M2N_i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
static void __M2N_i4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Text.RegularExpressions.Match System.Text.RegularExpressions.RegexRunner::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.TimeSpan)
static void __M2N_i4i4i4i4i4i4i4i4u1C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, ValueTypeSizeAlign8<8> __arg8, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[8]), method);
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
static void __M2N_i4i4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 Interop/NtDll::NtQueryDirectoryFile(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,Interop/NtDll/IO_STATUS_BLOCK&,System.IntPtr,System.UInt32,Interop/NtDll/FILE_INFORMATION_CLASS,Interop/BOOLEAN,Interop/UNICODE_STRING*,Interop/BOOLEAN)
static void __M2N_i4i4i4i4i4i4i4u4u4u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint32_t __arg6, uint32_t __arg7, uint8_t __arg8, int32_t __arg9, uint8_t __arg10, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint32_t*)(localVarBase+argVarIndexs[6]), *(uint32_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean)
static void __M2N_i4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_i4i4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4S108i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<108> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<12> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<16> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Threading.Tasks.Task`1<System.Int32> System.Security.Cryptography.CryptoStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
static void __M2N_i4i4i4i4i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<4> __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<4> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<8> __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
static void __M2N_i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
static void __M2N_i4i4i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Int32 System.Collections.Generic.ArraySortHelper`1::BinarySearch(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4i4u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4S108i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<108> __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<12> __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<16> __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Threading.Tasks.Task System.IO.MemoryStream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken)
static void __M2N_i4i4i4i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<4> __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<4> __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory`1::StartNew(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
static void __M2N_i4i4i4i4S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<4> __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static void __M2N_i4i4i4i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadSceneAsyncByNameOrIndex(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
static void __M2N_i4i4i4i4S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Type System.Type::GetType(System.String,System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean)
static void __M2N_i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String System.String::Replace(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::UnloadSceneAsyncByNameOrIndex(System.String,System.Int32,System.Boolean,UnityEngine.SceneManagement.UnloadSceneOptions,System.Boolean&)
static void __M2N_i4i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Runtime.Remoting.ObjectHandle System.Activator::CreateInstance(System.AppDomain,System.String,System.String,System.Boolean,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
static void __M2N_i4i4i4i4u1i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Runtime.Remoting.ObjectHandle System.Activator::CreateInstance(System.AppDomain,System.String,System.String,System.Boolean,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[],System.Security.Policy.Evidence)
static void __M2N_i4i4i4i4u1i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Type System.Type::GetType(System.String,System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly>,System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type>,System.Boolean,System.Boolean)
static void __M2N_i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 System.Array::BinarySearch<T>(T[],System.Int32,System.Int32,T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4i4i4u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Int64)
static void __M2N_i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Single)
static void __M2N_i4i4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.Double)
static void __M2N_i4i4i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, double __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// TResult System.Func`5::Invoke(T1,T2,T3,T4)
static void __M2N_i4i4i4S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
static void __M2N_i4i4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.AssetBundleRecompressOperation UnityEngine.AssetBundle::RecompressAssetBundleAsync(System.String,System.String,UnityEngine.BuildCompression,System.UInt32,UnityEngine.ThreadPriority)
static void __M2N_i4i4i4S16u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, uint32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.SemaphoreSlim::WaitAsync(System.Int32,System.Threading.CancellationToken)
static void __M2N_i4i4i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<TResult>(System.Func`1<TResult>,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
static void __M2N_i4i4i4S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.ReadOnlySpan`1<System.Char>)
static void __M2N_i4i4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static void __M2N_i4i4i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
static void __M2N_i4i4i4S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
static void __M2N_i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPIInternal::UnloadSceneNameIndexInternal(System.String,System.Int32,System.Boolean,UnityEngine.SceneManagement.UnloadSceneOptions,System.Boolean&)
static void __M2N_i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Runtime.Remoting.ObjectHandle System.Activator::CreateInstance(System.String,System.String,System.Boolean,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
static void __M2N_i4i4i4u1i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Runtime.Remoting.ObjectHandle System.Activator::CreateInstance(System.String,System.String,System.Boolean,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[],System.Security.Policy.Evidence)
static void __M2N_i4i4i4u1i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
static void __M2N_i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_i4i4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.TouchScreenKeyboard UnityEngine.TouchScreenKeyboard::Open(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.Int32)
static void __M2N_i4i4i4u1u1u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.String System.String::PadLeft(System.Int32,System.Char)
static void __M2N_i4i4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.Char,System.Globalization.CompareOptions)
static void __M2N_i4i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.Char,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_i4i4i4u2i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.UInt32)
static void __M2N_i4i4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Marvin::ComputeHash32(System.Byte&,System.Int32,System.UInt64)
static void __M2N_i4i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Int64::CompareTo(System.Int64)
static void __M2N_i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Net.Sockets.Socket::IOControl(System.Net.Sockets.IOControlCode,System.Byte[],System.Byte[])
static void __M2N_i4i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Object System.Array::GetValue(System.Int64,System.Int64)
static void __M2N_i4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
static void __M2N_i4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Single::CompareTo(System.Single)
static void __M2N_i4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static void __M2N_i4i4r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, float __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Double::CompareTo(System.Double)
static void __M2N_i4i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
static void __M2N_i4i4S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T)
static void __M2N_i4i4S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4S108i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<108> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i4S108i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<108> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static void __M2N_i4i4S108S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<108> __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ValueTuple`3::CompareTo(System.ValueTuple`3<T1,T2,T3>)
static void __M2N_i4i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.String::Create<TState>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
static void __M2N_i4i4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i4S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static void __M2N_i4i4S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
static void __M2N_i4i4S12S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
static void __M2N_i4i4S12S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Threading.Tasks.Task System.IO.StreamWriter::WriteAsync(System.ReadOnlyMemory`1<System.Char>,System.Threading.CancellationToken)
static void __M2N_i4i4S12S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Guid::CompareTo(System.Guid)
static void __M2N_i4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T,System.Int32,System.Int32)
static void __M2N_i4i4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
static void __M2N_i4i4S16i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static void __M2N_i4i4S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.UInt32,UnityEngine.SpriteMeshType)
static void __M2N_i4i4S16S8r4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4)
static void __M2N_i4i4S16S8r4u4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, int32_t __arg5, ValueTypeSize<16> __arg6, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), method);
}


// UnityEngine.Sprite UnityEngine.Sprite::Create(UnityEngine.Texture2D,UnityEngine.Rect,UnityEngine.Vector2,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4,System.Boolean)
static void __M2N_i4i4S16S8r4u4i4S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<8> __arg2, float __arg3, uint32_t __arg4, int32_t __arg5, ValueTypeSize<16> __arg6, uint8_t __arg7, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4S1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ValueTuple`5::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static void __M2N_i4i4S20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.String::Create<TState>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
static void __M2N_i4i4S20i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<20> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static void __M2N_i4i4S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_i4i4S28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.String::Create<TState>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
static void __M2N_i4i4S28i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<28> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_i4i4S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_i4i4S36(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<36> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<36>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.String::Create<TState>(System.Int32,TState,System.Buffers.SpanAction`2<System.Char,TState>)
static void __M2N_i4i4S36i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<36> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<36>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ValueTuple`1::CompareTo(System.ValueTuple`1<T1>)
static void __M2N_i4i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.List`1::BinarySearch(T,System.Collections.Generic.IComparer`1<T>)
static void __M2N_i4i4S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static void __M2N_i4i4S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
static void __M2N_i4i4S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ValueTuple`2::CompareTo(System.ValueTuple`2<T1,T2>)
static void __M2N_i4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.Number::FormatInt32(System.Int32,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Net.Sockets.Socket::Receive(System.Span`1<System.Byte>,System.Net.Sockets.SocketFlags,System.Net.Sockets.SocketError&)
static void __M2N_i4i4S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_i4i4S8S12i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_i4i4S8S12u8u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<12> __arg2, uint64_t __arg3, uint64_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), *(uint64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Int32 System.Collections.Generic.NullableComparer`1::Compare(System.Nullable`1<T>,System.Nullable`1<T>)
static void __M2N_i4i4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Text.Decoder::GetChars(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Char>,System.Boolean)
static void __M2N_i4i4S8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
static void __M2N_i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.SpanHelpers::IndexOf(System.Byte&,System.Byte,System.Int32)
static void __M2N_i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Text.RegularExpressions.RegexNode System.Text.RegularExpressions.RegexNode::MakeQuantifier(System.Boolean,System.Int32,System.Int32)
static void __M2N_i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Globalization.CultureData System.Globalization.CultureData::GetCultureData(System.String,System.Boolean,System.Int32,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,System.String)
static void __M2N_i4i4u1i4i4i4i4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, uint8_t __arg10, int32_t __arg11, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(int32_t*)(localVarBase+argVarIndexs[11]), method);
}


// System.Byte[] UnityEngine.WWWTranscoder::Encode(System.Byte[],System.Byte,System.Byte[],System.Byte[],System.Boolean)
static void __M2N_i4i4u1i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.String Mono.Btls.MonoBtlsUtils::FormatName(Mono.Btls.MonoBtlsX509Name,System.Boolean,System.String,System.Boolean)
static void __M2N_i4i4u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Type System.Type::GetType(System.String,System.Boolean,System.Boolean)
static void __M2N_i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String System.String::Trim(System.Char)
static void __M2N_i4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
static void __M2N_i4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String[] System.String::Split(System.Char,System.Int32,System.StringSplitOptions)
static void __M2N_i4i4u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String System.String::Replace(System.Char,System.Char)
static void __M2N_i4i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
static void __M2N_i4i4u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Text.StringBuilder System.Text.StringBuilder::Replace(System.Char,System.Char,System.Int32,System.Int32)
static void __M2N_i4i4u2u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.String Mono.Math.BigInteger::ToString(System.UInt32)
static void __M2N_i4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
static void __M2N_i4i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromStreamAsync(System.IO.Stream,System.UInt32,System.UInt32)
static void __M2N_i4i4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromFileAsync(System.String,System.UInt32,System.UInt64)
static void __M2N_i4i4u4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.UInt64::CompareTo(System.UInt64)
static void __M2N_i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static void __M2N_i4i4u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Convert::ToInt32(System.Int64)
static void __M2N_i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeUtility::Malloc(System.Int64,System.Int32,Unity.Collections.Allocator)
static void __M2N_i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String System.Number::FormatInt64(System.Int64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4i8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
static void __M2N_i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatSingle(System.Single,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i4r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(float __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Convert::ToInt32(System.Double)
static void __M2N_i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatDouble(System.Double,System.String,System.Globalization.NumberFormatInfo)
static void __M2N_i4r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(double __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<T>(Unity.Collections.NativeArray`1<T>)
static void __M2N_i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Type System.Type::GetTypeFromCLSID(System.Guid)
static void __M2N_i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Type System.Type::GetTypeFromCLSID(System.Guid,System.String)
static void __M2N_i4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String,System.Int32)
static void __M2N_i4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String,System.Int32,UnityEngine.GUIStyle)
static void __M2N_i4S16i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 UnityEngine.GUI::Toolbar(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUI/ToolbarButtonSize)
static void __M2N_i4S16i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Type System.Type::GetTypeFromCLSID(System.Guid,System.String,System.Boolean)
static void __M2N_i4S16i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String UnityEngine.GUI::PasswordField(UnityEngine.Rect,System.String,System.Char)
static void __M2N_i4S16i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.String UnityEngine.GUI::PasswordField(UnityEngine.Rect,System.String,System.Char,System.Int32)
static void __M2N_i4S16i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.String UnityEngine.GUI::PasswordField(UnityEngine.Rect,System.String,System.Char,System.Int32,UnityEngine.GUIStyle)
static void __M2N_i4S16i4u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Type System.Type::GetTypeFromCLSID(System.Guid,System.Boolean)
static void __M2N_i4S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<16> __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
static void __M2N_i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::CreateLinkedTokenSource(System.Threading.CancellationToken,System.Threading.CancellationToken)
static void __M2N_i4S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(UnityEngine.RenderTextureDescriptor)
static void __M2N_i4S52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<52> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<52>*)(localVarBase+argVarIndexs[0]), method);
}


// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<T>(System.Span`1<T>)
static void __M2N_i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Convert::ToBase64String(System.ReadOnlySpan`1<System.Byte>,System.Base64FormattingOptions)
static void __M2N_i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Int32::Parse(System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i4S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.ParseNumbers::StringToInt(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&)
static void __M2N_i4S8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.MemoryExtensions::ToUpperInvariant(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>)
static void __M2N_i4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.IO.Path::Join(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
static void __M2N_i4S8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.MemoryExtensions::IndexOf<T>(System.ReadOnlySpan`1<T>,T)
static void __M2N_i4S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, uint8_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.MemoryExtensions::IndexOf<T>(System.ReadOnlySpan`1<T>,T)
static void __M2N_i4S8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Marvin::ComputeHash32(System.ReadOnlySpan`1<System.Byte>,System.UInt64)
static void __M2N_i4S8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(ValueTypeSize<8> __arg0, uint64_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int32 System.Convert::ToInt32(System.Boolean)
static void __M2N_i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Int32&)
static void __M2N_i4u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 Mono.Security.Uri::FromHex(System.Char)
static void __M2N_i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.String::Join(System.Char,System.String[])
static void __M2N_i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.String::Join(System.Char,System.String[],System.Int32,System.Int32)
static void __M2N_i4u2i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int32 System.Char::ConvertToUtf32(System.Char,System.Char)
static void __M2N_i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
static void __M2N_i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int32 System.Threading.TimeoutHelper::UpdateTimeOut(System.UInt32,System.Int32)
static void __M2N_i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.String System.Number::FormatUInt32(System.UInt32,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4u4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int32 System.Convert::ToInt32(System.UInt64)
static void __M2N_i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.String System.Number::FormatUInt64(System.UInt64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_i4u8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int32_t (*NativeMethod)(uint64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(int32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.Numerics.ConstantHelper::GetInt64WithAllBitsSet()
static void __M2N_i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Int64 System.Convert::ToInt64(System.Decimal)
static void __M2N_i8C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.SByte)
static void __M2N_i8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Int16)
static void __M2N_i8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Object)
static void __M2N_i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.BitConverter::ToInt64(System.Byte[],System.Int32)
static void __M2N_i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Int64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_i8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 Mono.Btls.MonoBtlsBioMono/BioControlFunc::Invoke(System.IntPtr,Mono.Btls.MonoBtlsBioMono/ControlCommand,System.Int64)
static void __M2N_i8i4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int64 System.Threading.Interlocked::Exchange(System.Int64&,System.Int64)
static void __M2N_i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
static void __M2N_i8i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.IO.MonoIO::Seek(System.Runtime.InteropServices.SafeHandle,System.Int64,System.IO.SeekOrigin,System.IO.MonoIOError&)
static void __M2N_i8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int64 System.Threading.Interlocked::CompareExchange(System.Int64&,System.Int64,System.Int64)
static void __M2N_i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.Math::Abs(System.Int64)
static void __M2N_i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Math::Max(System.Int64,System.Int64)
static void __M2N_i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Int64 System.Math::DivRem(System.Int64,System.Int64,System.Int64&)
static void __M2N_i8i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.Math::Clamp(System.Int64,System.Int64,System.Int64)
static void __M2N_i8i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(int64_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Int64 System.Convert::ToInt64(System.Single)
static void __M2N_i8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
static void __M2N_i8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.ParseNumbers::StringToLong(System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32,System.Int32&)
static void __M2N_i8S8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Int64 System.Convert::ToInt64(System.Boolean)
static void __M2N_i8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.Char)
static void __M2N_i8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.UInt32)
static void __M2N_i8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Int64 System.Convert::ToInt64(System.UInt64)
static void __M2N_i8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef int64_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(int64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Numerics.ConstantHelper::GetSingleWithAllBitsSet()
static void __M2N_r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Single System.Convert::ToSingle(System.Decimal)
static void __M2N_r4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.SByte)
static void __M2N_r4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Int16)
static void __M2N_r4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Object)
static void __M2N_r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.Object,System.IFormatProvider)
static void __M2N_r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Single::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_r4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
static void __M2N_r4i4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
static void __M2N_r4i4i4S88(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<88> __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<88>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Threading.Interlocked::Exchange(System.Single&,System.Single)
static void __M2N_r4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Threading.Interlocked::CompareExchange(System.Single&,System.Single,System.Single)
static void __M2N_r4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Convert::ToSingle(System.Int64)
static void __M2N_r4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Math::Abs(System.Single)
static void __M2N_r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Math::Max(System.Single,System.Single)
static void __M2N_r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single)
static void __M2N_r4r4r4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, int32_t __arg2, float __arg3, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single)
static void __M2N_r4r4r4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, int32_t __arg2, float __arg3, float __arg4, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
static void __M2N_r4r4r4i4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, int32_t __arg2, float __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(float*)(localVarBase+argVarIndexs[5]), method);
}


// System.Single System.Math::Clamp(System.Single,System.Single,System.Single)
static void __M2N_r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single System.Convert::ToSingle(System.Double)
static void __M2N_r4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
static void __M2N_r4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_r4S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_r4S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single)
static void __M2N_r4S16r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
static void __M2N_r4S16r4r4r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, float __arg2, float __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
static void __M2N_r4S16r4r4r4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, float __arg2, float __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single)
static void __M2N_r4S16r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, float __arg2, float __arg3, float __arg4, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
static void __M2N_r4S16r4r4r4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, float __arg2, float __arg3, float __arg4, int32_t __arg5, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32,UnityEngine.GUIStyle)
static void __M2N_r4S16r4r4r4r4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, float __arg2, float __arg3, float __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
static void __M2N_r4S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single UnityEngine.Matrix4x4::Determinant(UnityEngine.Matrix4x4)
static void __M2N_r4S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<64> __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
static void __M2N_r4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Single System.Convert::ToSingle(System.Byte)
static void __M2N_r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt16)
static void __M2N_r4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt32)
static void __M2N_r4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Single System.Convert::ToSingle(System.UInt64)
static void __M2N_r4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef float (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(float*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Numerics.ConstantHelper::GetDoubleWithAllBitsSet()
static void __M2N_r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Double System.Convert::ToDouble(System.Decimal)
static void __M2N_r8C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.SByte)
static void __M2N_r8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Int16)
static void __M2N_r8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Object)
static void __M2N_r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Object,System.IFormatProvider)
static void __M2N_r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_r8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Threading.Interlocked::Exchange(System.Double&,System.Double)
static void __M2N_r8i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Threading.Interlocked::CompareExchange(System.Double&,System.Double,System.Double)
static void __M2N_r8i4r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int32_t __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.BitConverter::Int64BitsToDouble(System.Int64)
static void __M2N_r8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.Single)
static void __M2N_r8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Math::Round(System.Double)
static void __M2N_r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Math::Round(System.Double,System.Int32)
static void __M2N_r8r8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, int32_t __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
static void __M2N_r8r8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Math::IEEERemainder(System.Double,System.Double)
static void __M2N_r8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, double __arg1, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Double System.Math::Clamp(System.Double,System.Double,System.Double)
static void __M2N_r8r8r8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(double __arg0, double __arg1, double __arg2, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), *(double*)(localVarBase+argVarIndexs[2]), method);
}


// System.Double System.Convert::ToDouble(System.Byte)
static void __M2N_r8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt16)
static void __M2N_r8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt32)
static void __M2N_r8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Double System.Convert::ToDouble(System.UInt64)
static void __M2N_r8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef double (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(double*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// Unity.Collections.NativeArray`1/ReadOnly/Enumerator<T> Unity.Collections.NativeArray`1/ReadOnly::GetEnumerator()
static void __M2N_S108i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<108> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<108>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static void __M2N_S108i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<108> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<108>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1::GetEnumerator()
static void __M2N_S112i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<112> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<112>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.ArraySegment`1<T> System.ArraySegment`1::get_Empty()
static void __M2N_S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1::GetEnumerator()
static void __M2N_S120i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<120> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<120>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Memory`1<T> System.Memory`1::op_Implicit(T[])
static void __M2N_S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Memory`1<T> System.MemoryExtensions::AsMemory<T>(T[],System.Int32)
static void __M2N_S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Memory`1<T> System.Memory`1::Slice(System.Int32,System.Int32)
static void __M2N_S12i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action`1<System.Object>,System.Object,System.Boolean,System.Boolean)
static void __M2N_S12i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
static void __M2N_S12i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
static void __M2N_S12i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3,UnityEngine.Camera/MonoOrStereoscopicEye)
static void __M2N_S12i4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.MemoryStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
static void __M2N_S12i4S12S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static void __M2N_S12i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
static void __M2N_S12r4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(float __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.ReadOnlyMemory`1<T> System.Memory`1::op_Implicit(System.Memory`1<T>)
static void __M2N_S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// Unity.Collections.NativeSlice`1<T> Unity.Collections.NativeSliceExtensions::Slice<T>(Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
static void __M2N_S12S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
static void __M2N_S12S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
static void __M2N_S12S12S12i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, float __arg3, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single)
static void __M2N_S12S12S12i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, float __arg3, float __arg4, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
static void __M2N_S12S12S12i4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, float __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(float*)(localVarBase+argVarIndexs[5]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
static void __M2N_S12S12S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
static void __M2N_S12S12S12r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.Vector3 UnityEngine.Quaternion::ToEulerAngles(UnityEngine.Quaternion)
static void __M2N_S12S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
static void __M2N_S12S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
static void __M2N_S12S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.ConsoleKeyInfo System.Console::ReadKey(System.Boolean)
static void __M2N_S12u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<12> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<12>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Guid System.Guid::NewGuid()
static void __M2N_S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.ArraySegment`1/Enumerator<T> System.ArraySegment`1::GetEnumerator()
static void __M2N_S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Reflection.InterfaceMapping System.Type::GetInterfaceMap(System.Type)
static void __M2N_S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
static void __M2N_S16i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Rect UnityEngine.RectOffset::Remove(UnityEngine.Rect)
static void __M2N_S16i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
static void __M2N_S16i4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUIStyle)
static void __M2N_S16i4S16i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.Color UnityEngine.Mathf::CorrelatedColorTemperatureToRGB(System.Single)
static void __M2N_S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
static void __M2N_S16r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
static void __M2N_S16r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
static void __M2N_S16r4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(float __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
static void __M2N_S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Quaternion UnityEngine.Quaternion::AxisAngle(UnityEngine.Vector3,System.Single)
static void __M2N_S16S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<12> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_S16S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
static void __M2N_S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Rect UnityEngine.GUIUtility::AlignRectToDevice(UnityEngine.Rect,System.Int32&,System.Int32&)
static void __M2N_S16S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
static void __M2N_S16S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color UnityEngine.Color::op_Addition(UnityEngine.Color,UnityEngine.Color)
static void __M2N_S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
static void __M2N_S16S16S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
static void __M2N_S16S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
static void __M2N_S16S64S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<64> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Guid System.Guid::Parse(System.ReadOnlySpan`1<System.Char>)
static void __M2N_S16S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<16> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<16>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// TResult System.Threading.Tasks.Task`1::get_Result()
static void __M2N_S1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<1> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// TResult System.Func`2::Invoke(T)
static void __M2N_S1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<1> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// TResult System.Func`3::Invoke(T1,T2)
static void __M2N_S1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<1> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<1>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1::Create()
static void __M2N_S20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<20> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<20>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeArray`1::GetEnumerator()
static void __M2N_S20i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<20> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<20>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_S24i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static void __M2N_S24i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
static void __M2N_S24i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3,UnityEngine.Camera/MonoOrStereoscopicEye)
static void __M2N_S24i4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<24> (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<24>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_S28i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<28> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<28>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Nullable`1<System.Boolean> Mono.Security.Interface.MonoTlsSettings::get_UseServicePointManagerCallback()
static void __M2N_S2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<2> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<2>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_S32i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<32> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<32>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
static void __M2N_S32i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<32> (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<32>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2::GetEnumerator()
static void __M2N_S36i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<36> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<36>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
static void __M2N_S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32NetworkInterface::get_FixedInfo()
static void __M2N_S48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<48> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<48>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// T System.Runtime.InteropServices.Marshal::PtrToStructure<T>(System.IntPtr)
static void __M2N_S48i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<48> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<48>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
static void __M2N_S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
static void __M2N_S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneParameters)
static void __M2N_S4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
static void __M2N_S4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<4> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<4>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.RenderTextureDescriptor UnityEngine.RenderTexture::get_descriptor()
static void __M2N_S52i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<52> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<52>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
static void __M2N_S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
static void __M2N_S64i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
static void __M2N_S64r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
static void __M2N_S64r4r4r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, float __arg4, float __arg5, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(float*)(localVarBase+argVarIndexs[5]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
static void __M2N_S64S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::LookAt(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_S64S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
static void __M2N_S64S12S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
static void __M2N_S64S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Frustum(UnityEngine.FrustumPlanes)
static void __M2N_S64S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<24> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
static void __M2N_S64S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<64> __arg0, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
static void __M2N_S64S64S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<64> (*NativeMethod)(ValueTypeSize<64> __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    *(ValueTypeSize<64>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
static void __M2N_S68i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<68> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<68>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1::get_Empty()
static void __M2N_S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.ReadOnlySpan`1<System.Char> Interop/NtDll/FILE_FULL_DIR_INFORMATION::get_FileName()
static void __M2N_S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Span`1<T> System.MemoryExtensions::AsSpan<T>(T[],System.Int32)
static void __M2N_S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String,System.Int32,System.Int32)
static void __M2N_S8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
static void __M2N_S8i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
static void __M2N_S8i4i4S144(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<144> __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<144>*)(localVarBase+argVarIndexs[2]), method);
}


// System.ValueTuple`2<System.Net.WebConnection,System.Boolean> System.Net.ServicePointScheduler/ConnectionGroup::CreateOrReuseConnection(System.Net.WebOperation,System.Boolean)
static void __M2N_S8i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Threading.Tasks.ValueTask System.IO.MemoryStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
static void __M2N_S8i4S12S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
static void __M2N_S8i4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcScreenSize(UnityEngine.Vector2)
static void __M2N_S8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
static void __M2N_S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable System.Threading.Tasks.ValueTask::ConfigureAwait(System.Boolean)
static void __M2N_S8i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Int64)
static void __M2N_S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
static void __M2N_S8r4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(float __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
static void __M2N_S8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<12> __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), method);
}


// UnityEngine.Vector2 UnityEngine.Rect::NormalizedToPoint(UnityEngine.Rect,UnityEngine.Vector2)
static void __M2N_S8S16S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect)
static void __M2N_S8S16S8S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
static void __M2N_S8S16S8S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean)
static void __M2N_S8S16S8S16u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<16> __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
static void __M2N_S8S16S8S16u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<16> __arg2, uint8_t __arg3, uint8_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// UnityEngine.Vector2 UnityEngine.GUI::DoBeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
static void __M2N_S8S16S8S16u1u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<16> __arg2, uint8_t __arg3, uint8_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::Trim(System.ReadOnlySpan`1<System.Char>)
static void __M2N_S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_LeftShift(System.Numerics.BigInteger,System.Int32)
static void __M2N_S8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
static void __M2N_S8S8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, float __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
static void __M2N_S8S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
static void __M2N_S8S8S8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, float __arg2, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Numerics.BigInteger System.Numerics.BigInteger::op_Implicit(System.Byte)
static void __M2N_S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<8> (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<8>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static void __M2N_S96i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<96> (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(ValueTypeSize<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// T Unity.Collections.NativeArray`1::get_Item(System.Int32)
static void __M2N_S96i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef ValueTypeSize<96> (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(ValueTypeSize<96>*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::get_IsReady()
static void __M2N_u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Boolean System.Convert::ToBoolean(System.Decimal)
static void __M2N_u1C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
static void __M2N_u1C16C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Number::TryFormatDecimal(System.Decimal,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1C16S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
static void __M2N_u1C24C24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<24> __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.DateTime::op_Equality(System.DateTime,System.DateTime)
static void __M2N_u1C8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.SByte)
static void __M2N_u1i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Int16)
static void __M2N_u1i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
static void __M2N_u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
static void __M2N_u1i4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
static void __M2N_u1i4C24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.DisplayInfo::Equals(UnityEngine.DisplayInfo)
static void __M2N_u1i4C48(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<48> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<48>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.DateTime::Equals(System.DateTime)
static void __M2N_u1i4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
static void __M2N_u1i4C8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, ValueTypeSizeAlign8<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.SByte::Equals(System.SByte)
static void __M2N_u1i4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Int16::Equals(System.Int16)
static void __M2N_u1i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Mono.RuntimeClassHandle::Equals(System.Object)
static void __M2N_u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
static void __M2N_u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions,System.TimeSpan)
static void __M2N_u1i4i4i4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign8<8> __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static void __M2N_u1i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.DateTime::TryParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
static void __M2N_u1i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static void __M2N_u1i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Boolean Mono.Security.Cryptography.PKCS1::Verify_v15(System.Security.Cryptography.RSA,System.Security.Cryptography.HashAlgorithm,System.Byte[],System.Byte[],System.Boolean)
static void __M2N_u1i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled(System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventKeywords)
static void __M2N_u1i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Threading.ManualResetEventSlim::Wait(System.Int32,System.Threading.CancellationToken)
static void __M2N_u1i4i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryAdd(TKey,TValue)
static void __M2N_u1i4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
static void __M2N_u1i4i4S88(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<88> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<88>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.TextGenerator::PopulateWithErrors(System.String,UnityEngine.TextGenerationSettings,UnityEngine.GameObject)
static void __M2N_u1i4i4S88i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<88> __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<88>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
static void __M2N_u1i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.String::EndsWith(System.String,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_u1i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.SpanHelpers::SequenceEqual(System.Byte&,System.Byte&,System.UInt64)
static void __M2N_u1i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Int64::Equals(System.Int64)
static void __M2N_u1i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.IO.MonoIO::SetLength(System.Runtime.InteropServices.SafeHandle,System.Int64,System.IO.MonoIOError&)
static void __M2N_u1i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Single::Equals(System.Single)
static void __M2N_u1i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Double::Equals(System.Double)
static void __M2N_u1i4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
static void __M2N_u1i4S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.List`1::Contains(T)
static void __M2N_u1i4S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4S108S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<108> __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.ArraySegment`1::Equals(System.ArraySegment`1<T>)
static void __M2N_u1i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.Dictionary`2::Remove(TKey,TValue&)
static void __M2N_u1i4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3,System.Boolean)
static void __M2N_u1i4S12u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Guid::Equals(System.Guid)
static void __M2N_u1i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::TrySend(System.Guid,System.Byte[])
static void __M2N_u1i4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static void __M2N_u1i4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean UnityEngine.ScrollViewState::ScrollTowards(UnityEngine.Rect,System.Single)
static void __M2N_u1i4S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, float __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect,System.Boolean)
static void __M2N_u1i4S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4S1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.ValueTuple`5::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static void __M2N_u1i4S20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Bounds::Equals(UnityEngine.Bounds)
static void __M2N_u1i4S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
static void __M2N_u1i4S24i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<24> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
static void __M2N_u1i4S28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ValueTuple`8::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_u1i4S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ValueTuple`8::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static void __M2N_u1i4S36(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<36> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<36>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ValueTuple`1::Equals(System.ValueTuple`1<T1>)
static void __M2N_u1i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.Matrix4x4::Equals(UnityEngine.Matrix4x4)
static void __M2N_u1i4S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.ReadOnlySpan`1::TryCopyTo(System.Span`1<T>)
static void __M2N_u1i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.TextGenerationSettings::Equals(UnityEngine.TextGenerationSettings)
static void __M2N_u1i4S88(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<88> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<88>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Version::TryFormat(System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Version::TryFormat(System.Span`1<System.Char>,System.Int32,System.Int32&)
static void __M2N_u1i4S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Guid::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>)
static void __M2N_u1i4S8i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Byte::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static void __M2N_u1i4S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Numerics.BigInteger::TryWriteBytes(System.Span`1<System.Byte>,System.Int32&,System.Boolean,System.Boolean)
static void __M2N_u1i4S8i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Runtime.InteropServices.Marshal/MarshalerInstanceKeyComparer::Equals(System.ValueTuple`2<System.Type,System.String>,System.ValueTuple`2<System.Type,System.String>)
static void __M2N_u1i4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Security.Cryptography.HashAlgorithm::TryComputeHash(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&)
static void __M2N_u1i4S8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
static void __M2N_u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Enum::TryParse<TEnum>(System.String,System.Boolean,TEnum&)
static void __M2N_u1i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
static void __M2N_u1i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.String::EndsWith(System.Char)
static void __M2N_u1i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.String::Contains(System.Char,System.StringComparison)
static void __M2N_u1i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static void __M2N_u1i4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
static void __M2N_u1i4u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
static void __M2N_u1i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/PerCoreLockedStacks::Trim(System.UInt32,System.Int32,System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T>,System.Int32[])
static void __M2N_u1i4u4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean Interop/Kernel32::GetFileInformationByHandleEx(System.IntPtr,Interop/Kernel32/FILE_INFO_BY_HANDLE_CLASS,System.IntPtr,System.UInt32)
static void __M2N_u1i4u4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.UInt64::Equals(System.UInt64)
static void __M2N_u1i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int32_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Int64)
static void __M2N_u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatInt64(System.Int64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1i8S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(int64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Single)
static void __M2N_u1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
static void __M2N_u1r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Number::TryFormatSingle(System.Single,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1r4S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(float __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Double)
static void __M2N_u1r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatDouble(System.Double,System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberFormatInfo,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1r8S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(double __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<T>(System.ReadOnlyMemory`1<T>,System.ArraySegment`1<T>&)
static void __M2N_u1S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<12> __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean Unity.Collections.NativeSlice`1::op_Inequality(Unity.Collections.NativeSlice`1<T>,Unity.Collections.NativeSlice`1<T>)
static void __M2N_u1S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
static void __M2N_u1S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
static void __M2N_u1S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
static void __M2N_u1S16i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean UnityEngine.GUI::ScrollTowards(UnityEngine.Rect,System.Single)
static void __M2N_u1S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, float __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
static void __M2N_u1S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String)
static void __M2N_u1S16u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,System.String,UnityEngine.GUIStyle)
static void __M2N_u1S16u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<16> __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.Reflection.CustomAttributeNamedArgument::op_Equality(System.Reflection.CustomAttributeNamedArgument,System.Reflection.CustomAttributeNamedArgument)
static void __M2N_u1S24S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<24> __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<24>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.PropertyName::IsNullOrEmpty(UnityEngine.PropertyName)
static void __M2N_u1S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<4> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.RuntimeTypeHandle::op_Equality(System.RuntimeTypeHandle,System.Object)
static void __M2N_u1S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<4> __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Threading.CancellationToken::op_Equality(System.Threading.CancellationToken,System.Threading.CancellationToken)
static void __M2N_u1S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<4>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Matrix4x4::Inverse3DAffine(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
static void __M2N_u1S64i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<64> __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
static void __M2N_u1S64S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<64> __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Boolean::Parse(System.ReadOnlySpan`1<System.Char>)
static void __M2N_u1S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Boolean::TryParse(System.ReadOnlySpan`1<System.Char>,System.Boolean&)
static void __M2N_u1S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Byte System.Byte::Parse(System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u1S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.Byte::TryParse(System.ReadOnlySpan`1<System.Char>,System.Globalization.NumberStyles,System.IFormatProvider,System.Byte&)
static void __M2N_u1S8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.MemoryExtensions::SequenceEqual<T>(System.ReadOnlySpan`1<T>,System.ReadOnlySpan`1<T>)
static void __M2N_u1S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::TryFromBase64Chars(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Byte>,System.Int32&)
static void __M2N_u1S8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.IO.Path::TryJoin(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1S8S8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Boolean System.IO.Path::TryJoin(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1S8S8S8S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Boolean System.IO.Enumeration.FileSystemName::MatchesWin32Expression(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Boolean)
static void __M2N_u1S8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean System.BitConverter::TryWriteBytes(System.Span`1<System.Byte>,System.UInt32)
static void __M2N_u1S8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(ValueTypeSize<8> __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.Byte)
static void __M2N_u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Byte System.Math::Max(System.Byte,System.Byte)
static void __M2N_u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Byte System.Math::Clamp(System.Byte,System.Byte,System.Byte)
static void __M2N_u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
static void __M2N_u1u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Text.RegularExpressions.RegexCharClass::CharInClass(System.Char,System.String)
static void __M2N_u1u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Char::IsSurrogatePair(System.Char,System.Char)
static void __M2N_u1u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.UInt32)
static void __M2N_u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatUInt32(System.UInt32,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1u4S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// Mono.Security.Interface.AlertDescription Mono.Unity.UnityTlsConversions::VerifyResultToAlertDescription(Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Security.Interface.AlertDescription)
static void __M2N_u1u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
static void __M2N_u1u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Boolean System.Convert::ToBoolean(System.UInt64)
static void __M2N_u1u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Boolean System.Number::TryFormatUInt64(System.UInt64,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider,System.Span`1<System.Char>,System.Int32&)
static void __M2N_u1u8S8i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint8_t (*NativeMethod)(uint64_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint8_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.UInt16 System.Numerics.ConstantHelper::GetUInt16WithAllBitsSet()
static void __M2N_u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.UInt16 System.Convert::ToUInt16(System.Decimal)
static void __M2N_u2C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.SByte)
static void __M2N_u2i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.Int16)
static void __M2N_u2i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::Parse(System.String)
static void __M2N_u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char Mono.Security.Uri::HexUnescape(System.String,System.Int32&)
static void __M2N_u2i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u2i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Char System.Globalization.TextInfo::ToLower(System.Char)
static void __M2N_u2i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Char System.Convert::ToChar(System.Int64)
static void __M2N_u2i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Single)
static void __M2N_u2r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt16 System.Convert::ToUInt16(System.Double)
static void __M2N_u2r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.Byte)
static void __M2N_u2u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::ToUpper(System.Char)
static void __M2N_u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Char::ToUpper(System.Char,System.Globalization.CultureInfo)
static void __M2N_u2u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.Math::Max(System.UInt16,System.UInt16)
static void __M2N_u2u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt16 System.Math::Clamp(System.UInt16,System.UInt16,System.UInt16)
static void __M2N_u2u2u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint16_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Char System.Convert::ToChar(System.UInt32)
static void __M2N_u2u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Char System.Convert::ToChar(System.UInt64)
static void __M2N_u2u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint16_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint16_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Threading.TimeoutHelper::GetTime()
static void __M2N_u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.UInt32 System.Convert::ToUInt32(System.Decimal)
static void __M2N_u4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.SByte)
static void __M2N_u4i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Int16)
static void __M2N_u4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 Interop/NtDll::RtlNtStatusToDosError(System.Int32)
static void __M2N_u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4C8C8i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, ValueTypeSizeAlign8<8> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4C8i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Object,System.IFormatProvider)
static void __M2N_u4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4i4C8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<8> __arg2, int32_t __arg3, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_u4i4i4C8u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<8> __arg2, uint32_t __arg3, int32_t __arg4, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
static void __M2N_u4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Int64)
static void __M2N_u4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Single)
static void __M2N_u4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Double)
static void __M2N_u4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Boolean)
static void __M2N_u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.Char)
static void __M2N_u4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt32)
static void __M2N_u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt32 System.Math::Max(System.UInt32,System.UInt32)
static void __M2N_u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt32 System.Math::Clamp(System.UInt32,System.UInt32,System.UInt32)
static void __M2N_u4u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.UInt32 System.Convert::ToUInt32(System.UInt64)
static void __M2N_u4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint32_t (*NativeMethod)(uint64_t __arg0, const MethodInfo* method);
    *(uint32_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Marvin::get_DefaultSeed()
static void __M2N_u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.UInt64 System.Convert::ToUInt64(System.Decimal)
static void __M2N_u8C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.SByte)
static void __M2N_u8i1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int16)
static void __M2N_u8i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Object)
static void __M2N_u8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.BitConverter::ToUInt64(System.Byte[],System.Int32)
static void __M2N_u8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
static void __M2N_u8i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Int64)
static void __M2N_u8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Single)
static void __M2N_u8r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(float __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Double)
static void __M2N_u8r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(double __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(double*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Boolean)
static void __M2N_u8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.Char)
static void __M2N_u8u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint16_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint16_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Convert::ToUInt64(System.UInt32)
static void __M2N_u8u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.UInt64 System.Numerics.NumericsHelpers::MakeUlong(System.UInt32,System.UInt32)
static void __M2N_u8u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.Math::Max(System.UInt64,System.UInt64)
static void __M2N_u8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.UInt64 System.Math::Clamp(System.UInt64,System.UInt64,System.UInt64)
static void __M2N_u8u8u8u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef uint64_t (*NativeMethod)(uint64_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method);
    *(uint64_t*)ret = ((NativeMethod)(method->methodPointerCallByInterp))(*(uint64_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Threading.Thread::MemoryBarrier()
static void __M2N_v(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(method);
}


// System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,System.String,Mono.Security.Interface.AlertDescription)
static void __M2N_vC16i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Unity.Debug::CheckAndThrow(Mono.Unity.UnityTls/unitytls_errorstate,Mono.Unity.UnityTls/unitytls_x509verify_result,System.String,Mono.Security.Interface.AlertDescription)
static void __M2N_vC16u4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign8<16> __arg0, uint32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
static void __M2N_vC8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSizeAlign8<8> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void Mono.SafeGPtrArrayHandle::Dispose()
static void __M2N_vi4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
static void __M2N_vi4C16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
static void __M2N_vi4C16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.IO.FileSystem::SetCreationTime(System.String,System.DateTimeOffset,System.Boolean)
static void __M2N_vi4C16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<16>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
static void __M2N_vi4C32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<32> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<32>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.DateTimeOffset::.ctor(System.DateTime)
static void __M2N_vi4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Globalization.DaylightTimeStruct::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
static void __M2N_vi4C8C8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, ValueTypeSizeAlign8<8> __arg2, ValueTypeSizeAlign8<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16)
static void __M2N_vi4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.SafeStringMarshal::.ctor(System.String)
static void __M2N_vi4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.DateTime)
static void __M2N_vi4i4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.TimeZoneInfo/OffsetAndRule::.ctor(System.Int32,System.TimeSpan,System.TimeZoneInfo/AdjustmentRule)
static void __M2N_vi4i4C8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<8> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Tasks.ValueTask::.ctor(System.Threading.Tasks.Sources.IValueTaskSource,System.Int16)
static void __M2N_vi4i4i2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
static void __M2N_vi4i4i2i2u1u1u1u1u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int16_t __arg2, int16_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, uint8_t __arg7, uint8_t __arg8, uint8_t __arg9, uint8_t __arg10, uint8_t __arg11, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int16_t*)(localVarBase+argVarIndexs[2]), *(int16_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(uint8_t*)(localVarBase+argVarIndexs[9]), *(uint8_t*)(localVarBase+argVarIndexs[10]), *(uint8_t*)(localVarBase+argVarIndexs[11]), method);
}


// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
static void __M2N_vi4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Text.RegularExpressions.RegexMatchTimeoutException::.ctor(System.String,System.String,System.TimeSpan)
static void __M2N_vi4i4i4C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign8<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.TimeSpan,System.TimeSpan)
static void __M2N_vi4i4i4C8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSizeAlign8<8> __arg3, ValueTypeSizeAlign8<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
static void __M2N_vi4i4i4i2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int16_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int16_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Xml.SmallXmlParserException::.ctor(System.String,System.Int32,System.Int32)
static void __M2N_vi4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
static void __M2N_vi4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
static void __M2N_vi4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void Mono.Globalization.Unicode.SimpleCollator/Context::.ctor(System.Globalization.CompareOptions,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Byte*)
static void __M2N_vi4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
static void __M2N_vi4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
static void __M2N_vi4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __M2N_vi4i4i4i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void System.ValueTuple`8::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
static void __M2N_vi4i4i4i4i4i4i4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, ValueTypeSize<8> __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.Text.RegularExpressions.RegexCode::.ctor(System.Int32[],System.Collections.Generic.List`1<System.String>,System.Int32,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.RegexBoyerMoore,System.Nullable`1<System.Text.RegularExpressions.RegexPrefix>,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4i4i4i4S12i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, ValueTypeSize<12> __arg7, int32_t __arg8, uint8_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(uint8_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void System.Net.FileWebStream::.ctor(System.Net.FileWebRequest,System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.ValueTuple`8::.ctor(T1,T2,T3,T4,T5,T6,T7,TRest)
static void __M2N_vi4i4i4i4i4i4i4u1S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, uint8_t __arg7, ValueTypeSize<1> __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint8_t*)(localVarBase+argVarIndexs[7]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Mesh::SetTriangles(System.Collections.Generic.List`1<System.Int32>,System.Int32,System.Int32,System.Int32,System.Boolean,System.Int32)
static void __M2N_vi4i4i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.Pool.ObjectPool`1::.ctor(System.Func`1<T>,System.Action`1<T>,System.Action`1<T>,System.Action`1<T>,System.Boolean,System.Int32,System.Int32)
static void __M2N_vi4i4i4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void UnityEngine.Texture2DArray::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
static void __M2N_vi4i4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void Mono.Globalization.Unicode.TailoringInfo::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean)
static void __M2N_vi4i4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
static void __M2N_vi4i4i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Net.FixedSizeReadStream::.ctor(System.Net.WebOperation,System.IO.Stream,System.Int64)
static void __M2N_vi4i4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
static void __M2N_vi4i4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
static void __M2N_vi4i4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<16> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Tasks.Task`1::.ctor(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions)
static void __M2N_vi4i4i4S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<4> __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __M2N_vi4i4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __M2N_vi4i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
static void __M2N_vi4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32,System.Boolean)
static void __M2N_vi4i4i4u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Net.WebOperation::.ctor(System.Net.HttpWebRequest,System.Net.BufferOffsetSize,System.Boolean,System.Threading.CancellationToken)
static void __M2N_vi4i4i4u1S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, ValueTypeSize<4> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.TouchScreenKeyboard::.ctor(System.String,UnityEngine.TouchScreenKeyboardType,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.Int32)
static void __M2N_vi4i4i4u1u1u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.Text.RegularExpressions.RegexNode::.ctor(System.Int32,System.Text.RegularExpressions.RegexOptions,System.Char)
static void __M2N_vi4i4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint16_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint16_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.InteropServices._Activator::GetIDsOfNames(System.Guid&,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr)
static void __M2N_vi4i4i4u4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint32_t __arg3, uint32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Threading.Tasks.DebuggerSupport::TraceOperationCreation(System.Threading.Tasks.CausalityTraceLevel,System.Threading.Tasks.Task,System.String,System.UInt64)
static void __M2N_vi4i4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
static void __M2N_vi4i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Reflection.RuntimeAssembly/UnmanagedMemoryStreamForModule::.ctor(System.Byte*,System.Int64,System.Reflection.Module)
static void __M2N_vi4i4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.ObjectManager::RegisterObject(System.Object,System.Int64,System.Runtime.Serialization.SerializationInfo,System.Int64,System.Reflection.MemberInfo,System.Int32[])
static void __M2N_vi4i4i8i4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int32_t __arg3, int64_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
static void __M2N_vi4i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.IO.UnmanagedMemoryStream::.ctor(System.Byte*,System.Int64,System.Int64,System.IO.FileAccess)
static void __M2N_vi4i4i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
static void __M2N_vi4i4i8i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, int64_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Single)
static void __M2N_vi4i4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
static void __M2N_vi4i4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
static void __M2N_vi4i4r4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
static void __M2N_vi4i4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __M2N_vi4i4S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
static void __M2N_vi4i4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Tuple`3::.ctor(T1,T2,T3)
static void __M2N_vi4i4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Unity.Collections.NativeArray`1::Copy(T[],System.Int32,Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
static void __M2N_vi4i4S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.MaterialPropertyBlock::SetVector(System.Int32,UnityEngine.Vector4)
static void __M2N_vi4i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.GUI/CustomSelectionGridItemGUI::Invoke(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle,System.Int32)
static void __M2N_vi4i4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __M2N_vi4i4S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.OperationCanceledException::.ctor(System.String,System.Threading.CancellationToken)
static void __M2N_vi4i4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Buffers.MemoryHandle::.ctor(System.Void*,System.Runtime.InteropServices.GCHandle,System.Buffers.IPinnable)
static void __M2N_vi4i4S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
static void __M2N_vi4i4S64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<64> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.AggregateException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __M2N_vi4i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Text.StringBuilder::CopyTo(System.Int32,System.Span`1<System.Char>,System.Int32)
static void __M2N_vi4i4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Unity.Collections.NativeArray`1::set_Item(System.Int32,T)
static void __M2N_vi4i4S96(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, ValueTypeSize<96> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<96>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Security.Uri::.ctor(System.String,System.Boolean)
static void __M2N_vi4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Security.Cryptography.SymmetricTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[])
static void __M2N_vi4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
static void __M2N_vi4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Mono.Unity.UnityTlsStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.SslStream,Mono.Security.Interface.MonoTlsSettings,Mono.Net.Security.MobileTlsProvider)
static void __M2N_vi4i4u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.Bindings.NativePropertyAttribute::.ctor(System.String,System.Boolean,UnityEngine.Bindings.TargetType,System.Boolean)
static void __M2N_vi4i4u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __M2N_vi4i4u1S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, ValueTypeSize<24> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __M2N_vi4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Text.RegularExpressions.RegexBoyerMoore::.ctor(System.String,System.Boolean,System.Boolean,System.Globalization.CultureInfo)
static void __M2N_vi4i4u1u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.ValueTuple`5::.ctor(T1,T2,T3,T4,T5)
static void __M2N_vi4i4u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.ValueTuple`4::.ctor(T1,T2,T3,T4)
static void __M2N_vi4i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
static void __M2N_vi4i4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Text.ValueStringBuilder::Insert(System.Int32,System.Char,System.Int32)
static void __M2N_vi4i4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
static void __M2N_vi4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Interop/NtDll/OBJECT_ATTRIBUTES::.ctor(Interop/UNICODE_STRING*,Interop/NtDll/ObjectAttributes,System.IntPtr)
static void __M2N_vi4i4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
static void __M2N_vi4i4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int32_t __arg1, uint64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(uint64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.DateTime::.ctor(System.Int64)
static void __M2N_vi4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
static void __M2N_vi4i8C8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, ValueTypeSizeAlign8<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
static void __M2N_vi4i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Runtime.Serialization.ValueTypeFixupInfo::.ctor(System.Int64,System.Reflection.FieldInfo,System.Int32[])
static void __M2N_vi4i8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
static void __M2N_vi4i8i4i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
static void __M2N_vi4i8i4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, int64_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int64_t*)(localVarBase+argVarIndexs[3]), *(int64_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.IO.FileStream::Lock(System.Int64,System.Int64)
static void __M2N_vi4i8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.IO.MonoIO::Lock(System.Runtime.InteropServices.SafeHandle,System.Int64,System.Int64,System.IO.MonoIOError&)
static void __M2N_vi4i8i8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, int64_t __arg1, int64_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(int64_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Decimal::.ctor(System.Single)
static void __M2N_vi4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
static void __M2N_vi4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
static void __M2N_vi4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
static void __M2N_vi4r4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
static void __M2N_vi4r4r4r4r4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, float __arg1, float __arg2, float __arg3, float __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Decimal::.ctor(System.Double)
static void __M2N_vi4r8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, double __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(double*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::SetResult(TResult)
static void __M2N_vi4S1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<1>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __M2N_vi4S108(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<108>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.TermInfoDriver::WriteSpecialKey(System.ConsoleKeyInfo)
static void __M2N_vi4S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Reflection.FieldInfo::SetValueDirect(System.TypedReference,System.Object)
static void __M2N_vi4S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Unity.Collections.NativeSlice`1::.ctor(Unity.Collections.NativeSlice`1<T>,System.Int32,System.Int32)
static void __M2N_vi4S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Text.RegularExpressions.Regex/CachedCodeEntry::.ctor(System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Collections.Hashtable,System.String[],System.Text.RegularExpressions.RegexCode,System.Collections.Hashtable,System.Int32,System.Text.RegularExpressions.ExclusiveReference,System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>)
static void __M2N_vi4S12i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,System.Single)
static void __M2N_vi4S12r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Bounds::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_vi4S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
static void __M2N_vi4S12S12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, ValueTypeSize<12> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
static void __M2N_vi4S12S16S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, ValueTypeSize<12> __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(Unity.Collections.NativeArray`1<System.Byte>,System.Boolean)
static void __M2N_vi4S12u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<12> __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Security.AccessControl.ObjectAce::set_InheritedObjectAceType(System.Guid)
static void __M2N_vi4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Networking.PlayerConnection.IEditorPlayerConnection::Register(System.Guid,UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>)
static void __M2N_vi4S16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __M2N_vi4S16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
static void __M2N_vi4S16i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
static void __M2N_vi4S16i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
static void __M2N_vi4S16i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean,System.Boolean)
static void __M2N_vi4S16i4i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4S16i4u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, uint8_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(uint8_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32,UnityEngine.GUIStyle)
static void __M2N_vi4S16r4r4r4r4i4i4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, float __arg2, float __arg3, float __arg4, float __arg5, int32_t __arg6, int32_t __arg7, uint8_t __arg8, int32_t __arg9, int32_t __arg10, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(float*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), *(int32_t*)(localVarBase+argVarIndexs[10]), method);
}


// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
static void __M2N_vi4S16S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, ValueTypeSize<16> __arg3, ValueTypeSize<16> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4S16u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<16> __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void Mono.Security.Interface.MonoTlsSettings::set_UseServicePointManagerCallback(System.Nullable`1<System.Boolean>)
static void __M2N_vi4S2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<2> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<2>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __M2N_vi4S20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Mesh::set_bounds(UnityEngine.Bounds)
static void __M2N_vi4S24(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<24>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
static void __M2N_vi4S32(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<32>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
static void __M2N_vi4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[])
static void __M2N_vi4S4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
static void __M2N_vi4S4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Threading.Tasks.TaskFactory`1::.ctor(System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
static void __M2N_vi4S4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __M2N_vi4S4S4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<4>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.RenderTexture::.ctor(UnityEngine.RenderTextureDescriptor)
static void __M2N_vi4S52(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<52> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<52>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.GUIClip/ParentClipScope::.ctor(UnityEngine.Matrix4x4,UnityEngine.Rect)
static void __M2N_vi4S64S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<64> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<64>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.String::.ctor(System.ReadOnlySpan`1<System.Char>)
static void __M2N_vi4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __M2N_vi4S8C56(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSizeAlign8<56> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<56>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __M2N_vi4S8C56i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSizeAlign8<56> __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSizeAlign8<56>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4S8i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __M2N_vi4S8i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
static void __M2N_vi4S8i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4S8S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4S8S20(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<20> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<20>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4S8S28(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<28> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<28>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __M2N_vi4S8S36(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<36> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<36>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
static void __M2N_vi4S8S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.TextEditor::MoveCursorToPosition_Internal(UnityEngine.Vector2,System.Boolean)
static void __M2N_vi4S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Numerics.BigInteger::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Boolean,System.Boolean)
static void __M2N_vi4S8u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, ValueTypeSize<8> __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
static void __M2N_vi4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
static void __M2N_vi4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode,System.String)
static void __M2N_vi4u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Security.AccessControl.NativeObjectSecurity::.ctor(System.Boolean,System.Security.AccessControl.ResourceType,System.Security.AccessControl.NativeObjectSecurity/ExceptionFromErrorCode,System.Object)
static void __M2N_vi4u1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Security.AccessControl.NativeObjectSecurity::.ctor(System.Boolean,System.Security.AccessControl.ResourceType,System.Runtime.InteropServices.SafeHandle,System.Security.AccessControl.AccessControlSections,System.Security.AccessControl.NativeObjectSecurity/ExceptionFromErrorCode,System.Object)
static void __M2N_vi4u1i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Security.AccessControl.ObjectAce::.ctor(System.Security.AccessControl.AceFlags,System.Security.AccessControl.AceQualifier,System.Int32,System.Security.Principal.SecurityIdentifier,System.Security.AccessControl.ObjectAceFlags,System.Guid,System.Guid,System.Boolean,System.Byte[])
static void __M2N_vi4u1i4i4i4i4S16S16u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, ValueTypeSize<16> __arg6, ValueTypeSize<16> __arg7, uint8_t __arg8, int32_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[7]), *(uint8_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void System.Security.AccessControl.CommonAce::.ctor(System.Security.AccessControl.AceFlags,System.Security.AccessControl.AceQualifier,System.Int32,System.Security.Principal.SecurityIdentifier,System.Boolean,System.Byte[])
static void __M2N_vi4u1i4i4i4u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, int32_t __arg6, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), method);
}


// System.Void System.Runtime.Remoting.Identity::NotifyClientDynamicSinks(System.Boolean,System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __M2N_vi4u1i4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemSet(System.Void*,System.Byte,System.Int64)
static void __M2N_vi4u1i8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, int64_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(int64_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Globalization.Unicode.Level2Map::.ctor(System.Byte,System.Byte)
static void __M2N_vi4u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Security.AccessControl.DiscretionaryAcl::.ctor(System.Boolean,System.Boolean,System.Int32)
static void __M2N_vi4u1u1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.Security.AccessControl.CommonSecurityDescriptor::.ctor(System.Boolean,System.Boolean,System.Byte[],System.Int32)
static void __M2N_vi4u1u1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Security.AccessControl.CommonSecurityDescriptor::.ctor(System.Boolean,System.Boolean,System.Security.AccessControl.ControlFlags,System.Security.Principal.SecurityIdentifier,System.Security.Principal.SecurityIdentifier,System.Security.AccessControl.SystemAcl,System.Security.AccessControl.DiscretionaryAcl)
static void __M2N_vi4u1u1i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.IO.Stream/ReadWriteTask::.ctor(System.Boolean,System.Boolean,System.Func`2<System.Object,System.Int32>,System.Object,System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.AsyncCallback)
static void __M2N_vi4u1u1i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), *(int32_t*)(localVarBase+argVarIndexs[9]), method);
}


// System.Void Mono.Security.Interface.ValidationResult::.ctor(System.Boolean,System.Boolean,System.Int32,System.Nullable`1<Mono.Security.Interface.MonoSslPolicyErrors>)
static void __M2N_vi4u1u1i4S8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, ValueTypeSize<8> __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
static void __M2N_vi4u1u1i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.UTF32Encoding::.ctor(System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
static void __M2N_vi4u1u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Runtime.CompilerServices.DecimalConstantAttribute::.ctor(System.Byte,System.Byte,System.UInt32,System.UInt32,System.UInt32)
static void __M2N_vi4u1u1u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, uint32_t __arg3, uint32_t __arg4, uint32_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(uint32_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
static void __M2N_vi4u1u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint8_t __arg1, uint32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.TermInfoDriver::WriteSpecialKey(System.Char)
static void __M2N_vi4u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.String::.ctor(System.Char,System.Int32)
static void __M2N_vi4u2i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Globalization.Bootstring::.ctor(System.Char,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __M2N_vi4u2i4i4i4i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4u2i4u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, int32_t __arg2, uint8_t __arg3, uint8_t __arg4, uint8_t __arg5, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), *(uint8_t*)(localVarBase+argVarIndexs[5]), method);
}


// System.Void System.Text.RegularExpressions.RegexFC::.ctor(System.Char,System.Boolean,System.Boolean,System.Boolean)
static void __M2N_vi4u2u1u1u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint8_t __arg2, uint8_t __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Text.RegularExpressions.RegexCharClass::AddRange(System.Char,System.Char)
static void __M2N_vi4u2u2(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint16_t*)(localVarBase+argVarIndexs[1]), *(uint16_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
static void __M2N_vi4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/LockedStack::Trim(System.UInt32,System.Int32,System.Buffers.TlsOverPerCoreLockedStacksArrayPool`1/MemoryPressure<T>,System.Int32)
static void __M2N_vi4u4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void System.Runtime.InteropServices._Activator::Invoke(System.UInt32,System.Guid&,System.UInt32,System.Int16,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
static void __M2N_vi4u4i4u4i2i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, int32_t __arg2, uint32_t __arg3, int16_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), *(int16_t*)(localVarBase+argVarIndexs[4]), *(int32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(int32_t*)(localVarBase+argVarIndexs[7]), *(int32_t*)(localVarBase+argVarIndexs[8]), method);
}


// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
static void __M2N_vi4u4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint8_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint8_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void System.Runtime.InteropServices._Activator::GetTypeInfo(System.UInt32,System.UInt32,System.IntPtr)
static void __M2N_vi4u4u4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
static void __M2N_vi4u4u4i4u4u4i4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, int32_t __arg3, uint32_t __arg4, uint32_t __arg5, int32_t __arg6, uint32_t __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(uint32_t*)(localVarBase+argVarIndexs[4]), *(uint32_t*)(localVarBase+argVarIndexs[5]), *(int32_t*)(localVarBase+argVarIndexs[6]), *(uint32_t*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void System.Decimal/DecCalc/PowerOvfl::.ctor(System.UInt32,System.UInt32,System.UInt32)
static void __M2N_vi4u4u4u4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, uint32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint32_t*)(localVarBase+argVarIndexs[1]), *(uint32_t*)(localVarBase+argVarIndexs[2]), *(uint32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.SpanHelpers::ClearWithoutReferences(System.Byte&,System.UInt64)
static void __M2N_vi4u8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int32_t __arg0, uint64_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int32_t*)(localVarBase+argVarIndexs[0]), *(uint64_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void System.GC::AddMemoryPressure(System.Int64)
static void __M2N_vi8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(int64_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(int64_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.Screen::set_brightness(System.Single)
static void __M2N_vr4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
static void __M2N_vr4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, float __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
static void __M2N_vr4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, float __arg1, float __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
static void __M2N_vr4r4r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(float __arg0, float __arg1, float __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(float*)(localVarBase+argVarIndexs[0]), *(float*)(localVarBase+argVarIndexs[1]), *(float*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void System.TypedReference::SetTypedReference(System.TypedReference,System.Object)
static void __M2N_vS12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Unity.Collections.NativeArray`1::Copy(Unity.Collections.NativeArray`1<T>,T[],System.Int32)
static void __M2N_vS12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void Unity.Collections.NativeArray`1::Copy(Unity.Collections.NativeArray`1<T>,System.Int32,T[],System.Int32,System.Int32)
static void __M2N_vS12i4i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Unity.Collections.NativeArray`1::Copy(Unity.Collections.NativeArray`1<T>,System.Int32,Unity.Collections.NativeArray`1<T>,System.Int32,System.Int32)
static void __M2N_vS12i4S12i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), *(int32_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void Unity.Collections.NativeArray`1::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>)
static void __M2N_vS12S12(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void Unity.Collections.NativeArray`1::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,System.Int32)
static void __M2N_vS12S12i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
static void __M2N_vS12S12S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
static void __M2N_vS12S12S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
static void __M2N_vS12S12S16r4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<16> __arg2, float __arg3, uint8_t __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<12>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<12>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), *(uint8_t*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
static void __M2N_vS16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
static void __M2N_vS16i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
static void __M2N_vS16i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean)
static void __M2N_vS16i4i4u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
static void __M2N_vS16i4i4u1r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, float __arg4, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), method);
}


// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single,UnityEngine.Color,System.Single,System.Single)
static void __M2N_vS16i4i4u1r4S16r4r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, float __arg4, ValueTypeSize<16> __arg5, float __arg6, float __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[5]), *(float*)(localVarBase+argVarIndexs[6]), *(float*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single,UnityEngine.Color,UnityEngine.Vector4,System.Single)
static void __M2N_vS16i4i4u1r4S16S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, float __arg4, ValueTypeSize<16> __arg5, ValueTypeSize<16> __arg6, float __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), *(float*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single,UnityEngine.Color,UnityEngine.Vector4,UnityEngine.Vector4)
static void __M2N_vS16i4i4u1r4S16S16S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, float __arg4, ValueTypeSize<16> __arg5, ValueTypeSize<16> __arg6, ValueTypeSize<16> __arg7, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), *(float*)(localVarBase+argVarIndexs[4]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[5]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[6]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[7]), method);
}


// System.Void UnityEngine.GUI::DrawTextureWithTexCoords(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect)
static void __M2N_vS16i4S16(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.GUI::DrawTextureWithTexCoords(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Boolean)
static void __M2N_vS16i4S16u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.GUI::BeginClip(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
static void __M2N_vS16S8S8u1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<16> __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, uint8_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<16>*)(localVarBase+argVarIndexs[0]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<8>*)(localVarBase+argVarIndexs[2]), *(uint8_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.Gizmos::set_matrix(UnityEngine.Matrix4x4)
static void __M2N_vS64(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<64> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<64>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void System.Security.Cryptography.CryptographicOperations::ZeroMemory(System.Span`1<System.Byte>)
static void __M2N_vS8(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(ValueTypeSize<8> __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(ValueTypeSize<8>*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.AssetBundle::UnloadAllAssetBundles(System.Boolean)
static void __M2N_vu1(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), method);
}


// System.Void UnityEngine.Debug::Assert(System.Boolean,UnityEngine.Object)
static void __M2N_vu1i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int32_t __arg1, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), method);
}


// System.Void UnityEngine.Debug::Assert(System.Boolean,System.Object,UnityEngine.Object)
static void __M2N_vu1i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), method);
}


// System.Void UnityEngine.Debug::AssertFormat(System.Boolean,UnityEngine.Object,System.String,System.Object[])
static void __M2N_vu1i4i4i4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(int32_t*)(localVarBase+argVarIndexs[1]), *(int32_t*)(localVarBase+argVarIndexs[2]), *(int32_t*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
static void __M2N_vu1u1S16r4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint8_t __arg0, uint8_t __arg1, ValueTypeSize<16> __arg2, float __arg3, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint8_t*)(localVarBase+argVarIndexs[0]), *(uint8_t*)(localVarBase+argVarIndexs[1]), *(ValueTypeSize<16>*)(localVarBase+argVarIndexs[2]), *(float*)(localVarBase+argVarIndexs[3]), method);
}


// System.Void UnityEngine.AssetBundle::set_memoryBudgetKB(System.UInt32)
static void __M2N_vu4(const MethodInfo* method, uint16_t* argVarIndexs, StackObject* localVarBase, void* ret)
{
    typedef void (*NativeMethod)(uint32_t __arg0, const MethodInfo* method);
    ((NativeMethod)(method->methodPointerCallByInterp))(*(uint32_t*)(localVarBase+argVarIndexs[0]), method);
}


Managed2NativeMethodInfo hybridclr::interpreter::g_managed2nativeStub[] = 
{

	{"C16", __M2N_C16},
	{"C16C16", __M2N_C16C16},
	{"C16C16C16", __M2N_C16C16C16},
	{"C16C16C16C16", __M2N_C16C16C16C16},
	{"C16C16i4", __M2N_C16C16i4},
	{"C16C16i4i4", __M2N_C16C16i4i4},
	{"C16C8", __M2N_C16C8},
	{"C16i1", __M2N_C16i1},
	{"C16i2", __M2N_C16i2},
	{"C16i4", __M2N_C16i4},
	{"C16i4C16", __M2N_C16i4C16},
	{"C16i4i4", __M2N_C16i4i4},
	{"C16i4i4i4", __M2N_C16i4i4i4},
	{"C16i8", __M2N_C16i8},
	{"C16r4", __M2N_C16r4},
	{"C16r8", __M2N_C16r8},
	{"C16u1", __M2N_C16u1},
	{"C16u2", __M2N_C16u2},
	{"C16u4", __M2N_C16u4},
	{"C16u8", __M2N_C16u8},
	{"C24C8i4i4", __M2N_C24C8i4i4},
	{"C24C8i4i4i4", __M2N_C24C8i4i4i4},
	{"C24i4", __M2N_C24i4},
	{"C48", __M2N_C48},
	{"C8", __M2N_C8},
	{"C8C8", __M2N_C8C8},
	{"C8C8C8", __M2N_C8C8C8},
	{"C8C8i4", __M2N_C8C8i4},
	{"C8i4", __M2N_C8i4},
	{"C8i4C8", __M2N_C8i4C8},
	{"C8i4C8i4i4", __M2N_C8i4C8i4i4},
	{"C8i4i4", __M2N_C8i4i4},
	{"C8i4i4i4", __M2N_C8i4i4i4},
	{"C8i4i4i4i4", __M2N_C8i4i4i4i4},
	{"C8i4i4i4i4i4i4i4i4i4", __M2N_C8i4i4i4i4i4i4i4i4i4},
	{"C8i4i8", __M2N_C8i4i8},
	{"C8i4r8", __M2N_C8i4r8},
	{"C8i8", __M2N_C8i8},
	{"C8r8", __M2N_C8r8},
	{"i1", __M2N_i1},
	{"i1C16", __M2N_i1C16},
	{"i1i1", __M2N_i1i1},
	{"i1i1i1", __M2N_i1i1i1},
	{"i1i1i1i1", __M2N_i1i1i1i1},
	{"i1i2", __M2N_i1i2},
	{"i1i4", __M2N_i1i4},
	{"i1i4i4", __M2N_i1i4i4},
	{"i1i4i4i4", __M2N_i1i4i4i4},
	{"i1i8", __M2N_i1i8},
	{"i1r4", __M2N_i1r4},
	{"i1r8", __M2N_i1r8},
	{"i1u1", __M2N_i1u1},
	{"i1u2", __M2N_i1u2},
	{"i1u4", __M2N_i1u4},
	{"i1u8", __M2N_i1u8},
	{"i2", __M2N_i2},
	{"i2C16", __M2N_i2C16},
	{"i2i1", __M2N_i2i1},
	{"i2i2", __M2N_i2i2},
	{"i2i2i2", __M2N_i2i2i2},
	{"i2i2i2i2", __M2N_i2i2i2i2},
	{"i2i4", __M2N_i2i4},
	{"i2i4i2", __M2N_i2i4i2},
	{"i2i4i4", __M2N_i2i4i4},
	{"i2i4i4i4", __M2N_i2i4i4i4},
	{"i2i8", __M2N_i2i8},
	{"i2r4", __M2N_i2r4},
	{"i2r8", __M2N_i2r8},
	{"i2u1", __M2N_i2u1},
	{"i2u2", __M2N_i2u2},
	{"i2u4", __M2N_i2u4},
	{"i2u8", __M2N_i2u8},
	{"i4", __M2N_i4},
	{"i4C16", __M2N_i4C16},
	{"i4C16S8i4", __M2N_i4C16S8i4},
	{"i4C8", __M2N_i4C8},
	{"i4C8C8", __M2N_i4C8C8},
	{"i4i1", __M2N_i4i1},
	{"i4i2", __M2N_i4i2},
	{"i4i4", __M2N_i4i4},
	{"i4i4C16", __M2N_i4i4C16},
	{"i4i4C16u4", __M2N_i4i4C16u4},
	{"i4i4C24u4", __M2N_i4i4C24u4},
	{"i4i4C8", __M2N_i4i4C8},
	{"i4i4C8i4i4", __M2N_i4i4C8i4i4},
	{"i4i4C8i4i4i4", __M2N_i4i4C8i4i4i4},
	{"i4i4C8u1", __M2N_i4i4C8u1},
	{"i4i4i1", __M2N_i4i4i1},
	{"i4i4i2", __M2N_i4i4i2},
	{"i4i4i4", __M2N_i4i4i4},
	{"i4i4i4C16", __M2N_i4i4i4C16},
	{"i4i4i4i1", __M2N_i4i4i4i1},
	{"i4i4i4i2", __M2N_i4i4i4i2},
	{"i4i4i4i4", __M2N_i4i4i4i4},
	{"i4i4i4i4C8u1", __M2N_i4i4i4i4C8u1},
	{"i4i4i4i4i4", __M2N_i4i4i4i4i4},
	{"i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4", __M2N_i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4u1C8", __M2N_i4i4i4i4i4i4i4i4u1C8},
	{"i4i4i4i4i4i4i4u1", __M2N_i4i4i4i4i4i4i4u1},
	{"i4i4i4i4i4i4i4u4u4u1i4u1", __M2N_i4i4i4i4i4i4i4u4u4u1i4u1},
	{"i4i4i4i4i4i4u1", __M2N_i4i4i4i4i4i4u1},
	{"i4i4i4i4i4i4u1i4", __M2N_i4i4i4i4i4i4u1i4},
	{"i4i4i4i4i4S108i4", __M2N_i4i4i4i4i4S108i4},
	{"i4i4i4i4i4S12i4", __M2N_i4i4i4i4i4S12i4},
	{"i4i4i4i4i4S16i4", __M2N_i4i4i4i4i4S16i4},
	{"i4i4i4i4i4S4", __M2N_i4i4i4i4i4S4},
	{"i4i4i4i4i4S4i4", __M2N_i4i4i4i4i4S4i4},
	{"i4i4i4i4i4S8i4", __M2N_i4i4i4i4i4S8i4},
	{"i4i4i4i4i4u1", __M2N_i4i4i4i4i4u1},
	{"i4i4i4i4i4u1i4", __M2N_i4i4i4i4i4u1i4},
	{"i4i4i4i4i4u1i4i4", __M2N_i4i4i4i4i4u1i4i4},
	{"i4i4i4i4i4u8i4", __M2N_i4i4i4i4i4u8i4},
	{"i4i4i4i4S108i4", __M2N_i4i4i4i4S108i4},
	{"i4i4i4i4S12i4", __M2N_i4i4i4i4S12i4},
	{"i4i4i4i4S16i4", __M2N_i4i4i4i4S16i4},
	{"i4i4i4i4S4", __M2N_i4i4i4i4S4},
	{"i4i4i4i4S4i4", __M2N_i4i4i4i4S4i4},
	{"i4i4i4i4S4i4i4", __M2N_i4i4i4i4S4i4i4},
	{"i4i4i4i4S8i4", __M2N_i4i4i4i4S8i4},
	{"i4i4i4i4S8u1", __M2N_i4i4i4i4S8u1},
	{"i4i4i4i4u1", __M2N_i4i4i4i4u1},
	{"i4i4i4i4u1i4", __M2N_i4i4i4i4u1i4},
	{"i4i4i4i4u1i4i4", __M2N_i4i4i4i4u1i4i4},
	{"i4i4i4i4u1i4i4i4i4i4", __M2N_i4i4i4i4u1i4i4i4i4i4},
	{"i4i4i4i4u1i4i4i4i4i4i4", __M2N_i4i4i4i4u1i4i4i4i4i4i4},
	{"i4i4i4i4u1u1", __M2N_i4i4i4i4u1u1},
	{"i4i4i4i4u8i4", __M2N_i4i4i4i4u8i4},
	{"i4i4i4i8", __M2N_i4i4i4i8},
	{"i4i4i4r4", __M2N_i4i4i4r4},
	{"i4i4i4r8", __M2N_i4i4i4r8},
	{"i4i4i4S12i4i4", __M2N_i4i4i4S12i4i4},
	{"i4i4i4S16", __M2N_i4i4i4S16},
	{"i4i4i4S16u4i4", __M2N_i4i4i4S16u4i4},
	{"i4i4i4S4", __M2N_i4i4i4S4},
	{"i4i4i4S4i4i4", __M2N_i4i4i4S4i4i4},
	{"i4i4i4S8", __M2N_i4i4i4S8},
	{"i4i4i4S8i4", __M2N_i4i4i4S8i4},
	{"i4i4i4S8u1", __M2N_i4i4i4S8u1},
	{"i4i4i4u1", __M2N_i4i4i4u1},
	{"i4i4i4u1i4", __M2N_i4i4i4u1i4},
	{"i4i4i4u1i4i4", __M2N_i4i4i4u1i4i4},
	{"i4i4i4u1i4i4i4i4i4", __M2N_i4i4i4u1i4i4i4i4i4},
	{"i4i4i4u1i4i4i4i4i4i4", __M2N_i4i4i4u1i4i4i4i4i4i4},
	{"i4i4i4u1u1", __M2N_i4i4i4u1u1},
	{"i4i4i4u1u1u1", __M2N_i4i4i4u1u1u1},
	{"i4i4i4u1u1u1u1i4i4", __M2N_i4i4i4u1u1u1u1i4i4},
	{"i4i4i4u2", __M2N_i4i4i4u2},
	{"i4i4i4u2i4", __M2N_i4i4i4u2i4},
	{"i4i4i4u2i4i4i4", __M2N_i4i4i4u2i4i4i4},
	{"i4i4i4u4", __M2N_i4i4i4u4},
	{"i4i4i4u8", __M2N_i4i4i4u8},
	{"i4i4i8", __M2N_i4i4i8},
	{"i4i4i8i4i4", __M2N_i4i4i8i4i4},
	{"i4i4i8i8", __M2N_i4i4i8i8},
	{"i4i4i8i8i8", __M2N_i4i4i8i8i8},
	{"i4i4r4", __M2N_i4i4r4},
	{"i4i4r4i4i4", __M2N_i4i4r4i4i4},
	{"i4i4r8", __M2N_i4i4r8},
	{"i4i4S1", __M2N_i4i4S1},
	{"i4i4S108", __M2N_i4i4S108},
	{"i4i4S108i4", __M2N_i4i4S108i4},
	{"i4i4S108i4i4", __M2N_i4i4S108i4i4},
	{"i4i4S108S108", __M2N_i4i4S108S108},
	{"i4i4S12", __M2N_i4i4S12},
	{"i4i4S12i4", __M2N_i4i4S12i4},
	{"i4i4S12i4i4", __M2N_i4i4S12i4i4},
	{"i4i4S12S12", __M2N_i4i4S12S12},
	{"i4i4S12S16", __M2N_i4i4S12S16},
	{"i4i4S12S16i4", __M2N_i4i4S12S16i4},
	{"i4i4S12S4", __M2N_i4i4S12S4},
	{"i4i4S16", __M2N_i4i4S16},
	{"i4i4S16i4", __M2N_i4i4S16i4},
	{"i4i4S16i4i4", __M2N_i4i4S16i4i4},
	{"i4i4S16i4S8", __M2N_i4i4S16i4S8},
	{"i4i4S16S16", __M2N_i4i4S16S16},
	{"i4i4S16S8r4u4i4", __M2N_i4i4S16S8r4u4i4},
	{"i4i4S16S8r4u4i4S16", __M2N_i4i4S16S8r4u4i4S16},
	{"i4i4S16S8r4u4i4S16u1", __M2N_i4i4S16S8r4u4i4S16u1},
	{"i4i4S1S1", __M2N_i4i4S1S1},
	{"i4i4S20", __M2N_i4i4S20},
	{"i4i4S20i4", __M2N_i4i4S20i4},
	{"i4i4S24", __M2N_i4i4S24},
	{"i4i4S28", __M2N_i4i4S28},
	{"i4i4S28i4", __M2N_i4i4S28i4},
	{"i4i4S32", __M2N_i4i4S32},
	{"i4i4S36", __M2N_i4i4S36},
	{"i4i4S36i4", __M2N_i4i4S36i4},
	{"i4i4S4", __M2N_i4i4S4},
	{"i4i4S4i4", __M2N_i4i4S4i4},
	{"i4i4S4i4i4", __M2N_i4i4S4i4i4},
	{"i4i4S4S4", __M2N_i4i4S4S4},
	{"i4i4S8", __M2N_i4i4S8},
	{"i4i4S8i4", __M2N_i4i4S8i4},
	{"i4i4S8i4i4", __M2N_i4i4S8i4i4},
	{"i4i4S8S12i4i4i4", __M2N_i4i4S8S12i4i4i4},
	{"i4i4S8S12u8u8i4", __M2N_i4i4S8S12u8u8i4},
	{"i4i4S8S8", __M2N_i4i4S8S8},
	{"i4i4S8S8u1", __M2N_i4i4S8S8u1},
	{"i4i4u1", __M2N_i4i4u1},
	{"i4i4u1i4", __M2N_i4i4u1i4},
	{"i4i4u1i4i4", __M2N_i4i4u1i4i4},
	{"i4i4u1i4i4i4i4i4i4i4i4u1i4", __M2N_i4i4u1i4i4i4i4i4i4i4i4u1i4},
	{"i4i4u1i4i4u1", __M2N_i4i4u1i4i4u1},
	{"i4i4u1i4u1", __M2N_i4i4u1i4u1},
	{"i4i4u1u1", __M2N_i4i4u1u1},
	{"i4i4u2", __M2N_i4i4u2},
	{"i4i4u2i4", __M2N_i4i4u2i4},
	{"i4i4u2i4i4", __M2N_i4i4u2i4i4},
	{"i4i4u2u2", __M2N_i4i4u2u2},
	{"i4i4u2u2i4", __M2N_i4i4u2u2i4},
	{"i4i4u2u2i4i4", __M2N_i4i4u2u2i4i4},
	{"i4i4u4", __M2N_i4i4u4},
	{"i4i4u4i4", __M2N_i4i4u4i4},
	{"i4i4u4u4", __M2N_i4i4u4u4},
	{"i4i4u4u8", __M2N_i4i4u4u8},
	{"i4i4u8", __M2N_i4i4u8},
	{"i4i4u8u8", __M2N_i4i4u8u8},
	{"i4i8", __M2N_i4i8},
	{"i4i8i4i4", __M2N_i4i8i4i4},
	{"i4i8S8i4", __M2N_i4i8S8i4},
	{"i4r4", __M2N_i4r4},
	{"i4r4i4i4", __M2N_i4r4i4i4},
	{"i4r8", __M2N_i4r8},
	{"i4r8i4i4", __M2N_i4r8i4i4},
	{"i4S12", __M2N_i4S12},
	{"i4S16", __M2N_i4S16},
	{"i4S16i4", __M2N_i4S16i4},
	{"i4S16i4i4", __M2N_i4S16i4i4},
	{"i4S16i4i4i4", __M2N_i4S16i4i4i4},
	{"i4S16i4i4i4i4", __M2N_i4S16i4i4i4i4},
	{"i4S16i4u1", __M2N_i4S16i4u1},
	{"i4S16i4u2", __M2N_i4S16i4u2},
	{"i4S16i4u2i4", __M2N_i4S16i4u2i4},
	{"i4S16i4u2i4i4", __M2N_i4S16i4u2i4i4},
	{"i4S16u1", __M2N_i4S16u1},
	{"i4S4", __M2N_i4S4},
	{"i4S4S4", __M2N_i4S4S4},
	{"i4S52", __M2N_i4S52},
	{"i4S8", __M2N_i4S8},
	{"i4S8i4", __M2N_i4S8i4},
	{"i4S8i4i4", __M2N_i4S8i4i4},
	{"i4S8i4i4i4", __M2N_i4S8i4i4i4},
	{"i4S8S8", __M2N_i4S8S8},
	{"i4S8S8S8", __M2N_i4S8S8S8},
	{"i4S8u1", __M2N_i4S8u1},
	{"i4S8u2", __M2N_i4S8u2},
	{"i4S8u8", __M2N_i4S8u8},
	{"i4u1", __M2N_i4u1},
	{"i4u1u1i4i4", __M2N_i4u1u1i4i4},
	{"i4u2", __M2N_i4u2},
	{"i4u2i4", __M2N_i4u2i4},
	{"i4u2i4i4i4", __M2N_i4u2i4i4i4},
	{"i4u2u2", __M2N_i4u2u2},
	{"i4u4", __M2N_i4u4},
	{"i4u4i4", __M2N_i4u4i4},
	{"i4u4S8i4", __M2N_i4u4S8i4},
	{"i4u8", __M2N_i4u8},
	{"i4u8S8i4", __M2N_i4u8S8i4},
	{"i8", __M2N_i8},
	{"i8C16", __M2N_i8C16},
	{"i8i1", __M2N_i8i1},
	{"i8i2", __M2N_i8i2},
	{"i8i4", __M2N_i8i4},
	{"i8i4i4", __M2N_i8i4i4},
	{"i8i4i4i4", __M2N_i8i4i4i4},
	{"i8i4i4i4i8", __M2N_i8i4i4i4i8},
	{"i8i4i8", __M2N_i8i4i8},
	{"i8i4i8i4", __M2N_i8i4i8i4},
	{"i8i4i8i4i4", __M2N_i8i4i8i4i4},
	{"i8i4i8i8", __M2N_i8i4i8i8},
	{"i8i8", __M2N_i8i8},
	{"i8i8i8", __M2N_i8i8i8},
	{"i8i8i8i4", __M2N_i8i8i8i4},
	{"i8i8i8i8", __M2N_i8i8i8i8},
	{"i8r4", __M2N_i8r4},
	{"i8r8", __M2N_i8r8},
	{"i8S8i4i4i4", __M2N_i8S8i4i4i4},
	{"i8u1", __M2N_i8u1},
	{"i8u2", __M2N_i8u2},
	{"i8u4", __M2N_i8u4},
	{"i8u8", __M2N_i8u8},
	{"r4", __M2N_r4},
	{"r4C16", __M2N_r4C16},
	{"r4i1", __M2N_r4i1},
	{"r4i2", __M2N_r4i2},
	{"r4i4", __M2N_r4i4},
	{"r4i4i4", __M2N_r4i4i4},
	{"r4i4i4i4", __M2N_r4i4i4i4},
	{"r4i4i4r4", __M2N_r4i4i4r4},
	{"r4i4i4S88", __M2N_r4i4i4S88},
	{"r4i4r4", __M2N_r4i4r4},
	{"r4i4r4r4", __M2N_r4i4r4r4},
	{"r4i8", __M2N_r4i8},
	{"r4r4", __M2N_r4r4},
	{"r4r4r4", __M2N_r4r4r4},
	{"r4r4r4i4r4", __M2N_r4r4r4i4r4},
	{"r4r4r4i4r4r4", __M2N_r4r4r4i4r4r4},
	{"r4r4r4i4r4r4r4", __M2N_r4r4r4i4r4r4r4},
	{"r4r4r4r4", __M2N_r4r4r4r4},
	{"r4r8", __M2N_r4r8},
	{"r4S12", __M2N_r4S12},
	{"r4S12S12", __M2N_r4S12S12},
	{"r4S12S12S12", __M2N_r4S12S12S12},
	{"r4S16r4r4r4", __M2N_r4S16r4r4r4},
	{"r4S16r4r4r4i4i4", __M2N_r4S16r4r4r4i4i4},
	{"r4S16r4r4r4i4i4i4", __M2N_r4S16r4r4r4i4i4i4},
	{"r4S16r4r4r4r4", __M2N_r4S16r4r4r4r4},
	{"r4S16r4r4r4r4i4", __M2N_r4S16r4r4r4r4i4},
	{"r4S16r4r4r4r4i4i4u1i4i4", __M2N_r4S16r4r4r4r4i4i4u1i4i4},
	{"r4S16S16", __M2N_r4S16S16},
	{"r4S64", __M2N_r4S64},
	{"r4S8S8", __M2N_r4S8S8},
	{"r4u1", __M2N_r4u1},
	{"r4u2", __M2N_r4u2},
	{"r4u4", __M2N_r4u4},
	{"r4u8", __M2N_r4u8},
	{"r8", __M2N_r8},
	{"r8C16", __M2N_r8C16},
	{"r8i1", __M2N_r8i1},
	{"r8i2", __M2N_r8i2},
	{"r8i4", __M2N_r8i4},
	{"r8i4i4", __M2N_r8i4i4},
	{"r8i4i4i4", __M2N_r8i4i4i4},
	{"r8i4r8", __M2N_r8i4r8},
	{"r8i4r8r8", __M2N_r8i4r8r8},
	{"r8i8", __M2N_r8i8},
	{"r8r4", __M2N_r8r4},
	{"r8r8", __M2N_r8r8},
	{"r8r8i4", __M2N_r8r8i4},
	{"r8r8i4i4", __M2N_r8r8i4i4},
	{"r8r8r8", __M2N_r8r8r8},
	{"r8r8r8r8", __M2N_r8r8r8r8},
	{"r8u1", __M2N_r8u1},
	{"r8u2", __M2N_r8u2},
	{"r8u4", __M2N_r8u4},
	{"r8u8", __M2N_r8u8},
	{"S108i4", __M2N_S108i4},
	{"S108i4i4", __M2N_S108i4i4},
	{"S112i4", __M2N_S112i4},
	{"S12", __M2N_S12},
	{"S120i4", __M2N_S120i4},
	{"S12i4", __M2N_S12i4},
	{"S12i4i4", __M2N_S12i4i4},
	{"S12i4i4i4", __M2N_S12i4i4i4},
	{"S12i4i4i4u1u1", __M2N_S12i4i4i4u1u1},
	{"S12i4r4", __M2N_S12i4r4},
	{"S12i4S12", __M2N_S12i4S12},
	{"S12i4S12i4", __M2N_S12i4S12i4},
	{"S12i4S12S4", __M2N_S12i4S12S4},
	{"S12i4u1", __M2N_S12i4u1},
	{"S12r4S12", __M2N_S12r4S12},
	{"S12S12", __M2N_S12S12},
	{"S12S12i4i4", __M2N_S12S12i4i4},
	{"S12S12r4", __M2N_S12S12r4},
	{"S12S12S12", __M2N_S12S12S12},
	{"S12S12S12i4r4", __M2N_S12S12S12i4r4},
	{"S12S12S12i4r4r4", __M2N_S12S12S12i4r4r4},
	{"S12S12S12i4r4r4r4", __M2N_S12S12S12i4r4r4r4},
	{"S12S12S12r4", __M2N_S12S12S12r4},
	{"S12S12S12r4r4", __M2N_S12S12S12r4r4},
	{"S12S16", __M2N_S12S16},
	{"S12S16S12", __M2N_S12S16S12},
	{"S12S8", __M2N_S12S8},
	{"S12u1", __M2N_S12u1},
	{"S16", __M2N_S16},
	{"S16i4", __M2N_S16i4},
	{"S16i4i4", __M2N_S16i4i4},
	{"S16i4r4r4", __M2N_S16i4r4r4},
	{"S16i4S16", __M2N_S16i4S16},
	{"S16i4S16i4i4", __M2N_S16i4S16i4i4},
	{"S16i4S16i4i4i4", __M2N_S16i4S16i4i4i4},
	{"S16r4", __M2N_S16r4},
	{"S16r4r4r4", __M2N_S16r4r4r4},
	{"S16r4r4r4r4", __M2N_S16r4r4r4r4},
	{"S16r4S12", __M2N_S16r4S12},
	{"S16S12", __M2N_S16S12},
	{"S16S12r4", __M2N_S16S12r4},
	{"S16S12S12", __M2N_S16S12S12},
	{"S16S16", __M2N_S16S16},
	{"S16S16i4i4", __M2N_S16S16i4i4},
	{"S16S16r4", __M2N_S16S16r4},
	{"S16S16S16", __M2N_S16S16S16},
	{"S16S16S16r4", __M2N_S16S16S16r4},
	{"S16S4", __M2N_S16S4},
	{"S16S64S16", __M2N_S16S64S16},
	{"S16S8", __M2N_S16S8},
	{"S1i4", __M2N_S1i4},
	{"S1i4i4", __M2N_S1i4i4},
	{"S1i4i4i4", __M2N_S1i4i4i4},
	{"S20", __M2N_S20},
	{"S20i4", __M2N_S20i4},
	{"S24i4", __M2N_S24i4},
	{"S24i4i4", __M2N_S24i4i4},
	{"S24i4S12", __M2N_S24i4S12},
	{"S24i4S12i4", __M2N_S24i4S12i4},
	{"S28i4", __M2N_S28i4},
	{"S2i4", __M2N_S2i4},
	{"S32i4", __M2N_S32i4},
	{"S32i4u1", __M2N_S32i4u1},
	{"S36i4", __M2N_S36i4},
	{"S4", __M2N_S4},
	{"S48", __M2N_S48},
	{"S48i4", __M2N_S48i4},
	{"S4i4", __M2N_S4i4},
	{"S4i4i4", __M2N_S4i4i4},
	{"S4i4S8", __M2N_S4i4S8},
	{"S4S16", __M2N_S4S16},
	{"S52i4", __M2N_S52i4},
	{"S64", __M2N_S64},
	{"S64i4", __M2N_S64i4},
	{"S64r4r4r4r4", __M2N_S64r4r4r4r4},
	{"S64r4r4r4r4r4r4", __M2N_S64r4r4r4r4r4r4},
	{"S64S12", __M2N_S64S12},
	{"S64S12S12S12", __M2N_S64S12S12S12},
	{"S64S12S16S12", __M2N_S64S12S16S12},
	{"S64S16", __M2N_S64S16},
	{"S64S24", __M2N_S64S24},
	{"S64S64", __M2N_S64S64},
	{"S64S64S64", __M2N_S64S64S64},
	{"S68i4", __M2N_S68i4},
	{"S8", __M2N_S8},
	{"S8i4", __M2N_S8i4},
	{"S8i4i4", __M2N_S8i4i4},
	{"S8i4i4i4", __M2N_S8i4i4i4},
	{"S8i4i4i4i4", __M2N_S8i4i4i4i4},
	{"S8i4i4S144", __M2N_S8i4i4S144},
	{"S8i4i4u1", __M2N_S8i4i4u1},
	{"S8i4S12S4", __M2N_S8i4S12S4},
	{"S8i4S16i4i4", __M2N_S8i4S16i4i4},
	{"S8i4S8", __M2N_S8i4S8},
	{"S8i4S8i4", __M2N_S8i4S8i4},
	{"S8i4u1", __M2N_S8i4u1},
	{"S8i8", __M2N_S8i8},
	{"S8r4S8", __M2N_S8r4S8},
	{"S8S12", __M2N_S8S12},
	{"S8S16S8", __M2N_S8S16S8},
	{"S8S16S8S16", __M2N_S8S16S8S16},
	{"S8S16S8S16i4i4", __M2N_S8S16S8S16i4i4},
	{"S8S16S8S16u1u1", __M2N_S8S16S8S16u1u1},
	{"S8S16S8S16u1u1i4i4", __M2N_S8S16S8S16u1u1i4i4},
	{"S8S16S8S16u1u1i4i4i4", __M2N_S8S16S8S16u1u1i4i4i4},
	{"S8S8", __M2N_S8S8},
	{"S8S8i4", __M2N_S8S8i4},
	{"S8S8r4", __M2N_S8S8r4},
	{"S8S8S8", __M2N_S8S8S8},
	{"S8S8S8r4", __M2N_S8S8S8r4},
	{"S8u1", __M2N_S8u1},
	{"S96i4", __M2N_S96i4},
	{"S96i4i4", __M2N_S96i4i4},
	{"u1", __M2N_u1},
	{"u1C16", __M2N_u1C16},
	{"u1C16C16", __M2N_u1C16C16},
	{"u1C16S8i4S8i4", __M2N_u1C16S8i4S8i4},
	{"u1C24C24", __M2N_u1C24C24},
	{"u1C8C8", __M2N_u1C8C8},
	{"u1i1", __M2N_u1i1},
	{"u1i2", __M2N_u1i2},
	{"u1i4", __M2N_u1i4},
	{"u1i4C16", __M2N_u1i4C16},
	{"u1i4C24", __M2N_u1i4C24},
	{"u1i4C48", __M2N_u1i4C48},
	{"u1i4C8", __M2N_u1i4C8},
	{"u1i4C8C8", __M2N_u1i4C8C8},
	{"u1i4i1", __M2N_u1i4i1},
	{"u1i4i2", __M2N_u1i4i2},
	{"u1i4i4", __M2N_u1i4i4},
	{"u1i4i4i4", __M2N_u1i4i4i4},
	{"u1i4i4i4C8", __M2N_u1i4i4i4C8},
	{"u1i4i4i4i4", __M2N_u1i4i4i4i4},
	{"u1i4i4i4i4i4", __M2N_u1i4i4i4i4i4},
	{"u1i4i4i4i4i4i4", __M2N_u1i4i4i4i4i4i4},
	{"u1i4i4i4i4u1", __M2N_u1i4i4i4i4u1},
	{"u1i4i4i8", __M2N_u1i4i4i8},
	{"u1i4i4S4", __M2N_u1i4i4S4},
	{"u1i4i4S8", __M2N_u1i4i4S8},
	{"u1i4i4S88", __M2N_u1i4i4S88},
	{"u1i4i4S88i4", __M2N_u1i4i4S88i4},
	{"u1i4i4u1", __M2N_u1i4i4u1},
	{"u1i4i4u1i4", __M2N_u1i4i4u1i4},
	{"u1i4i4u8", __M2N_u1i4i4u8},
	{"u1i4i8", __M2N_u1i4i8},
	{"u1i4i8i4", __M2N_u1i4i8i4},
	{"u1i4r4", __M2N_u1i4r4},
	{"u1i4r8", __M2N_u1i4r8},
	{"u1i4S1", __M2N_u1i4S1},
	{"u1i4S108", __M2N_u1i4S108},
	{"u1i4S108S108", __M2N_u1i4S108S108},
	{"u1i4S12", __M2N_u1i4S12},
	{"u1i4S12i4", __M2N_u1i4S12i4},
	{"u1i4S12S12", __M2N_u1i4S12S12},
	{"u1i4S12u1", __M2N_u1i4S12u1},
	{"u1i4S16", __M2N_u1i4S16},
	{"u1i4S16i4", __M2N_u1i4S16i4},
	{"u1i4S16i4i4", __M2N_u1i4S16i4i4},
	{"u1i4S16r4", __M2N_u1i4S16r4},
	{"u1i4S16S16", __M2N_u1i4S16S16},
	{"u1i4S16u1", __M2N_u1i4S16u1},
	{"u1i4S1S1", __M2N_u1i4S1S1},
	{"u1i4S20", __M2N_u1i4S20},
	{"u1i4S24", __M2N_u1i4S24},
	{"u1i4S24i4", __M2N_u1i4S24i4},
	{"u1i4S28", __M2N_u1i4S28},
	{"u1i4S32", __M2N_u1i4S32},
	{"u1i4S36", __M2N_u1i4S36},
	{"u1i4S4", __M2N_u1i4S4},
	{"u1i4S4S4", __M2N_u1i4S4S4},
	{"u1i4S64", __M2N_u1i4S64},
	{"u1i4S8", __M2N_u1i4S8},
	{"u1i4S88", __M2N_u1i4S88},
	{"u1i4S8i4", __M2N_u1i4S8i4},
	{"u1i4S8i4i4", __M2N_u1i4S8i4i4},
	{"u1i4S8i4S8", __M2N_u1i4S8i4S8},
	{"u1i4S8i4S8i4", __M2N_u1i4S8i4S8i4},
	{"u1i4S8i4u1u1", __M2N_u1i4S8i4u1u1},
	{"u1i4S8S8", __M2N_u1i4S8S8},
	{"u1i4S8S8i4", __M2N_u1i4S8S8i4},
	{"u1i4u1", __M2N_u1i4u1},
	{"u1i4u1i4", __M2N_u1i4u1i4},
	{"u1i4u1u1", __M2N_u1i4u1u1},
	{"u1i4u2", __M2N_u1i4u2},
	{"u1i4u2i4", __M2N_u1i4u2i4},
	{"u1i4u2u2", __M2N_u1i4u2u2},
	{"u1i4u2u2i4", __M2N_u1i4u2u2i4},
	{"u1i4u4", __M2N_u1i4u4},
	{"u1i4u4i4i4i4", __M2N_u1i4u4i4i4i4},
	{"u1i4u4i4u4", __M2N_u1i4u4i4u4},
	{"u1i4u8", __M2N_u1i4u8},
	{"u1i8", __M2N_u1i8},
	{"u1i8S8i4S8i4", __M2N_u1i8S8i4S8i4},
	{"u1r4", __M2N_u1r4},
	{"u1r4r4", __M2N_u1r4r4},
	{"u1r4S8i4S8i4", __M2N_u1r4S8i4S8i4},
	{"u1r8", __M2N_u1r8},
	{"u1r8S8i4S8i4", __M2N_u1r8S8i4S8i4},
	{"u1S12i4", __M2N_u1S12i4},
	{"u1S12S12", __M2N_u1S12S12},
	{"u1S16i4", __M2N_u1S16i4},
	{"u1S16i4i4", __M2N_u1S16i4i4},
	{"u1S16i4u1i4i4", __M2N_u1S16i4u1i4i4},
	{"u1S16r4", __M2N_u1S16r4},
	{"u1S16S16", __M2N_u1S16S16},
	{"u1S16u1i4", __M2N_u1S16u1i4},
	{"u1S16u1i4i4", __M2N_u1S16u1i4i4},
	{"u1S24S24", __M2N_u1S24S24},
	{"u1S4", __M2N_u1S4},
	{"u1S4i4", __M2N_u1S4i4},
	{"u1S4S4", __M2N_u1S4S4},
	{"u1S64i4", __M2N_u1S64i4},
	{"u1S64S64", __M2N_u1S64S64},
	{"u1S8", __M2N_u1S8},
	{"u1S8i4", __M2N_u1S8i4},
	{"u1S8i4i4", __M2N_u1S8i4i4},
	{"u1S8i4i4i4", __M2N_u1S8i4i4i4},
	{"u1S8S8", __M2N_u1S8S8},
	{"u1S8S8i4", __M2N_u1S8S8i4},
	{"u1S8S8S8i4", __M2N_u1S8S8S8i4},
	{"u1S8S8S8S8i4", __M2N_u1S8S8S8S8i4},
	{"u1S8S8u1", __M2N_u1S8S8u1},
	{"u1S8u4", __M2N_u1S8u4},
	{"u1u1", __M2N_u1u1},
	{"u1u1u1", __M2N_u1u1u1},
	{"u1u1u1u1", __M2N_u1u1u1u1},
	{"u1u2", __M2N_u1u2},
	{"u1u2i4", __M2N_u1u2i4},
	{"u1u2u2", __M2N_u1u2u2},
	{"u1u4", __M2N_u1u4},
	{"u1u4S8i4S8i4", __M2N_u1u4S8i4S8i4},
	{"u1u4u1", __M2N_u1u4u1},
	{"u1u4u4", __M2N_u1u4u4},
	{"u1u8", __M2N_u1u8},
	{"u1u8S8i4S8i4", __M2N_u1u8S8i4S8i4},
	{"u2", __M2N_u2},
	{"u2C16", __M2N_u2C16},
	{"u2i1", __M2N_u2i1},
	{"u2i2", __M2N_u2i2},
	{"u2i4", __M2N_u2i4},
	{"u2i4i4", __M2N_u2i4i4},
	{"u2i4i4i4", __M2N_u2i4i4i4},
	{"u2i4u2", __M2N_u2i4u2},
	{"u2i8", __M2N_u2i8},
	{"u2r4", __M2N_u2r4},
	{"u2r8", __M2N_u2r8},
	{"u2u1", __M2N_u2u1},
	{"u2u2", __M2N_u2u2},
	{"u2u2i4", __M2N_u2u2i4},
	{"u2u2u2", __M2N_u2u2u2},
	{"u2u2u2u2", __M2N_u2u2u2u2},
	{"u2u4", __M2N_u2u4},
	{"u2u8", __M2N_u2u8},
	{"u4", __M2N_u4},
	{"u4C16", __M2N_u4C16},
	{"u4i1", __M2N_u4i1},
	{"u4i2", __M2N_u4i2},
	{"u4i4", __M2N_u4i4},
	{"u4i4C8C8i4i4i4i4i4", __M2N_u4i4C8C8i4i4i4i4i4},
	{"u4i4C8i4i4i4i4i4", __M2N_u4i4C8i4i4i4i4i4},
	{"u4i4i4", __M2N_u4i4i4},
	{"u4i4i4C8i4", __M2N_u4i4i4C8i4},
	{"u4i4i4C8u4i4", __M2N_u4i4i4C8u4i4},
	{"u4i4i4i4", __M2N_u4i4i4i4},
	{"u4i4u4", __M2N_u4i4u4},
	{"u4i8", __M2N_u4i8},
	{"u4r4", __M2N_u4r4},
	{"u4r8", __M2N_u4r8},
	{"u4u1", __M2N_u4u1},
	{"u4u2", __M2N_u4u2},
	{"u4u4", __M2N_u4u4},
	{"u4u4u4", __M2N_u4u4u4},
	{"u4u4u4u4", __M2N_u4u4u4u4},
	{"u4u8", __M2N_u4u8},
	{"u8", __M2N_u8},
	{"u8C16", __M2N_u8C16},
	{"u8i1", __M2N_u8i1},
	{"u8i2", __M2N_u8i2},
	{"u8i4", __M2N_u8i4},
	{"u8i4i4", __M2N_u8i4i4},
	{"u8i4i4i4", __M2N_u8i4i4i4},
	{"u8i8", __M2N_u8i8},
	{"u8r4", __M2N_u8r4},
	{"u8r8", __M2N_u8r8},
	{"u8u1", __M2N_u8u1},
	{"u8u2", __M2N_u8u2},
	{"u8u4", __M2N_u8u4},
	{"u8u4u4", __M2N_u8u4u4},
	{"u8u8u8", __M2N_u8u8u8},
	{"u8u8u8u8", __M2N_u8u8u8u8},
	{"v", __M2N_v},
	{"vC16i4u1", __M2N_vC16i4u1},
	{"vC16u4i4u1", __M2N_vC16u4i4u1},
	{"vC8", __M2N_vC8},
	{"vi4", __M2N_vi4},
	{"vi4C16", __M2N_vi4C16},
	{"vi4C16i4", __M2N_vi4C16i4},
	{"vi4C16u1", __M2N_vi4C16u1},
	{"vi4C32", __M2N_vi4C32},
	{"vi4C8", __M2N_vi4C8},
	{"vi4C8C8C8", __M2N_vi4C8C8C8},
	{"vi4i2", __M2N_vi4i2},
	{"vi4i4", __M2N_vi4i4},
	{"vi4i4C8", __M2N_vi4i4C8},
	{"vi4i4C8i4", __M2N_vi4i4C8i4},
	{"vi4i4i2", __M2N_vi4i4i2},
	{"vi4i4i2i2u1u1u1u1u1u1u1u1", __M2N_vi4i4i2i2u1u1u1u1u1u1u1u1},
	{"vi4i4i4", __M2N_vi4i4i4},
	{"vi4i4i4C8", __M2N_vi4i4i4C8},
	{"vi4i4i4C8C8", __M2N_vi4i4i4C8C8},
	{"vi4i4i4i2i4", __M2N_vi4i4i4i2i4},
	{"vi4i4i4i4", __M2N_vi4i4i4i4},
	{"vi4i4i4i4i4", __M2N_vi4i4i4i4i4},
	{"vi4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4", __M2N_vi4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4S8", __M2N_vi4i4i4i4i4i4i4i4S8},
	{"vi4i4i4i4i4i4i4S12i4u1", __M2N_vi4i4i4i4i4i4i4S12i4u1},
	{"vi4i4i4i4i4i4i4u1", __M2N_vi4i4i4i4i4i4i4u1},
	{"vi4i4i4i4i4i4i4u1S1", __M2N_vi4i4i4i4i4i4i4u1S1},
	{"vi4i4i4i4i4i4u1", __M2N_vi4i4i4i4i4i4u1},
	{"vi4i4i4i4i4u1", __M2N_vi4i4i4i4i4u1},
	{"vi4i4i4i4i4u1i4", __M2N_vi4i4i4i4i4u1i4},
	{"vi4i4i4i4i4u1i4i4", __M2N_vi4i4i4i4i4u1i4i4},
	{"vi4i4i4i4i4u1u1", __M2N_vi4i4i4i4i4u1u1},
	{"vi4i4i4i4u1", __M2N_vi4i4i4i4u1},
	{"vi4i4i4i4u1u1", __M2N_vi4i4i4i4u1u1},
	{"vi4i4i4i8", __M2N_vi4i4i4i8},
	{"vi4i4i4r4", __M2N_vi4i4i4r4},
	{"vi4i4i4S16", __M2N_vi4i4i4S16},
	{"vi4i4i4S4i4", __M2N_vi4i4i4S4i4},
	{"vi4i4i4S8", __M2N_vi4i4i4S8},
	{"vi4i4i4u1", __M2N_vi4i4i4u1},
	{"vi4i4i4u1i4", __M2N_vi4i4i4u1i4},
	{"vi4i4i4u1i4u1", __M2N_vi4i4i4u1i4u1},
	{"vi4i4i4u1S4", __M2N_vi4i4i4u1S4},
	{"vi4i4i4u1u1u1u1i4i4", __M2N_vi4i4i4u1u1u1u1i4i4},
	{"vi4i4i4u2", __M2N_vi4i4i4u2},
	{"vi4i4i4u4u4i4", __M2N_vi4i4i4u4u4i4},
	{"vi4i4i4u8", __M2N_vi4i4i4u8},
	{"vi4i4i8", __M2N_vi4i4i8},
	{"vi4i4i8i4", __M2N_vi4i4i8i4},
	{"vi4i4i8i4i8i4i4", __M2N_vi4i4i8i4i8i4i4},
	{"vi4i4i8i8", __M2N_vi4i4i8i8},
	{"vi4i4i8i8i4", __M2N_vi4i4i8i8i4},
	{"vi4i4i8i8i8", __M2N_vi4i4i8i8i8},
	{"vi4i4r4", __M2N_vi4i4r4},
	{"vi4i4r4i4", __M2N_vi4i4r4i4},
	{"vi4i4r4i4i4", __M2N_vi4i4r4i4i4},
	{"vi4i4r4r4", __M2N_vi4i4r4r4},
	{"vi4i4S108", __M2N_vi4i4S108},
	{"vi4i4S12", __M2N_vi4i4S12},
	{"vi4i4S12i4", __M2N_vi4i4S12i4},
	{"vi4i4S12i4i4", __M2N_vi4i4S12i4i4},
	{"vi4i4S16", __M2N_vi4i4S16},
	{"vi4i4S16i4i4", __M2N_vi4i4S16i4i4},
	{"vi4i4S24", __M2N_vi4i4S24},
	{"vi4i4S4", __M2N_vi4i4S4},
	{"vi4i4S4i4", __M2N_vi4i4S4i4},
	{"vi4i4S64", __M2N_vi4i4S64},
	{"vi4i4S8", __M2N_vi4i4S8},
	{"vi4i4S8i4", __M2N_vi4i4S8i4},
	{"vi4i4S96", __M2N_vi4i4S96},
	{"vi4i4u1", __M2N_vi4i4u1},
	{"vi4i4u1i4", __M2N_vi4i4u1i4},
	{"vi4i4u1i4i4", __M2N_vi4i4u1i4i4},
	{"vi4i4u1i4i4i4", __M2N_vi4i4u1i4i4i4},
	{"vi4i4u1i4u1", __M2N_vi4i4u1i4u1},
	{"vi4i4u1S24", __M2N_vi4i4u1S24},
	{"vi4i4u1u1", __M2N_vi4i4u1u1},
	{"vi4i4u1u1i4", __M2N_vi4i4u1u1i4},
	{"vi4i4u1u1i4i4", __M2N_vi4i4u1u1i4i4},
	{"vi4i4u1u1u1", __M2N_vi4i4u1u1u1},
	{"vi4i4u2", __M2N_vi4i4u2},
	{"vi4i4u2i4", __M2N_vi4i4u2i4},
	{"vi4i4u4", __M2N_vi4i4u4},
	{"vi4i4u4i4", __M2N_vi4i4u4i4},
	{"vi4i4u8", __M2N_vi4i4u8},
	{"vi4i8", __M2N_vi4i8},
	{"vi4i8C8", __M2N_vi4i8C8},
	{"vi4i8i4", __M2N_vi4i8i4},
	{"vi4i8i4i4", __M2N_vi4i8i4i4},
	{"vi4i8i4i8", __M2N_vi4i8i4i8},
	{"vi4i8i4i8i8", __M2N_vi4i8i4i8i8},
	{"vi4i8i8", __M2N_vi4i8i8},
	{"vi4i8i8i4", __M2N_vi4i8i8i4},
	{"vi4r4", __M2N_vi4r4},
	{"vi4r4r4", __M2N_vi4r4r4},
	{"vi4r4r4r4", __M2N_vi4r4r4r4},
	{"vi4r4r4r4r4", __M2N_vi4r4r4r4r4},
	{"vi4r4r4r4r4i4", __M2N_vi4r4r4r4r4i4},
	{"vi4r8", __M2N_vi4r8},
	{"vi4S1", __M2N_vi4S1},
	{"vi4S108", __M2N_vi4S108},
	{"vi4S12", __M2N_vi4S12},
	{"vi4S12i4", __M2N_vi4S12i4},
	{"vi4S12i4i4", __M2N_vi4S12i4i4},
	{"vi4S12i4i4i4i4i4i4i4", __M2N_vi4S12i4i4i4i4i4i4i4},
	{"vi4S12r4", __M2N_vi4S12r4},
	{"vi4S12S12", __M2N_vi4S12S12},
	{"vi4S12S12S12", __M2N_vi4S12S12S12},
	{"vi4S12S16S12", __M2N_vi4S12S16S12},
	{"vi4S12u1", __M2N_vi4S12u1},
	{"vi4S16", __M2N_vi4S16},
	{"vi4S16i4", __M2N_vi4S16i4},
	{"vi4S16i4i4", __M2N_vi4S16i4i4},
	{"vi4S16i4i4i4", __M2N_vi4S16i4i4i4},
	{"vi4S16i4i4i4i4", __M2N_vi4S16i4i4i4i4},
	{"vi4S16i4i4u1", __M2N_vi4S16i4i4u1},
	{"vi4S16i4i4u1u1", __M2N_vi4S16i4i4u1u1},
	{"vi4S16i4u1u1u1u1", __M2N_vi4S16i4u1u1u1u1},
	{"vi4S16r4r4r4r4i4i4u1i4i4", __M2N_vi4S16r4r4r4r4i4i4u1i4i4},
	{"vi4S16S16S16S16", __M2N_vi4S16S16S16S16},
	{"vi4S16u1u1u1u1", __M2N_vi4S16u1u1u1u1},
	{"vi4S2", __M2N_vi4S2},
	{"vi4S20", __M2N_vi4S20},
	{"vi4S24", __M2N_vi4S24},
	{"vi4S32", __M2N_vi4S32},
	{"vi4S4", __M2N_vi4S4},
	{"vi4S4i4", __M2N_vi4S4i4},
	{"vi4S4i4i4", __M2N_vi4S4i4i4},
	{"vi4S4i4i4i4", __M2N_vi4S4i4i4i4},
	{"vi4S4S4", __M2N_vi4S4S4},
	{"vi4S52", __M2N_vi4S52},
	{"vi4S64S16", __M2N_vi4S64S16},
	{"vi4S8", __M2N_vi4S8},
	{"vi4S8C56", __M2N_vi4S8C56},
	{"vi4S8C56i4", __M2N_vi4S8C56i4},
	{"vi4S8i4", __M2N_vi4S8i4},
	{"vi4S8i4i4", __M2N_vi4S8i4i4},
	{"vi4S8i8", __M2N_vi4S8i8},
	{"vi4S8S12", __M2N_vi4S8S12},
	{"vi4S8S20", __M2N_vi4S8S20},
	{"vi4S8S28", __M2N_vi4S8S28},
	{"vi4S8S36", __M2N_vi4S8S36},
	{"vi4S8S8", __M2N_vi4S8S8},
	{"vi4S8u1", __M2N_vi4S8u1},
	{"vi4S8u1u1", __M2N_vi4S8u1u1},
	{"vi4u1", __M2N_vi4u1},
	{"vi4u1i4", __M2N_vi4u1i4},
	{"vi4u1i4i4", __M2N_vi4u1i4i4},
	{"vi4u1i4i4i4", __M2N_vi4u1i4i4i4},
	{"vi4u1i4i4i4i4i4", __M2N_vi4u1i4i4i4i4i4},
	{"vi4u1i4i4i4i4S16S16u1i4", __M2N_vi4u1i4i4i4i4S16S16u1i4},
	{"vi4u1i4i4i4u1i4", __M2N_vi4u1i4i4i4u1i4},
	{"vi4u1i4u1u1", __M2N_vi4u1i4u1u1},
	{"vi4u1i8", __M2N_vi4u1i8},
	{"vi4u1u1", __M2N_vi4u1u1},
	{"vi4u1u1i4", __M2N_vi4u1u1i4},
	{"vi4u1u1i4i4", __M2N_vi4u1u1i4i4},
	{"vi4u1u1i4i4i4i4i4", __M2N_vi4u1u1i4i4i4i4i4},
	{"vi4u1u1i4i4i4i4i4i4i4", __M2N_vi4u1u1i4i4i4i4i4i4i4},
	{"vi4u1u1i4S8", __M2N_vi4u1u1i4S8},
	{"vi4u1u1i4u1", __M2N_vi4u1u1i4u1},
	{"vi4u1u1u1", __M2N_vi4u1u1u1},
	{"vi4u1u1u1u1", __M2N_vi4u1u1u1u1},
	{"vi4u1u1u4u4u4", __M2N_vi4u1u1u4u4u4},
	{"vi4u1u4", __M2N_vi4u1u4},
	{"vi4u2", __M2N_vi4u2},
	{"vi4u2i4", __M2N_vi4u2i4},
	{"vi4u2i4i4i4i4i4i4i4", __M2N_vi4u2i4i4i4i4i4i4i4},
	{"vi4u2i4u1u1u1", __M2N_vi4u2i4u1u1u1},
	{"vi4u2u1u1u1", __M2N_vi4u2u1u1u1},
	{"vi4u2u2", __M2N_vi4u2u2},
	{"vi4u4", __M2N_vi4u4},
	{"vi4u4i4i4i4", __M2N_vi4u4i4i4i4},
	{"vi4u4i4u4i2i4i4i4i4", __M2N_vi4u4i4u4i2i4i4i4i4},
	{"vi4u4u1", __M2N_vi4u4u1},
	{"vi4u4u4i4", __M2N_vi4u4u4i4},
	{"vi4u4u4i4u4u4i4u4", __M2N_vi4u4u4i4u4u4i4u4},
	{"vi4u4u4u4", __M2N_vi4u4u4u4},
	{"vi4u8", __M2N_vi4u8},
	{"vi8", __M2N_vi8},
	{"vr4", __M2N_vr4},
	{"vr4r4", __M2N_vr4r4},
	{"vr4r4r4", __M2N_vr4r4r4},
	{"vr4r4r4r4", __M2N_vr4r4r4r4},
	{"vS12i4", __M2N_vS12i4},
	{"vS12i4i4", __M2N_vS12i4i4},
	{"vS12i4i4i4i4", __M2N_vS12i4i4i4i4},
	{"vS12i4S12i4i4", __M2N_vS12i4S12i4i4},
	{"vS12S12", __M2N_vS12S12},
	{"vS12S12i4", __M2N_vS12S12i4},
	{"vS12S12S16", __M2N_vS12S12S16},
	{"vS12S12S16r4", __M2N_vS12S12S16r4},
	{"vS12S12S16r4u1", __M2N_vS12S12S16r4u1},
	{"vS16", __M2N_vS16},
	{"vS16i4", __M2N_vS16i4},
	{"vS16i4i4", __M2N_vS16i4i4},
	{"vS16i4i4u1", __M2N_vS16i4i4u1},
	{"vS16i4i4u1r4", __M2N_vS16i4i4u1r4},
	{"vS16i4i4u1r4S16r4r4", __M2N_vS16i4i4u1r4S16r4r4},
	{"vS16i4i4u1r4S16S16r4", __M2N_vS16i4i4u1r4S16S16r4},
	{"vS16i4i4u1r4S16S16S16", __M2N_vS16i4i4u1r4S16S16S16},
	{"vS16i4S16", __M2N_vS16i4S16},
	{"vS16i4S16u1", __M2N_vS16i4S16u1},
	{"vS16S8S8u1", __M2N_vS16S8S8u1},
	{"vS64", __M2N_vS64},
	{"vS8", __M2N_vS8},
	{"vu1", __M2N_vu1},
	{"vu1i4", __M2N_vu1i4},
	{"vu1i4i4", __M2N_vu1i4i4},
	{"vu1i4i4i4", __M2N_vu1i4i4i4},
	{"vu1u1S16r4", __M2N_vu1u1S16r4},
	{"vu4", __M2N_vu4},
	{nullptr, nullptr},
};

// Mono.Unity.UnityTls/unitytls_errorstate Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_create_t::Invoke()
static ValueTypeSizeAlign8<16> __N2M_C16(const MethodInfo* method)
{
    StackObject args[2] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// System.Decimal System.IO.BinaryReader::ReadDecimal()
static ValueTypeSizeAlign8<16> __N2M_C16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider)
static ValueTypeSizeAlign8<16> __N2M_C16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static ValueTypeSizeAlign8<8> __N2M_C8C8i4i4(ValueTypeSizeAlign8<8> __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.DateTime System.Security.Cryptography.X509Certificates.X509CertificateImpl::get_NotAfter()
static ValueTypeSizeAlign8<8> __N2M_C8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::Renew(System.TimeSpan)
static ValueTypeSizeAlign8<8> __N2M_C8i4C8(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_get_x509_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static ValueTypeSizeAlign8<8> __N2M_C8i4C8i4i4(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.DateTime System.IConvertible::ToDateTime(System.IFormatProvider)
static ValueTypeSizeAlign8<8> __N2M_C8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// Mono.Unity.UnityTls/unitytls_key_ref Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_key_get_ref_t::Invoke(Mono.Unity.UnityTls/unitytls_key*,Mono.Unity.UnityTls/unitytls_errorstate*)
static ValueTypeSizeAlign8<8> __N2M_C8i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.DateTime System.Globalization.Calendar::ToDateTime(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static ValueTypeSizeAlign8<8> __N2M_C8i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.SByte System.IO.BinaryReader::ReadSByte()
static int8_t __N2M_i1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.SByte System.IConvertible::ToSByte(System.IFormatProvider)
static int8_t __N2M_i1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.Int16 System.IO.BinaryReader::ReadInt16()
static int16_t __N2M_i2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// System.Int16 System.IConvertible::ToInt16(System.IFormatProvider)
static int16_t __N2M_i2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// TResult System.Func`1::Invoke()
static int32_t __N2M_i4(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4C8i4i4i4(ValueTypeSizeAlign8<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.ISystemCertificateProvider Mono.ISystemDependencyProvider::get_CertificateProvider()
static int32_t __N2M_i4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
static int32_t __N2M_i4i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.DateTime::CompareTo(System.DateTime)
static int32_t __N2M_i4i4C8(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IntPtr Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509_export_der_t::Invoke(Mono.Unity.UnityTls/unitytls_x509_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4i4C8i4i4i4(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.SByte::CompareTo(System.SByte)
static int32_t __N2M_i4i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Int16::CompareTo(System.Int16)
static int32_t __N2M_i4i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetName(System.Int32)
static int32_t __N2M_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Mono.CertificateImportFlags)
static int32_t __N2M_i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::FinalEncrypt(System.Byte[],System.Int32,System.Int32)
static int32_t __N2M_i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,Mono.CertificateImportFlags)
static int32_t __N2M_i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 Mono.Globalization.Unicode.SimpleCollator::IndexOf(System.String,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static int32_t __N2M_i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
static int32_t __N2M_i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Int32,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
static int32_t __N2M_i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Type::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
static int32_t __N2M_i4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = args + 9;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, uint8_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, uint8_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Threading.Tasks.Task`1<System.Int32> System.Security.Cryptography.CryptoStream::ReadAsync(System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
static int32_t __N2M_i4i4i4i4i4S4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, ValueTypeSize<4> __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte[],System.Int32,System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4i4i4i4u1i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Threading.Tasks.Task System.IO.MemoryStream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken)
static int32_t __N2M_i4i4i4i4S4(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<4> __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Runtime.Remoting.Messaging.RemotingSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static int32_t __N2M_i4i4i4i4S8i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::LoadSceneAsyncByNameOrIndex(System.String,System.Int32,UnityEngine.SceneManagement.LoadSceneParameters,System.Boolean)
static int32_t __N2M_i4i4i4i4S8u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetCharCount(System.Byte*,System.Int32,System.Boolean)
static int32_t __N2M_i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Net.CommandStream/PipelineInstruction System.Net.CommandStream::PipelineCallback(System.Net.CommandStream/PipelineEntry,System.Net.ResponseDescription,System.Boolean,System.IO.Stream&)
static int32_t __N2M_i4i4i4i4u1i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManagerAPI::UnloadSceneAsyncByNameOrIndex(System.String,System.Int32,System.Boolean,UnityEngine.SceneManagement.UnloadSceneOptions,System.Boolean&)
static int32_t __N2M_i4i4i4i4u1i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Runtime.Remoting.ObjectHandle System.AppDomain::CreateInstance(System.String,System.String,System.Boolean,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[],System.Security.Policy.Evidence)
static int32_t __N2M_i4i4i4i4u1i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method)
{
    StackObject args[11] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9 };
    StackObject* ret = args + 10;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`5::Invoke(T1,T2,T3,T4)
static int32_t __N2M_i4i4i4S12i4i4(int32_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static int32_t __N2M_i4i4i4S8i4(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Type System.Type::GetInterface(System.String,System.Boolean)
static int32_t __N2M_i4i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Threading.SynchronizationContext::Wait(System.IntPtr[],System.Boolean,System.Int32)
static int32_t __N2M_i4i4i4u1i4(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Reflection.Assembly::CreateInstance(System.String,System.Boolean,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo,System.Object[])
static int32_t __N2M_i4i4i4u1i4i4i4i4i4(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
static int32_t __N2M_i4i4i4u1u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.Char,System.Globalization.CompareOptions)
static int32_t __N2M_i4i4i4u2i4(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.CompareInfo::IndexOf(System.String,System.Char,System.Int32,System.Int32,System.Globalization.CompareOptions)
static int32_t __N2M_i4i4i4u2i4i4i4(int32_t __arg0, int32_t __arg1, uint16_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Int64::CompareTo(System.Int64)
static int32_t __N2M_i4i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Single::CompareTo(System.Single)
static int32_t __N2M_i4i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4r4i4i4(int32_t __arg0, float __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Double::CompareTo(System.Double)
static int32_t __N2M_i4i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple::CompareTo(System.ValueTuple)
static int32_t __N2M_i4i4S1(int32_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.List`1::IndexOf(T)
static int32_t __N2M_i4i4S108(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4S108i4i4(int32_t __arg0, ValueTypeSize<108> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_i4i4S108S108(int32_t __arg0, ValueTypeSize<108> __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`3::CompareTo(System.ValueTuple`3<T1,T2,T3>)
static int32_t __N2M_i4i4S12(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`5::Invoke(T1,T2,T3,T4)
static int32_t __N2M_i4i4S12i4i4(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_i4i4S12S12(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Threading.Tasks.Task System.IO.StreamWriter::WriteAsync(System.ReadOnlyMemory`1<System.Char>,System.Threading.CancellationToken)
static int32_t __N2M_i4i4S12S4(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Guid::CompareTo(System.Guid)
static int32_t __N2M_i4i4S16(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4S16i4i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_i4i4S16S16(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4S1S1(int32_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`5::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static int32_t __N2M_i4i4S20(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_i4i4S24(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static int32_t __N2M_i4i4S28(int32_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static int32_t __N2M_i4i4S32(int32_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`8::CompareTo(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static int32_t __N2M_i4i4S36(int32_t __arg0, ValueTypeSize<36> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`1::CompareTo(System.ValueTuple`1<T1>)
static int32_t __N2M_i4i4S4(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult UnityEngine.Events.UnityAction`1::BeginInvoke(T0,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4S4i4i4(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.RegularExpressions.RegexCharClass/SingleRangeComparer::Compare(System.Text.RegularExpressions.RegexCharClass/SingleRange,System.Text.RegularExpressions.RegexCharClass/SingleRange)
static int32_t __N2M_i4i4S4S4(int32_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.ValueTuple`2::CompareTo(System.ValueTuple`2<T1,T2>)
static int32_t __N2M_i4i4S8(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4S8i4i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4i4S8S12i4i4i4(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<12> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4i4S8S12u8u8i4(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<12> __arg2, uint64_t __arg3, uint64_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.NullableComparer`1::Compare(System.Nullable`1<T>,System.Nullable`1<T>)
static int32_t __N2M_i4i4S8S8(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Text.Decoder::GetChars(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Char>,System.Boolean)
static int32_t __N2M_i4i4S8S8u1(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
static int32_t __N2M_i4i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.IAsyncResult System.Action`1::BeginInvoke(T,System.AsyncCallback,System.Object)
static int32_t __N2M_i4i4u1i4i4(int32_t __arg0, uint8_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4u1u1(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Char::CompareTo(System.Char)
static int32_t __N2M_i4i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.UInt32::CompareTo(System.UInt32)
static int32_t __N2M_i4i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.UInt64::CompareTo(System.UInt64)
static int32_t __N2M_i4i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.Comparer`1::Compare(T,T)
static int32_t __N2M_i4i4u8u8(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S108S108(ValueTypeSize<108> __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S12S12(ValueTypeSize<12> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S16S16(ValueTypeSize<16> __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`2::Invoke(T)
static int32_t __N2M_i4S4(ValueTypeSize<4> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S4S4(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// TResult System.Func`2::Invoke(T)
static int32_t __N2M_i4S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_client_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4S8S12i4i4i4(ValueTypeSize<8> __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_tlsctx* Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_create_server_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx_protocolrange,Mono.Unity.UnityTls/unitytls_tlsctx_callbacks,System.UInt64,System.UInt64,Mono.Unity.UnityTls/unitytls_errorstate*)
static int32_t __N2M_i4S8S12u8u8i4(ValueTypeSize<8> __arg0, ValueTypeSize<12> __arg1, uint64_t __arg2, uint64_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4S8S8(ValueTypeSize<8> __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u1u1(uint8_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Comparison`1::Invoke(T,T)
static int32_t __N2M_i4u8u8(uint64_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int64 System.Security.Cryptography.CryptoStream::get_Length()
static int64_t __N2M_i8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.IConvertible::ToInt64(System.IFormatProvider)
static int64_t __N2M_i8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
static int64_t __N2M_i8i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 Mono.Btls.MonoBtlsBioMono/BioControlFunc::Invoke(System.IntPtr,Mono.Btls.MonoBtlsBioMono/ControlCommand,System.Int64)
static int64_t __N2M_i8i4i4i4i8(int32_t __arg0, int32_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 Mono.Btls.MonoBtlsBioMono/BioControlFunc::Invoke(System.IntPtr,Mono.Btls.MonoBtlsBioMono/ControlCommand,System.Int64)
static int64_t __N2M_i8i4i4i8(int32_t __arg0, int32_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Int64 System.Security.Cryptography.CryptoStream::Seek(System.Int64,System.IO.SeekOrigin)
static int64_t __N2M_i8i4i8i4(int32_t __arg0, int64_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Single System.IO.BinaryReader::ReadSingle()
static float __N2M_r4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Single System.IConvertible::ToSingle(System.IFormatProvider)
static float __N2M_r4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Double System.Random::Sample()
static double __N2M_r8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// System.Double System.IConvertible::ToDouble(System.IFormatProvider)
static double __N2M_r8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSize<1> __N2M_S1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


// T System.Collections.Generic.List`1/Enumerator::get_Current()
static ValueTypeSize<108> __N2M_S108i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[15] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<108>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSize<108> __N2M_S108i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[16] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<108>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSize<12> __N2M_S12(const MethodInfo* method)
{
    StackObject args[2] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandler::GetNativeData()
static ValueTypeSize<12> __N2M_S12i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.Buffers.MemoryHandle System.Buffers.MemoryManager`1::Pin(System.Int32)
static ValueTypeSize<12> __N2M_S12i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.Threading.Tasks.ValueTask`1<System.Int32> System.IO.MemoryStream::ReadAsync(System.Memory`1<System.Byte>,System.Threading.CancellationToken)
static ValueTypeSize<12> __N2M_S12i4S12S4(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static ValueTypeSize<12> __N2M_S12i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSize<16> __N2M_S16(const MethodInfo* method)
{
    StackObject args[2] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// System.Guid System.Type::get_GUID()
static ValueTypeSize<16> __N2M_S16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// System.Reflection.InterfaceMapping System.Type::GetInterfaceMap(System.Type)
static ValueTypeSize<16> __N2M_S16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSize<1> __N2M_S1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


// TResult System.Func`3::Invoke(T1,T2)
static ValueTypeSize<1> __N2M_S1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


// TResult System.Func`3::Invoke(T1,T2)
static ValueTypeSize<1> __N2M_S1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<1>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<20> __N2M_S20i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<20>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<24> __N2M_S24i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
static ValueTypeSize<32> __N2M_S32i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<32>*)ret;
}


// System.RuntimeTypeHandle System.Type::get_TypeHandle()
static ValueTypeSize<4> __N2M_S4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// T System.Collections.Generic.List`1::get_Item(System.Int32)
static ValueTypeSize<4> __N2M_S4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// TResult System.Func`1::Invoke()
static ValueTypeSize<8> __N2M_S8(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.ReadOnlySpan`1<System.Byte> System.Text.UTF32Encoding::get_Preamble()
static ValueTypeSize<8> __N2M_S8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// UnityEngine.Pool.PooledObject`1<T> UnityEngine.Pool.ObjectPool`1::Get(T&)
static ValueTypeSize<8> __N2M_S8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.ValueTuple`2<System.Int32,System.Boolean> Mono.Unity.UnityTlsContext::Read(System.Byte[],System.Int32,System.Int32)
static ValueTypeSize<8> __N2M_S8i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
static ValueTypeSize<8> __N2M_S8i4i4S144(int32_t __arg0, int32_t __arg1, ValueTypeSize<144> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.Threading.Tasks.ValueTask System.IO.MemoryStream::WriteAsync(System.ReadOnlyMemory`1<System.Byte>,System.Threading.CancellationToken)
static ValueTypeSize<8> __N2M_S8i4S12S4(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// Unity.Jobs.JobHandle UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling::Invoke(UnityEngine.Rendering.BatchRendererGroup,UnityEngine.Rendering.BatchCullingContext)
static ValueTypeSize<8> __N2M_S8i4S144(int32_t __arg0, ValueTypeSize<144> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph,UnityEngine.GameObject)
static ValueTypeSize<8> __N2M_S8i4S8i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableBinding/CreateOutputMethod::Invoke(UnityEngine.Playables.PlayableGraph,System.String)
static ValueTypeSize<8> __N2M_S8S8i4(ValueTypeSize<8> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// T Unity.Collections.NativeArray`1/Enumerator::get_Current()
static ValueTypeSize<96> __N2M_S96i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[13] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<96>*)ret;
}


// TResult System.Func`1::Invoke()
static uint8_t __N2M_u1(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = args + 0;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Security.Cryptography.SymmetricTransform::get_CanTransformMultipleBlocks()
static uint8_t __N2M_u1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
static uint8_t __N2M_u1i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
static uint8_t __N2M_u1i4C24(int32_t __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.DisplayInfo::Equals(UnityEngine.DisplayInfo)
static uint8_t __N2M_u1i4C48(int32_t __arg0, ValueTypeSizeAlign8<48> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.DateTime::Equals(System.DateTime)
static uint8_t __N2M_u1i4C8(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.SByte::Equals(System.SByte)
static uint8_t __N2M_u1i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Int16::Equals(System.Int16)
static uint8_t __N2M_u1i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.RuntimeClassHandle::Equals(System.Object)
static uint8_t __N2M_u1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Security.Cryptography.DSAManaged::VerifySignature(System.Byte[],System.Byte[])
static uint8_t __N2M_u1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Globalization.Unicode.SimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static uint8_t __N2M_u1i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
static uint8_t __N2M_u1i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean Mono.Net.Security.ChainValidationHelper::SelectClientCertificate(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.Security.Cryptography.X509Certificates.X509Certificate&)
static uint8_t __N2M_u1i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.RuntimeType::IsDefined(System.Type,System.Boolean)
static uint8_t __N2M_u1i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Int64::Equals(System.Int64)
static uint8_t __N2M_u1i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Single::Equals(System.Single)
static uint8_t __N2M_u1i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Double::Equals(System.Double)
static uint8_t __N2M_u1i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple::Equals(System.ValueTuple)
static uint8_t __N2M_u1i4S1(int32_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.List`1::Contains(T)
static uint8_t __N2M_u1i4S108(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4S108S108(int32_t __arg0, ValueTypeSize<108> __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Memory`1::Equals(System.Memory`1<T>)
static uint8_t __N2M_u1i4S12(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.Dictionary`2::TryGetValue(TKey,TValue&)
static uint8_t __N2M_u1i4S12i4(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4S12S12(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Guid::Equals(System.Guid)
static uint8_t __N2M_u1i4S16(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Networking.PlayerConnection.PlayerConnection::TrySend(System.Guid,System.Byte[])
static uint8_t __N2M_u1i4S16i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static uint8_t __N2M_u1i4S16i4i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4S16S16(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4S1S1(int32_t __arg0, ValueTypeSize<1> __arg1, ValueTypeSize<1> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`5::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
static uint8_t __N2M_u1i4S20(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Bounds::Equals(UnityEngine.Bounds)
static uint8_t __N2M_u1i4S24(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Rendering.RenderTargetIdentifier::Equals(UnityEngine.Rendering.RenderTargetIdentifier)
static uint8_t __N2M_u1i4S28(int32_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`8::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static uint8_t __N2M_u1i4S32(int32_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`8::Equals(System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,TRest>)
static uint8_t __N2M_u1i4S36(int32_t __arg0, ValueTypeSize<36> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`1::Equals(System.ValueTuple`1<T1>)
static uint8_t __N2M_u1i4S4(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4S4S4(int32_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.Matrix4x4::Equals(UnityEngine.Matrix4x4)
static uint8_t __N2M_u1i4S64(int32_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ValueTuple`2::Equals(System.ValueTuple`2<T1,T2>)
static uint8_t __N2M_u1i4S8(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Security.Cryptography.HashAlgorithm::TryHashFinal(System.Span`1<System.Byte>,System.Int32&)
static uint8_t __N2M_u1i4S8i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Byte::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static uint8_t __N2M_u1i4S8i4S8i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Runtime.InteropServices.Marshal/MarshalerInstanceKeyComparer::Equals(System.ValueTuple`2<System.Type,System.String>,System.ValueTuple`2<System.Type,System.String>)
static uint8_t __N2M_u1i4S8S8(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Boolean::Equals(System.Boolean)
static uint8_t __N2M_u1i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ByteEqualityComparer::Equals(System.Byte,System.Byte)
static uint8_t __N2M_u1i4u1u1(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Char::Equals(System.Char)
static uint8_t __N2M_u1i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Int32)
static uint8_t __N2M_u1i4u2i4(int32_t __arg0, uint16_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.EqualityComparer`1::Equals(T,T)
static uint8_t __N2M_u1i4u2u2(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Text.InternalEncoderBestFitFallbackBuffer::Fallback(System.Char,System.Char,System.Int32)
static uint8_t __N2M_u1i4u2u2i4(int32_t __arg0, uint16_t __arg1, uint16_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.UInt32::Equals(System.UInt32)
static uint8_t __N2M_u1i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.UInt64::Equals(System.UInt64)
static uint8_t __N2M_u1i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S108(ValueTypeSize<108> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S12(ValueTypeSize<12> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S4(ValueTypeSize<4> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1S8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Predicate`1::Invoke(T)
static uint8_t __N2M_u1u1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Char System.CharEnumerator::get_Current()
static uint16_t __N2M_u2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.IConvertible::ToChar(System.IFormatProvider)
static uint16_t __N2M_u2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.Globalization.TextInfo::ToLower(System.Char)
static uint16_t __N2M_u2i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4C8C8i4i4i4i4i4(ValueTypeSizeAlign8<8> __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4C8i4i4i4i4i4(ValueTypeSizeAlign8<8> __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt32 System.IO.BinaryReader::ReadUInt32()
static uint32_t __N2M_u4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_explicit_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4C8C8i4i4i4i4i4(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, ValueTypeSizeAlign8<8> __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4C8i4(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509verify_default_ca_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list_ref,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509verify_callback,System.Void*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4C8i4i4i4i4i4(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, const MethodInfo* method)
{
    StackObject args[8] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6 };
    StackObject* ret = args + 7;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4C8u4i4(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, uint32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider)
static uint32_t __N2M_u4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509list_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i4C8i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<8> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_x509verify_result Mono.Unity.UnityTls/unitytls_x509verify_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_x509verify_result,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i4C8u4i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<8> __arg2, uint32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// Mono.Unity.UnityTls/unitytls_ciphersuite Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_get_ciphersuite_t::Invoke(Mono.Unity.UnityTls/unitytls_tlsctx*,Mono.Unity.UnityTls/unitytls_errorstate*)
static uint32_t __N2M_u4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt64 System.IO.BinaryReader::ReadUInt64()
static uint64_t __N2M_u8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0 };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider)
static uint64_t __N2M_u8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.Void System.Action::Invoke()
static void __N2M_v(const MethodInfo* method)
{
    StackObject args[1] = { };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
static void __N2M_vC16(ValueTypeSizeAlign8<16> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
static void __N2M_vC16i4(ValueTypeSizeAlign8<16> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
static void __N2M_vC32(ValueTypeSizeAlign8<32> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.SafeGPtrArrayHandle::Dispose()
static void __N2M_vi4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnPhotoModeStartedCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult)
static void __N2M_vi4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.WebCam.PhotoCapture/OnCapturedToMemoryCallback::Invoke(UnityEngine.Windows.WebCam.PhotoCapture/PhotoCaptureResult,UnityEngine.Windows.WebCam.PhotoCaptureFrame)
static void __N2M_vi4C16i4(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Windows.Speech.PhraseRecognizer/PhraseRecognizedDelegate::Invoke(UnityEngine.Windows.Speech.PhraseRecognizedEventArgs)
static void __N2M_vi4C32(int32_t __arg0, ValueTypeSizeAlign8<32> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __N2M_vi4C8i4(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16)
static void __N2M_vi4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
static void __N2M_vi4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_x509list_append_t::Invoke(Mono.Unity.UnityTls/unitytls_x509list*,Mono.Unity.UnityTls/unitytls_x509_ref,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __N2M_vi4i4C8i4(int32_t __arg0, int32_t __arg1, ValueTypeSizeAlign8<8> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
static void __N2M_vi4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
static void __N2M_vi4i4i4i2i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int16_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Security.Cryptography.MD2Managed::HashCore(System.Byte[],System.Int32,System.Int32)
static void __N2M_vi4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`4::Invoke(T1,T2,T3,T4)
static void __N2M_vi4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Internal.Runtime.Augments.TaskTraceCallbacks::TaskScheduled(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
static void __N2M_vi4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __N2M_vi4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback::Invoke(System.Void*,Mono.Unity.UnityTls/unitytls_tlsctx*,System.Byte*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509name*,System.IntPtr,Mono.Unity.UnityTls/unitytls_x509list_ref*,Mono.Unity.UnityTls/unitytls_key_ref*,Mono.Unity.UnityTls/unitytls_errorstate*)
static void __N2M_vi4i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, int32_t __arg9, const MethodInfo* method)
{
    StackObject args[10] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8, *(uint64_t*)&__arg9 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
static void __N2M_vi4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, uint8_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_vi4i4i4S8(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __N2M_vi4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.InteropServices._Activator::GetIDsOfNames(System.Guid&,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr)
static void __N2M_vi4i4i4u4u4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint32_t __arg3, uint32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4S108(int32_t __arg0, int32_t __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
static void __N2M_vi4i4S12(int32_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4S16(int32_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.GUI/CustomSelectionGridItemGUI::Invoke(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle,System.Int32)
static void __N2M_vi4i4S16i4i4(int32_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_vi4i4S24(int32_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::set_Item(System.Int32,T)
static void __N2M_vi4i4S4(int32_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.AggregateException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_vi4i4S8(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.WaitOrTimerCallback::Invoke(System.Object,System.Boolean)
static void __N2M_vi4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::Invoke(System.String,System.Boolean,System.String)
static void __N2M_vi4i4u1i4(int32_t __arg0, int32_t __arg1, uint8_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __N2M_vi4i4u1S24(int32_t __arg0, int32_t __arg1, uint8_t __arg2, ValueTypeSize<24> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, (uint64_t)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __N2M_vi4i4u1u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_errorstate_raise_error_t::Invoke(Mono.Unity.UnityTls/unitytls_errorstate*,Mono.Unity.UnityTls/unitytls_error_code)
static void __N2M_vi4i4u4(int32_t __arg0, int32_t __arg1, uint32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Security.Cryptography.CryptoStream::set_Position(System.Int64)
static void __N2M_vi4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ObjectManager::RecordFixup(System.Int64,System.Reflection.MemberInfo,System.Int64)
static void __N2M_vi4i8i4i8(int32_t __arg0, int64_t __arg1, int32_t __arg2, int64_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.FileStream::Lock(System.Int64,System.Int64)
static void __N2M_vi4i8i8(int32_t __arg0, int64_t __arg1, int64_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Single)
static void __N2M_vi4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
static void __N2M_vi4r4r4(int32_t __arg0, float __arg1, float __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.Double)
static void __N2M_vi4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.List`1::Add(T)
static void __N2M_vi4S108(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Experimental.GlobalIllumination.Lightmapping/RequestLightsDelegate::Invoke(UnityEngine.Light[],Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>)
static void __N2M_vi4S12(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Reflection.FieldInfo::SetValueDirect(System.TypedReference,System.Object)
static void __N2M_vi4S12i4(int32_t __arg0, ValueTypeSize<12> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::RegisterInternal(System.Guid)
static void __N2M_vi4S16(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Networking.PlayerConnection.IEditorPlayerConnection::Register(System.Guid,UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>)
static void __N2M_vi4S16i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __N2M_vi4S16i4i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_vi4S20(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_vi4S24(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
static void __N2M_vi4S32(int32_t __arg0, ValueTypeSize<32> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __N2M_vi4S4(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Rendering.RenderPipeline::Render(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[])
static void __N2M_vi4S4i4(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Rendering.RenderPipeline::ProcessRenderRequests(UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera,System.Collections.Generic.List`1<UnityEngine.Camera/RenderRequest>)
static void __N2M_vi4S4i4i4(int32_t __arg0, ValueTypeSize<4> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __N2M_vi4S4S4(int32_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.ReadOnlySpan`1<System.Byte>)
static void __N2M_vi4S8(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __N2M_vi4S8C56(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSizeAlign8<56> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __N2M_vi4S8C56i4(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSizeAlign8<56> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4S8i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __N2M_vi4S8i4i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4S8S12(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4S8S20(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<20> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4S8S28(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<28> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vi4S8S36(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<36> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
static void __N2M_vi4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Application/AdvertisingIdentifierCallback::Invoke(System.String,System.Boolean,System.String)
static void __N2M_vi4u1i4(int32_t __arg0, uint8_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`3::Invoke(T1,T2,T3)
static void __N2M_vi4u1S24(int32_t __arg0, uint8_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.StreamWriter::Write(System.Char)
static void __N2M_vi4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.UInt32)
static void __N2M_vi4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.InteropServices._Activator::Invoke(System.UInt32,System.Guid&,System.UInt32,System.Int16,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
static void __N2M_vi4u4i4u4i2i4i4i4i4(int32_t __arg0, uint32_t __arg1, int32_t __arg2, uint32_t __arg3, int16_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[9] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.InteropServices._Activator::GetTypeInfo(System.UInt32,System.UInt32,System.IntPtr)
static void __N2M_vi4u4u4i4(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.IO.BinaryWriter::Write(System.UInt64)
static void __N2M_vi4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __N2M_vr4(float __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vS108(ValueTypeSize<108> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vS12(ValueTypeSize<12> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vS16(ValueTypeSize<16> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`1::Invoke(T0)
static void __N2M_vS4(ValueTypeSize<4> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __N2M_vS4i4(ValueTypeSize<4> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Events.UnityAction`2::Invoke(T0,T1)
static void __N2M_vS4S4(ValueTypeSize<4> __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.SerializationEventHandler::Invoke(System.Runtime.Serialization.StreamingContext)
static void __N2M_vS8(ValueTypeSize<8> __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vS8i4(ValueTypeSize<8> __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vS8S12(ValueTypeSize<8> __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vS8S20(ValueTypeSize<8> __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vS8S28(ValueTypeSize<8> __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Buffers.SpanAction`2::Invoke(System.Span`1<T>,TArg)
static void __N2M_vS8S36(ValueTypeSize<8> __arg0, ValueTypeSize<36> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {*(uint64_t*)&__arg0, (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Action`1::Invoke(T)
static void __N2M_vu1(uint8_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {*(uint64_t*)&__arg0 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


Native2ManagedMethodInfo hybridclr::interpreter::g_native2managedStub[] = 
{

	{"C16", (Il2CppMethodPointer)__N2M_C16},
	{"C16i4", (Il2CppMethodPointer)__N2M_C16i4},
	{"C16i4i4", (Il2CppMethodPointer)__N2M_C16i4i4},
	{"C8C8i4i4", (Il2CppMethodPointer)__N2M_C8C8i4i4},
	{"C8i4", (Il2CppMethodPointer)__N2M_C8i4},
	{"C8i4C8", (Il2CppMethodPointer)__N2M_C8i4C8},
	{"C8i4C8i4i4", (Il2CppMethodPointer)__N2M_C8i4C8i4i4},
	{"C8i4i4", (Il2CppMethodPointer)__N2M_C8i4i4},
	{"C8i4i4i4", (Il2CppMethodPointer)__N2M_C8i4i4i4},
	{"C8i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_C8i4i4i4i4i4i4i4i4i4},
	{"i1i4", (Il2CppMethodPointer)__N2M_i1i4},
	{"i1i4i4", (Il2CppMethodPointer)__N2M_i1i4i4},
	{"i2i4", (Il2CppMethodPointer)__N2M_i2i4},
	{"i2i4i4", (Il2CppMethodPointer)__N2M_i2i4i4},
	{"i4", (Il2CppMethodPointer)__N2M_i4},
	{"i4C8i4i4i4", (Il2CppMethodPointer)__N2M_i4C8i4i4i4},
	{"i4i4", (Il2CppMethodPointer)__N2M_i4i4},
	{"i4i4C16", (Il2CppMethodPointer)__N2M_i4i4C16},
	{"i4i4C8", (Il2CppMethodPointer)__N2M_i4i4C8},
	{"i4i4C8i4i4i4", (Il2CppMethodPointer)__N2M_i4i4C8i4i4i4},
	{"i4i4i1", (Il2CppMethodPointer)__N2M_i4i4i1},
	{"i4i4i2", (Il2CppMethodPointer)__N2M_i4i4i2},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4},
	{"i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4},
	{"i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4},
	{"i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4i4u1},
	{"i4i4i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4i4i4u1},
	{"i4i4i4i4i4S4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4S4},
	{"i4i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4i4u1},
	{"i4i4i4i4i4u1i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4i4u1i4i4},
	{"i4i4i4i4S4", (Il2CppMethodPointer)__N2M_i4i4i4i4S4},
	{"i4i4i4i4S8i4", (Il2CppMethodPointer)__N2M_i4i4i4i4S8i4},
	{"i4i4i4i4S8u1", (Il2CppMethodPointer)__N2M_i4i4i4i4S8u1},
	{"i4i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4i4u1},
	{"i4i4i4i4u1i4", (Il2CppMethodPointer)__N2M_i4i4i4i4u1i4},
	{"i4i4i4i4u1i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4u1i4i4},
	{"i4i4i4i4u1i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4i4u1i4i4i4i4i4i4},
	{"i4i4i4S12i4i4", (Il2CppMethodPointer)__N2M_i4i4i4S12i4i4},
	{"i4i4i4S8i4", (Il2CppMethodPointer)__N2M_i4i4i4S8i4},
	{"i4i4i4u1", (Il2CppMethodPointer)__N2M_i4i4i4u1},
	{"i4i4i4u1i4", (Il2CppMethodPointer)__N2M_i4i4i4u1i4},
	{"i4i4i4u1i4i4i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4u1i4i4i4i4i4},
	{"i4i4i4u1u1", (Il2CppMethodPointer)__N2M_i4i4i4u1u1},
	{"i4i4i4u2i4", (Il2CppMethodPointer)__N2M_i4i4i4u2i4},
	{"i4i4i4u2i4i4i4", (Il2CppMethodPointer)__N2M_i4i4i4u2i4i4i4},
	{"i4i4i8", (Il2CppMethodPointer)__N2M_i4i4i8},
	{"i4i4r4", (Il2CppMethodPointer)__N2M_i4i4r4},
	{"i4i4r4i4i4", (Il2CppMethodPointer)__N2M_i4i4r4i4i4},
	{"i4i4r8", (Il2CppMethodPointer)__N2M_i4i4r8},
	{"i4i4S1", (Il2CppMethodPointer)__N2M_i4i4S1},
	{"i4i4S108", (Il2CppMethodPointer)__N2M_i4i4S108},
	{"i4i4S108i4i4", (Il2CppMethodPointer)__N2M_i4i4S108i4i4},
	{"i4i4S108S108", (Il2CppMethodPointer)__N2M_i4i4S108S108},
	{"i4i4S12", (Il2CppMethodPointer)__N2M_i4i4S12},
	{"i4i4S12i4i4", (Il2CppMethodPointer)__N2M_i4i4S12i4i4},
	{"i4i4S12S12", (Il2CppMethodPointer)__N2M_i4i4S12S12},
	{"i4i4S12S4", (Il2CppMethodPointer)__N2M_i4i4S12S4},
	{"i4i4S16", (Il2CppMethodPointer)__N2M_i4i4S16},
	{"i4i4S16i4i4", (Il2CppMethodPointer)__N2M_i4i4S16i4i4},
	{"i4i4S16S16", (Il2CppMethodPointer)__N2M_i4i4S16S16},
	{"i4i4S1S1", (Il2CppMethodPointer)__N2M_i4i4S1S1},
	{"i4i4S20", (Il2CppMethodPointer)__N2M_i4i4S20},
	{"i4i4S24", (Il2CppMethodPointer)__N2M_i4i4S24},
	{"i4i4S28", (Il2CppMethodPointer)__N2M_i4i4S28},
	{"i4i4S32", (Il2CppMethodPointer)__N2M_i4i4S32},
	{"i4i4S36", (Il2CppMethodPointer)__N2M_i4i4S36},
	{"i4i4S4", (Il2CppMethodPointer)__N2M_i4i4S4},
	{"i4i4S4i4i4", (Il2CppMethodPointer)__N2M_i4i4S4i4i4},
	{"i4i4S4S4", (Il2CppMethodPointer)__N2M_i4i4S4S4},
	{"i4i4S8", (Il2CppMethodPointer)__N2M_i4i4S8},
	{"i4i4S8i4i4", (Il2CppMethodPointer)__N2M_i4i4S8i4i4},
	{"i4i4S8S12i4i4i4", (Il2CppMethodPointer)__N2M_i4i4S8S12i4i4i4},
	{"i4i4S8S12u8u8i4", (Il2CppMethodPointer)__N2M_i4i4S8S12u8u8i4},
	{"i4i4S8S8", (Il2CppMethodPointer)__N2M_i4i4S8S8},
	{"i4i4S8S8u1", (Il2CppMethodPointer)__N2M_i4i4S8S8u1},
	{"i4i4u1", (Il2CppMethodPointer)__N2M_i4i4u1},
	{"i4i4u1i4i4", (Il2CppMethodPointer)__N2M_i4i4u1i4i4},
	{"i4i4u1u1", (Il2CppMethodPointer)__N2M_i4i4u1u1},
	{"i4i4u2", (Il2CppMethodPointer)__N2M_i4i4u2},
	{"i4i4u4", (Il2CppMethodPointer)__N2M_i4i4u4},
	{"i4i4u8", (Il2CppMethodPointer)__N2M_i4i4u8},
	{"i4i4u8u8", (Il2CppMethodPointer)__N2M_i4i4u8u8},
	{"i4S108S108", (Il2CppMethodPointer)__N2M_i4S108S108},
	{"i4S12S12", (Il2CppMethodPointer)__N2M_i4S12S12},
	{"i4S16S16", (Il2CppMethodPointer)__N2M_i4S16S16},
	{"i4S4", (Il2CppMethodPointer)__N2M_i4S4},
	{"i4S4S4", (Il2CppMethodPointer)__N2M_i4S4S4},
	{"i4S8", (Il2CppMethodPointer)__N2M_i4S8},
	{"i4S8S12i4i4i4", (Il2CppMethodPointer)__N2M_i4S8S12i4i4i4},
	{"i4S8S12u8u8i4", (Il2CppMethodPointer)__N2M_i4S8S12u8u8i4},
	{"i4S8S8", (Il2CppMethodPointer)__N2M_i4S8S8},
	{"i4u1u1", (Il2CppMethodPointer)__N2M_i4u1u1},
	{"i4u8u8", (Il2CppMethodPointer)__N2M_i4u8u8},
	{"i8i4", (Il2CppMethodPointer)__N2M_i8i4},
	{"i8i4i4", (Il2CppMethodPointer)__N2M_i8i4i4},
	{"i8i4i4i4", (Il2CppMethodPointer)__N2M_i8i4i4i4},
	{"i8i4i4i4i8", (Il2CppMethodPointer)__N2M_i8i4i4i4i8},
	{"i8i4i4i8", (Il2CppMethodPointer)__N2M_i8i4i4i8},
	{"i8i4i8i4", (Il2CppMethodPointer)__N2M_i8i4i8i4},
	{"r4i4", (Il2CppMethodPointer)__N2M_r4i4},
	{"r4i4i4", (Il2CppMethodPointer)__N2M_r4i4i4},
	{"r8i4", (Il2CppMethodPointer)__N2M_r8i4},
	{"r8i4i4", (Il2CppMethodPointer)__N2M_r8i4i4},
	{"S1", (Il2CppMethodPointer)__N2M_S1},
	{"S108i4", (Il2CppMethodPointer)__N2M_S108i4},
	{"S108i4i4", (Il2CppMethodPointer)__N2M_S108i4i4},
	{"S12", (Il2CppMethodPointer)__N2M_S12},
	{"S12i4", (Il2CppMethodPointer)__N2M_S12i4},
	{"S12i4i4", (Il2CppMethodPointer)__N2M_S12i4i4},
	{"S12i4S12S4", (Il2CppMethodPointer)__N2M_S12i4S12S4},
	{"S12i4u1", (Il2CppMethodPointer)__N2M_S12i4u1},
	{"S16", (Il2CppMethodPointer)__N2M_S16},
	{"S16i4", (Il2CppMethodPointer)__N2M_S16i4},
	{"S16i4i4", (Il2CppMethodPointer)__N2M_S16i4i4},
	{"S1i4", (Il2CppMethodPointer)__N2M_S1i4},
	{"S1i4i4", (Il2CppMethodPointer)__N2M_S1i4i4},
	{"S1i4i4i4", (Il2CppMethodPointer)__N2M_S1i4i4i4},
	{"S20i4", (Il2CppMethodPointer)__N2M_S20i4},
	{"S24i4i4", (Il2CppMethodPointer)__N2M_S24i4i4},
	{"S32i4u1", (Il2CppMethodPointer)__N2M_S32i4u1},
	{"S4i4", (Il2CppMethodPointer)__N2M_S4i4},
	{"S4i4i4", (Il2CppMethodPointer)__N2M_S4i4i4},
	{"S8", (Il2CppMethodPointer)__N2M_S8},
	{"S8i4", (Il2CppMethodPointer)__N2M_S8i4},
	{"S8i4i4", (Il2CppMethodPointer)__N2M_S8i4i4},
	{"S8i4i4i4i4", (Il2CppMethodPointer)__N2M_S8i4i4i4i4},
	{"S8i4i4S144", (Il2CppMethodPointer)__N2M_S8i4i4S144},
	{"S8i4S12S4", (Il2CppMethodPointer)__N2M_S8i4S12S4},
	{"S8i4S144", (Il2CppMethodPointer)__N2M_S8i4S144},
	{"S8i4S8i4", (Il2CppMethodPointer)__N2M_S8i4S8i4},
	{"S8S8i4", (Il2CppMethodPointer)__N2M_S8S8i4},
	{"S96i4", (Il2CppMethodPointer)__N2M_S96i4},
	{"u1", (Il2CppMethodPointer)__N2M_u1},
	{"u1i4", (Il2CppMethodPointer)__N2M_u1i4},
	{"u1i4C16", (Il2CppMethodPointer)__N2M_u1i4C16},
	{"u1i4C24", (Il2CppMethodPointer)__N2M_u1i4C24},
	{"u1i4C48", (Il2CppMethodPointer)__N2M_u1i4C48},
	{"u1i4C8", (Il2CppMethodPointer)__N2M_u1i4C8},
	{"u1i4i1", (Il2CppMethodPointer)__N2M_u1i4i1},
	{"u1i4i2", (Il2CppMethodPointer)__N2M_u1i4i2},
	{"u1i4i4", (Il2CppMethodPointer)__N2M_u1i4i4},
	{"u1i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4},
	{"u1i4i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4i4},
	{"u1i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4i4i4},
	{"u1i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u1i4i4i4i4i4i4},
	{"u1i4i4u1", (Il2CppMethodPointer)__N2M_u1i4i4u1},
	{"u1i4i8", (Il2CppMethodPointer)__N2M_u1i4i8},
	{"u1i4r4", (Il2CppMethodPointer)__N2M_u1i4r4},
	{"u1i4r8", (Il2CppMethodPointer)__N2M_u1i4r8},
	{"u1i4S1", (Il2CppMethodPointer)__N2M_u1i4S1},
	{"u1i4S108", (Il2CppMethodPointer)__N2M_u1i4S108},
	{"u1i4S108S108", (Il2CppMethodPointer)__N2M_u1i4S108S108},
	{"u1i4S12", (Il2CppMethodPointer)__N2M_u1i4S12},
	{"u1i4S12i4", (Il2CppMethodPointer)__N2M_u1i4S12i4},
	{"u1i4S12S12", (Il2CppMethodPointer)__N2M_u1i4S12S12},
	{"u1i4S16", (Il2CppMethodPointer)__N2M_u1i4S16},
	{"u1i4S16i4", (Il2CppMethodPointer)__N2M_u1i4S16i4},
	{"u1i4S16i4i4", (Il2CppMethodPointer)__N2M_u1i4S16i4i4},
	{"u1i4S16S16", (Il2CppMethodPointer)__N2M_u1i4S16S16},
	{"u1i4S1S1", (Il2CppMethodPointer)__N2M_u1i4S1S1},
	{"u1i4S20", (Il2CppMethodPointer)__N2M_u1i4S20},
	{"u1i4S24", (Il2CppMethodPointer)__N2M_u1i4S24},
	{"u1i4S28", (Il2CppMethodPointer)__N2M_u1i4S28},
	{"u1i4S32", (Il2CppMethodPointer)__N2M_u1i4S32},
	{"u1i4S36", (Il2CppMethodPointer)__N2M_u1i4S36},
	{"u1i4S4", (Il2CppMethodPointer)__N2M_u1i4S4},
	{"u1i4S4S4", (Il2CppMethodPointer)__N2M_u1i4S4S4},
	{"u1i4S64", (Il2CppMethodPointer)__N2M_u1i4S64},
	{"u1i4S8", (Il2CppMethodPointer)__N2M_u1i4S8},
	{"u1i4S8i4", (Il2CppMethodPointer)__N2M_u1i4S8i4},
	{"u1i4S8i4S8i4", (Il2CppMethodPointer)__N2M_u1i4S8i4S8i4},
	{"u1i4S8S8", (Il2CppMethodPointer)__N2M_u1i4S8S8},
	{"u1i4u1", (Il2CppMethodPointer)__N2M_u1i4u1},
	{"u1i4u1u1", (Il2CppMethodPointer)__N2M_u1i4u1u1},
	{"u1i4u2", (Il2CppMethodPointer)__N2M_u1i4u2},
	{"u1i4u2i4", (Il2CppMethodPointer)__N2M_u1i4u2i4},
	{"u1i4u2u2", (Il2CppMethodPointer)__N2M_u1i4u2u2},
	{"u1i4u2u2i4", (Il2CppMethodPointer)__N2M_u1i4u2u2i4},
	{"u1i4u4", (Il2CppMethodPointer)__N2M_u1i4u4},
	{"u1i4u8", (Il2CppMethodPointer)__N2M_u1i4u8},
	{"u1S108", (Il2CppMethodPointer)__N2M_u1S108},
	{"u1S12", (Il2CppMethodPointer)__N2M_u1S12},
	{"u1S16", (Il2CppMethodPointer)__N2M_u1S16},
	{"u1S4", (Il2CppMethodPointer)__N2M_u1S4},
	{"u1S8", (Il2CppMethodPointer)__N2M_u1S8},
	{"u1u1", (Il2CppMethodPointer)__N2M_u1u1},
	{"u2i4", (Il2CppMethodPointer)__N2M_u2i4},
	{"u2i4i4", (Il2CppMethodPointer)__N2M_u2i4i4},
	{"u2i4u2", (Il2CppMethodPointer)__N2M_u2i4u2},
	{"u4C8C8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4C8C8i4i4i4i4i4},
	{"u4C8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4C8i4i4i4i4i4},
	{"u4i4", (Il2CppMethodPointer)__N2M_u4i4},
	{"u4i4C8C8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4i4C8C8i4i4i4i4i4},
	{"u4i4C8i4", (Il2CppMethodPointer)__N2M_u4i4C8i4},
	{"u4i4C8i4i4i4i4i4", (Il2CppMethodPointer)__N2M_u4i4C8i4i4i4i4i4},
	{"u4i4C8u4i4", (Il2CppMethodPointer)__N2M_u4i4C8u4i4},
	{"u4i4i4", (Il2CppMethodPointer)__N2M_u4i4i4},
	{"u4i4i4C8i4", (Il2CppMethodPointer)__N2M_u4i4i4C8i4},
	{"u4i4i4C8u4i4", (Il2CppMethodPointer)__N2M_u4i4i4C8u4i4},
	{"u4i4i4i4", (Il2CppMethodPointer)__N2M_u4i4i4i4},
	{"u8i4", (Il2CppMethodPointer)__N2M_u8i4},
	{"u8i4i4", (Il2CppMethodPointer)__N2M_u8i4i4},
	{"v", (Il2CppMethodPointer)__N2M_v},
	{"vC16", (Il2CppMethodPointer)__N2M_vC16},
	{"vC16i4", (Il2CppMethodPointer)__N2M_vC16i4},
	{"vC32", (Il2CppMethodPointer)__N2M_vC32},
	{"vi4", (Il2CppMethodPointer)__N2M_vi4},
	{"vi4C16", (Il2CppMethodPointer)__N2M_vi4C16},
	{"vi4C16i4", (Il2CppMethodPointer)__N2M_vi4C16i4},
	{"vi4C32", (Il2CppMethodPointer)__N2M_vi4C32},
	{"vi4C8i4", (Il2CppMethodPointer)__N2M_vi4C8i4},
	{"vi4i2", (Il2CppMethodPointer)__N2M_vi4i2},
	{"vi4i4", (Il2CppMethodPointer)__N2M_vi4i4},
	{"vi4i4C8i4", (Il2CppMethodPointer)__N2M_vi4i4C8i4},
	{"vi4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4},
	{"vi4i4i4i2i4", (Il2CppMethodPointer)__N2M_vi4i4i4i2i4},
	{"vi4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4},
	{"vi4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4},
	{"vi4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4i4i4i4i4i4i4i4i4i4},
	{"vi4i4i4i4u1", (Il2CppMethodPointer)__N2M_vi4i4i4i4u1},
	{"vi4i4i4S8", (Il2CppMethodPointer)__N2M_vi4i4i4S8},
	{"vi4i4i4u1", (Il2CppMethodPointer)__N2M_vi4i4i4u1},
	{"vi4i4i4u4u4i4", (Il2CppMethodPointer)__N2M_vi4i4i4u4u4i4},
	{"vi4i4S108", (Il2CppMethodPointer)__N2M_vi4i4S108},
	{"vi4i4S12", (Il2CppMethodPointer)__N2M_vi4i4S12},
	{"vi4i4S16", (Il2CppMethodPointer)__N2M_vi4i4S16},
	{"vi4i4S16i4i4", (Il2CppMethodPointer)__N2M_vi4i4S16i4i4},
	{"vi4i4S24", (Il2CppMethodPointer)__N2M_vi4i4S24},
	{"vi4i4S4", (Il2CppMethodPointer)__N2M_vi4i4S4},
	{"vi4i4S8", (Il2CppMethodPointer)__N2M_vi4i4S8},
	{"vi4i4u1", (Il2CppMethodPointer)__N2M_vi4i4u1},
	{"vi4i4u1i4", (Il2CppMethodPointer)__N2M_vi4i4u1i4},
	{"vi4i4u1S24", (Il2CppMethodPointer)__N2M_vi4i4u1S24},
	{"vi4i4u1u1", (Il2CppMethodPointer)__N2M_vi4i4u1u1},
	{"vi4i4u4", (Il2CppMethodPointer)__N2M_vi4i4u4},
	{"vi4i8", (Il2CppMethodPointer)__N2M_vi4i8},
	{"vi4i8i4i8", (Il2CppMethodPointer)__N2M_vi4i8i4i8},
	{"vi4i8i8", (Il2CppMethodPointer)__N2M_vi4i8i8},
	{"vi4r4", (Il2CppMethodPointer)__N2M_vi4r4},
	{"vi4r4r4", (Il2CppMethodPointer)__N2M_vi4r4r4},
	{"vi4r8", (Il2CppMethodPointer)__N2M_vi4r8},
	{"vi4S108", (Il2CppMethodPointer)__N2M_vi4S108},
	{"vi4S12", (Il2CppMethodPointer)__N2M_vi4S12},
	{"vi4S12i4", (Il2CppMethodPointer)__N2M_vi4S12i4},
	{"vi4S16", (Il2CppMethodPointer)__N2M_vi4S16},
	{"vi4S16i4", (Il2CppMethodPointer)__N2M_vi4S16i4},
	{"vi4S16i4i4", (Il2CppMethodPointer)__N2M_vi4S16i4i4},
	{"vi4S20", (Il2CppMethodPointer)__N2M_vi4S20},
	{"vi4S24", (Il2CppMethodPointer)__N2M_vi4S24},
	{"vi4S32", (Il2CppMethodPointer)__N2M_vi4S32},
	{"vi4S4", (Il2CppMethodPointer)__N2M_vi4S4},
	{"vi4S4i4", (Il2CppMethodPointer)__N2M_vi4S4i4},
	{"vi4S4i4i4", (Il2CppMethodPointer)__N2M_vi4S4i4i4},
	{"vi4S4S4", (Il2CppMethodPointer)__N2M_vi4S4S4},
	{"vi4S8", (Il2CppMethodPointer)__N2M_vi4S8},
	{"vi4S8C56", (Il2CppMethodPointer)__N2M_vi4S8C56},
	{"vi4S8C56i4", (Il2CppMethodPointer)__N2M_vi4S8C56i4},
	{"vi4S8i4", (Il2CppMethodPointer)__N2M_vi4S8i4},
	{"vi4S8i4i4", (Il2CppMethodPointer)__N2M_vi4S8i4i4},
	{"vi4S8S12", (Il2CppMethodPointer)__N2M_vi4S8S12},
	{"vi4S8S20", (Il2CppMethodPointer)__N2M_vi4S8S20},
	{"vi4S8S28", (Il2CppMethodPointer)__N2M_vi4S8S28},
	{"vi4S8S36", (Il2CppMethodPointer)__N2M_vi4S8S36},
	{"vi4u1", (Il2CppMethodPointer)__N2M_vi4u1},
	{"vi4u1i4", (Il2CppMethodPointer)__N2M_vi4u1i4},
	{"vi4u1S24", (Il2CppMethodPointer)__N2M_vi4u1S24},
	{"vi4u2", (Il2CppMethodPointer)__N2M_vi4u2},
	{"vi4u4", (Il2CppMethodPointer)__N2M_vi4u4},
	{"vi4u4i4u4i2i4i4i4i4", (Il2CppMethodPointer)__N2M_vi4u4i4u4i2i4i4i4i4},
	{"vi4u4u4i4", (Il2CppMethodPointer)__N2M_vi4u4u4i4},
	{"vi4u8", (Il2CppMethodPointer)__N2M_vi4u8},
	{"vr4", (Il2CppMethodPointer)__N2M_vr4},
	{"vS108", (Il2CppMethodPointer)__N2M_vS108},
	{"vS12", (Il2CppMethodPointer)__N2M_vS12},
	{"vS16", (Il2CppMethodPointer)__N2M_vS16},
	{"vS4", (Il2CppMethodPointer)__N2M_vS4},
	{"vS4i4", (Il2CppMethodPointer)__N2M_vS4i4},
	{"vS4S4", (Il2CppMethodPointer)__N2M_vS4S4},
	{"vS8", (Il2CppMethodPointer)__N2M_vS8},
	{"vS8i4", (Il2CppMethodPointer)__N2M_vS8i4},
	{"vS8S12", (Il2CppMethodPointer)__N2M_vS8S12},
	{"vS8S20", (Il2CppMethodPointer)__N2M_vS8S20},
	{"vS8S28", (Il2CppMethodPointer)__N2M_vS8S28},
	{"vS8S36", (Il2CppMethodPointer)__N2M_vS8S36},
	{"vu1", (Il2CppMethodPointer)__N2M_vu1},
	{nullptr, nullptr},
};

// System.Decimal System.IConvertible::ToDecimal(System.IFormatProvider)
static ValueTypeSizeAlign8<16> __N2M_AdjustorThunk_C16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<16>*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::get_CurrentLeaseTime()
static ValueTypeSizeAlign8<8> __N2M_AdjustorThunk_C8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.TimeSpan System.Runtime.Remoting.Lifetime.ILease::Renew(System.TimeSpan)
static ValueTypeSizeAlign8<8> __N2M_AdjustorThunk_C8i4C8(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.DateTime System.IConvertible::ToDateTime(System.IFormatProvider)
static ValueTypeSizeAlign8<8> __N2M_AdjustorThunk_C8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSizeAlign8<8>*)ret;
}


// System.SByte System.IConvertible::ToSByte(System.IFormatProvider)
static int8_t __N2M_AdjustorThunk_i1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int8_t*)ret;
}


// System.Int16 System.IConvertible::ToInt16(System.IFormatProvider)
static int16_t __N2M_AdjustorThunk_i2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int16_t*)ret;
}


// Mono.ISystemCertificateProvider Mono.ISystemDependencyProvider::get_CertificateProvider()
static int32_t __N2M_AdjustorThunk_i4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4C8(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Threading.Tasks.Sources.ValueTaskSourceStatus System.Threading.Tasks.Sources.IValueTaskSource::GetStatus(System.Int16)
static int32_t __N2M_AdjustorThunk_i4i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String Mono.Xml.SmallXmlParser/IAttrList::GetName(System.Int32)
static int32_t __N2M_AdjustorThunk_i4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Mono.CertificateImportFlags)
static int32_t __N2M_AdjustorThunk_i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.String System.ICustomFormatter::Format(System.String,System.Object,System.IFormatProvider)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Security.Cryptography.X509Certificates.X509CertificateImpl Mono.ISystemCertificateProvider::Import(System.Byte[],Microsoft.Win32.SafeHandles.SafePasswordHandle,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags,Mono.CertificateImportFlags)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[7] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = args + 6;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Globalization.ISimpleCollator::Compare(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
static int32_t __N2M_AdjustorThunk_i4i4i4i4i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, const MethodInfo* method)
{
    StackObject args[9] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7 };
    StackObject* ret = args + 8;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Runtime.Serialization.ISerializationSurrogate::SetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector)
static int32_t __N2M_AdjustorThunk_i4i4i4i4S8i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable<TKey>(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
static int32_t __N2M_AdjustorThunk_i4i4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ISurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
static int32_t __N2M_AdjustorThunk_i4i4i4S8i4(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object[] System.Reflection.ICustomAttributeProvider::GetCustomAttributes(System.Type,System.Boolean)
static int32_t __N2M_AdjustorThunk_i4i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4S1(int32_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i4S108(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4S108S108(int32_t __arg0, ValueTypeSize<108> __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i4S12(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4S12S12(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4S16(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4S16S16(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i4S24(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IList`1::IndexOf(T)
static int32_t __N2M_AdjustorThunk_i4i4S4(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4S4S4(int32_t __arg0, ValueTypeSize<4> __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Object System.Runtime.Serialization.IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext)
static int32_t __N2M_AdjustorThunk_i4i4S8(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4S8S8(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4u1u1(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.IComparable`1::CompareTo(T)
static int32_t __N2M_AdjustorThunk_i4i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int32 System.Collections.Generic.IComparer`1::Compare(T,T)
static int32_t __N2M_AdjustorThunk_i4i4u8u8(int32_t __arg0, uint64_t __arg1, uint64_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(int32_t*)ret;
}


// System.Int64 System.IConvertible::ToInt64(System.IFormatProvider)
static int64_t __N2M_AdjustorThunk_i8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(int64_t*)ret;
}


// System.Single System.IConvertible::ToSingle(System.IFormatProvider)
static float __N2M_AdjustorThunk_r4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(float*)ret;
}


// System.Double System.IConvertible::ToDouble(System.IFormatProvider)
static double __N2M_AdjustorThunk_r8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(double*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<108> __N2M_AdjustorThunk_S108i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[15] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<108>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<108> __N2M_AdjustorThunk_S108i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[16] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<108>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<12> __N2M_AdjustorThunk_S12i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<12> __N2M_AdjustorThunk_S12i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// System.ConsoleKeyInfo System.IConsoleDriver::ReadKey(System.Boolean)
static ValueTypeSize<12> __N2M_AdjustorThunk_S12i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<12>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<16> __N2M_AdjustorThunk_S16i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<16> __N2M_AdjustorThunk_S16i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<16>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<20> __N2M_AdjustorThunk_S20i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<20>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<24> __N2M_AdjustorThunk_S24i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<24>*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static ValueTypeSize<4> __N2M_AdjustorThunk_S4i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<4> __N2M_AdjustorThunk_S4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<4>*)ret;
}


// System.Collections.DictionaryEntry System.Collections.IDictionaryEnumerator::get_Entry()
static ValueTypeSize<8> __N2M_AdjustorThunk_S8i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// T System.Collections.Generic.IList`1::get_Item(System.Int32)
static ValueTypeSize<8> __N2M_AdjustorThunk_S8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(ValueTypeSize<8>*)ret;
}


// System.Boolean System.IAsyncResult::get_IsCompleted()
static uint8_t __N2M_AdjustorThunk_u1i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4C16(int32_t __arg0, ValueTypeSizeAlign8<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4C24(int32_t __arg0, ValueTypeSizeAlign8<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4C48(int32_t __arg0, ValueTypeSizeAlign8<48> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4C8(int32_t __arg0, ValueTypeSizeAlign8<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4i1(int32_t __arg0, int8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IConvertible::ToBoolean(System.IFormatProvider)
static uint8_t __N2M_AdjustorThunk_u1i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Runtime.Remoting.IRemotingTypeInfo::CanCastTo(System.Type,System.Object)
static uint8_t __N2M_AdjustorThunk_u1i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Globalization.ISimpleCollator::IsPrefix(System.String,System.String,System.Globalization.CompareOptions)
static uint8_t __N2M_AdjustorThunk_u1i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Net.ICertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
static uint8_t __N2M_AdjustorThunk_u1i4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean)
static uint8_t __N2M_AdjustorThunk_u1i4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4i8(int32_t __arg0, int64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4r4(int32_t __arg0, float __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4r8(int32_t __arg0, double __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4S1(int32_t __arg0, ValueTypeSize<1> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ICollection`1::Contains(T)
static uint8_t __N2M_AdjustorThunk_u1i4S108(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4S12(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i4S12S12(int32_t __arg0, ValueTypeSize<12> __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4S16(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean UnityEngine.IPlayerEditorConnectionNative::TrySendMessage(System.Guid,System.Byte[],System.Int32)
static uint8_t __N2M_AdjustorThunk_u1i4S16i4i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = args + 4;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i4S16S16(int32_t __arg0, ValueTypeSize<16> __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ICollection`1::Contains(T)
static uint8_t __N2M_AdjustorThunk_u1i4S20(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.ICollection`1::Contains(T)
static uint8_t __N2M_AdjustorThunk_u1i4S24(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4S28(int32_t __arg0, ValueTypeSize<28> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4S4(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4S64(int32_t __arg0, ValueTypeSize<64> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4S8(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.ISpanFormattable::TryFormat(System.Span`1<System.Char>,System.Int32&,System.ReadOnlySpan`1<System.Char>,System.IFormatProvider)
static uint8_t __N2M_AdjustorThunk_u1i4S8i4S8i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = args + 5;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i4S8S8(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.Collections.Generic.IEqualityComparer`1::Equals(T,T)
static uint8_t __N2M_AdjustorThunk_u1i4u1u1(int32_t __arg0, uint8_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = args + 3;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u2(int32_t __arg0, uint16_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u4(int32_t __arg0, uint32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// System.Boolean System.IEquatable`1::Equals(T)
static uint8_t __N2M_AdjustorThunk_u1i4u8(int32_t __arg0, uint64_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint8_t*)ret;
}


// T System.Collections.Generic.IEnumerator`1::get_Current()
static uint16_t __N2M_AdjustorThunk_u2i4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = args + 1;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.Char System.IConvertible::ToChar(System.IFormatProvider)
static uint16_t __N2M_AdjustorThunk_u2i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint16_t*)ret;
}


// System.UInt32 System.IConvertible::ToUInt32(System.IFormatProvider)
static uint32_t __N2M_AdjustorThunk_u4i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint32_t*)ret;
}


// System.UInt64 System.IConvertible::ToUInt64(System.IFormatProvider)
static uint64_t __N2M_AdjustorThunk_u8i4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = args + 2;
    Interpreter::Execute(method, args, ret);
    return *(uint64_t*)ret;
}


// System.Void System.IDisposable::Dispose()
static void __N2M_AdjustorThunk_vi4(int32_t __arg0, const MethodInfo* method)
{
    StackObject args[1] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)) };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::GetResult(System.Int16)
static void __N2M_AdjustorThunk_vi4i2(int32_t __arg0, int16_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SmallXmlParser/IContentHandler::OnStartParsing(Mono.Xml.SmallXmlParser)
static void __N2M_AdjustorThunk_vi4i4(int32_t __arg0, int32_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void Mono.Xml.SmallXmlParser/IContentHandler::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
static void __N2M_AdjustorThunk_vi4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.Tasks.Sources.IValueTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16,System.Threading.Tasks.Sources.ValueTaskSourceOnCompletedFlags)
static void __N2M_AdjustorThunk_vi4i4i4i2i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int16_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.Object,UnityEngine.Object)
static void __N2M_AdjustorThunk_vi4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
static void __N2M_AdjustorThunk_vi4i4i4i4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, int32_t __arg3, int32_t __arg4, const MethodInfo* method)
{
    StackObject args[5] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ISerializationSurrogate::GetObjectData(System.Object,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_AdjustorThunk_vi4i4i4S8(int32_t __arg0, int32_t __arg1, int32_t __arg2, ValueTypeSize<8> __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Threading.IAsyncLocal::OnValueChanged(System.Object,System.Object,System.Boolean)
static void __N2M_AdjustorThunk_vi4i4i4u1(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.InteropServices._Activator::GetIDsOfNames(System.Guid&,System.IntPtr,System.UInt32,System.UInt32,System.IntPtr)
static void __N2M_AdjustorThunk_vi4i4i4u4u4i4(int32_t __arg0, int32_t __arg1, int32_t __arg2, uint32_t __arg3, uint32_t __arg4, int32_t __arg5, const MethodInfo* method)
{
    StackObject args[6] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4S108(int32_t __arg0, int32_t __arg1, ValueTypeSize<108> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4S12(int32_t __arg0, int32_t __arg1, ValueTypeSize<12> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4S16(int32_t __arg0, int32_t __arg1, ValueTypeSize<16> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4S24(int32_t __arg0, int32_t __arg1, ValueTypeSize<24> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4S4(int32_t __arg0, int32_t __arg1, ValueTypeSize<4> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Serialization.ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
static void __N2M_AdjustorThunk_vi4i4S8(int32_t __arg0, int32_t __arg1, ValueTypeSize<8> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.IList`1::set_Item(System.Int32,T)
static void __N2M_AdjustorThunk_vi4i4u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Contexts.IDynamicMessageSink::ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage,System.Boolean,System.Boolean)
static void __N2M_AdjustorThunk_vi4i4u1u1(int32_t __arg0, int32_t __arg1, uint8_t __arg2, uint8_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4S108(int32_t __arg0, ValueTypeSize<108> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4S12(int32_t __arg0, ValueTypeSize<12> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::RegisterInternal(System.Guid)
static void __N2M_AdjustorThunk_vi4S16(int32_t __arg0, ValueTypeSize<16> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Networking.PlayerConnection.IEditorPlayerConnection::Register(System.Guid,UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>)
static void __N2M_AdjustorThunk_vi4S16i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.IPlayerEditorConnectionNative::SendMessage(System.Guid,System.Byte[],System.Int32)
static void __N2M_AdjustorThunk_vi4S16i4i4(int32_t __arg0, ValueTypeSize<16> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4S20(int32_t __arg0, ValueTypeSize<20> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4S24(int32_t __arg0, ValueTypeSize<24> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), (uint64_t)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Collections.Generic.ICollection`1::Add(T)
static void __N2M_AdjustorThunk_vi4S4(int32_t __arg0, ValueTypeSize<4> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable)
static void __N2M_AdjustorThunk_vi4S8(int32_t __arg0, ValueTypeSize<8> __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData)
static void __N2M_AdjustorThunk_vi4S8C56(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSizeAlign8<56> __arg2, const MethodInfo* method)
{
    StackObject args[3] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable,UnityEngine.Playables.FrameData,System.Object)
static void __N2M_AdjustorThunk_vi4S8C56i4(int32_t __arg0, ValueTypeSize<8> __arg1, ValueTypeSizeAlign8<56> __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, (uint64_t)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void UnityEngine.Playables.INotificationReceiver::OnNotify(UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
static void __N2M_AdjustorThunk_vi4S8i4i4(int32_t __arg0, ValueTypeSize<8> __arg1, int32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.Remoting.Channels.ISecurableChannel::set_IsSecured(System.Boolean)
static void __N2M_AdjustorThunk_vi4u1(int32_t __arg0, uint8_t __arg1, const MethodInfo* method)
{
    StackObject args[2] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.InteropServices._Activator::Invoke(System.UInt32,System.Guid&,System.UInt32,System.Int16,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr)
static void __N2M_AdjustorThunk_vi4u4i4u4i2i4i4i4i4(int32_t __arg0, uint32_t __arg1, int32_t __arg2, uint32_t __arg3, int16_t __arg4, int32_t __arg5, int32_t __arg6, int32_t __arg7, int32_t __arg8, const MethodInfo* method)
{
    StackObject args[9] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3, *(uint64_t*)&__arg4, *(uint64_t*)&__arg5, *(uint64_t*)&__arg6, *(uint64_t*)&__arg7, *(uint64_t*)&__arg8 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


// System.Void System.Runtime.InteropServices._Activator::GetTypeInfo(System.UInt32,System.UInt32,System.IntPtr)
static void __N2M_AdjustorThunk_vi4u4u4i4(int32_t __arg0, uint32_t __arg1, uint32_t __arg2, int32_t __arg3, const MethodInfo* method)
{
    StackObject args[4] = {(uint64_t)(*(uint8_t**)&__arg0 + sizeof(Il2CppObject)), *(uint64_t*)&__arg1, *(uint64_t*)&__arg2, *(uint64_t*)&__arg3 };
    StackObject* ret = nullptr;
    Interpreter::Execute(method, args, ret);
    
}


NativeAdjustThunkMethodInfo hybridclr::interpreter::g_adjustThunkStub[] = 
{

	{"C16i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_C16i4i4},
	{"C8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_C8i4},
	{"C8i4C8", (Il2CppMethodPointer)__N2M_AdjustorThunk_C8i4C8},
	{"C8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_C8i4i4},
	{"i1i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i1i4i4},
	{"i2i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i2i4i4},
	{"i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4},
	{"i4i4C16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4C16},
	{"i4i4C8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4C8},
	{"i4i4i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i1},
	{"i4i4i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i2},
	{"i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4},
	{"i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4},
	{"i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4},
	{"i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4i4i4},
	{"i4i4i4i4i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4i4i4i4i4i4},
	{"i4i4i4i4S8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4S8i4},
	{"i4i4i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4i4u1},
	{"i4i4i4S8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4S8i4},
	{"i4i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i4u1},
	{"i4i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4i8},
	{"i4i4r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4r4},
	{"i4i4r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4r8},
	{"i4i4S1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S1},
	{"i4i4S108", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S108},
	{"i4i4S108S108", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S108S108},
	{"i4i4S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S12},
	{"i4i4S12S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S12S12},
	{"i4i4S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S16},
	{"i4i4S16S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S16S16},
	{"i4i4S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S24},
	{"i4i4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S4},
	{"i4i4S4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S4S4},
	{"i4i4S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S8},
	{"i4i4S8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4S8S8},
	{"i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u1},
	{"i4i4u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u1u1},
	{"i4i4u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u2},
	{"i4i4u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u4},
	{"i4i4u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u8},
	{"i4i4u8u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_i4i4u8u8},
	{"i8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_i8i4i4},
	{"r4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_r4i4i4},
	{"r8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_r8i4i4},
	{"S108i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S108i4},
	{"S108i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S108i4i4},
	{"S12i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i4},
	{"S12i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i4i4},
	{"S12i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_S12i4u1},
	{"S16i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i4},
	{"S16i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S16i4i4},
	{"S20i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S20i4},
	{"S24i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S24i4i4},
	{"S4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S4i4},
	{"S4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S4i4i4},
	{"S8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i4},
	{"S8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_S8i4i4},
	{"u1i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4},
	{"u1i4C16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4C16},
	{"u1i4C24", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4C24},
	{"u1i4C48", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4C48},
	{"u1i4C8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4C8},
	{"u1i4i1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i1},
	{"u1i4i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i2},
	{"u1i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4},
	{"u1i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4i4},
	{"u1i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4i4i4},
	{"u1i4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4i4i4i4},
	{"u1i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i4u1},
	{"u1i4i8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4i8},
	{"u1i4r4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4r4},
	{"u1i4r8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4r8},
	{"u1i4S1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S1},
	{"u1i4S108", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S108},
	{"u1i4S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S12},
	{"u1i4S12S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S12S12},
	{"u1i4S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S16},
	{"u1i4S16i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S16i4i4},
	{"u1i4S16S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S16S16},
	{"u1i4S20", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S20},
	{"u1i4S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S24},
	{"u1i4S28", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S28},
	{"u1i4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S4},
	{"u1i4S64", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S64},
	{"u1i4S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S8},
	{"u1i4S8i4S8i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S8i4S8i4},
	{"u1i4S8S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4S8S8},
	{"u1i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u1},
	{"u1i4u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u1u1},
	{"u1i4u2", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u2},
	{"u1i4u4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u4},
	{"u1i4u8", (Il2CppMethodPointer)__N2M_AdjustorThunk_u1i4u8},
	{"u2i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i4},
	{"u2i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u2i4i4},
	{"u4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u4i4i4},
	{"u8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_u8i4i4},
	{"vi4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4},
	{"vi4i2", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i2},
	{"vi4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4},
	{"vi4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4},
	{"vi4i4i4i2i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4i2i4},
	{"vi4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4i4},
	{"vi4i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4i4i4},
	{"vi4i4i4S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4S8},
	{"vi4i4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4u1},
	{"vi4i4i4u4u4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4i4u4u4i4},
	{"vi4i4S108", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4S108},
	{"vi4i4S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4S12},
	{"vi4i4S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4S16},
	{"vi4i4S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4S24},
	{"vi4i4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4S4},
	{"vi4i4S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4S8},
	{"vi4i4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4u1},
	{"vi4i4u1u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4i4u1u1},
	{"vi4S108", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S108},
	{"vi4S12", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S12},
	{"vi4S16", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S16},
	{"vi4S16i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S16i4},
	{"vi4S16i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S16i4i4},
	{"vi4S20", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S20},
	{"vi4S24", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S24},
	{"vi4S4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S4},
	{"vi4S8", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S8},
	{"vi4S8C56", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S8C56},
	{"vi4S8C56i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S8C56i4},
	{"vi4S8i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4S8i4i4},
	{"vi4u1", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4u1},
	{"vi4u4i4u4i2i4i4i4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4u4i4u4i2i4i4i4i4},
	{"vi4u4u4i4", (Il2CppMethodPointer)__N2M_AdjustorThunk_vi4u4u4i4},
	{nullptr, nullptr},
};

//!!!}}CODE
#endif
