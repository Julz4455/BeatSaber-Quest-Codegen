// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MenuShockwave
  class MenuShockwave;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ScrollView
  class ScrollView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: MissionMapAnimationController
  // [] Offset: FFFFFFFF
  class MissionMapAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateMissionMapCoroutine$d__12
    class $UpdateMissionMapCoroutine$d__12;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateClearedNodeStateCoroutine$d__13
    class $UpdateClearedNodeStateCoroutine$d__13;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateStageCoroutine$d__14
    class $UpdateStageCoroutine$d__14;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$$c
    class $$c;
    // Nested type: GlobalNamespace::MissionMapAnimationController::$UpdateNodesAndConnectionCoroutine$d__15
    class $UpdateNodesAndConnectionCoroutine$d__15;
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodesManager*) == 0x8);
    // private HMUI.ScrollView _mapScrollView
    // Size: 0x8
    // Offset: 0x20
    HMUI::ScrollView* mapScrollView;
    // Field size check
    static_assert(sizeof(HMUI::ScrollView*) == 0x8);
    // [SpaceAttribute] Offset: 0xDCE514
    // private System.Single _startDelay
    // Size: 0x4
    // Offset: 0x28
    float startDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _stageAnimationStartDelay
    // Size: 0x4
    // Offset: 0x2C
    float stageAnimationStartDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _missionConnectionAnimationStartDelay
    // Size: 0x4
    // Offset: 0x30
    float missionConnectionAnimationStartDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _missionConnectionAnimationSeparationTime
    // Size: 0x4
    // Offset: 0x34
    float missionConnectionAnimationSeparationTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _stageAnimationDuration
    // Size: 0x4
    // Offset: 0x38
    float stageAnimationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: stageAnimationDuration and: shockwaveEffect
    char __padding6[0x4] = {};
    // [InjectAttribute] Offset: 0xDCE58C
    // private MenuShockwave _shockwaveEffect
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::MenuShockwave* shockwaveEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MenuShockwave*) == 0x8);
    // Creating value type constructor for type: MissionMapAnimationController
    MissionMapAnimationController(GlobalNamespace::MissionNodesManager* missionNodesManager_ = {}, HMUI::ScrollView* mapScrollView_ = {}, float startDelay_ = {}, float stageAnimationStartDelay_ = {}, float missionConnectionAnimationStartDelay_ = {}, float missionConnectionAnimationSeparationTime_ = {}, float stageAnimationDuration_ = {}, GlobalNamespace::MenuShockwave* shockwaveEffect_ = {}) noexcept : missionNodesManager{missionNodesManager_}, mapScrollView{mapScrollView_}, startDelay{startDelay_}, stageAnimationStartDelay{stageAnimationStartDelay_}, missionConnectionAnimationStartDelay{missionConnectionAnimationStartDelay_}, missionConnectionAnimationSeparationTime{missionConnectionAnimationSeparationTime_}, stageAnimationDuration{stageAnimationDuration_}, shockwaveEffect{shockwaveEffect_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_animatedUpdateIsRequired()
    // Offset: 0x101AB60
    bool get_animatedUpdateIsRequired();
    // public System.Void ScrollToTopMostNotClearedMission()
    // Offset: 0x101ACA8
    void ScrollToTopMostNotClearedMission();
    // public System.Void UpdateMissionMapAfterMissionWasCleared(System.Boolean animated, System.Action finishCallback)
    // Offset: 0x101AEE8
    void UpdateMissionMapAfterMissionWasCleared(bool animated, System::Action* finishCallback);
    // private System.Collections.IEnumerator UpdateMissionMapCoroutine(MissionNode lastClearedMissionNode, System.Action finishCallback)
    // Offset: 0x101B024
    System::Collections::IEnumerator* UpdateMissionMapCoroutine(GlobalNamespace::MissionNode* lastClearedMissionNode, System::Action* finishCallback);
    // private System.Collections.IEnumerator UpdateClearedNodeStateCoroutine(MissionNode lastClearedMissionNode)
    // Offset: 0x101B0FC
    System::Collections::IEnumerator* UpdateClearedNodeStateCoroutine(GlobalNamespace::MissionNode* lastClearedMissionNode);
    // private System.Collections.IEnumerator UpdateStageCoroutine()
    // Offset: 0x101B1C0
    System::Collections::IEnumerator* UpdateStageCoroutine();
    // private System.Collections.IEnumerator UpdateNodesAndConnectionCoroutine()
    // Offset: 0x101B268
    System::Collections::IEnumerator* UpdateNodesAndConnectionCoroutine();
    // public System.Void .ctor()
    // Offset: 0x101B310
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionMapAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MissionMapAnimationController").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionMapAnimationController*, creationType>()));
    }
  }; // MissionMapAnimationController
  static check_size<sizeof(MissionMapAnimationController), 64 + sizeof(GlobalNamespace::MenuShockwave*)> __GlobalNamespace_MissionMapAnimationControllerSizeCheck;
  static_assert(sizeof(MissionMapAnimationController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionMapAnimationController*, "", "MissionMapAnimationController");
#pragma pack(pop)
