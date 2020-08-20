// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
#include "UnityEngine/Experimental/Rendering/IScriptableRuntimeReflectionSystem.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Autogenerated type: UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
  class BuiltinRuntimeReflectionSystem : public ::Il2CppObject, public UnityEngine::Experimental::Rendering::IScriptableRuntimeReflectionSystem {
    public:
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x126C920
    void Dispose(bool disposing);
    // static private System.Boolean BuiltinUpdate()
    // Offset: 0x126C8E8
    static bool BuiltinUpdate();
    // static private UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem Internal_BuiltinRuntimeReflectionSystem_New()
    // Offset: 0x126C924
    static UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem* Internal_BuiltinRuntimeReflectionSystem_New();
    // public System.Boolean TickRealtimeProbes()
    // Offset: 0x126C8B4
    // Implemented from: UnityEngine.Experimental.Rendering.IScriptableRuntimeReflectionSystem
    // Base method: System.Boolean IScriptableRuntimeReflectionSystem::TickRealtimeProbes()
    bool TickRealtimeProbes();
    // public System.Void Dispose()
    // Offset: 0x126C91C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x126C980
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BuiltinRuntimeReflectionSystem* New_ctor();
  }; // UnityEngine.Experimental.Rendering.BuiltinRuntimeReflectionSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::BuiltinRuntimeReflectionSystem*, "UnityEngine.Experimental.Rendering", "BuiltinRuntimeReflectionSystem");
#pragma pack(pop)
