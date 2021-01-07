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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  // Autogenerated type: JetBrains.Annotations.AspDataFieldsAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82B28
  class AspDataFieldsAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: AspDataFieldsAttribute
    AspDataFieldsAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x19EE008
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspDataFieldsAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("JetBrains::Annotations").WithContext("AspDataFieldsAttribute").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspDataFieldsAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.AspDataFieldsAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspDataFieldsAttribute*, "JetBrains.Annotations", "AspDataFieldsAttribute");
#pragma pack(pop)
