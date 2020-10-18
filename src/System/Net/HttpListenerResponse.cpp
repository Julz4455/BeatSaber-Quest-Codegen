// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.HttpListenerResponse
#include "System/Net/HttpListenerResponse.hpp"
// Including type: System.Text.Encoding
#include "System/Text/Encoding.hpp"
// Including type: System.Net.CookieCollection
#include "System/Net/CookieCollection.hpp"
// Including type: System.Net.WebHeaderCollection
#include "System/Net/WebHeaderCollection.hpp"
// Including type: System.Net.ResponseStream
#include "System/Net/ResponseStream.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.Net.HttpListenerContext
#include "System/Net/HttpListenerContext.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
// Including type: System.Net.Cookie
#include "System/Net/Cookie.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String tspecials
::Il2CppString* System::Net::HttpListenerResponse::_get_tspecials() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Net", "HttpListenerResponse", "tspecials"));
}
// Autogenerated static field setter
// Set static field: static private System.String tspecials
void System::Net::HttpListenerResponse::_set_tspecials(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "HttpListenerResponse", "tspecials", value));
}
// Autogenerated method: System.Net.HttpListenerResponse..ctor
System::Net::HttpListenerResponse* System::Net::HttpListenerResponse::New_ctor(System::Net::HttpListenerContext* context) {
  return THROW_UNLESS(il2cpp_utils::New<HttpListenerResponse*>(context));
}
// Autogenerated method: System.Net.HttpListenerResponse.get_ForceCloseChunked
bool System::Net::HttpListenerResponse::get_ForceCloseChunked() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_ForceCloseChunked"));
}
// Autogenerated method: System.Net.HttpListenerResponse.get_ContentEncoding
System::Text::Encoding* System::Net::HttpListenerResponse::get_ContentEncoding() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Text::Encoding*>(this, "get_ContentEncoding"));
}
// Autogenerated method: System.Net.HttpListenerResponse.set_ContentLength64
void System::Net::HttpListenerResponse::set_ContentLength64(int64_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ContentLength64", value));
}
// Autogenerated method: System.Net.HttpListenerResponse.set_ContentType
void System::Net::HttpListenerResponse::set_ContentType(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ContentType", value));
}
// Autogenerated method: System.Net.HttpListenerResponse.get_Headers
System::Net::WebHeaderCollection* System::Net::HttpListenerResponse::get_Headers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::WebHeaderCollection*>(this, "get_Headers"));
}
// Autogenerated method: System.Net.HttpListenerResponse.get_OutputStream
System::IO::Stream* System::Net::HttpListenerResponse::get_OutputStream() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::Stream*>(this, "get_OutputStream"));
}
// Autogenerated method: System.Net.HttpListenerResponse.get_SendChunked
bool System::Net::HttpListenerResponse::get_SendChunked() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SendChunked"));
}
// Autogenerated method: System.Net.HttpListenerResponse.set_SendChunked
void System::Net::HttpListenerResponse::set_SendChunked(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SendChunked", value));
}
// Autogenerated method: System.Net.HttpListenerResponse.set_StatusCode
void System::Net::HttpListenerResponse::set_StatusCode(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_StatusCode", value));
}
// Autogenerated method: System.Net.HttpListenerResponse.Close
void System::Net::HttpListenerResponse::Close(bool force) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close", force));
}
// Autogenerated method: System.Net.HttpListenerResponse.Close
void System::Net::HttpListenerResponse::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Net.HttpListenerResponse.Close
void System::Net::HttpListenerResponse::Close(::Array<uint8_t>* responseEntity, bool willBlock) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close", responseEntity, willBlock));
}
// Autogenerated method: System.Net.HttpListenerResponse.SendHeaders
void System::Net::HttpListenerResponse::SendHeaders(bool closing, System::IO::MemoryStream* ms) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SendHeaders", closing, ms));
}
// Autogenerated method: System.Net.HttpListenerResponse.FormatHeaders
::Il2CppString* System::Net::HttpListenerResponse::FormatHeaders(System::Net::WebHeaderCollection* headers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Net", "HttpListenerResponse", "FormatHeaders", headers));
}
// Autogenerated method: System.Net.HttpListenerResponse.CookieToClientString
::Il2CppString* System::Net::HttpListenerResponse::CookieToClientString(System::Net::Cookie* cookie) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Net", "HttpListenerResponse", "CookieToClientString", cookie));
}
// Autogenerated method: System.Net.HttpListenerResponse.QuotedString
::Il2CppString* System::Net::HttpListenerResponse::QuotedString(System::Net::Cookie* cookie, ::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Net", "HttpListenerResponse", "QuotedString", cookie, value));
}
// Autogenerated method: System.Net.HttpListenerResponse.IsToken
bool System::Net::HttpListenerResponse::IsToken(::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Net", "HttpListenerResponse", "IsToken", value));
}
// Autogenerated method: System.Net.HttpListenerResponse..cctor
void System::Net::HttpListenerResponse::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net", "HttpListenerResponse", ".cctor"));
}
// Autogenerated method: System.Net.HttpListenerResponse.System.IDisposable.Dispose
void System::Net::HttpListenerResponse::System_IDisposable_Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
}
