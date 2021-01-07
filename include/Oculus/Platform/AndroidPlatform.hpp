// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  // Autogenerated type: Oculus.Platform.AndroidPlatform
  // [] Offset: FFFFFFFF
  class AndroidPlatform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AndroidPlatform
    AndroidPlatform() noexcept {}
    // public System.Boolean Initialize(System.String appId)
    // Offset: 0x189DD48
    bool Initialize(::Il2CppString* appId);
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x189DE94
    Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::Il2CppString* appId);
    // public System.Void .ctor()
    // Offset: 0x189E014
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidPlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("AndroidPlatform").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidPlatform*, creationType>()));
    }
  }; // Oculus.Platform.AndroidPlatform
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AndroidPlatform*, "Oculus.Platform", "AndroidPlatform");
#pragma pack(pop)
