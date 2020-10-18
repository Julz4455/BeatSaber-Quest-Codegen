// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.Comparer`1
#include "System/Collections/Generic/Comparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IComparable`1<T>
  template<typename T>
  class IComparable_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.GenericComparer`1
  template<typename T>
  class GenericComparer_1 : public System::Collections::Generic::Comparer_1<T> {
    public:
    // public override System.Int32 Compare(T x, T y)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.Comparer`1
    // Base method: System.Int32 Comparer_1::Compare(T x, T y)
    int Compare(T x, T y) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", x, y));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.Comparer`1
    // Base method: System.Void Comparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static GenericComparer_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<GenericComparer_1<T>*>());
    }
  }; // System.Collections.Generic.GenericComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::GenericComparer_1, "System.Collections.Generic", "GenericComparer`1");
#pragma pack(pop)
