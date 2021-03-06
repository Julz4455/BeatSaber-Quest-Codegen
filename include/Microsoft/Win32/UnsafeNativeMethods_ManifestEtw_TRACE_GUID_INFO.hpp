// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
  // [] Offset: FFFFFFFF
  struct UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO/*, public System::ValueType*/ {
    public:
    // public System.Int32 InstanceCount
    // Size: 0x4
    // Offset: 0x0
    int InstanceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Reserved
    // Size: 0x4
    // Offset: 0x4
    int Reserved;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TRACE_GUID_INFO
    constexpr TRACE_GUID_INFO(int InstanceCount_ = {}, int Reserved_ = {}) noexcept : InstanceCount{InstanceCount_}, Reserved{Reserved_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
  #pragma pack(pop)
  static check_size<sizeof(UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO), 4 + sizeof(int)> __Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_TRACE_GUID_INFOSizeCheck;
  static_assert(sizeof(UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::TRACE_GUID_INFO, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO");
