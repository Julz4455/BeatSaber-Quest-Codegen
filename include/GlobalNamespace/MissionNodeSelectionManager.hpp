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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MissionNodeVisualController
  class MissionNodeVisualController;
  // Forward declaring type: MissionNode
  class MissionNode;
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
  #pragma pack(push, 1)
  // Autogenerated type: MissionNodeSelectionManager
  // [] Offset: FFFFFFFF
  class MissionNodeSelectionManager : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNodesManager _missionNodesManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodesManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD409F8
    // private System.Action`1<MissionNodeVisualController> didSelectMissionNodeEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<GlobalNamespace::MissionNodeVisualController*>* didSelectMissionNodeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::MissionNodeVisualController*>*) == 0x8);
    // private MissionNode[] _missionNodes
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::MissionNode*>* missionNodes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionNode*>*) == 0x8);
    // private MissionNodeVisualController _selectedNode
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MissionNodeVisualController* selectedNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionNodeVisualController*) == 0x8);
    // Creating value type constructor for type: MissionNodeSelectionManager
    MissionNodeSelectionManager(GlobalNamespace::MissionNodesManager* missionNodesManager_ = {}, System::Action_1<GlobalNamespace::MissionNodeVisualController*>* didSelectMissionNodeEvent_ = {}, ::Array<GlobalNamespace::MissionNode*>* missionNodes_ = {}, GlobalNamespace::MissionNodeVisualController* selectedNode_ = {}) noexcept : missionNodesManager{missionNodesManager_}, didSelectMissionNodeEvent{didSelectMissionNodeEvent_}, missionNodes{missionNodes_}, selectedNode{selectedNode_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectMissionNodeEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x1099FB4
    void add_didSelectMissionNodeEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void remove_didSelectMissionNodeEvent(System.Action`1<MissionNodeVisualController> value)
    // Offset: 0x109A058
    void remove_didSelectMissionNodeEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value);
    // public System.Void DeselectSelectedNode()
    // Offset: 0x109A0FC
    void DeselectSelectedNode();
    // protected System.Void Start()
    // Offset: 0x109A1CC
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x109A45C
    void OnDestroy();
    // private System.Void HandleNodeWasSelect(MissionNodeVisualController missionNode)
    // Offset: 0x109A708
    void HandleNodeWasSelect(GlobalNamespace::MissionNodeVisualController* missionNode);
    // private System.Void HandleNodeWasDisplayed(MissionNodeVisualController missionNode)
    // Offset: 0x109A7DC
    void HandleNodeWasDisplayed(GlobalNamespace::MissionNodeVisualController* missionNode);
    // public System.Void .ctor()
    // Offset: 0x109A86C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionNodeSelectionManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionNodeSelectionManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionNodeSelectionManager*, creationType>()));
    }
  }; // MissionNodeSelectionManager
  #pragma pack(pop)
  static check_size<sizeof(MissionNodeSelectionManager), 48 + sizeof(GlobalNamespace::MissionNodeVisualController*)> __GlobalNamespace_MissionNodeSelectionManagerSizeCheck;
  static_assert(sizeof(MissionNodeSelectionManager) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodeSelectionManager*, "", "MissionNodeSelectionManager");
