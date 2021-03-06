// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Transform/Enumerator
  // [] Offset: FFFFFFFF
  class Transform::Enumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private UnityEngine.Transform outer
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* outer;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Int32 currentIndex
    // Size: 0x4
    // Offset: 0x18
    int currentIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Enumerator
    Enumerator(UnityEngine::Transform* outer_ = {}, int currentIndex_ = {}) noexcept : outer{outer_}, currentIndex{currentIndex_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // System.Void .ctor(UnityEngine.Transform outer)
    // Offset: 0x1ABAB7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Transform::Enumerator* New_ctor(UnityEngine::Transform* outer) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Transform::Enumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Transform::Enumerator*, creationType>(outer)));
    }
    // public System.Object get_Current()
    // Offset: 0x1ABAC08
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1ABAC60
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x1ABACCC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // UnityEngine.Transform/Enumerator
  #pragma pack(pop)
  static check_size<sizeof(Transform::Enumerator), 24 + sizeof(int)> __UnityEngine_Transform_EnumeratorSizeCheck;
  static_assert(sizeof(Transform::Enumerator) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Transform::Enumerator*, "UnityEngine", "Transform/Enumerator");
