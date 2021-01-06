// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.CoroutineRunner
#include "UnityEngine/TestTools/Utils/CoroutineRunner.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x34
  // Autogenerated type: UnityEngine.TestTools.Utils.CoroutineRunner/<ExMethod>d__11
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE6620
  class CoroutineRunner::$ExMethod$d__11 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public UnityEngine.TestTools.Utils.CoroutineRunner <>4__this
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::TestTools::Utils::CoroutineRunner*) == 0x8);
    // public System.Collections.IEnumerator e
    // Size: 0x8
    // Offset: 0x28
    System::Collections::IEnumerator* e;
    // Field size check
    static_assert(sizeof(System::Collections::IEnumerator*) == 0x8);
    // public System.Int32 timeout
    // Size: 0x4
    // Offset: 0x30
    int timeout;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $ExMethod$d__11
    $ExMethod$d__11(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, UnityEngine::TestTools::Utils::CoroutineRunner* $$4__this_ = {}, System::Collections::IEnumerator* e_ = {}, int timeout_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, e{e_}, timeout{timeout_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x1A03278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineRunner::$ExMethod$d__11* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::Utils").WithContext("$ExMethod$d__11").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineRunner::$ExMethod$d__11*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1A032A4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x1A032A8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x1A033F0
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x1A033F8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1A03458
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.TestTools.Utils.CoroutineRunner/<ExMethod>d__11
  static check_size<sizeof(CoroutineRunner::$ExMethod$d__11), 48 + sizeof(int)> __UnityEngine_TestTools_Utils_CoroutineRunner_$ExMethod$d__11SizeCheck;
  static_assert(sizeof(CoroutineRunner::$ExMethod$d__11) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::CoroutineRunner::$ExMethod$d__11*, "UnityEngine.TestTools.Utils", "CoroutineRunner/<ExMethod>d__11");
#pragma pack(pop)
