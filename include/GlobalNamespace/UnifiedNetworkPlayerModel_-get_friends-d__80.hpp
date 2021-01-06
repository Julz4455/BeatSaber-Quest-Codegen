// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnifiedNetworkPlayerModel
#include "GlobalNamespace/UnifiedNetworkPlayerModel.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: UnifiedNetworkPlayerModel/<get_friends>d__80
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DBF164
  class UnifiedNetworkPlayerModel::$get_friends$d__80 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>, public System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private INetworkPlayer <>2__current
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::INetworkPlayer* $$2__current;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnifiedNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UnifiedNetworkPlayerModel*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> <>7__wrap1
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // Creating value type constructor for type: $get_friends$d__80
    $get_friends$d__80(int $$1__state_ = {}, GlobalNamespace::INetworkPlayer* $$2__current_ = {}, int $$l__initialThreadId_ = {}, GlobalNamespace::UnifiedNetworkPlayerModel* $$4__this_ = {}, System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>
    operator System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0xFF7FE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnifiedNetworkPlayerModel::$get_friends$d__80* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("$get_friends$d__80").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnifiedNetworkPlayerModel::$get_friends$d__80*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0xFFC438
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xFFC41C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xFFC4F8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private INetworkPlayer System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current()
    // Offset: 0xFFC848
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    GlobalNamespace::INetworkPlayer* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xFFC850
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xFFC8B0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<INetworkPlayer> System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator()
    // Offset: 0xFFC8B8
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFC96C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnifiedNetworkPlayerModel/<get_friends>d__80
  static check_size<sizeof(UnifiedNetworkPlayerModel::$get_friends$d__80), 48 + sizeof(System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer*>*)> __GlobalNamespace_UnifiedNetworkPlayerModel_$get_friends$d__80SizeCheck;
  static_assert(sizeof(UnifiedNetworkPlayerModel::$get_friends$d__80) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnifiedNetworkPlayerModel::$get_friends$d__80*, "", "UnifiedNetworkPlayerModel/<get_friends>d__80");
#pragma pack(pop)
