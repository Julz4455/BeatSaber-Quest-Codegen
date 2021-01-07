// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: StringBuilderExtension
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StringBuilderExtension : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StringBuilderExtension
    StringBuilderExtension() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD990E8
    // Get static field: static private System.Char[] charToInt
    static ::Array<::Il2CppChar>* _get_charToInt();
    // Set static field: static private System.Char[] charToInt
    static void _set_charToInt(::Array<::Il2CppChar>* value);
    // static public System.Void Swap(System.Text.StringBuilder sb, System.Int32 startIndex, System.Int32 endIndex)
    // Offset: 0x19CD9F0
    static void Swap(System::Text::StringBuilder* sb, int startIndex, int endIndex);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.Int32 number)
    // Offset: 0x19CDAA8
    static void AppendNumber(System::Text::StringBuilder* sb, int number);
    // static public System.Void AppendNumber(System.Text.StringBuilder sb, System.UInt32 unumber)
    // Offset: 0x19CDBF0
    static void AppendNumber(System::Text::StringBuilder* sb, uint unumber);
    // static private System.Void .cctor()
    // Offset: 0x19CDD1C
    static void _cctor();
  }; // StringBuilderExtension
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringBuilderExtension*, "", "StringBuilderExtension");
#pragma pack(pop)
