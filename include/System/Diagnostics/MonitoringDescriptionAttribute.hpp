// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.DescriptionAttribute
#include "System/ComponentModel/DescriptionAttribute.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.MonitoringDescriptionAttribute
  class MonitoringDescriptionAttribute : public System::ComponentModel::DescriptionAttribute {
    public:
    // public System.Void .ctor(System.String description)
    // Offset: 0x17296B4
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.Void DescriptionAttribute::.ctor(System.String description)
    static MonitoringDescriptionAttribute* New_ctor(::Il2CppString* description);
    // public override System.String get_Description()
    // Offset: 0x1729738
    // Implemented from: System.ComponentModel.DescriptionAttribute
    // Base method: System.String DescriptionAttribute::get_Description()
    ::Il2CppString* get_Description();
  }; // System.Diagnostics.MonitoringDescriptionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::MonitoringDescriptionAttribute*, "System.Diagnostics", "MonitoringDescriptionAttribute");
#pragma pack(pop)
