// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EnumEqualityComparer`1
#include "System/Collections/Generic/EnumEqualityComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.ShortEnumEqualityComparer`1
  template<typename T>
  class ShortEnumEqualityComparer_1 : public System::Collections::Generic::EnumEqualityComparer_1<T> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || is_value_type_v<T>));
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EnumEqualityComparer`1
    // Base method: System.Void EnumEqualityComparer`1::.ctor()
    // Base method: System.Void EqualityComparer`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static ShortEnumEqualityComparer_1<T>* New_ctor() {
      return (ShortEnumEqualityComparer_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ShortEnumEqualityComparer_1<T>*>::get()));
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EnumEqualityComparer`1
    // Base method: System.Void EnumEqualityComparer`1::.ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    static ShortEnumEqualityComparer_1<T>* New_ctor(System::Runtime::Serialization::SerializationInfo* information, System::Runtime::Serialization::StreamingContext context) {
      return (ShortEnumEqualityComparer_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ShortEnumEqualityComparer_1<T>*>::get(), information, context));
    }
    // public override System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EnumEqualityComparer`1
    // Base method: System.Int32 EnumEqualityComparer`1::GetHashCode(T obj)
    int GetHashCode(T obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
    }
  }; // System.Collections.Generic.ShortEnumEqualityComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::ShortEnumEqualityComparer_1, "System.Collections.Generic", "ShortEnumEqualityComparer`1");
#pragma pack(pop)
