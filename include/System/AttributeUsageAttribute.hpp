// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.AttributeTargets
#include "System/AttributeTargets.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.AttributeUsageAttribute
  class AttributeUsageAttribute : public System::Attribute {
    public:
    // System.AttributeTargets m_attributeTarget
    // Offset: 0x10
    System::AttributeTargets m_attributeTarget;
    // System.Boolean m_allowMultiple
    // Offset: 0x14
    bool m_allowMultiple;
    // System.Boolean m_inherited
    // Offset: 0x15
    bool m_inherited;
    // Get static field: static System.AttributeUsageAttribute Default
    static System::AttributeUsageAttribute* _get_Default();
    // Set static field: static System.AttributeUsageAttribute Default
    static void _set_Default(System::AttributeUsageAttribute* value);
    // public System.Void .ctor(System.AttributeTargets validOn)
    // Offset: 0x15CB1A4
    static AttributeUsageAttribute* New_ctor(System::AttributeTargets validOn);
    // public System.Boolean get_AllowMultiple()
    // Offset: 0x15CB1E0
    bool get_AllowMultiple();
    // public System.Void set_AllowMultiple(System.Boolean value)
    // Offset: 0x15CB1E8
    void set_AllowMultiple(bool value);
    // public System.Boolean get_Inherited()
    // Offset: 0x15CB1F4
    bool get_Inherited();
    // public System.Void set_Inherited(System.Boolean value)
    // Offset: 0x15CB1FC
    void set_Inherited(bool value);
    // static private System.Void .cctor()
    // Offset: 0x15CB208
    static void _cctor();
  }; // System.AttributeUsageAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::AttributeUsageAttribute*, "System", "AttributeUsageAttribute");
#pragma pack(pop)
