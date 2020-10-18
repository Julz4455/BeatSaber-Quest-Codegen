// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.HttpWebResponse
#include "System/Net/HttpWebResponse.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.Net.WebHeaderCollection
#include "System/Net/WebHeaderCollection.hpp"
// Including type: System.Net.CookieCollection
#include "System/Net/CookieCollection.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.Net.CookieContainer
#include "System/Net/CookieContainer.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.Net.WebConnectionData
#include "System/Net/WebConnectionData.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.HttpWebResponse..ctor
System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(System::Uri* uri, ::Il2CppString* method, System::Net::WebConnectionData* data, System::Net::CookieContainer* container) {
  return THROW_UNLESS(il2cpp_utils::New<HttpWebResponse*>(uri, method, data, container));
}
// Autogenerated method: System.Net.HttpWebResponse.get_StatusCode
System::Net::HttpStatusCode System::Net::HttpWebResponse::get_StatusCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::HttpStatusCode>(this, "get_StatusCode"));
}
// Autogenerated method: System.Net.HttpWebResponse.get_StatusDescription
::Il2CppString* System::Net::HttpWebResponse::get_StatusDescription() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_StatusDescription"));
}
// Autogenerated method: System.Net.HttpWebResponse.ReadAll
void System::Net::HttpWebResponse::ReadAll() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadAll"));
}
// Autogenerated method: System.Net.HttpWebResponse.CheckDisposed
void System::Net::HttpWebResponse::CheckDisposed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckDisposed"));
}
// Autogenerated method: System.Net.HttpWebResponse.FillCookies
void System::Net::HttpWebResponse::FillCookies() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FillCookies"));
}
// Autogenerated method: System.Net.HttpWebResponse..ctor
System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(il2cpp_utils::New<HttpWebResponse*>(serializationInfo, streamingContext));
}
// Autogenerated method: System.Net.HttpWebResponse.get_Headers
System::Net::WebHeaderCollection* System::Net::HttpWebResponse::get_Headers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::WebHeaderCollection*>(this, "get_Headers"));
}
// Autogenerated method: System.Net.HttpWebResponse.get_ResponseUri
System::Uri* System::Net::HttpWebResponse::get_ResponseUri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Uri*>(this, "get_ResponseUri"));
}
// Autogenerated method: System.Net.HttpWebResponse.GetResponseStream
System::IO::Stream* System::Net::HttpWebResponse::GetResponseStream() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::Stream*>(this, "GetResponseStream"));
}
// Autogenerated method: System.Net.HttpWebResponse.System.Runtime.Serialization.ISerializable.GetObjectData
void System::Net::HttpWebResponse::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.ISerializable.GetObjectData", serializationInfo, streamingContext));
}
// Autogenerated method: System.Net.HttpWebResponse.GetObjectData
void System::Net::HttpWebResponse::GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", serializationInfo, streamingContext));
}
// Autogenerated method: System.Net.HttpWebResponse.Close
void System::Net::HttpWebResponse::Close() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Close"));
}
// Autogenerated method: System.Net.HttpWebResponse.System.IDisposable.Dispose
void System::Net::HttpWebResponse::System_IDisposable_Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
}
// Autogenerated method: System.Net.HttpWebResponse.Dispose
void System::Net::HttpWebResponse::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Net.HttpWebResponse..ctor
System::Net::HttpWebResponse* System::Net::HttpWebResponse::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<HttpWebResponse*>());
}
