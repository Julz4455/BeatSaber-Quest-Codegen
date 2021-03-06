// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestFilter
#include "NUnit/Framework/Interfaces/ITestFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestFilter
  // [] Offset: FFFFFFFF
  class TestFilter : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITestFilter*/ {
    public:
    // Nested type: NUnit::Framework::Internal::TestFilter::EmptyFilter
    class EmptyFilter;
    // Creating value type constructor for type: TestFilter
    TestFilter() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestFilter
    operator NUnit::Framework::Interfaces::ITestFilter() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestFilter*>(this);
    }
    // Get static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
    static NUnit::Framework::Internal::TestFilter* _get_Empty();
    // Set static field: static public readonly NUnit.Framework.Internal.TestFilter Empty
    static void _set_Empty(NUnit::Framework::Internal::TestFilter* value);
    // public System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFFFFFFFF
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean MatchParent(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2225104
    bool MatchParent(NUnit::Framework::Interfaces::ITest* test);
    // protected System.Boolean MatchDescendant(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x2225314
    bool MatchDescendant(NUnit::Framework::Interfaces::ITest* test);
    // static private System.Void .cctor()
    // Offset: 0x2225778
    static void _cctor();
    // public System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x22250A4
    // Implemented from: NUnit.Framework.Interfaces.ITestFilter
    // Base method: System.Boolean ITestFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x22252C4
    // Implemented from: NUnit.Framework.Interfaces.ITestFilter
    // Base method: System.Boolean ITestFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0x22256E8
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::ToXml(System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IXmlNodeBuilder
    // Base method: NUnit.Framework.Interfaces.TNode IXmlNodeBuilder::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // protected System.Void .ctor()
    // Offset: 0x2225770
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFilter*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TestFilter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestFilter*, "NUnit.Framework.Internal", "TestFilter");
