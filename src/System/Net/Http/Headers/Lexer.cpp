// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Lexer
#include "System/Net/Http/Headers/Lexer.hpp"
// Including type: System.Net.Http.Headers.Token
#include "System/Net/Http/Headers/Token.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Boolean[] token_chars
::Array<bool>* System::Net::Http::Headers::Lexer::_get_token_chars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<bool>*>("System.Net.Http.Headers", "Lexer", "token_chars"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Boolean[] token_chars
void System::Net::Http::Headers::Lexer::_set_token_chars(::Array<bool>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net.Http.Headers", "Lexer", "token_chars", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 last_token_char
int System::Net::Http::Headers::Lexer::_get_last_token_char() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Net.Http.Headers", "Lexer", "last_token_char"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 last_token_char
void System::Net::Http::Headers::Lexer::_set_last_token_char(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net.Http.Headers", "Lexer", "last_token_char", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.String[] dt_formats
::Array<::Il2CppString*>* System::Net::Http::Headers::Lexer::_get_dt_formats() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppString*>*>("System.Net.Http.Headers", "Lexer", "dt_formats"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.String[] dt_formats
void System::Net::Http::Headers::Lexer::_set_dt_formats(::Array<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net.Http.Headers", "Lexer", "dt_formats", value));
}
// Autogenerated method: System.Net.Http.Headers.Lexer..ctor
System::Net::Http::Headers::Lexer* System::Net::Http::Headers::Lexer::New_ctor(::Il2CppString* stream) {
  return THROW_UNLESS(il2cpp_utils::New<Lexer*>(stream));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.get_Position
int System::Net::Http::Headers::Lexer::get_Position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Position"));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.set_Position
void System::Net::Http::Headers::Lexer::set_Position(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Position", value));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.GetStringValue
::Il2CppString* System::Net::Http::Headers::Lexer::GetStringValue(System::Net::Http::Headers::Token token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetStringValue", token));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.GetStringValue
::Il2CppString* System::Net::Http::Headers::Lexer::GetStringValue(System::Net::Http::Headers::Token start, System::Net::Http::Headers::Token end) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetStringValue", start, end));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.GetQuotedStringValue
::Il2CppString* System::Net::Http::Headers::Lexer::GetQuotedStringValue(System::Net::Http::Headers::Token start) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetQuotedStringValue", start));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.GetRemainingStringValue
::Il2CppString* System::Net::Http::Headers::Lexer::GetRemainingStringValue(int position) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetRemainingStringValue", position));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.IsStarStringValue
bool System::Net::Http::Headers::Lexer::IsStarStringValue(System::Net::Http::Headers::Token token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsStarStringValue", token));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.TryGetNumericValue
bool System::Net::Http::Headers::Lexer::TryGetNumericValue(System::Net::Http::Headers::Token token, int& value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetNumericValue", token, value));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.TryGetNumericValue
bool System::Net::Http::Headers::Lexer::TryGetNumericValue(System::Net::Http::Headers::Token token, int64_t& value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetNumericValue", token, value));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.TryGetTimeSpanValue
System::Nullable_1<System::TimeSpan> System::Net::Http::Headers::Lexer::TryGetTimeSpanValue(System::Net::Http::Headers::Token token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<System::TimeSpan>>(this, "TryGetTimeSpanValue", token));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.TryGetDateValue
bool System::Net::Http::Headers::Lexer::TryGetDateValue(System::Net::Http::Headers::Token token, System::DateTimeOffset& value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetDateValue", token, value));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.TryGetDateValue
bool System::Net::Http::Headers::Lexer::TryGetDateValue(::Il2CppString* text, System::DateTimeOffset& value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Net.Http.Headers", "Lexer", "TryGetDateValue", text, value));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.TryGetDoubleValue
bool System::Net::Http::Headers::Lexer::TryGetDoubleValue(System::Net::Http::Headers::Token token, double& value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetDoubleValue", token, value));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.IsValidToken
bool System::Net::Http::Headers::Lexer::IsValidToken(::Il2CppString* input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Net.Http.Headers", "Lexer", "IsValidToken", input));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.IsValidCharacter
bool System::Net::Http::Headers::Lexer::IsValidCharacter(::Il2CppChar input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Net.Http.Headers", "Lexer", "IsValidCharacter", input));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.EatChar
void System::Net::Http::Headers::Lexer::EatChar() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EatChar"));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.PeekChar
int System::Net::Http::Headers::Lexer::PeekChar() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "PeekChar"));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.ScanCommentOptional
bool System::Net::Http::Headers::Lexer::ScanCommentOptional(::Il2CppString*& value, System::Net::Http::Headers::Token& readToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ScanCommentOptional", value, readToken));
}
// Autogenerated method: System.Net.Http.Headers.Lexer.Scan
System::Net::Http::Headers::Token System::Net::Http::Headers::Lexer::Scan(bool recognizeDash) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Http::Headers::Token>(this, "Scan", recognizeDash));
}
// Autogenerated method: System.Net.Http.Headers.Lexer..cctor
void System::Net::Http::Headers::Lexer::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net.Http.Headers", "Lexer", ".cctor"));
}
