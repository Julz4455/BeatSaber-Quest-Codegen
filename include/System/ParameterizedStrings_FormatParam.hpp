// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ParameterizedStrings
#include "System/ParameterizedStrings.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  // Autogenerated type: System.ParameterizedStrings/FormatParam
  // [] Offset: FFFFFFFF
  struct ParameterizedStrings::FormatParam/*, public System::ValueType*/ {
    public:
    // private readonly System.Int32 _int32
    // Size: 0x4
    // Offset: 0x0
    int int32;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: int32 and: string
    char __padding0[0x4] = {};
    // private readonly System.String _string
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* string;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FormatParam
    constexpr FormatParam(int int32_ = {}, ::Il2CppString* string_ = {}) noexcept : int32{int32_}, string{string_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0xCA6A58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    FormatParam(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("FormatParam").WithContext(".ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value);
    }
    // private System.Void .ctor(System.Int32 intValue, System.String stringValue)
    // Offset: 0xCA6A68
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  FormatParam(int intValue, ::Il2CppString* stringValue)
    // public System.Int32 get_Int32()
    // Offset: 0xCA6A78
    int get_Int32();
    // public System.String get_String()
    // Offset: 0xCA6A80
    ::Il2CppString* get_String();
    // public System.Object get_Object()
    // Offset: 0xCA6ADC
    ::Il2CppObject* get_Object();
  }; // System.ParameterizedStrings/FormatParam
  static check_size<sizeof(ParameterizedStrings::FormatParam), 8 + sizeof(::Il2CppString*)> __System_ParameterizedStrings_FormatParamSizeCheck;
  static_assert(sizeof(ParameterizedStrings::FormatParam) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(System::ParameterizedStrings::FormatParam, "System", "ParameterizedStrings/FormatParam");
#pragma pack(pop)
