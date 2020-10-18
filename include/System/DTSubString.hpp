// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.DTSubStringType
#include "System/DTSubStringType.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.DTSubString
  struct DTSubString : public System::ValueType {
    public:
    // System.String s
    // Offset: 0x0
    ::Il2CppString* s;
    // System.Int32 index
    // Offset: 0x8
    int index;
    // System.Int32 length
    // Offset: 0xC
    int length;
    // System.DTSubStringType type
    // Offset: 0x10
    System::DTSubStringType type;
    // System.Int32 value
    // Offset: 0x14
    int value;
    // Creating value type constructor for type: DTSubString
    constexpr DTSubString(::Il2CppString* s_ = {}, int index_ = {}, int length_ = {}, System::DTSubStringType type_ = {}, int value_ = {}) noexcept : s{s_}, index{index_}, length{length_}, type{type_}, value{value_} {}
    // System.Char get_Item(System.Int32 relativeIndex)
    // Offset: 0xDBBC04
    ::Il2CppChar get_Item(int relativeIndex);
  }; // System.DTSubString
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DTSubString, "System", "DTSubString");
#pragma pack(pop)
