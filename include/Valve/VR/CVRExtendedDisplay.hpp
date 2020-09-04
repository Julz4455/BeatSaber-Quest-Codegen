// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRExtendedDisplay
  class CVRExtendedDisplay : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRExtendedDisplay FnTable
    // Offset: 0x10
    Valve::VR::IVRExtendedDisplay FnTable;
    // Creating conversion operator: operator Valve::VR::IVRExtendedDisplay
    constexpr operator Valve::VR::IVRExtendedDisplay() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFE5A68
    static CVRExtendedDisplay* New_ctor(System::IntPtr pInterface);
    // public System.Void GetWindowBounds(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0xFE5B78
    void GetWindowBounds(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetEyeOutputViewport(Valve.VR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0xFE5BA4
    void GetEyeOutputViewport(Valve::VR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0xFE5BD0
    void GetDXGIOutputInfo(int& pnAdapterIndex, int& pnAdapterOutputIndex);
  }; // Valve.VR.CVRExtendedDisplay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRExtendedDisplay*, "Valve.VR", "CVRExtendedDisplay");
#pragma pack(pop)
