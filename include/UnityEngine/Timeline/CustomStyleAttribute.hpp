// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.CustomStyleAttribute
  class CustomStyleAttribute : public System::Attribute {
    public:
    // public readonly System.String ussStyle
    // Offset: 0x10
    ::Il2CppString* ussStyle;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return ussStyle;
    }
    // public System.Void .ctor(System.String ussStyle)
    // Offset: 0x161D9EC
    static CustomStyleAttribute* New_ctor(::Il2CppString* ussStyle);
  }; // UnityEngine.Timeline.CustomStyleAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::CustomStyleAttribute*, "UnityEngine.Timeline", "CustomStyleAttribute");
#pragma pack(pop)
