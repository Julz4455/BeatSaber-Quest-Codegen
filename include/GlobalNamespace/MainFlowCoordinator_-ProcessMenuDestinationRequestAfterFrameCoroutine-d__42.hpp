// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainFlowCoordinator
#include "GlobalNamespace/MainFlowCoordinator.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MenuDestination
  class MenuDestination;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__42
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D31630
  class MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
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
    // public MainFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MainFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainFlowCoordinator*) == 0x8);
    // public MenuDestination destination
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MenuDestination* destination;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuDestination*) == 0x8);
    // Creating value type constructor for type: $ProcessMenuDestinationRequestAfterFrameCoroutine$d__42
    $ProcessMenuDestinationRequestAfterFrameCoroutine$d__42(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, GlobalNamespace::MainFlowCoordinator* $$4__this_ = {}, GlobalNamespace::MenuDestination* destination_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$4__this{$$4__this_}, destination{destination_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x105E094
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x105E414
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x105E418
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x105E488
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x105E490
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x105E4F0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__42
  #pragma pack(pop)
  static check_size<sizeof(MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42), 40 + sizeof(GlobalNamespace::MenuDestination*)> __GlobalNamespace_MainFlowCoordinator_$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42SizeCheck;
  static_assert(sizeof(MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainFlowCoordinator::$ProcessMenuDestinationRequestAfterFrameCoroutine$d__42*, "", "MainFlowCoordinator/<ProcessMenuDestinationRequestAfterFrameCoroutine>d__42");
