// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.ObjectReader
#include "System/Runtime/Serialization/Formatters/Binary/ObjectReader.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver
  class ObjectReader::TopLevelAssemblyTypeResolver : public ::Il2CppObject {
    public:
    // private System.Reflection.Assembly m_topLevelAssembly
    // Offset: 0x10
    System::Reflection::Assembly* m_topLevelAssembly;
    // Creating conversion operator: operator System::Reflection::Assembly*
    constexpr operator System::Reflection::Assembly*() const noexcept {
      return m_topLevelAssembly;
    }
    // public System.Void .ctor(System.Reflection.Assembly topLevelAssembly)
    // Offset: 0x14C4E40
    static ObjectReader::TopLevelAssemblyTypeResolver* New_ctor(System::Reflection::Assembly* topLevelAssembly);
    // public System.Type ResolveType(System.Reflection.Assembly assembly, System.String simpleTypeName, System.Boolean ignoreCase)
    // Offset: 0x14C4E74
    System::Type* ResolveType(System::Reflection::Assembly* assembly, ::Il2CppString* simpleTypeName, bool ignoreCase);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectReader/TopLevelAssemblyTypeResolver
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectReader::TopLevelAssemblyTypeResolver*, "System.Runtime.Serialization.Formatters.Binary", "ObjectReader/TopLevelAssemblyTypeResolver");
#pragma pack(pop)
