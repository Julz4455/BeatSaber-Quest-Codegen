// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.UIntPtr
  struct UIntPtr : public System::ValueType, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.Void* _pointer
    // Offset: 0x0
    void* pointer;
    // Creating value type constructor for type: UIntPtr
    constexpr UIntPtr(void* pointer_ = {}) noexcept : pointer{pointer_} {}
    // Creating conversion operator: operator void*
    constexpr operator void*() const noexcept {
      return pointer;
    }
    // Get static field: static public readonly System.UIntPtr Zero
    static System::UIntPtr _get_Zero();
    // Set static field: static public readonly System.UIntPtr Zero
    static void _set_Zero(System::UIntPtr value);
    // public System.Void .ctor(System.UInt64 value)
    // Offset: 0xDBE680
    UIntPtr(uint64_t value);
    // public System.Void .ctor(System.UInt32 value)
    // Offset: 0xDBE688
    UIntPtr(uint value);
    // public System.Void .ctor(System.Void* value)
    // Offset: 0xDBE694
    // ABORTED: conflicts with another method.  UIntPtr(void* value);
    // static public System.UInt64 op_Explicit(System.UIntPtr value)
    // Offset: 0x1965BDC
    explicit operator uint64_t();
    // static public System.UInt32 op_Explicit(System.UIntPtr value)
    // Offset: 0x1965BE0
    explicit operator uint();
    // static public System.UIntPtr op_Explicit(System.UInt64 value)
    // Offset: 0x1965BE4
    explicit UIntPtr(uint64_t& value);
    // static public System.UIntPtr op_Explicit(System.Void* value)
    // Offset: 0x1965C10
    // ABORTED: conflicts with another method.  explicit UIntPtr(void* value);
    // static public System.Int32 get_Size()
    // Offset: 0x1965A04
    static int get_Size();
    // static private System.Void .cctor()
    // Offset: 0x1965C14
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xDBE69C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDBE6A4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xDBE6AC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDBE6B4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.UIntPtr
  // static public System.Boolean op_Equality(System.UIntPtr value1, System.UIntPtr value2)
  // Offset: 0x1965BD0
  bool operator ==(const System::UIntPtr& value1, const System::UIntPtr& value2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UIntPtr, "System", "UIntPtr");
#pragma pack(pop)
