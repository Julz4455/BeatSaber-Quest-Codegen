// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithAssetFileDeleteResult
#include "Oculus/Platform/MessageWithAssetFileDeleteResult.hpp"
// Including type: Oculus.Platform.Models.AssetFileDeleteResult
#include "Oculus/Platform/Models/AssetFileDeleteResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithAssetFileDeleteResult.GetDataFromMessage
Oculus::Platform::Models::AssetFileDeleteResult* Oculus::Platform::MessageWithAssetFileDeleteResult::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AssetFileDeleteResult*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAssetFileDeleteResult..ctor
Oculus::Platform::MessageWithAssetFileDeleteResult* Oculus::Platform::MessageWithAssetFileDeleteResult::New_ctor(System::IntPtr c_message) {
  return (MessageWithAssetFileDeleteResult*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithAssetFileDeleteResult", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAssetFileDeleteResult.GetAssetFileDeleteResult
Oculus::Platform::Models::AssetFileDeleteResult* Oculus::Platform::MessageWithAssetFileDeleteResult::GetAssetFileDeleteResult() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AssetFileDeleteResult*>(this, "GetAssetFileDeleteResult"));
}
