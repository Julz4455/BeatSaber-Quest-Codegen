// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.TextInfo
#include "System/Globalization/TextInfo.hpp"
// Including type: System.Globalization.CultureData
#include "System/Globalization/CultureData.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Globalization.TextInfo s_Invariant
System::Globalization::TextInfo* System::Globalization::TextInfo::_get_s_Invariant() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Globalization::TextInfo*>("System.Globalization", "TextInfo", "s_Invariant"));
}
// Autogenerated static field setter
// Set static field: static System.Globalization.TextInfo s_Invariant
void System::Globalization::TextInfo::_set_s_Invariant(System::Globalization::TextInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "TextInfo", "s_Invariant", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 wordSeparatorMask
int System::Globalization::TextInfo::_get_wordSeparatorMask() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Globalization", "TextInfo", "wordSeparatorMask"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 wordSeparatorMask
void System::Globalization::TextInfo::_set_wordSeparatorMask(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Globalization", "TextInfo", "wordSeparatorMask", value));
}
// Autogenerated method: System.Globalization.TextInfo.get_Invariant
System::Globalization::TextInfo* System::Globalization::TextInfo::get_Invariant() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Globalization::TextInfo*>("System.Globalization", "TextInfo", "get_Invariant"));
}
// Autogenerated method: System.Globalization.TextInfo..ctor
System::Globalization::TextInfo* System::Globalization::TextInfo::New_ctor(System::Globalization::CultureData* cultureData) {
  return THROW_UNLESS(il2cpp_utils::New<TextInfo*>(cultureData));
}
// Autogenerated method: System.Globalization.TextInfo.OnDeserializing
void System::Globalization::TextInfo::OnDeserializing(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserializing", ctx));
}
// Autogenerated method: System.Globalization.TextInfo.OnDeserialized
void System::Globalization::TextInfo::OnDeserialized() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserialized"));
}
// Autogenerated method: System.Globalization.TextInfo.OnDeserialized
void System::Globalization::TextInfo::OnDeserialized(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserialized", ctx));
}
// Autogenerated method: System.Globalization.TextInfo.OnSerializing
void System::Globalization::TextInfo::OnSerializing(System::Runtime::Serialization::StreamingContext ctx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSerializing", ctx));
}
// Autogenerated method: System.Globalization.TextInfo.GetHashCodeOrdinalIgnoreCase
int System::Globalization::TextInfo::GetHashCodeOrdinalIgnoreCase(::Il2CppString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "TextInfo", "GetHashCodeOrdinalIgnoreCase", s));
}
// Autogenerated method: System.Globalization.TextInfo.GetHashCodeOrdinalIgnoreCase
int System::Globalization::TextInfo::GetHashCodeOrdinalIgnoreCase(::Il2CppString* s, bool forceRandomizedHashing, int64_t additionalEntropy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "TextInfo", "GetHashCodeOrdinalIgnoreCase", s, forceRandomizedHashing, additionalEntropy));
}
// Autogenerated method: System.Globalization.TextInfo.CompareOrdinalIgnoreCase
int System::Globalization::TextInfo::CompareOrdinalIgnoreCase(::Il2CppString* str1, ::Il2CppString* str2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "TextInfo", "CompareOrdinalIgnoreCase", str1, str2));
}
// Autogenerated method: System.Globalization.TextInfo.CompareOrdinalIgnoreCaseEx
int System::Globalization::TextInfo::CompareOrdinalIgnoreCaseEx(::Il2CppString* strA, int indexA, ::Il2CppString* strB, int indexB, int lengthA, int lengthB) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "TextInfo", "CompareOrdinalIgnoreCaseEx", strA, indexA, strB, indexB, lengthA, lengthB));
}
// Autogenerated method: System.Globalization.TextInfo.IndexOfStringOrdinalIgnoreCase
int System::Globalization::TextInfo::IndexOfStringOrdinalIgnoreCase(::Il2CppString* source, ::Il2CppString* value, int startIndex, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "TextInfo", "IndexOfStringOrdinalIgnoreCase", source, value, startIndex, count));
}
// Autogenerated method: System.Globalization.TextInfo.LastIndexOfStringOrdinalIgnoreCase
int System::Globalization::TextInfo::LastIndexOfStringOrdinalIgnoreCase(::Il2CppString* source, ::Il2CppString* value, int startIndex, int count) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "TextInfo", "LastIndexOfStringOrdinalIgnoreCase", source, value, startIndex, count));
}
// Autogenerated method: System.Globalization.TextInfo.get_CultureName
::Il2CppString* System::Globalization::TextInfo::get_CultureName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_CultureName"));
}
// Autogenerated method: System.Globalization.TextInfo.SetReadOnlyState
void System::Globalization::TextInfo::SetReadOnlyState(bool readOnly) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetReadOnlyState", readOnly));
}
// Autogenerated method: System.Globalization.TextInfo.ToLower
::Il2CppChar System::Globalization::TextInfo::ToLower(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ToLower", c));
}
// Autogenerated method: System.Globalization.TextInfo.ToLower
::Il2CppString* System::Globalization::TextInfo::ToLower(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToLower", str));
}
// Autogenerated method: System.Globalization.TextInfo.ToLowerAsciiInvariant
::Il2CppChar System::Globalization::TextInfo::ToLowerAsciiInvariant(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System.Globalization", "TextInfo", "ToLowerAsciiInvariant", c));
}
// Autogenerated method: System.Globalization.TextInfo.ToUpper
::Il2CppChar System::Globalization::TextInfo::ToUpper(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ToUpper", c));
}
// Autogenerated method: System.Globalization.TextInfo.ToUpper
::Il2CppString* System::Globalization::TextInfo::ToUpper(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToUpper", str));
}
// Autogenerated method: System.Globalization.TextInfo.ToUpperAsciiInvariant
::Il2CppChar System::Globalization::TextInfo::ToUpperAsciiInvariant(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>("System.Globalization", "TextInfo", "ToUpperAsciiInvariant", c));
}
// Autogenerated method: System.Globalization.TextInfo.IsAscii
bool System::Globalization::TextInfo::IsAscii(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Globalization", "TextInfo", "IsAscii", c));
}
// Autogenerated method: System.Globalization.TextInfo.get_IsAsciiCasingSameAsInvariant
bool System::Globalization::TextInfo::get_IsAsciiCasingSameAsInvariant() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsAsciiCasingSameAsInvariant"));
}
// Autogenerated method: System.Globalization.TextInfo.GetCaseInsensitiveHashCode
int System::Globalization::TextInfo::GetCaseInsensitiveHashCode(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCaseInsensitiveHashCode", str));
}
// Autogenerated method: System.Globalization.TextInfo.GetCaseInsensitiveHashCode
int System::Globalization::TextInfo::GetCaseInsensitiveHashCode(::Il2CppString* str, bool forceRandomizedHashing, int64_t additionalEntropy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCaseInsensitiveHashCode", str, forceRandomizedHashing, additionalEntropy));
}
// Autogenerated method: System.Globalization.TextInfo.GetInvariantCaseInsensitiveHashCode
int System::Globalization::TextInfo::GetInvariantCaseInsensitiveHashCode(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetInvariantCaseInsensitiveHashCode", str));
}
// Autogenerated method: System.Globalization.TextInfo.ToUpperInternal
::Il2CppString* System::Globalization::TextInfo::ToUpperInternal(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToUpperInternal", str));
}
// Autogenerated method: System.Globalization.TextInfo.ToLowerInternal
::Il2CppString* System::Globalization::TextInfo::ToLowerInternal(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToLowerInternal", str));
}
// Autogenerated method: System.Globalization.TextInfo.ToUpperInternal
::Il2CppChar System::Globalization::TextInfo::ToUpperInternal(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ToUpperInternal", c));
}
// Autogenerated method: System.Globalization.TextInfo.ToLowerInternal
::Il2CppChar System::Globalization::TextInfo::ToLowerInternal(::Il2CppChar c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppChar>(this, "ToLowerInternal", c));
}
// Autogenerated method: System.Globalization.TextInfo.InternalCompareStringOrdinalIgnoreCase
int System::Globalization::TextInfo::InternalCompareStringOrdinalIgnoreCase(::Il2CppString* strA, int indexA, ::Il2CppString* strB, int indexB, int lenA, int lenB) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Globalization", "TextInfo", "InternalCompareStringOrdinalIgnoreCase", strA, indexA, strB, indexB, lenA, lenB));
}
// Autogenerated method: System.Globalization.TextInfo.Clone
::Il2CppObject* System::Globalization::TextInfo::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Clone"));
}
::Il2CppObject* System::Globalization::TextInfo::System_ICloneable_Clone() {
  return System::Globalization::TextInfo::Clone();
}
// Autogenerated method: System.Globalization.TextInfo.Equals
bool System::Globalization::TextInfo::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Globalization.TextInfo.GetHashCode
int System::Globalization::TextInfo::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Globalization.TextInfo.ToString
::Il2CppString* System::Globalization::TextInfo::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
// Autogenerated method: System.Globalization.TextInfo.System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
void System::Globalization::TextInfo::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", sender));
}
// Autogenerated method: System.Globalization.TextInfo..ctor
System::Globalization::TextInfo* System::Globalization::TextInfo::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<TextInfo*>());
}
