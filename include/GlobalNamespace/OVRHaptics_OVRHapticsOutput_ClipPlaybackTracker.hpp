// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHaptics/OVRHapticsOutput
#include "GlobalNamespace/OVRHaptics_OVRHapticsOutput.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRHapticsClip
  class OVRHapticsClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
  class OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker : public ::Il2CppObject {
    public:
    // private System.Int32 <ReadCount>k__BackingField
    // Offset: 0x10
    int ReadCount;
    // private OVRHapticsClip <Clip>k__BackingField
    // Offset: 0x18
    GlobalNamespace::OVRHapticsClip* Clip;
    // public System.Int32 get_ReadCount()
    // Offset: 0x130E144
    int get_ReadCount();
    // public System.Void set_ReadCount(System.Int32 value)
    // Offset: 0x130E14C
    void set_ReadCount(int value);
    // public OVRHapticsClip get_Clip()
    // Offset: 0x130E154
    GlobalNamespace::OVRHapticsClip* get_Clip();
    // public System.Void set_Clip(OVRHapticsClip value)
    // Offset: 0x130E15C
    void set_Clip(GlobalNamespace::OVRHapticsClip* value);
    // public System.Void .ctor(OVRHapticsClip clip)
    // Offset: 0x130DEB8
    static OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker* New_ctor(GlobalNamespace::OVRHapticsClip* clip);
  }; // OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*, "", "OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker");
#pragma pack(pop)
