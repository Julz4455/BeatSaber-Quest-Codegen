// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Authorization
#include "System/Net/Authorization.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.Authorization..ctor
System::Net::Authorization* System::Net::Authorization::New_ctor(::Il2CppString* token) {
  return THROW_UNLESS(il2cpp_utils::New<Authorization*>(token));
}
// Autogenerated method: System.Net.Authorization..ctor
System::Net::Authorization* System::Net::Authorization::New_ctor(::Il2CppString* token, bool finished) {
  return THROW_UNLESS(il2cpp_utils::New<Authorization*>(token, finished));
}
// Autogenerated method: System.Net.Authorization.get_Message
::Il2CppString* System::Net::Authorization::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Message"));
}
// Autogenerated method: System.Net.Authorization.get_Complete
bool System::Net::Authorization::get_Complete() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_Complete"));
}
