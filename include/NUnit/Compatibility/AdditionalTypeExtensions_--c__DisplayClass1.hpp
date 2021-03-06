// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Compatibility.AdditionalTypeExtensions
#include "NUnit/Compatibility/AdditionalTypeExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Compatibility
namespace NUnit::Compatibility {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Compatibility.AdditionalTypeExtensions/<>c__DisplayClass1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D24DF8
  class AdditionalTypeExtensions::$$c__DisplayClass1 : public ::Il2CppObject {
    public:
    // public System.Type to
    // Size: 0x8
    // Offset: 0x10
    System::Type* to;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1
    $$c__DisplayClass1(System::Type* to_ = {}) noexcept : to{to_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return to;
    }
    // public System.Boolean <IsCastableFrom>b__0(System.Reflection.MethodInfo m)
    // Offset: 0x1694940
    bool $IsCastableFrom$b__0(System::Reflection::MethodInfo* m);
    // public System.Void .ctor()
    // Offset: 0x1693F10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdditionalTypeExtensions::$$c__DisplayClass1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdditionalTypeExtensions::$$c__DisplayClass1*, creationType>()));
    }
  }; // NUnit.Compatibility.AdditionalTypeExtensions/<>c__DisplayClass1
  #pragma pack(pop)
  static check_size<sizeof(AdditionalTypeExtensions::$$c__DisplayClass1), 16 + sizeof(System::Type*)> __NUnit_Compatibility_AdditionalTypeExtensions_$$c__DisplayClass1SizeCheck;
  static_assert(sizeof(AdditionalTypeExtensions::$$c__DisplayClass1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Compatibility::AdditionalTypeExtensions::$$c__DisplayClass1*, "NUnit.Compatibility", "AdditionalTypeExtensions/<>c__DisplayClass1");
