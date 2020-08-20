// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestData
#include "NUnit/Framework/Interfaces/ITestData.hpp"
// Including type: NUnit.Framework.Interfaces.IApplyToTest
#include "NUnit/Framework/Interfaces/IApplyToTest.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestParameters
  class TestParameters : public ::Il2CppObject, public NUnit::Framework::Interfaces::ITestData, public NUnit::Framework::Interfaces::IApplyToTest {
    public:
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Offset: 0x10
    NUnit::Framework::Interfaces::RunState RunState;
    // private System.Object[] <Arguments>k__BackingField
    // Offset: 0x18
    ::Array<::Il2CppObject*>* Arguments;
    // private System.String <TestName>k__BackingField
    // Offset: 0x20
    ::Il2CppString* TestName;
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Offset: 0x28
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // private System.Object[] <OriginalArguments>k__BackingField
    // Offset: 0x30
    ::Array<::Il2CppObject*>* OriginalArguments;
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x1846A40
    static TestParameters* New_ctor(::Array<::Il2CppObject*>* args);
    // private System.Void InitializeAguments(System.Object[] args)
    // Offset: 0x184A014
    void InitializeAguments(::Array<::Il2CppObject*>* args);
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x184A0B8
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x184A0C0
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // public System.String get_TestName()
    // Offset: 0x184A0C8
    ::Il2CppString* get_TestName();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x184A0D8
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Object[] get_OriginalArguments()
    // Offset: 0x184A7A8
    ::Array<::Il2CppObject*>* get_OriginalArguments();
    // private System.Void set_OriginalArguments(System.Object[] value)
    // Offset: 0x184A7B0
    void set_OriginalArguments(::Array<::Il2CppObject*>* value);
    // public System.Void .ctor()
    // Offset: 0x18469C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestParameters* New_ctor();
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x184A0B0
    // Implemented from: NUnit.Framework.Interfaces.ITestData
    // Base method: NUnit.Framework.Interfaces.RunState ITestData::get_RunState()
    NUnit::Framework::Interfaces::RunState get_RunState();
    // public System.Object[] get_Arguments()
    // Offset: 0x1848084
    // Implemented from: NUnit.Framework.Interfaces.ITestData
    // Base method: System.Object[] ITestData::get_Arguments()
    ::Array<::Il2CppObject*>* get_Arguments();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x184A0D0
    // Implemented from: NUnit.Framework.Interfaces.ITestData
    // Base method: NUnit.Framework.Interfaces.IPropertyBag ITestData::get_Properties()
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties();
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0x184A0E0
    // Implemented from: NUnit.Framework.Interfaces.IApplyToTest
    // Base method: System.Void IApplyToTest::ApplyToTest(NUnit.Framework.Internal.Test test)
    void ApplyToTest(NUnit::Framework::Internal::Test* test);
  }; // NUnit.Framework.Internal.TestParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestParameters*, "NUnit.Framework.Internal", "TestParameters");
#pragma pack(pop)
