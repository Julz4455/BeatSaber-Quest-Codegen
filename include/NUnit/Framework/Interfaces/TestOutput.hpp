// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.TestOutput
  class TestOutput : public ::Il2CppObject {
    public:
    // private System.String <Text>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Text;
    // private System.String <Stream>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Stream;
    // private System.String <TestName>k__BackingField
    // Offset: 0x20
    ::Il2CppString* TestName;
    // public System.Void .ctor(System.String text, System.String stream, System.String testName)
    // Offset: 0x15EBD54
    static TestOutput* New_ctor(::Il2CppString* text, ::Il2CppString* stream, ::Il2CppString* testName);
    // public System.String get_Text()
    // Offset: 0x15EBE14
    ::Il2CppString* get_Text();
    // private System.Void set_Text(System.String value)
    // Offset: 0x15EBE1C
    void set_Text(::Il2CppString* value);
    // public System.String get_Stream()
    // Offset: 0x15EBE0C
    ::Il2CppString* get_Stream();
    // private System.Void set_Stream(System.String value)
    // Offset: 0x15EBE24
    void set_Stream(::Il2CppString* value);
    // private System.Void set_TestName(System.String value)
    // Offset: 0x15EBE2C
    void set_TestName(::Il2CppString* value);
    // public override System.String ToString()
    // Offset: 0x15EBDB8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Interfaces.TestOutput
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TestOutput*, "NUnit.Framework.Interfaces", "TestOutput");
#pragma pack(pop)
