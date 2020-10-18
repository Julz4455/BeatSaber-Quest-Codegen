// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreFormatter
  class ScoreFormatter : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static System::Globalization::NumberFormatInfo* _get__numberFormatInfo();
    // Set static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static void _set__numberFormatInfo(System::Globalization::NumberFormatInfo* value);
    // static private System.Void .cctor()
    // Offset: 0xEE6B24
    static void _cctor();
    // static public System.String Format(System.Int32 score)
    // Offset: 0xEE6C14
    static ::Il2CppString* Format(int score);
    // public System.Void .ctor()
    // Offset: 0xEE6C98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ScoreFormatter* New_ctor();
  }; // ScoreFormatter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreFormatter*, "", "ScoreFormatter");
#pragma pack(pop)
