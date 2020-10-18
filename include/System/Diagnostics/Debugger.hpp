// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.Debugger
  class Debugger : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.String DefaultCategory
    static ::Il2CppString* _get_DefaultCategory();
    // Set static field: static public readonly System.String DefaultCategory
    static void _set_DefaultCategory(::Il2CppString* value);
    // static public System.Boolean get_IsAttached()
    // Offset: 0x19C8B0C
    static bool get_IsAttached();
    // static private System.Boolean IsAttached_internal()
    // Offset: 0x19C8B68
    static bool IsAttached_internal();
    // static public System.Boolean IsLogging()
    // Offset: 0x19C8B6C
    static bool IsLogging();
    // static public System.Void Log(System.Int32 level, System.String category, System.String message)
    // Offset: 0x19C8B70
    static void Log(int level, ::Il2CppString* category, ::Il2CppString* message);
    // static public System.Void NotifyOfCrossThreadDependency()
    // Offset: 0x19C8B74
    static void NotifyOfCrossThreadDependency();
    // static private System.Void .cctor()
    // Offset: 0x19C8B78
    static void _cctor();
  }; // System.Diagnostics.Debugger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Debugger*, "System.Diagnostics", "Debugger");
#pragma pack(pop)
