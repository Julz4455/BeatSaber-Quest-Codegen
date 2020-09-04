// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TweenPosition
#include "GlobalNamespace/TweenPosition.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TweenPosition/<AnimateToNewPosCoroutine>d__11
  class TweenPosition::$AnimateToNewPosCoroutine$d__11 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public TweenPosition <>4__this
    // Offset: 0x20
    GlobalNamespace::TweenPosition* $$4__this;
    // private UnityEngine.Vector3 <startPos>5__2
    // Offset: 0x28
    UnityEngine::Vector3 $startPos$5__2;
    // private System.Single <elapsedTime>5__3
    // Offset: 0x34
    float $elapsedTime$5__3;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xCBE9C4
    static TweenPosition::$AnimateToNewPosCoroutine$d__11* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xCBEA44
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xCBEA48
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xCBEC70
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xCBEC78
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xCBECD8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // TweenPosition/<AnimateToNewPosCoroutine>d__11
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TweenPosition::$AnimateToNewPosCoroutine$d__11*, "", "TweenPosition/<AnimateToNewPosCoroutine>d__11");
#pragma pack(pop)
