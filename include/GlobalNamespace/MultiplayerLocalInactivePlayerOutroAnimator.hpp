// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: MultiplayerLocalPlayerOutroAudio
  class MultiplayerLocalPlayerOutroAudio;
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLocalInactivePlayerOutroAnimator
  class MultiplayerLocalInactivePlayerOutroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // protected ColorSO _offLightsColor
    // Offset: 0x18
    GlobalNamespace::ColorSO* offLightsColor;
    // private MultiplayerLocalPlayerOutroAudio _outroAudio
    // Offset: 0x20
    GlobalNamespace::MultiplayerLocalPlayerOutroAudio* outroAudio;
    // private LightsAnimator[] _lightsAnimators
    // Offset: 0x28
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Animate()
    // Offset: 0x223F658
    void Animate();
    // public System.Void PlayOutroMusicSample(System.Single maxDuration, System.Single volume)
    // Offset: 0x223F6F4
    void PlayOutroMusicSample(float maxDuration, float volume);
    // public System.Void .ctor()
    // Offset: 0x223F72C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalInactivePlayerOutroAnimator* New_ctor();
  }; // MultiplayerLocalInactivePlayerOutroAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, "", "MultiplayerLocalInactivePlayerOutroAnimator");
#pragma pack(pop)
