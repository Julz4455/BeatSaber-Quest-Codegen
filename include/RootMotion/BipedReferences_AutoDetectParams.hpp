// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.BipedReferences
#include "RootMotion/BipedReferences.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.BipedReferences/AutoDetectParams
  struct BipedReferences::AutoDetectParams : public System::ValueType {
    public:
    // public System.Boolean legsParentInSpine
    // Offset: 0x0
    bool legsParentInSpine;
    // public System.Boolean includeEyes
    // Offset: 0x1
    bool includeEyes;
    // Creating value type constructor for type: AutoDetectParams
    constexpr AutoDetectParams(bool legsParentInSpine_ = {}, bool includeEyes_ = {}) noexcept : legsParentInSpine{legsParentInSpine_}, includeEyes{includeEyes_} {}
    // public System.Void .ctor(System.Boolean legsParentInSpine, System.Boolean includeEyes)
    // Offset: 0xDC3C2C
    // ABORTED: conflicts with another method.  AutoDetectParams(bool legsParentInSpine, bool includeEyes);
    // static public RootMotion.BipedReferences/AutoDetectParams get_Default()
    // Offset: 0x1ACAADC
    static RootMotion::BipedReferences::AutoDetectParams get_Default();
  }; // RootMotion.BipedReferences/AutoDetectParams
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedReferences::AutoDetectParams, "RootMotion", "BipedReferences/AutoDetectParams");
#pragma pack(pop)
