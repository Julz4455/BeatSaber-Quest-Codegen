// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.RuntimeClipBase
#include "UnityEngine/Timeline/RuntimeClipBase.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.ScheduleRuntimeClip
  class ScheduleRuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
    public:
    // private UnityEngine.Timeline.TimelineClip m_Clip
    // Offset: 0x18
    UnityEngine::Timeline::TimelineClip* m_Clip;
    // private UnityEngine.Playables.Playable m_Playable
    // Offset: 0x20
    UnityEngine::Playables::Playable m_Playable;
    // private UnityEngine.Playables.Playable m_ParentMixer
    // Offset: 0x30
    UnityEngine::Playables::Playable m_ParentMixer;
    // private System.Double m_StartDelay
    // Offset: 0x40
    double m_StartDelay;
    // private System.Double m_FinishTail
    // Offset: 0x48
    double m_FinishTail;
    // private System.Boolean m_Started
    // Offset: 0x50
    bool m_Started;
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // public System.Void SetTime(System.Double time)
    // Offset: 0x1622F3C
    void SetTime(double time);
    // public UnityEngine.Timeline.TimelineClip get_clip()
    // Offset: 0x1622F9C
    UnityEngine::Timeline::TimelineClip* get_clip();
    // public UnityEngine.Playables.Playable get_mixer()
    // Offset: 0x1622FA4
    UnityEngine::Playables::Playable get_mixer();
    // public UnityEngine.Playables.Playable get_playable()
    // Offset: 0x1622FB0
    UnityEngine::Playables::Playable get_playable();
    // public System.Void .ctor(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer, System.Double startDelay, System.Double finishTail)
    // Offset: 0x16198C0
    static ScheduleRuntimeClip* New_ctor(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail);
    // private System.Void Create(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer, System.Double startDelay, System.Double finishTail)
    // Offset: 0x1622FBC
    void Create(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer, double startDelay, double finishTail);
    // public override System.Double get_start()
    // Offset: 0x1622E64
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_start()
    double get_start();
    // public override System.Double get_duration()
    // Offset: 0x1622EEC
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_duration()
    double get_duration();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x1623068
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x1623160
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
  }; // UnityEngine.Timeline.ScheduleRuntimeClip
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ScheduleRuntimeClip*, "UnityEngine.Timeline", "ScheduleRuntimeClip");
#pragma pack(pop)
