// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
// Completed includes
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Autogenerated type: LIV.SDK.Unity.HelpAttribute
  class HelpAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.String text
    // Offset: 0x10
    ::Il2CppString* text;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return text;
    }
    // public System.Void .ctor(System.String text)
    // Offset: 0x222DFA0
    static HelpAttribute* New_ctor(::Il2CppString* text);
  }; // LIV.SDK.Unity.HelpAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LIV::SDK::Unity::HelpAttribute*, "LIV.SDK.Unity", "HelpAttribute");
#pragma pack(pop)
