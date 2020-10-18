// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.BaseTypeRequiredAttribute
  class BaseTypeRequiredAttribute : public System::Attribute {
    public:
    // private System.Type <BaseType>k__BackingField
    // Offset: 0x10
    System::Type* BaseType;
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return BaseType;
    }
    // public System.Void .ctor(System.Type baseType)
    // Offset: 0x220BFC4
    static BaseTypeRequiredAttribute* New_ctor(System::Type* baseType);
    // public System.Type get_BaseType()
    // Offset: 0x220BFF8
    System::Type* get_BaseType();
    // private System.Void set_BaseType(System.Type value)
    // Offset: 0x220C000
    void set_BaseType(System::Type* value);
  }; // JetBrains.Annotations.BaseTypeRequiredAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::BaseTypeRequiredAttribute*, "JetBrains.Annotations", "BaseTypeRequiredAttribute");
#pragma pack(pop)
