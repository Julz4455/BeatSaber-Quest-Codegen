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
  // Autogenerated type: JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82AC8
  class XamlItemBindingOfItemsControlAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: XamlItemBindingOfItemsControlAttribute
    XamlItemBindingOfItemsControlAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x19EEBE8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XamlItemBindingOfItemsControlAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("JetBrains::Annotations").WithContext("XamlItemBindingOfItemsControlAttribute").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XamlItemBindingOfItemsControlAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.XamlItemBindingOfItemsControlAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::XamlItemBindingOfItemsControlAttribute*, "JetBrains.Annotations", "XamlItemBindingOfItemsControlAttribute");
#pragma pack(pop)
