// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.DigestClient
#include "System/Net/DigestClient.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Net.Authorization
#include "System/Net/Authorization.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Net.ICredentials
#include "System/Net/ICredentials.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Collections.Hashtable cache
System::Collections::Hashtable* System::Net::DigestClient::_get_cache() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Hashtable*>("System.Net", "DigestClient", "cache"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Collections.Hashtable cache
void System::Net::DigestClient::_set_cache(System::Collections::Hashtable* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net", "DigestClient", "cache", value));
}
// Autogenerated method: System.Net.DigestClient.get_Cache
System::Collections::Hashtable* System::Net::DigestClient::get_Cache() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Hashtable*>("System.Net", "DigestClient", "get_Cache"));
}
// Autogenerated method: System.Net.DigestClient.CheckExpired
void System::Net::DigestClient::CheckExpired(int count) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net", "DigestClient", "CheckExpired", count));
}
// Autogenerated method: System.Net.DigestClient..cctor
void System::Net::DigestClient::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Net", "DigestClient", ".cctor"));
}
// Autogenerated method: System.Net.DigestClient.Authenticate
System::Net::Authorization* System::Net::DigestClient::Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Authorization*>(this, "Authenticate", challenge, webRequest, credentials));
}
// Autogenerated method: System.Net.DigestClient.PreAuthenticate
System::Net::Authorization* System::Net::DigestClient::PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::Authorization*>(this, "PreAuthenticate", webRequest, credentials));
}
// Autogenerated method: System.Net.DigestClient.get_AuthenticationType
::Il2CppString* System::Net::DigestClient::get_AuthenticationType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AuthenticationType"));
}
// Autogenerated method: System.Net.DigestClient..ctor
System::Net::DigestClient* System::Net::DigestClient::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<DigestClient*>());
}
