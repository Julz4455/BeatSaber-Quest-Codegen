// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.Util.UnityUtil
#include "ModestTree/Util/UnityUtil.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x40
  // Autogenerated type: ModestTree.Util.UnityUtil/<GetParents>d__16
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D92EF8
  class UnityUtil::$GetParents$d__16 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.Transform <>2__current
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: transform
    char __padding2[0x4] = {};
    // private UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform <>3__transform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* $$3__transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> <>7__wrap1
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* $$7__wrap1;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*) == 0x8);
    // Creating value type constructor for type: $GetParents$d__16
    $GetParents$d__16(int $$1__state_ = {}, UnityEngine::Transform* $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::Transform* transform_ = {}, UnityEngine::Transform* $$3__transform_ = {}, System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* $$7__wrap1_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, transform{transform_}, $$3__transform{$$3__transform_}, $$7__wrap1{$$7__wrap1_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x10E7A58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityUtil::$GetParents$d__16* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("ModestTree::Util").WithContext("$GetParents$d__16").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityUtil::$GetParents$d__16*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x10E8CCC
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10E8CB0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10E8D8C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private UnityEngine.Transform System.Collections.Generic.IEnumerator<UnityEngine.Transform>.get_Current()
    // Offset: 0x10E9068
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    UnityEngine::Transform* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10E9070
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10E90D0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Transform> System.Collections.Generic.IEnumerable<UnityEngine.Transform>.GetEnumerator()
    // Offset: 0x10E90D8
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x10E918C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // ModestTree.Util.UnityUtil/<GetParents>d__16
  static check_size<sizeof(UnityUtil::$GetParents$d__16), 56 + sizeof(System::Collections::Generic::IEnumerator_1<UnityEngine::Transform*>*)> __ModestTree_Util_UnityUtil_$GetParents$d__16SizeCheck;
  static_assert(sizeof(UnityUtil::$GetParents$d__16) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil::$GetParents$d__16*, "ModestTree.Util", "UnityUtil/<GetParents>d__16");
#pragma pack(pop)
