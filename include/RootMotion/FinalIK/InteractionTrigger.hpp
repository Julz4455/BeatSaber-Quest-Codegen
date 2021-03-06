// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionTrigger
  // [] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: D26B0C
  // [AddComponentMenu] Offset: D26B0C
  class InteractionTrigger : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::InteractionTrigger::CharacterPosition
    class CharacterPosition;
    // Nested type: RootMotion::FinalIK::InteractionTrigger::CameraPosition
    class CameraPosition;
    // Nested type: RootMotion::FinalIK::InteractionTrigger::Range
    class Range;
    // [TooltipAttribute] Offset: 0xD29750
    // public RootMotion.FinalIK.InteractionTrigger/Range[] ranges
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::InteractionTrigger::Range*>* ranges;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::InteractionTrigger::Range*>*) == 0x8);
    // Creating value type constructor for type: InteractionTrigger
    InteractionTrigger(::Array<RootMotion::FinalIK::InteractionTrigger::Range*>* ranges_ = {}) noexcept : ranges{ranges_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OpenUserManual()
    // Offset: 0x195F5EC
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x195F638
    void OpenScriptReference();
    // private System.Void OpenTutorial4()
    // Offset: 0x195F684
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x195F6D0
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x195F71C
    void ASThread();
    // private System.Void Start()
    // Offset: 0x195F768
    void Start();
    // public System.Int32 GetBestRangeIndex(UnityEngine.Transform character, UnityEngine.Transform raycastFrom, UnityEngine.RaycastHit raycastHit)
    // Offset: 0x195F76C
    int GetBestRangeIndex(UnityEngine::Transform* character, UnityEngine::Transform* raycastFrom, UnityEngine::RaycastHit raycastHit);
    // public System.Void .ctor()
    // Offset: 0x195FB00
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionTrigger*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionTrigger
  #pragma pack(pop)
  static check_size<sizeof(InteractionTrigger), 24 + sizeof(::Array<RootMotion::FinalIK::InteractionTrigger::Range*>*)> __RootMotion_FinalIK_InteractionTriggerSizeCheck;
  static_assert(sizeof(InteractionTrigger) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionTrigger*, "RootMotion.FinalIK", "InteractionTrigger");
