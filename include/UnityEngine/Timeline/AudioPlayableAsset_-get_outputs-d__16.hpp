// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.AudioPlayableAsset
#include "UnityEngine/Timeline/AudioPlayableAsset.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16
  class AudioPlayableAsset::$get_outputs$d__16 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private UnityEngine.Playables.PlayableBinding <>2__current
    // Offset: 0x18
    UnityEngine::Playables::PlayableBinding $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x38
    int $$l__initialThreadId;
    // public UnityEngine.Timeline.AudioPlayableAsset <>4__this
    // Offset: 0x40
    UnityEngine::Timeline::AudioPlayableAsset* $$4__this;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xFF0B5C
    static AudioPlayableAsset::$get_outputs$d__16* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFF0D54
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xFF0D58
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0xFF0DF4
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFF0E04
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFF0E64
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0xFF0ECC
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFF0F80
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioPlayableAsset::$get_outputs$d__16*, "UnityEngine.Timeline", "AudioPlayableAsset/<get_outputs>d__16");
#pragma pack(pop)
