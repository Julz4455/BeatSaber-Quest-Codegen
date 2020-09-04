// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRTrackedCamera
#include "Valve/VR/IVRTrackedCamera.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRTrackedCameraError
  struct EVRTrackedCameraError;
  // Forward declaring type: EVRTrackedCameraFrameType
  struct EVRTrackedCameraFrameType;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: CameraVideoStreamFrameHeader_t
  struct CameraVideoStreamFrameHeader_t;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRTrackedCamera
  class CVRTrackedCamera : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRTrackedCamera FnTable
    // Offset: 0x10
    Valve::VR::IVRTrackedCamera FnTable;
    // Creating conversion operator: operator Valve::VR::IVRTrackedCamera
    constexpr operator Valve::VR::IVRTrackedCamera() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFE968C
    static CVRTrackedCamera* New_ctor(System::IntPtr pInterface);
    // public System.String GetCameraErrorNameFromEnum(Valve.VR.EVRTrackedCameraError eCameraError)
    // Offset: 0xFE97A0
    ::Il2CppString* GetCameraErrorNameFromEnum(Valve::VR::EVRTrackedCameraError eCameraError);
    // public Valve.VR.EVRTrackedCameraError HasCamera(System.UInt32 nDeviceIndex, ref System.Boolean pHasCamera)
    // Offset: 0xFD7654
    Valve::VR::EVRTrackedCameraError HasCamera(uint nDeviceIndex, bool& pHasCamera);
    // public Valve.VR.EVRTrackedCameraError GetCameraFrameSize(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, ref System.UInt32 pnFrameBufferSize)
    // Offset: 0xFE9834
    Valve::VR::EVRTrackedCameraError GetCameraFrameSize(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pnWidth, uint& pnHeight, uint& pnFrameBufferSize);
    // public Valve.VR.EVRTrackedCameraError GetCameraIntrinsics(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.HmdVector2_t pFocalLength, ref Valve.VR.HmdVector2_t pCenter)
    // Offset: 0xFE985C
    Valve::VR::EVRTrackedCameraError GetCameraIntrinsics(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::HmdVector2_t& pFocalLength, Valve::VR::HmdVector2_t& pCenter);
    // public Valve.VR.EVRTrackedCameraError GetCameraProjection(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.Single flZNear, System.Single flZFar, ref Valve.VR.HmdMatrix44_t pProjection)
    // Offset: 0xFE9878
    Valve::VR::EVRTrackedCameraError GetCameraProjection(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, Valve::VR::HmdMatrix44_t& pProjection);
    // public Valve.VR.EVRTrackedCameraError AcquireVideoStreamingService(System.UInt32 nDeviceIndex, ref System.UInt64 pHandle)
    // Offset: 0xFD7730
    Valve::VR::EVRTrackedCameraError AcquireVideoStreamingService(uint nDeviceIndex, uint64_t& pHandle);
    // public Valve.VR.EVRTrackedCameraError ReleaseVideoStreamingService(System.UInt64 hTrackedCamera)
    // Offset: 0xFD7800
    Valve::VR::EVRTrackedCameraError ReleaseVideoStreamingService(uint64_t hTrackedCamera);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamFrameBuffer(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pFrameBuffer, System.UInt32 nFrameBufferSize, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xFE9894
    Valve::VR::EVRTrackedCameraError GetVideoStreamFrameBuffer(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pFrameBuffer, uint nFrameBufferSize, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureSize(System.UInt32 nDeviceIndex, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref Valve.VR.VRTextureBounds_t pTextureBounds, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0xFD80D8
    Valve::VR::EVRTrackedCameraError GetVideoStreamTextureSize(uint nDeviceIndex, Valve::VR::EVRTrackedCameraFrameType eFrameType, Valve::VR::VRTextureBounds_t& pTextureBounds, uint& pnWidth, uint& pnHeight);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureD3D11(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, System.IntPtr pD3D11DeviceOrResource, ref System.IntPtr ppD3D11ShaderResourceView, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xFD80BC
    Valve::VR::EVRTrackedCameraError GetVideoStreamTextureD3D11(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, System::IntPtr pD3D11DeviceOrResource, System::IntPtr& ppD3D11ShaderResourceView, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError GetVideoStreamTextureGL(System.UInt64 hTrackedCamera, Valve.VR.EVRTrackedCameraFrameType eFrameType, ref System.UInt32 pglTextureId, ref Valve.VR.CameraVideoStreamFrameHeader_t pFrameHeader, System.UInt32 nFrameHeaderSize)
    // Offset: 0xFD809C
    Valve::VR::EVRTrackedCameraError GetVideoStreamTextureGL(uint64_t hTrackedCamera, Valve::VR::EVRTrackedCameraFrameType eFrameType, uint& pglTextureId, Valve::VR::CameraVideoStreamFrameHeader_t& pFrameHeader, uint nFrameHeaderSize);
    // public Valve.VR.EVRTrackedCameraError ReleaseVideoStreamTextureGL(System.UInt64 hTrackedCamera, System.UInt32 glTextureId)
    // Offset: 0xFD8080
    Valve::VR::EVRTrackedCameraError ReleaseVideoStreamTextureGL(uint64_t hTrackedCamera, uint glTextureId);
  }; // Valve.VR.CVRTrackedCamera
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRTrackedCamera*, "Valve.VR", "CVRTrackedCamera");
#pragma pack(pop)
