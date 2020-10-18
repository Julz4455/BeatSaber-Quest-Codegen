// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Autogenerated type: UnityEngine.Audio.AudioPlayableOutput
  struct AudioPlayableOutput : public System::ValueType, public UnityEngine::Playables::IPlayableOutput {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Creating value type constructor for type: AudioPlayableOutput
    constexpr AudioPlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating conversion operator: operator UnityEngine::Playables::PlayableOutputHandle
    constexpr operator UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // static public UnityEngine.Audio.AudioPlayableOutput Create(UnityEngine.Playables.PlayableGraph graph, System.String name, UnityEngine.AudioSource target)
    // Offset: 0x2208BD4
    static UnityEngine::Audio::AudioPlayableOutput Create(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name, UnityEngine::AudioSource* target);
    // System.Void .ctor(UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xDDDC50
    // ABORTED: conflicts with another method.  AudioPlayableOutput(UnityEngine::Playables::PlayableOutputHandle handle);
    // static public UnityEngine.Audio.AudioPlayableOutput get_Null()
    // Offset: 0x2208D14
    static UnityEngine::Audio::AudioPlayableOutput get_Null();
    // static public UnityEngine.Audio.AudioPlayableOutput op_Explicit(UnityEngine.Playables.PlayableOutput output)
    // Offset: 0x2208EB4
    explicit AudioPlayableOutput(UnityEngine::Playables::PlayableOutput& output);
    // public System.Void SetTarget(UnityEngine.AudioSource value)
    // Offset: 0xDDDC64
    void SetTarget(UnityEngine::AudioSource* value);
    // public System.Void SetEvaluateOnSeek(System.Boolean value)
    // Offset: 0xDDDCB4
    void SetEvaluateOnSeek(bool value);
    // static private System.Void InternalSetTarget(ref UnityEngine.Playables.PlayableOutputHandle output, UnityEngine.AudioSource target)
    // Offset: 0x2208EFC
    static void InternalSetTarget(UnityEngine::Playables::PlayableOutputHandle& output, UnityEngine::AudioSource* target);
    // static private System.Void InternalSetEvaluateOnSeek(ref UnityEngine.Playables.PlayableOutputHandle output, System.Boolean value)
    // Offset: 0x2208F9C
    static void InternalSetEvaluateOnSeek(UnityEngine::Playables::PlayableOutputHandle& output, bool value);
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xDDDC58
    // Implemented from: UnityEngine.Playables.IPlayableOutput
    // Base method: UnityEngine.Playables.PlayableOutputHandle IPlayableOutput::GetHandle()
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Audio.AudioPlayableOutput
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableOutput, "UnityEngine.Audio", "AudioPlayableOutput");
#pragma pack(pop)
