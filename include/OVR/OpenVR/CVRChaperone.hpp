// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.CVRChaperone
  class CVRChaperone : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRChaperone FnTable
    // Offset: 0x10
    OVR::OpenVR::IVRChaperone FnTable;
    // Creating conversion operator: operator OVR::OpenVR::IVRChaperone
    constexpr operator OVR::OpenVR::IVRChaperone() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xEC999C
    static CVRChaperone* New_ctor(System::IntPtr pInterface);
    // public OVR.OpenVR.ChaperoneCalibrationState GetCalibrationState()
    // Offset: 0xEC9AB0
    OVR::OpenVR::ChaperoneCalibrationState GetCalibrationState();
    // public System.Boolean GetPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0xEC9CDC
    bool GetPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetPlayAreaRect(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0xEC9F74
    bool GetPlayAreaRect(OVR::OpenVR::HmdQuad_t& rect);
    // public System.Void ReloadInfo()
    // Offset: 0xECA1E8
    void ReloadInfo();
    // public System.Void SetSceneColor(OVR.OpenVR.HmdColor_t color)
    // Offset: 0xECA40C
    void SetSceneColor(OVR::OpenVR::HmdColor_t color);
    // public System.Void GetBoundsColor(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor)
    // Offset: 0xECA6D0
    void GetBoundsColor(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor);
    // public System.Boolean AreBoundsVisible()
    // Offset: 0xECA988
    bool AreBoundsVisible();
    // public System.Void ForceBoundsVisible(System.Boolean bForce)
    // Offset: 0xECABB8
    void ForceBoundsVisible(bool bForce);
  }; // OVR.OpenVR.CVRChaperone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRChaperone*, "OVR.OpenVR", "CVRChaperone");
#pragma pack(pop)
