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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  // Autogenerated type: UnityEngine.ProBuilder.ProGridsConditionalSnapAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DE2DA4
  class ProGridsConditionalSnapAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: ProGridsConditionalSnapAttribute
    ProGridsConditionalSnapAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13C2BC0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProGridsConditionalSnapAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder").WithContext("ProGridsConditionalSnapAttribute").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProGridsConditionalSnapAttribute*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.ProGridsConditionalSnapAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProGridsConditionalSnapAttribute*, "UnityEngine.ProBuilder", "ProGridsConditionalSnapAttribute");
#pragma pack(pop)
