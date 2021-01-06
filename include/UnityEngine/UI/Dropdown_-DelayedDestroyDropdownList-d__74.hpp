// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x30
  // Autogenerated type: UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__74
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D7D9F0
  class Dropdown::$DelayedDestroyDropdownList$d__74 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public System.Single delay
    // Size: 0x4
    // Offset: 0x20
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.UI.Dropdown <>4__this
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Dropdown* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Dropdown*) == 0x8);
    // Creating value type constructor for type: $DelayedDestroyDropdownList$d__74
    $DelayedDestroyDropdownList$d__74(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, float delay_ = {}, UnityEngine::UI::Dropdown* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, delay{delay_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x14C62D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::$DelayedDestroyDropdownList$d__74* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::UI").WithContext("$DelayedDestroyDropdownList$d__74").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::$DelayedDestroyDropdownList$d__74*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x14C6304
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x14C6308
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x14C63C8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x14C63D0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x14C6430
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__74
  static check_size<sizeof(Dropdown::$DelayedDestroyDropdownList$d__74), 40 + sizeof(UnityEngine::UI::Dropdown*)> __UnityEngine_UI_Dropdown_$DelayedDestroyDropdownList$d__74SizeCheck;
  static_assert(sizeof(Dropdown::$DelayedDestroyDropdownList$d__74) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::$DelayedDestroyDropdownList$d__74*, "UnityEngine.UI", "Dropdown/<DelayedDestroyDropdownList>d__74");
#pragma pack(pop)
