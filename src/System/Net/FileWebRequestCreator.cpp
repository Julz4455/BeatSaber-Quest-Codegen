// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.FileWebRequestCreator
#include "System/Net/FileWebRequestCreator.hpp"
// Including type: System.Net.WebRequest
#include "System/Net/WebRequest.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.FileWebRequestCreator..ctor
System::Net::FileWebRequestCreator* System::Net::FileWebRequestCreator::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<FileWebRequestCreator*>());
}
// Autogenerated method: System.Net.FileWebRequestCreator.Create
System::Net::WebRequest* System::Net::FileWebRequestCreator::Create(System::Uri* uri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::WebRequest*>(this, "Create", uri));
}
