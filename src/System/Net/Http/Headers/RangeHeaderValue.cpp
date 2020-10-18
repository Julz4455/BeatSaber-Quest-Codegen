// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.RangeHeaderValue
#include "System/Net/Http/Headers/RangeHeaderValue.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Net.Http.Headers.RangeItemHeaderValue
#include "System/Net/Http/Headers/RangeItemHeaderValue.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue..ctor
System::Net::Http::Headers::RangeHeaderValue* System::Net::Http::Headers::RangeHeaderValue::New_ctor(System::Net::Http::Headers::RangeHeaderValue* source) {
  return THROW_UNLESS(il2cpp_utils::New<RangeHeaderValue*>(source));
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue.get_Ranges
System::Collections::Generic::ICollection_1<System::Net::Http::Headers::RangeItemHeaderValue*>* System::Net::Http::Headers::RangeHeaderValue::get_Ranges() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::RangeItemHeaderValue*>*>(this, "get_Ranges"));
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue.get_Unit
::Il2CppString* System::Net::Http::Headers::RangeHeaderValue::get_Unit() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Unit"));
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue.TryParse
bool System::Net::Http::Headers::RangeHeaderValue::TryParse(::Il2CppString* input, System::Net::Http::Headers::RangeHeaderValue*& parsedValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Net.Http.Headers", "RangeHeaderValue", "TryParse", input, parsedValue));
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue..ctor
System::Net::Http::Headers::RangeHeaderValue* System::Net::Http::Headers::RangeHeaderValue::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<RangeHeaderValue*>());
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue.System.ICloneable.Clone
::Il2CppObject* System::Net::Http::Headers::RangeHeaderValue::System_ICloneable_Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.ICloneable.Clone"));
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue.Equals
bool System::Net::Http::Headers::RangeHeaderValue::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue.GetHashCode
int System::Net::Http::Headers::RangeHeaderValue::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Net.Http.Headers.RangeHeaderValue.ToString
::Il2CppString* System::Net::Http::Headers::RangeHeaderValue::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
