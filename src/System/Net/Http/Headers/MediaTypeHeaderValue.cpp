// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.MediaTypeHeaderValue
#include "System/Net/Http/Headers/MediaTypeHeaderValue.hpp"
// Including type: System.Net.Http.Headers.MediaTypeHeaderValue/<>c
#include "System/Net/Http/Headers/MediaTypeHeaderValue_--c.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Net.Http.Headers.NameValueHeaderValue
#include "System/Net/Http/Headers/NameValueHeaderValue.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.Net.Http.Headers.Lexer
#include "System/Net/Http/Headers/Lexer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue..ctor
System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor(System::Net::Http::Headers::MediaTypeHeaderValue* source) {
  return THROW_UNLESS(il2cpp_utils::New<MediaTypeHeaderValue*>(source));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.get_CharSet
::Il2CppString* System::Net::Http::Headers::MediaTypeHeaderValue::get_CharSet() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_CharSet"));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.get_Parameters
System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* System::Net::Http::Headers::MediaTypeHeaderValue::get_Parameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>*>(this, "get_Parameters"));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.TryParse
bool System::Net::Http::Headers::MediaTypeHeaderValue::TryParse(::Il2CppString* input, System::Net::Http::Headers::MediaTypeHeaderValue*& parsedValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Net.Http.Headers", "MediaTypeHeaderValue", "TryParse", input, parsedValue));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.TryParseMediaType
System::Nullable_1<System::Net::Http::Headers::Token> System::Net::Http::Headers::MediaTypeHeaderValue::TryParseMediaType(System::Net::Http::Headers::Lexer* lexer, ::Il2CppString*& media) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<System::Net::Http::Headers::Token>>("System.Net.Http.Headers", "MediaTypeHeaderValue", "TryParseMediaType", lexer, media));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue..ctor
System::Net::Http::Headers::MediaTypeHeaderValue* System::Net::Http::Headers::MediaTypeHeaderValue::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MediaTypeHeaderValue*>());
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.System.ICloneable.Clone
::Il2CppObject* System::Net::Http::Headers::MediaTypeHeaderValue::System_ICloneable_Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.ICloneable.Clone"));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.Equals
bool System::Net::Http::Headers::MediaTypeHeaderValue::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.GetHashCode
int System::Net::Http::Headers::MediaTypeHeaderValue::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Net.Http.Headers.MediaTypeHeaderValue.ToString
::Il2CppString* System::Net::Http::Headers::MediaTypeHeaderValue::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
