// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.BootConfigData
  class BootConfigData : public ::Il2CppObject {
    public:
    // private System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // static private UnityEngine.BootConfigData WrapBootConfigData(System.IntPtr nativeHandle)
    // Offset: 0x19E1F78
    static UnityEngine::BootConfigData* WrapBootConfigData(System::IntPtr nativeHandle);
    // private System.Void .ctor(System.IntPtr nativeHandle)
    // Offset: 0x19E1FD8
    static BootConfigData* New_ctor(System::IntPtr nativeHandle);
  }; // UnityEngine.BootConfigData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::BootConfigData*, "UnityEngine", "BootConfigData");
#pragma pack(pop)
