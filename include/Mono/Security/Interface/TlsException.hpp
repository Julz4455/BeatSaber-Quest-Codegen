// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: Alert
  class Alert;
  // Forward declaring type: AlertDescription
  struct AlertDescription;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Autogenerated type: Mono.Security.Interface.TlsException
  class TlsException : public System::Exception {
    public:
    // private Mono.Security.Interface.Alert alert
    // Offset: 0x88
    Mono::Security::Interface::Alert* alert;
    // Creating conversion operator: operator Mono::Security::Interface::Alert*
    constexpr operator Mono::Security::Interface::Alert*() const noexcept {
      return alert;
    }
    // public System.Void .ctor(Mono.Security.Interface.Alert alert, System.String message)
    // Offset: 0x1B87300
    static TlsException* New_ctor(Mono::Security::Interface::Alert* alert, ::Il2CppString* message);
    // public System.Void .ctor(Mono.Security.Interface.AlertDescription description, System.String message)
    // Offset: 0x1B8738C
    static TlsException* New_ctor(Mono::Security::Interface::AlertDescription description, ::Il2CppString* message);
  }; // Mono.Security.Interface.TlsException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::TlsException*, "Mono.Security.Interface", "TlsException");
#pragma pack(pop)
