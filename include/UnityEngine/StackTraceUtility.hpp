// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackTrace
  class StackTrace;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.StackTraceUtility
  class StackTraceUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.String projectFolder
    static ::Il2CppString* _get_projectFolder();
    // Set static field: static private System.String projectFolder
    static void _set_projectFolder(::Il2CppString* value);
    // static System.Void SetProjectFolder(System.String folder)
    // Offset: 0x1393580
    static void SetProjectFolder(::Il2CppString* folder);
    // static public System.String ExtractStackTrace()
    // Offset: 0x1393678
    static ::Il2CppString* ExtractStackTrace();
    // static System.Void ExtractStringFromExceptionInternal(System.Object exceptiono, out System.String message, out System.String stackTrace)
    // Offset: 0x1393D14
    static void ExtractStringFromExceptionInternal(::Il2CppObject* exceptiono, ::Il2CppString*& message, ::Il2CppString*& stackTrace);
    // static System.String ExtractFormattedStackTrace(System.Diagnostics.StackTrace stackTrace)
    // Offset: 0x1393710
    static ::Il2CppString* ExtractFormattedStackTrace(System::Diagnostics::StackTrace* stackTrace);
    // static private System.Void .cctor()
    // Offset: 0x1394048
    static void _cctor();
  }; // UnityEngine.StackTraceUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StackTraceUtility*, "UnityEngine", "StackTraceUtility");
#pragma pack(pop)
