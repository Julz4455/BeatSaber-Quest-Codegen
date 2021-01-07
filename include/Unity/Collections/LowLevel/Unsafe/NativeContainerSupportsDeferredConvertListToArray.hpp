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
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeferredConvertListToArray
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D4AF10
  // [AttributeUsageAttribute] Offset: D4AF10
  class NativeContainerSupportsDeferredConvertListToArray : public System::Attribute {
    public:
    // Creating value type constructor for type: NativeContainerSupportsDeferredConvertListToArray
    NativeContainerSupportsDeferredConvertListToArray() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1679CF8
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeContainerSupportsDeferredConvertListToArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Unity::Collections::LowLevel::Unsafe").WithContext("NativeContainerSupportsDeferredConvertListToArray").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeContainerSupportsDeferredConvertListToArray*, creationType>()));
    }
  }; // Unity.Collections.LowLevel.Unsafe.NativeContainerSupportsDeferredConvertListToArray
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeContainerSupportsDeferredConvertListToArray*, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsDeferredConvertListToArray");
#pragma pack(pop)
