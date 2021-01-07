// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IList
  class IList;
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Utilities.Platform
  // [] Offset: FFFFFFFF
  class Platform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Platform
    Platform() noexcept {}
    // Get static field: static private readonly System.Globalization.CompareInfo InvariantCompareInfo
    static System::Globalization::CompareInfo* _get_InvariantCompareInfo();
    // Set static field: static private readonly System.Globalization.CompareInfo InvariantCompareInfo
    static void _set_InvariantCompareInfo(System::Globalization::CompareInfo* value);
    // Get static field: static readonly System.String NewLine
    static ::Il2CppString* _get_NewLine();
    // Set static field: static readonly System.String NewLine
    static void _set_NewLine(::Il2CppString* value);
    // static private System.String GetNewLine()
    // Offset: 0x18C03A0
    static ::Il2CppString* GetNewLine();
    // static System.Boolean EqualsIgnoreCase(System.String a, System.String b)
    // Offset: 0x18C03A8
    static bool EqualsIgnoreCase(::Il2CppString* a, ::Il2CppString* b);
    // static System.String GetEnvironmentVariable(System.String variable)
    // Offset: 0x18C04B0
    static ::Il2CppString* GetEnvironmentVariable(::Il2CppString* variable);
    // static System.Exception CreateNotImplementedException(System.String message)
    // Offset: 0x18C0570
    static System::Exception* CreateNotImplementedException(::Il2CppString* message);
    // static System.Collections.IList CreateArrayList()
    // Offset: 0x18BFDA0
    static System::Collections::IList* CreateArrayList();
    // static System.Collections.IList CreateArrayList(System.Int32 capacity)
    // Offset: 0x18C05D4
    static System::Collections::IList* CreateArrayList(int capacity);
    // static System.Collections.IList CreateArrayList(System.Collections.ICollection collection)
    // Offset: 0x18BF68C
    static System::Collections::IList* CreateArrayList(System::Collections::ICollection* collection);
    // static System.Collections.IDictionary CreateHashtable()
    // Offset: 0x18C0638
    static System::Collections::IDictionary* CreateHashtable();
    // static System.Collections.IDictionary CreateHashtable(System.Int32 capacity)
    // Offset: 0x18C0694
    static System::Collections::IDictionary* CreateHashtable(int capacity);
    // static System.String ToUpperInvariant(System.String s)
    // Offset: 0x18C0434
    static ::Il2CppString* ToUpperInvariant(::Il2CppString* s);
    // static System.Void Dispose(System.IO.Stream s)
    // Offset: 0x18BF318
    static void Dispose(System::IO::Stream* s);
    // static System.Int32 IndexOf(System.String source, System.String value)
    // Offset: 0x18BFDFC
    static int IndexOf(::Il2CppString* source, ::Il2CppString* value);
    // static System.Boolean StartsWith(System.String source, System.String prefix)
    // Offset: 0x18BF8F8
    static bool StartsWith(::Il2CppString* source, ::Il2CppString* prefix);
    // static System.Boolean EndsWith(System.String source, System.String suffix)
    // Offset: 0x18BF98C
    static bool EndsWith(::Il2CppString* source, ::Il2CppString* suffix);
    // static System.String GetTypeName(System.Object obj)
    // Offset: 0x18C06F8
    static ::Il2CppString* GetTypeName(::Il2CppObject* obj);
    // static private System.Void .cctor()
    // Offset: 0x18C0728
    static void _cctor();
  }; // Org.BouncyCastle.Utilities.Platform
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Platform*, "Org.BouncyCastle.Utilities", "Platform");
#pragma pack(pop)
