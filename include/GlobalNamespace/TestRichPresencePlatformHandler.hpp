// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresencePlatformHandler
#include "GlobalNamespace/IRichPresencePlatformHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IRichPresenceData
  class IRichPresenceData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestRichPresencePlatformHandler
  class TestRichPresencePlatformHandler : public ::Il2CppObject, public GlobalNamespace::IRichPresencePlatformHandler {
    public:
    // public System.Void SetPresence(IRichPresenceData richPresenceData)
    // Offset: 0xF3491C
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::SetPresence(IRichPresenceData richPresenceData)
    void SetPresence(GlobalNamespace::IRichPresenceData* richPresenceData);
    // public System.Void Clear()
    // Offset: 0xF34A00
    // Implemented from: IRichPresencePlatformHandler
    // Base method: System.Void IRichPresencePlatformHandler::Clear()
    void Clear();
    // public System.Void .ctor()
    // Offset: 0xF34A6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestRichPresencePlatformHandler* New_ctor();
  }; // TestRichPresencePlatformHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestRichPresencePlatformHandler*, "", "TestRichPresencePlatformHandler");
#pragma pack(pop)
