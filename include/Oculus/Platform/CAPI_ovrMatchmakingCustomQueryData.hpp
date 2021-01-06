// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x1C
  // Autogenerated type: Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData
  // [] Offset: FFFFFFFF
  struct CAPI::ovrMatchmakingCustomQueryData/*, public System::ValueType*/ {
    public:
    // public System.IntPtr dataArray
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr dataArray;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 dataArrayCount
    // Size: 0x4
    // Offset: 0x8
    uint dataArrayCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: dataArrayCount and: criterionArray
    char __padding1[0x4] = {};
    // public System.IntPtr criterionArray
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr criterionArray;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.UInt32 criterionArrayCount
    // Size: 0x4
    // Offset: 0x18
    uint criterionArrayCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: ovrMatchmakingCustomQueryData
    constexpr ovrMatchmakingCustomQueryData(System::IntPtr dataArray_ = {}, uint dataArrayCount_ = {}, System::IntPtr criterionArray_ = {}, uint criterionArrayCount_ = {}) noexcept : dataArray{dataArray_}, dataArrayCount{dataArrayCount_}, criterionArray{criterionArray_}, criterionArrayCount{criterionArrayCount_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // Oculus.Platform.CAPI/ovrMatchmakingCustomQueryData
  static check_size<sizeof(CAPI::ovrMatchmakingCustomQueryData), 24 + sizeof(uint)> __Oculus_Platform_CAPI_ovrMatchmakingCustomQueryDataSizeCheck;
  static_assert(sizeof(CAPI::ovrMatchmakingCustomQueryData) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::ovrMatchmakingCustomQueryData, "Oculus.Platform", "CAPI/ovrMatchmakingCustomQueryData");
#pragma pack(pop)
