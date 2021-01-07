// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  // Autogenerated type: System.Diagnostics.DebuggerStepThroughAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3D64C
  // [AttributeUsageAttribute] Offset: D3D64C
  class DebuggerStepThroughAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: DebuggerStepThroughAttribute
    DebuggerStepThroughAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16778E8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerStepThroughAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics").WithContext("DebuggerStepThroughAttribute").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerStepThroughAttribute*, creationType>()));
    }
  }; // System.Diagnostics.DebuggerStepThroughAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerStepThroughAttribute*, "System.Diagnostics", "DebuggerStepThroughAttribute");
#pragma pack(pop)
