// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  // Autogenerated type: NUnit.Framework.Guard
  // [] Offset: FFFFFFFF
  class Guard : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Guard
    Guard() noexcept {}
    // static public System.Void ArgumentNotNull(System.Object value, System.String name)
    // Offset: 0x13E682C
    static void ArgumentNotNull(::Il2CppObject* value, ::Il2CppString* name);
    // static public System.Void ArgumentNotNullOrEmpty(System.String value, System.String name)
    // Offset: 0x13E68E0
    static void ArgumentNotNullOrEmpty(::Il2CppString* value, ::Il2CppString* name);
    // static public System.Void ArgumentValid(System.Boolean condition, System.String message, System.String paramName)
    // Offset: 0x13E69C0
    static void ArgumentValid(bool condition, ::Il2CppString* message, ::Il2CppString* paramName);
  }; // NUnit.Framework.Guard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Guard*, "NUnit.Framework", "Guard");
#pragma pack(pop)
