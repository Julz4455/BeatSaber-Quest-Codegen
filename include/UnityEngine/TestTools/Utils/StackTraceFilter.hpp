// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Autogenerated type: UnityEngine.TestTools.Utils.StackTraceFilter
  class StackTraceFilter : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Get static field: static private readonly System.String[] s_FilteredLogMessages
    static ::Array<::Il2CppString*>* _get_s_FilteredLogMessages();
    // Set static field: static private readonly System.String[] s_FilteredLogMessages
    static void _set_s_FilteredLogMessages(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.String[] s_LastMessages
    static ::Array<::Il2CppString*>* _get_s_LastMessages();
    // Set static field: static private readonly System.String[] s_LastMessages
    static void _set_s_LastMessages(::Array<::Il2CppString*>* value);
    // static public System.String Filter(System.String inputStackTrace)
    // Offset: 0x2223408
    static ::Il2CppString* Filter(::Il2CppString* inputStackTrace);
    // static private System.Void .cctor()
    // Offset: 0x222368C
    static void _cctor();
  }; // UnityEngine.TestTools.Utils.StackTraceFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::StackTraceFilter*, "UnityEngine.TestTools.Utils", "StackTraceFilter");
#pragma pack(pop)
