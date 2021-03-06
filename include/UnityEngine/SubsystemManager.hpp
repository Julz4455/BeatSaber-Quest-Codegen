// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SubsystemManager
  // [] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: CD1130
  class SubsystemManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SubsystemManager
    SubsystemManager() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xCD1240
    // [CompilerGeneratedAttribute] Offset: 0xCD1240
    // Get static field: static private System.Action reloadSubsytemsStarted
    static System::Action* _get_reloadSubsytemsStarted();
    // Set static field: static private System.Action reloadSubsytemsStarted
    static void _set_reloadSubsytemsStarted(System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xCD127C
    // [CompilerGeneratedAttribute] Offset: 0xCD127C
    // Get static field: static private System.Action reloadSubsytemsCompleted
    static System::Action* _get_reloadSubsytemsCompleted();
    // Set static field: static private System.Action reloadSubsytemsCompleted
    static void _set_reloadSubsytemsCompleted(System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x22DB250
    static void _cctor();
    // static System.Void ReportSingleSubsystemAnalytics(System.String id)
    // Offset: 0x22DA804
    static void ReportSingleSubsystemAnalytics(::Il2CppString* id);
    // static System.Void StaticConstructScriptingClassMap()
    // Offset: 0x22DB284
    static void StaticConstructScriptingClassMap();
    // static private System.Void Internal_ReloadSubsystemsStarted()
    // Offset: 0x22DB2B8
    static void Internal_ReloadSubsystemsStarted();
    // static private System.Void Internal_ReloadSubsystemsCompleted()
    // Offset: 0x22DB360
    static void Internal_ReloadSubsystemsCompleted();
  }; // UnityEngine.SubsystemManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemManager*, "UnityEngine", "SubsystemManager");
