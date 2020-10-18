// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.Win32LengthFlagsUnion
  struct Win32LengthFlagsUnion : public System::ValueType {
    public:
    // public System.UInt32 Length
    // Offset: 0x0
    uint Length;
    // public System.UInt32 Flags
    // Offset: 0x4
    uint Flags;
    // Creating value type constructor for type: Win32LengthFlagsUnion
    constexpr Win32LengthFlagsUnion(uint Length_ = {}, uint Flags_ = {}) noexcept : Length{Length_}, Flags{Flags_} {}
  }; // System.Net.NetworkInformation.Win32LengthFlagsUnion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32LengthFlagsUnion, "System.Net.NetworkInformation", "Win32LengthFlagsUnion");
#pragma pack(pop)
