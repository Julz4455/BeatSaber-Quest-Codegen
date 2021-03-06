// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerOutroAnimator
  // [] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerOutroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // protected ColorSO _offLightsColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* offLightsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD3B804
    // private MultiplayerLocalPlayerOutroAudio _outroAudio
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLocalPlayerOutroAudio* outroAudio;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalPlayerOutroAudio*) == 0x8);
    // private LightsAnimator[] _lightsAnimators
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightsAnimator*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalInactivePlayerOutroAnimator
    MultiplayerLocalInactivePlayerOutroAnimator(GlobalNamespace::ColorSO* offLightsColor_ = {}, GlobalNamespace::MultiplayerLocalPlayerOutroAudio* outroAudio_ = {}, ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators_ = {}) noexcept : offLightsColor{offLightsColor_}, outroAudio{outroAudio_}, lightsAnimators{lightsAnimators_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Animate()
    // Offset: 0xFE4B20
    void Animate();
    // public System.Void PlayOutroMusicSample(System.Single maxDuration, System.Single volume)
    // Offset: 0xFE4BBC
    void PlayOutroMusicSample(float maxDuration, float volume);
    // public System.Void .ctor()
    // Offset: 0xFE4BF4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerOutroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerOutroAnimator*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerOutroAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerOutroAnimator), 40 + sizeof(::Array<GlobalNamespace::LightsAnimator*>*)> __GlobalNamespace_MultiplayerLocalInactivePlayerOutroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerOutroAnimator) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerOutroAnimator*, "", "MultiplayerLocalInactivePlayerOutroAnimator");
