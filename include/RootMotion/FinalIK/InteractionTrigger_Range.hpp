// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionTrigger
#include "RootMotion/FinalIK/InteractionTrigger.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger/Range
  class InteractionTrigger::Range : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::InteractionTrigger::Range::Interaction
    class Interaction;
    // public System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // public System.Boolean show
    // Offset: 0x18
    bool show;
    // public RootMotion.FinalIK.InteractionTrigger/CharacterPosition characterPosition
    // Offset: 0x20
    RootMotion::FinalIK::InteractionTrigger::CharacterPosition* characterPosition;
    // public RootMotion.FinalIK.InteractionTrigger/CameraPosition cameraPosition
    // Offset: 0x28
    RootMotion::FinalIK::InteractionTrigger::CameraPosition* cameraPosition;
    // public RootMotion.FinalIK.InteractionTrigger/Range/Interaction[] interactions
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::InteractionTrigger::Range::Interaction*>* interactions;
    // public System.Boolean IsInRange(UnityEngine.Transform character, UnityEngine.Transform raycastFrom, UnityEngine.RaycastHit raycastHit, UnityEngine.Transform trigger, out System.Single maxError)
    // Offset: 0x18E4E70
    bool IsInRange(UnityEngine::Transform* character, UnityEngine::Transform* raycastFrom, UnityEngine::RaycastHit raycastHit, UnityEngine::Transform* trigger, float& maxError);
    // public System.Void .ctor()
    // Offset: 0x18E5CD8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InteractionTrigger::Range* New_ctor();
  }; // RootMotion.FinalIK.InteractionTrigger/Range
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger::Range*, "RootMotion.FinalIK", "InteractionTrigger/Range");
#pragma pack(pop)
