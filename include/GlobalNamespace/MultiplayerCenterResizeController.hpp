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
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerPlayerLayout
  struct MultiplayerPlayerLayout;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: MultiplayerCenterResizeController
  // [] Offset: FFFFFFFF
  class MultiplayerCenterResizeController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _platformWidth
    // Size: 0x4
    // Offset: 0x18
    float platformWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: platformWidth and: layoutProvider
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0xDC9C04
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLayoutProvider*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9C14
    // private System.Action`1<System.Single> edgeDistanceFromCenterWasCalculatedEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<float>* edgeDistanceFromCenterWasCalculatedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<float>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9C24
    // private System.Boolean <isEdgeDistanceFromCenterCalculated>k__BackingField
    // Size: 0x1
    // Offset: 0x30
    bool isEdgeDistanceFromCenterCalculated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isEdgeDistanceFromCenterCalculated and: edgeDistanceFromCenter
    char __padding3[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC9C34
    // private System.Single <edgeDistanceFromCenter>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    float edgeDistanceFromCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MultiplayerCenterResizeController
    MultiplayerCenterResizeController(float platformWidth_ = {}, GlobalNamespace::MultiplayerLayoutProvider* layoutProvider_ = {}, System::Action_1<float>* edgeDistanceFromCenterWasCalculatedEvent_ = {}, bool isEdgeDistanceFromCenterCalculated_ = {}, float edgeDistanceFromCenter_ = {}) noexcept : platformWidth{platformWidth_}, layoutProvider{layoutProvider_}, edgeDistanceFromCenterWasCalculatedEvent{edgeDistanceFromCenterWasCalculatedEvent_}, isEdgeDistanceFromCenterCalculated{isEdgeDistanceFromCenterCalculated_}, edgeDistanceFromCenter{edgeDistanceFromCenter_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_edgeDistanceFromCenterWasCalculatedEvent(System.Action`1<System.Single> value)
    // Offset: 0xFA74E8
    void add_edgeDistanceFromCenterWasCalculatedEvent(System::Action_1<float>* value);
    // public System.Void remove_edgeDistanceFromCenterWasCalculatedEvent(System.Action`1<System.Single> value)
    // Offset: 0xFA758C
    void remove_edgeDistanceFromCenterWasCalculatedEvent(System::Action_1<float>* value);
    // public System.Boolean get_isEdgeDistanceFromCenterCalculated()
    // Offset: 0xFA7630
    bool get_isEdgeDistanceFromCenterCalculated();
    // private System.Void set_isEdgeDistanceFromCenterCalculated(System.Boolean value)
    // Offset: 0xFA7638
    void set_isEdgeDistanceFromCenterCalculated(bool value);
    // public System.Single get_edgeDistanceFromCenter()
    // Offset: 0xFA7644
    float get_edgeDistanceFromCenter();
    // private System.Void set_edgeDistanceFromCenter(System.Single value)
    // Offset: 0xFA764C
    void set_edgeDistanceFromCenter(float value);
    // protected System.Void Start()
    // Offset: 0xFA7654
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFA7888
    void OnDestroy();
    // private System.Void HandlePlayersLayoutWasCalculated(MultiplayerPlayerLayout layout, System.Int32 numberOfPlayers)
    // Offset: 0xFA7704
    void HandlePlayersLayoutWasCalculated(GlobalNamespace::MultiplayerPlayerLayout layout, int numberOfPlayers);
    // public System.Void .ctor()
    // Offset: 0xFA79C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerCenterResizeController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MultiplayerCenterResizeController").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerCenterResizeController*, creationType>()));
    }
  }; // MultiplayerCenterResizeController
  static check_size<sizeof(MultiplayerCenterResizeController), 52 + sizeof(float)> __GlobalNamespace_MultiplayerCenterResizeControllerSizeCheck;
  static_assert(sizeof(MultiplayerCenterResizeController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCenterResizeController*, "", "MultiplayerCenterResizeController");
#pragma pack(pop)
