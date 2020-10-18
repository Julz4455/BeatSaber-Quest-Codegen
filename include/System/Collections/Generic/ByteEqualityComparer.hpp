// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.ByteEqualityComparer
  class ByteEqualityComparer : public System::Collections::Generic::EqualityComparer_1<uint8_t> {
    public:
    // public System.Boolean Equals(System.Byte x, System.Byte y)
    // Offset: 0x15D66E0
    bool Equals(uint8_t x, uint8_t y);
    // public System.Int32 GetHashCode(System.Byte b)
    // Offset: 0x15D66F0
    int GetHashCode(uint8_t b);
    // System.Int32 IndexOf(System.Byte[] array, System.Byte value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x15D66F8
    int IndexOf(::Array<uint8_t>* array, uint8_t value, int startIndex, int count);
    // System.Int32 LastIndexOf(System.Byte[] array, System.Byte value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x15D68A8
    int LastIndexOf(::Array<uint8_t>* array, uint8_t value, int startIndex, int count);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15D690C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15D698C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Void .ctor()
    // Offset: 0x15D69C4
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static ByteEqualityComparer* New_ctor();
  }; // System.Collections.Generic.ByteEqualityComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::ByteEqualityComparer*, "System.Collections.Generic", "ByteEqualityComparer");
#pragma pack(pop)
