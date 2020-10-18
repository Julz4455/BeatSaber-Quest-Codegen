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
// Type namespace: UnityEngine.Experimental.Playables
namespace UnityEngine::Experimental::Playables {
  // Autogenerated type: UnityEngine.Experimental.Playables.TexturePlayableOutput
  struct TexturePlayableOutput : public System::ValueType, public UnityEngine::Playables::IPlayableOutput {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Creating value type constructor for type: TexturePlayableOutput
    constexpr TexturePlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating conversion operator: operator UnityEngine::Playables::PlayableOutputHandle
    constexpr operator UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xDC1F80
    // Implemented from: UnityEngine.Playables.IPlayableOutput
    // Base method: UnityEngine.Playables.PlayableOutputHandle IPlayableOutput::GetHandle()
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Experimental.Playables.TexturePlayableOutput
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::TexturePlayableOutput, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
#pragma pack(pop)
