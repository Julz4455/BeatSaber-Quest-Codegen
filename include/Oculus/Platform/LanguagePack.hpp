// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: AssetDetails
  class AssetDetails;
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.LanguagePack
  class LanguagePack : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> GetCurrent()
    // Offset: 0x135AAF4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails*>* GetCurrent();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> SetCurrent(System.String tag)
    // Offset: 0x135AC00
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult*>* SetCurrent(::Il2CppString* tag);
  }; // Oculus.Platform.LanguagePack
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LanguagePack*, "Oculus.Platform", "LanguagePack");
#pragma pack(pop)
