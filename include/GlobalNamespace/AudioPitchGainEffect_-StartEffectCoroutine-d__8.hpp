// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AudioPitchGainEffect
#include "GlobalNamespace/AudioPitchGainEffect.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: AudioPitchGainEffect/<StartEffectCoroutine>d__8
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBEBC4
  class AudioPitchGainEffect::$StartEffectCoroutine$d__8 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public AudioPitchGainEffect <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AudioPitchGainEffect* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioPitchGainEffect*) == 0x8);
    // public System.Single volumeScale
    // Size: 0x4
    // Offset: 0x28
    float volumeScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: volumeScale and: finishCallback
    char __padding3[0x4] = {};
    // public System.Action finishCallback
    // Size: 0x8
    // Offset: 0x30
    System::Action* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Single <startPitch>5__2
    // Size: 0x4
    // Offset: 0x38
    float $startPitch$5__2;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single <time>5__3
    // Size: 0x4
    // Offset: 0x3C
    float $time$5__3;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $StartEffectCoroutine$d__8
    $StartEffectCoroutine$d__8(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::AudioPitchGainEffect* $$4__this_ = {}, float volumeScale_ = {}, System::Action* finishCallback_ = {}, float $startPitch$5__2_ = {}, float $time$5__3_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, volumeScale{volumeScale_}, finishCallback{finishCallback_}, $startPitch$5__2{$startPitch$5__2_}, $time$5__3{$time$5__3_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1A41E3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioPitchGainEffect::$StartEffectCoroutine$d__8* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$StartEffectCoroutine$d__8").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioPitchGainEffect::$StartEffectCoroutine$d__8*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A41F24
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1A41F28
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1A420BC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1A420C4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1A42124
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // AudioPitchGainEffect/<StartEffectCoroutine>d__8
  static check_size<sizeof(AudioPitchGainEffect::$StartEffectCoroutine$d__8), 60 + sizeof(float)> __GlobalNamespace_AudioPitchGainEffect_$StartEffectCoroutine$d__8SizeCheck;
  static_assert(sizeof(AudioPitchGainEffect::$StartEffectCoroutine$d__8) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioPitchGainEffect::$StartEffectCoroutine$d__8*, "", "AudioPitchGainEffect/<StartEffectCoroutine>d__8");
#pragma pack(pop)
