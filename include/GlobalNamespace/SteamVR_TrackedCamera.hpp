// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_TrackedCamera
  class SteamVR_TrackedCamera : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture
    class VideoStreamTexture;
    // Nested type: GlobalNamespace::SteamVR_TrackedCamera::VideoStream
    class VideoStream;
    // Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
    static ::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* _get_distorted();
    // Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
    static void _set_distorted(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* value);
    // Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
    static ::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* _get_undistorted();
    // Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
    static void _set_undistorted(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*>* value);
    // Get static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
    static ::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*>* _get_videostreams();
    // Set static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
    static void _set_videostreams(::Array<GlobalNamespace::SteamVR_TrackedCamera::VideoStream*>* value);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Distorted(System.Int32 deviceIndex)
    // Offset: 0x15250E4
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Distorted(int deviceIndex);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Undistorted(System.Int32 deviceIndex)
    // Offset: 0x1525290
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Undistorted(int deviceIndex);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Source(System.Boolean undistorted, System.Int32 deviceIndex)
    // Offset: 0x15253E4
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Source(bool undistorted, int deviceIndex);
    // static private SteamVR_TrackedCamera/VideoStream Stream(System.UInt32 deviceIndex)
    // Offset: 0x15253F8
    static GlobalNamespace::SteamVR_TrackedCamera::VideoStream* Stream(uint deviceIndex);
    // public System.Void .ctor()
    // Offset: 0x15255E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamVR_TrackedCamera* New_ctor();
  }; // SteamVR_TrackedCamera
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedCamera*, "", "SteamVR_TrackedCamera");
#pragma pack(pop)
