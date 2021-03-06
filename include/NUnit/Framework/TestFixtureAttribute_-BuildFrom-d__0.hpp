// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.TestFixtureAttribute
#include "NUnit/Framework/TestFixtureAttribute.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D24D14
  class TestFixtureAttribute::$BuildFrom$d__0 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>, public System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*/ {
    public:
    // private NUnit.Framework.Internal.TestSuite <>2__current
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Internal::TestSuite* $$2__current;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x18
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x1C
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public NUnit.Framework.TestFixtureAttribute <>4__this
    // Size: 0x8
    // Offset: 0x20
    NUnit::Framework::TestFixtureAttribute* $$4__this;
    // Field size check
    static_assert(sizeof(NUnit::Framework::TestFixtureAttribute*) == 0x8);
    // public NUnit.Framework.Interfaces.ITypeInfo typeInfo
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::ITypeInfo* typeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // public NUnit.Framework.Interfaces.ITypeInfo <>3__typeInfo
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Interfaces::ITypeInfo* $$3__typeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // Creating value type constructor for type: $BuildFrom$d__0
    $BuildFrom$d__0(NUnit::Framework::Internal::TestSuite* $$2__current_ = {}, int $$1__state_ = {}, int $$l__initialThreadId_ = {}, NUnit::Framework::TestFixtureAttribute* $$4__this_ = {}, NUnit::Framework::Interfaces::ITypeInfo* typeInfo_ = {}, NUnit::Framework::Interfaces::ITypeInfo* $$3__typeInfo_ = {}) noexcept : $$2__current{$$2__current_}, $$1__state{$$1__state_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_}, typeInfo{typeInfo_}, $$3__typeInfo{$$3__typeInfo_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x222E224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFixtureAttribute::$BuildFrom$d__0* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFixtureAttribute::$BuildFrom$d__0*, creationType>($$1__state)));
    }
    // private System.Collections.Generic.IEnumerator`1<NUnit.Framework.Internal.TestSuite> System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator()
    // Offset: 0x222E26C
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x222E32C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // private System.Boolean MoveNext()
    // Offset: 0x222E330
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private NUnit.Framework.Internal.TestSuite System.Collections.Generic.IEnumerator<NUnit.Framework.Internal.TestSuite>.get_Current()
    // Offset: 0x222E3C8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    NUnit::Framework::Internal::TestSuite* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x222E3D0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x222E430
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x222E434
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__0
  #pragma pack(pop)
  static check_size<sizeof(TestFixtureAttribute::$BuildFrom$d__0), 48 + sizeof(NUnit::Framework::Interfaces::ITypeInfo*)> __NUnit_Framework_TestFixtureAttribute_$BuildFrom$d__0SizeCheck;
  static_assert(sizeof(TestFixtureAttribute::$BuildFrom$d__0) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__0*, "NUnit.Framework", "TestFixtureAttribute/<BuildFrom>d__0");
