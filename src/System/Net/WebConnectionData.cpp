// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebConnectionData
#include "System/Net/WebConnectionData.hpp"
// Including type: System.Net.HttpWebRequest
#include "System/Net/HttpWebRequest.hpp"
// Including type: System.Net.WebHeaderCollection
#include "System/Net/WebHeaderCollection.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.WebConnectionData..ctor
System::Net::WebConnectionData* System::Net::WebConnectionData::New_ctor(System::Net::HttpWebRequest* request) {
  return THROW_UNLESS(il2cpp_utils::New<WebConnectionData*>(request));
}
// Autogenerated method: System.Net.WebConnectionData.get_request
System::Net::HttpWebRequest* System::Net::WebConnectionData::get_request() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::HttpWebRequest*>(this, "get_request"));
}
// Autogenerated method: System.Net.WebConnectionData.set_request
void System::Net::WebConnectionData::set_request(System::Net::HttpWebRequest* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_request", value));
}
// Autogenerated method: System.Net.WebConnectionData.get_ReadState
System::Net::ReadState System::Net::WebConnectionData::get_ReadState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::ReadState>(this, "get_ReadState"));
}
// Autogenerated method: System.Net.WebConnectionData.set_ReadState
void System::Net::WebConnectionData::set_ReadState(System::Net::ReadState value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ReadState", value));
}
// Autogenerated method: System.Net.WebConnectionData..ctor
System::Net::WebConnectionData* System::Net::WebConnectionData::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<WebConnectionData*>());
}
