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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.AspTypePropertyAttribute
  class AspTypePropertyAttribute : public System::Attribute {
    public:
    // private System.Boolean <CreateConstructorReferences>k__BackingField
    // Offset: 0x10
    bool CreateConstructorReferences;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return CreateConstructorReferences;
    }
    // public System.Boolean get_CreateConstructorReferences()
    // Offset: 0x220BF3C
    bool get_CreateConstructorReferences();
    // private System.Void set_CreateConstructorReferences(System.Boolean value)
    // Offset: 0x220BF44
    void set_CreateConstructorReferences(bool value);
    // public System.Void .ctor(System.Boolean createConstructorReferences)
    // Offset: 0x220BF50
    static AspTypePropertyAttribute* New_ctor(bool createConstructorReferences);
  }; // JetBrains.Annotations.AspTypePropertyAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspTypePropertyAttribute*, "JetBrains.Annotations", "AspTypePropertyAttribute");
#pragma pack(pop)
