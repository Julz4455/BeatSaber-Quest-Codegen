// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.AlignmentUnion
  struct AlignmentUnion : public System::ValueType {
    public:
    // public System.UInt64 Alignment
    // Offset: 0x0
    uint64_t Alignment;
    // public System.Int32 Length
    // Offset: 0x0
    int Length;
    // public System.Int32 IfIndex
    // Offset: 0x4
    int IfIndex;
    // Creating value type constructor for type: AlignmentUnion
    constexpr AlignmentUnion(uint64_t Alignment_ = {}, int Length_ = {}, int IfIndex_ = {}) noexcept : Alignment{Alignment_}, Length{Length_}, IfIndex{IfIndex_} {}
  }; // System.Net.NetworkInformation.AlignmentUnion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AlignmentUnion, "System.Net.NetworkInformation", "AlignmentUnion");
#pragma pack(pop)