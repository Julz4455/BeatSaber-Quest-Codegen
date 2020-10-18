// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/NameFragment
  class TestNameGenerator::NameFragment : public ::Il2CppObject {
    public:
    // public System.String GetText(NUnit.Framework.Internal.TestMethod testMethod, System.Object[] args)
    // Offset: 0x217B0E8
    ::Il2CppString* GetText(NUnit::Framework::Internal::TestMethod* testMethod, ::Array<::Il2CppObject*>* args);
    // public System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
    // static protected System.Void AppendGenericTypeNames(System.Text.StringBuilder sb, System.Reflection.MethodInfo method)
    // Offset: 0x217AF0C
    static void AppendGenericTypeNames(System::Text::StringBuilder* sb, System::Reflection::MethodInfo* method);
    // static protected System.String GetDisplayString(System.Object arg, System.Int32 stringMax)
    // Offset: 0x217A344
    static ::Il2CppString* GetDisplayString(::Il2CppObject* arg, int stringMax);
    // static private System.String EscapeSingleChar(System.Char c)
    // Offset: 0x217B230
    static ::Il2CppString* EscapeSingleChar(::Il2CppChar c);
    // static private System.String EscapeCharInString(System.Char c)
    // Offset: 0x217B1C8
    static ::Il2CppString* EscapeCharInString(::Il2CppChar c);
    // static private System.String EscapeControlChar(System.Char c)
    // Offset: 0x217B298
    static ::Il2CppString* EscapeControlChar(::Il2CppChar c);
    // protected System.Void .ctor()
    // Offset: 0x217A218
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestNameGenerator::NameFragment* New_ctor();
  }; // NUnit.Framework.Internal.TestNameGenerator/NameFragment
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::NameFragment*, "NUnit.Framework.Internal", "TestNameGenerator/NameFragment");
#pragma pack(pop)
