// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Including type: System.IFormatProvider
#include "System/IFormatProvider.hpp"
// Including type: System.Globalization.NumberStyles
#include "System/Globalization/NumberStyles.hpp"
// Including type: System.TypeCode
#include "System/TypeCode.hpp"
// Including type: System.Decimal
#include "System/Decimal.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.UInt32 MaxValue
uint System::UInt32::_get_MaxValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("System", "UInt32", "MaxValue"));
}
// Autogenerated static field setter
// Set static field: static public System.UInt32 MaxValue
void System::UInt32::_set_MaxValue(uint value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "UInt32", "MaxValue", value));
}
// Autogenerated static field getter
// Get static field: static public System.UInt32 MinValue
uint System::UInt32::_get_MinValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<uint>("System", "UInt32", "MinValue"));
}
// Autogenerated static field setter
// Set static field: static public System.UInt32 MinValue
void System::UInt32::_set_MinValue(uint value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System", "UInt32", "MinValue", value));
}
// Autogenerated method: System.UInt32.Parse
uint System::UInt32::Parse(::Il2CppString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "UInt32", "Parse", s));
}
// Autogenerated method: System.UInt32.Parse
uint System::UInt32::Parse(::Il2CppString* s, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "UInt32", "Parse", s, provider));
}
// Autogenerated method: System.UInt32.Parse
uint System::UInt32::Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("System", "UInt32", "Parse", s, style, provider));
}
// Autogenerated method: System.UInt32.TryParse
bool System::UInt32::TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, uint& result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System", "UInt32", "TryParse", s, style, provider, result));
}
// Autogenerated method: System.UInt32.CompareTo
int System::UInt32::CompareTo(::Il2CppObject* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
int System::UInt32::System_IComparable_CompareTo(::Il2CppObject* value) {
  return System::UInt32::CompareTo(value);
}
// Autogenerated method: System.UInt32.CompareTo
int System::UInt32::CompareTo(uint value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", value));
}
// Autogenerated method: System.UInt32.Equals
bool System::UInt32::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.UInt32.Equals
bool System::UInt32::Equals(uint obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.UInt32.GetHashCode
int System::UInt32::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: System.UInt32.ToString
::Il2CppString* System::UInt32::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}
// Autogenerated method: System.UInt32.ToString
::Il2CppString* System::UInt32::ToString(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString", provider));
}
// Autogenerated method: System.UInt32.ToString
::Il2CppString* System::UInt32::ToString(::Il2CppString* format, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString", format, provider));
}
// Autogenerated method: System.UInt32.GetTypeCode
System::TypeCode System::UInt32::GetTypeCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TypeCode>(*this, "GetTypeCode"));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToBoolean
bool System::UInt32::System_IConvertible_ToBoolean(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "System.IConvertible.ToBoolean", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToChar
::Il2CppChar System::UInt32::System_IConvertible_ToChar(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(*this, "System.IConvertible.ToChar", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToSByte
int8_t System::UInt32::System_IConvertible_ToSByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int8_t>(*this, "System.IConvertible.ToSByte", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToByte
uint8_t System::UInt32::System_IConvertible_ToByte(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint8_t>(*this, "System.IConvertible.ToByte", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToInt16
int16_t System::UInt32::System_IConvertible_ToInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>(*this, "System.IConvertible.ToInt16", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToUInt16
uint16_t System::UInt32::System_IConvertible_ToUInt16(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint16_t>(*this, "System.IConvertible.ToUInt16", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToInt32
int System::UInt32::System_IConvertible_ToInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "System.IConvertible.ToInt32", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToUInt32
uint System::UInt32::System_IConvertible_ToUInt32(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>(*this, "System.IConvertible.ToUInt32", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToInt64
int64_t System::UInt32::System_IConvertible_ToInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int64_t>(*this, "System.IConvertible.ToInt64", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToUInt64
uint64_t System::UInt32::System_IConvertible_ToUInt64(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>(*this, "System.IConvertible.ToUInt64", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToSingle
float System::UInt32::System_IConvertible_ToSingle(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "System.IConvertible.ToSingle", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToDouble
double System::UInt32::System_IConvertible_ToDouble(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(*this, "System.IConvertible.ToDouble", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToDecimal
System::Decimal System::UInt32::System_IConvertible_ToDecimal(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Decimal>(*this, "System.IConvertible.ToDecimal", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToDateTime
System::DateTime System::UInt32::System_IConvertible_ToDateTime(System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(*this, "System.IConvertible.ToDateTime", provider));
}
// Autogenerated method: System.UInt32.System.IConvertible.ToType
::Il2CppObject* System::UInt32::System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(*this, "System.IConvertible.ToType", type, provider));
}
