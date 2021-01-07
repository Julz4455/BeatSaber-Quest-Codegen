// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: ApplicationOptions
  class ApplicationOptions;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ApplicationVersion
  class ApplicationVersion;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  // Autogenerated type: Oculus.Platform.Application
  // [] Offset: FFFFFFFF
  class Application : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Application
    Application() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ApplicationVersion> GetVersion()
    // Offset: 0x189E01C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ApplicationVersion*>* GetVersion();
    // static public Oculus.Platform.Request`1<System.String> LaunchOtherApp(System.UInt64 appID, Oculus.Platform.ApplicationOptions deeplink_options)
    // Offset: 0x189E198
    static Oculus::Platform::Request_1<::Il2CppString*>* LaunchOtherApp(uint64_t appID, Oculus::Platform::ApplicationOptions* deeplink_options);
  }; // Oculus.Platform.Application
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Application*, "Oculus.Platform", "Application");
#pragma pack(pop)
