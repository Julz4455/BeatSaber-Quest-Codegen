// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.StringComparer
  class StringComparer : public ::Il2CppObject, public System::Collections::IComparer, public System::Collections::IEqualityComparer, public System::Collections::Generic::IComparer_1<::Il2CppString*>, public System::Collections::Generic::IEqualityComparer_1<::Il2CppString*> {
    public:
    // Get static field: static private readonly System.StringComparer _invariantCulture
    static System::StringComparer* _get__invariantCulture();
    // Set static field: static private readonly System.StringComparer _invariantCulture
    static void _set__invariantCulture(System::StringComparer* value);
    // Get static field: static private readonly System.StringComparer _invariantCultureIgnoreCase
    static System::StringComparer* _get__invariantCultureIgnoreCase();
    // Set static field: static private readonly System.StringComparer _invariantCultureIgnoreCase
    static void _set__invariantCultureIgnoreCase(System::StringComparer* value);
    // Get static field: static private readonly System.StringComparer _ordinal
    static System::StringComparer* _get__ordinal();
    // Set static field: static private readonly System.StringComparer _ordinal
    static void _set__ordinal(System::StringComparer* value);
    // Get static field: static private readonly System.StringComparer _ordinalIgnoreCase
    static System::StringComparer* _get__ordinalIgnoreCase();
    // Set static field: static private readonly System.StringComparer _ordinalIgnoreCase
    static void _set__ordinalIgnoreCase(System::StringComparer* value);
    // static public System.StringComparer get_InvariantCultureIgnoreCase()
    // Offset: 0x187C130
    static System::StringComparer* get_InvariantCultureIgnoreCase();
    // static public System.StringComparer get_CurrentCultureIgnoreCase()
    // Offset: 0x187C198
    static System::StringComparer* get_CurrentCultureIgnoreCase();
    // static public System.StringComparer get_Ordinal()
    // Offset: 0x187C22C
    static System::StringComparer* get_Ordinal();
    // static public System.StringComparer get_OrdinalIgnoreCase()
    // Offset: 0x187C294
    static System::StringComparer* get_OrdinalIgnoreCase();
    // static private System.Void .cctor()
    // Offset: 0x187C638
    static void _cctor();
    // public System.Int32 Compare(System.Object x, System.Object y)
    // Offset: 0x187C2FC
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object x, System.Object y)
    int Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Boolean Equals(System.Object x, System.Object y)
    // Offset: 0x187C494
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object x, System.Object y)
    // Base method: System.Boolean IEqualityComparer::Equals(System.Object x, System.Object y)
    bool Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // Creating proxy method: System_Collections_IEqualityComparer_Equals
    // Maps to method: Equals
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Int32 GetHashCode(System.Object obj)
    // Offset: 0x187C564
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Int32 IEqualityComparer::GetHashCode(System.Object obj)
    int GetHashCode(::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IEqualityComparer_GetHashCode
    // Maps to method: GetHashCode
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
    // public System.Int32 Compare(System.String x, System.String y)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer_1::Compare(System.String x, System.String y)
    int Compare(::Il2CppString* x, ::Il2CppString* y);
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEqualityComparer`1
    // Base method: System.Boolean IEqualityComparer_1::Equals(System.String x, System.String y)
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEqualityComparer`1
    // Base method: System.Int32 IEqualityComparer_1::GetHashCode(System.String obj)
    int GetHashCode(::Il2CppString* obj);
    // protected System.Void .ctor()
    // Offset: 0x187C630
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StringComparer* New_ctor();
  }; // System.StringComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::StringComparer*, "System", "StringComparer");
#pragma pack(pop)
