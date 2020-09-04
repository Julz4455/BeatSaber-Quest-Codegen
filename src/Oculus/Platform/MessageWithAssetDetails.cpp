// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.MessageWithAssetDetails
#include "Oculus/Platform/MessageWithAssetDetails.hpp"
// Including type: Oculus.Platform.Models.AssetDetails
#include "Oculus/Platform/Models/AssetDetails.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.MessageWithAssetDetails.GetDataFromMessage
Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetDataFromMessage(System::IntPtr c_message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AssetDetails*>(this, "GetDataFromMessage", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAssetDetails..ctor
Oculus::Platform::MessageWithAssetDetails* Oculus::Platform::MessageWithAssetDetails::New_ctor(System::IntPtr c_message) {
  return (MessageWithAssetDetails*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "MessageWithAssetDetails", c_message));
}
// Autogenerated method: Oculus.Platform.MessageWithAssetDetails.GetAssetDetails
Oculus::Platform::Models::AssetDetails* Oculus::Platform::MessageWithAssetDetails::GetAssetDetails() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Models::AssetDetails*>(this, "GetAssetDetails"));
}
