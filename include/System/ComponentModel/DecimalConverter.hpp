// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.BaseNumberConverter
#include "System/ComponentModel/BaseNumberConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  // Autogenerated type: System.ComponentModel.DecimalConverter
  // [] Offset: FFFFFFFF
  class DecimalConverter : public System::ComponentModel::BaseNumberConverter {
    public:
    // Creating value type constructor for type: DecimalConverter
    DecimalConverter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1480930
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Void BaseNumberConverter::.ctor()
    // Base method: System.Void TypeConverter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecimalConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DecimalConverter").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecimalConverter*, creationType>()));
    }
  }; // System.ComponentModel.DecimalConverter
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DecimalConverter*, "System.ComponentModel", "DecimalConverter");
#pragma pack(pop)
