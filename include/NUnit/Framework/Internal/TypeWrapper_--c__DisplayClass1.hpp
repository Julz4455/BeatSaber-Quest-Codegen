// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TypeWrapper
#include "NUnit/Framework/Internal/TypeWrapper.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass1
  class TypeWrapper::$$c__DisplayClass1 : public ::Il2CppObject {
    public:
    // public System.Type[] argTypes
    // Offset: 0x10
    ::Array<System::Type*>* argTypes;
    // Creating conversion operator: operator ::Array<System::Type*>*
    constexpr operator ::Array<System::Type*>*() const noexcept {
      return argTypes;
    }
    // public System.Boolean <GetConstructor>b__0(System.Reflection.ConstructorInfo c)
    // Offset: 0x2180E64
    bool $GetConstructor$b__0(System::Reflection::ConstructorInfo* c);
    // public System.Void .ctor()
    // Offset: 0x2180DA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TypeWrapper::$$c__DisplayClass1* New_ctor();
  }; // NUnit.Framework.Internal.TypeWrapper/<>c__DisplayClass1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TypeWrapper::$$c__DisplayClass1*, "NUnit.Framework.Internal", "TypeWrapper/<>c__DisplayClass1");
#pragma pack(pop)
