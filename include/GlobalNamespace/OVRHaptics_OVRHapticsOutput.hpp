// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRHaptics
#include "GlobalNamespace/OVRHaptics.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRNativeBuffer
  class OVRNativeBuffer;
  // Forward declaring type: OVRHapticsClip
  class OVRHapticsClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: OVRHaptics/OVRHapticsOutput
  // [] Offset: FFFFFFFF
  class OVRHaptics::OVRHapticsOutput : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker
    class ClipPlaybackTracker;
    // private System.Boolean m_lowLatencyMode
    // Size: 0x1
    // Offset: 0x10
    bool m_lowLatencyMode;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_paddingEnabled
    // Size: 0x1
    // Offset: 0x11
    bool m_paddingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_paddingEnabled and: m_prevSamplesQueued
    char __padding1[0x2] = {};
    // private System.Int32 m_prevSamplesQueued
    // Size: 0x4
    // Offset: 0x14
    int m_prevSamplesQueued;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_prevSamplesQueuedTime
    // Size: 0x4
    // Offset: 0x18
    float m_prevSamplesQueuedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_numPredictionHits
    // Size: 0x4
    // Offset: 0x1C
    int m_numPredictionHits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_numPredictionMisses
    // Size: 0x4
    // Offset: 0x20
    int m_numPredictionMisses;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_numUnderruns
    // Size: 0x4
    // Offset: 0x24
    int m_numUnderruns;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Collections.Generic.List`1<OVRHaptics/OVRHapticsOutput/ClipPlaybackTracker> m_pendingClips
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*>* m_pendingClips;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*>*) == 0x8);
    // private System.UInt32 m_controller
    // Size: 0x4
    // Offset: 0x30
    uint m_controller;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: m_controller and: m_nativeBuffer
    char __padding8[0x4] = {};
    // private OVRNativeBuffer m_nativeBuffer
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::OVRNativeBuffer* m_nativeBuffer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRNativeBuffer*) == 0x8);
    // private OVRHapticsClip m_paddingClip
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::OVRHapticsClip* m_paddingClip;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRHapticsClip*) == 0x8);
    // Creating value type constructor for type: OVRHapticsOutput
    OVRHapticsOutput(bool m_lowLatencyMode_ = {}, bool m_paddingEnabled_ = {}, int m_prevSamplesQueued_ = {}, float m_prevSamplesQueuedTime_ = {}, int m_numPredictionHits_ = {}, int m_numPredictionMisses_ = {}, int m_numUnderruns_ = {}, System::Collections::Generic::List_1<GlobalNamespace::OVRHaptics::OVRHapticsOutput::ClipPlaybackTracker*>* m_pendingClips_ = {}, uint m_controller_ = {}, GlobalNamespace::OVRNativeBuffer* m_nativeBuffer_ = {}, GlobalNamespace::OVRHapticsClip* m_paddingClip_ = {}) noexcept : m_lowLatencyMode{m_lowLatencyMode_}, m_paddingEnabled{m_paddingEnabled_}, m_prevSamplesQueued{m_prevSamplesQueued_}, m_prevSamplesQueuedTime{m_prevSamplesQueuedTime_}, m_numPredictionHits{m_numPredictionHits_}, m_numPredictionMisses{m_numPredictionMisses_}, m_numUnderruns{m_numUnderruns_}, m_pendingClips{m_pendingClips_}, m_controller{m_controller_}, m_nativeBuffer{m_nativeBuffer_}, m_paddingClip{m_paddingClip_} {}
    // public System.Void .ctor(System.UInt32 controller)
    // Offset: 0x11B8410
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRHaptics::OVRHapticsOutput* New_ctor(uint controller) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRHapticsOutput").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRHaptics::OVRHapticsOutput*, creationType>(controller)));
    }
    // public System.Void Process()
    // Offset: 0x11B8768
    void Process();
    // public System.Void Preempt(OVRHapticsClip clip)
    // Offset: 0x11B972C
    void Preempt(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Queue(OVRHapticsClip clip)
    // Offset: 0x11B97F4
    void Queue(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Mix(OVRHapticsClip clip)
    // Offset: 0x11B98A4
    void Mix(GlobalNamespace::OVRHapticsClip* clip);
    // public System.Void Clear()
    // Offset: 0x11B9DA4
    void Clear();
  }; // OVRHaptics/OVRHapticsOutput
  static check_size<sizeof(OVRHaptics::OVRHapticsOutput), 64 + sizeof(GlobalNamespace::OVRHapticsClip*)> __GlobalNamespace_OVRHaptics_OVRHapticsOutputSizeCheck;
  static_assert(sizeof(OVRHaptics::OVRHapticsOutput) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRHaptics::OVRHapticsOutput*, "", "OVRHaptics/OVRHapticsOutput");
#pragma pack(pop)
