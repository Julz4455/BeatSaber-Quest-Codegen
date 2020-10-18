// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Including type: UnityEngine.Events.UnityEvent
#include "UnityEngine/Events/UnityEvent.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Events/Event
  class SteamVR_Events::Event : public UnityEngine::Events::UnityEvent {
    public:
    // public System.Void Listen(UnityEngine.Events.UnityAction action)
    // Offset: 0x1233C28
    void Listen(UnityEngine::Events::UnityAction* action);
    // public System.Void Remove(UnityEngine.Events.UnityAction action)
    // Offset: 0x1233CFC
    void Remove(UnityEngine::Events::UnityAction* action);
    // public System.Void Send()
    // Offset: 0x1234964
    void Send();
    // public System.Void .ctor()
    // Offset: 0x1234924
    // Implemented from: UnityEngine.Events.UnityEvent
    // Base method: System.Void UnityEvent::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Events::Event* New_ctor();
  }; // SteamVR_Events/Event
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Events::Event*, "", "SteamVR_Events/Event");
#pragma pack(pop)
