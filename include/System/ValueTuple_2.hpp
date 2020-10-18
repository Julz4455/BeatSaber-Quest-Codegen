// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ValueTuple`2
  template<typename T1, typename T2>
  struct ValueTuple_2 : public System::ValueType, public System::IEquatable_1<System::ValueTuple_2<T1, T2>>, public System::Collections::IStructuralEquatable, public System::Collections::IStructuralComparable, public System::IComparable, public System::IComparable_1<System::ValueTuple_2<T1, T2>> {
    public:
    // public T1 Item1
    // Offset: 0x0
    T1 Item1;
    // public T2 Item2
    // Offset: 0x0
    T2 Item2;
    // Creating value type constructor for type: ValueTuple_2
    constexpr ValueTuple_2(T1 Item1_ = {}, T2 Item2_ = {}) noexcept : Item1{Item1_}, Item2{Item2_} {}
    // public System.Void .ctor(T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    // ABORTED: conflicts with another method.  ValueTuple_2(T1 item1, T2 item2)
    // private System.Int32 GetHashCodeCore(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    int GetHashCodeCore(System::Collections::IEqualityComparer* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCodeCore", comparer));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
    }
    // public System.Boolean Equals(System.ValueTuple`2<T1,T2> other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.ValueTuple`2<T1,T2> other)
    bool Equals(System::ValueTuple_2<T1, T2> other) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Boolean IStructuralEquatable::Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, System::Collections::IEqualityComparer* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "System.Collections.IStructuralEquatable.Equals", other, comparer));
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object other)
    int System_IComparable_CompareTo(::Il2CppObject* other) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "System.IComparable.CompareTo", other));
    }
    // public System.Int32 CompareTo(System.ValueTuple`2<T1,T2> other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.ValueTuple`2<T1,T2> other)
    int CompareTo(System::ValueTuple_2<T1, T2> other) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "CompareTo", other));
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralComparable
    // Base method: System.Int32 IStructuralComparable::CompareTo(System.Object other, System.Collections.IComparer comparer)
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, System::Collections::IComparer* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "System.Collections.IStructuralComparable.CompareTo", other, comparer));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Int32 IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer comparer)
    int System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer* comparer) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "System.Collections.IStructuralEquatable.GetHashCode", comparer));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
    }
  }; // System.ValueTuple`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ValueTuple_2, "System", "ValueTuple`2");
#pragma pack(pop)
