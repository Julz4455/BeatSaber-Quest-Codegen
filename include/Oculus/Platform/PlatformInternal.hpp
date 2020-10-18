// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.PlatformInternal
  class PlatformInternal : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::PlatformInternal::MessageTypeInternal
    struct MessageTypeInternal;
    // Nested type: Oculus::Platform::PlatformInternal::HTTP
    class HTTP;
    // Nested type: Oculus::Platform::PlatformInternal::Users
    class Users;
    // static public System.Void CrashApplication()
    // Offset: 0x136D440
    static void CrashApplication();
    // static Oculus.Platform.Message ParseMessageHandle(System.IntPtr messageHandle, Oculus.Platform.Message/MessageType messageType)
    // Offset: 0x136082C
    static Oculus::Platform::Message* ParseMessageHandle(System::IntPtr messageHandle, Oculus::Platform::Message::MessageType messageType);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> InitializeStandaloneAsync(System.UInt64 appID, System.String accessToken)
    // Offset: 0x136D4A0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize*>* InitializeStandaloneAsync(uint64_t appID, ::Il2CppString* accessToken);
  }; // Oculus.Platform.PlatformInternal
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInternal*, "Oculus.Platform", "PlatformInternal");
#pragma pack(pop)
