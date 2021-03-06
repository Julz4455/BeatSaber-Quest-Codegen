// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.TestOutput
  // [] Offset: FFFFFFFF
  class TestOutput : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD25508
    // private System.String <Text>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25518
    // private System.String <Stream>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Stream;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25528
    // private System.String <TestName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* TestName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: TestOutput
    TestOutput(::Il2CppString* Text_ = {}, ::Il2CppString* Stream_ = {}, ::Il2CppString* TestName_ = {}) noexcept : Text{Text_}, Stream{Stream_}, TestName{TestName_} {}
    // public System.Void .ctor(System.String text, System.String stream, System.String testName)
    // Offset: 0x16A4A34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestOutput* New_ctor(::Il2CppString* text, ::Il2CppString* stream, ::Il2CppString* testName) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::TestOutput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestOutput*, creationType>(text, stream, testName)));
    }
    // public System.String get_Text()
    // Offset: 0x16A4AF4
    ::Il2CppString* get_Text();
    // private System.Void set_Text(System.String value)
    // Offset: 0x16A4AFC
    void set_Text(::Il2CppString* value);
    // public System.String get_Stream()
    // Offset: 0x16A4AEC
    ::Il2CppString* get_Stream();
    // private System.Void set_Stream(System.String value)
    // Offset: 0x16A4B04
    void set_Stream(::Il2CppString* value);
    // private System.Void set_TestName(System.String value)
    // Offset: 0x16A4B0C
    void set_TestName(::Il2CppString* value);
    // public override System.String ToString()
    // Offset: 0x16A4A98
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Interfaces.TestOutput
  #pragma pack(pop)
  static check_size<sizeof(TestOutput), 32 + sizeof(::Il2CppString*)> __NUnit_Framework_Interfaces_TestOutputSizeCheck;
  static_assert(sizeof(TestOutput) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::TestOutput*, "NUnit.Framework.Interfaces", "TestOutput");
