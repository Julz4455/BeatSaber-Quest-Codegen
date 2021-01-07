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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Mono.Util
namespace Mono::Util {
  // Size: 0x10
  // Autogenerated type: Mono.Util.MonoPInvokeCallbackAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D448A4
  // [ConditionalAttribute] Offset: D448A4
  // [ConditionalAttribute] Offset: D448A4
  // [ConditionalAttribute] Offset: D448A4
  class MonoPInvokeCallbackAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: MonoPInvokeCallbackAttribute
    MonoPInvokeCallbackAttribute() noexcept {}
    // public System.Void .ctor(System.Type t)
    // Offset: 0x147AC94
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoPInvokeCallbackAttribute* New_ctor(System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Mono::Util").WithContext("MonoPInvokeCallbackAttribute").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoPInvokeCallbackAttribute*, creationType>(t)));
    }
  }; // Mono.Util.MonoPInvokeCallbackAttribute
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Util::MonoPInvokeCallbackAttribute*, "Mono.Util", "MonoPInvokeCallbackAttribute");
#pragma pack(pop)
