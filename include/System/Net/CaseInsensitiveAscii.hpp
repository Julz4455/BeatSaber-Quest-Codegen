// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CaseInsensitiveAscii
  // [] Offset: FFFFFFFF
  class CaseInsensitiveAscii : public ::Il2CppObject/*, public System::Collections::IEqualityComparer, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: CaseInsensitiveAscii
    CaseInsensitiveAscii() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IEqualityComparer
    operator System::Collections::IEqualityComparer() noexcept {
      return *reinterpret_cast<System::Collections::IEqualityComparer*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // Get static field: static readonly System.Net.CaseInsensitiveAscii StaticInstance
    static System::Net::CaseInsensitiveAscii* _get_StaticInstance();
    // Set static field: static readonly System.Net.CaseInsensitiveAscii StaticInstance
    static void _set_StaticInstance(System::Net::CaseInsensitiveAscii* value);
    // Get static field: static readonly System.Byte[] AsciiToLower
    static ::Array<uint8_t>* _get_AsciiToLower();
    // Set static field: static readonly System.Byte[] AsciiToLower
    static void _set_AsciiToLower(::Array<uint8_t>* value);
    // private System.Int32 FastGetHashCode(System.String myString)
    // Offset: 0x155A748
    int FastGetHashCode(::Il2CppString* myString);
    // static private System.Void .cctor()
    // Offset: 0x155A9E4
    static void _cctor();
    // public System.Int32 GetHashCode(System.Object myObject)
    // Offset: 0x155A4A0
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Int32 IEqualityComparer::GetHashCode(System.Object myObject)
    int GetHashCode(::Il2CppObject* myObject);
    // Creating proxy method: System_Collections_IEqualityComparer_GetHashCode
    // Maps to method: GetHashCode
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* myObject);
    // public System.Int32 Compare(System.Object firstObject, System.Object secondObject)
    // Offset: 0x155A5C4
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object firstObject, System.Object secondObject)
    int Compare(::Il2CppObject* firstObject, ::Il2CppObject* secondObject);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* firstObject, ::Il2CppObject* secondObject);
    // public System.Boolean Equals(System.Object firstObject, System.Object secondObject)
    // Offset: 0x155A850
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object firstObject, System.Object secondObject)
    // Base method: System.Boolean IEqualityComparer::Equals(System.Object firstObject, System.Object secondObject)
    bool Equals(::Il2CppObject* firstObject, ::Il2CppObject* secondObject);
    // Creating proxy method: System_Collections_IEqualityComparer_Equals
    // Maps to method: Equals
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* firstObject, ::Il2CppObject* secondObject);
    // public System.Void .ctor()
    // Offset: 0x155A9DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CaseInsensitiveAscii* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::CaseInsensitiveAscii::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CaseInsensitiveAscii*, creationType>()));
    }
  }; // System.Net.CaseInsensitiveAscii
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::CaseInsensitiveAscii*, "System.Net", "CaseInsensitiveAscii");
