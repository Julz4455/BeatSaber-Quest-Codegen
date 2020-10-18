// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: MissionNodeConnection
  class MissionNodeConnection;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionConnectionsGenerator
  class MissionConnectionsGenerator : public UnityEngine::MonoBehaviour {
    public:
    // private MissionNodesManager _missionNodesManager
    // Offset: 0x18
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // private MissionNodeConnection _nodeConnectionPref
    // Offset: 0x20
    GlobalNamespace::MissionNodeConnection* nodeConnectionPref;
    // private UnityEngine.GameObject _connectionsCanvas
    // Offset: 0x28
    UnityEngine::GameObject* connectionsCanvas;
    // private System.Collections.Generic.List`1<MissionNode> _missionNodes
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>* missionNodes;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private MissionNode get__rootMissionNode()
    // Offset: 0xEDC258
    GlobalNamespace::MissionNode* get__rootMissionNode();
    // private System.Void CreateNodeConnections()
    // Offset: 0xEDC274
    void CreateNodeConnections();
    // private System.Void RemoveOldConnections()
    // Offset: 0xEDC308
    void RemoveOldConnections();
    // private System.Void CreateConnections(MissionNode missionNode, System.Collections.Generic.List`1<MissionNode> visitedNodes)
    // Offset: 0xEDC6C4
    void CreateConnections(GlobalNamespace::MissionNode* missionNode, System::Collections::Generic::List_1<GlobalNamespace::MissionNode*>* visitedNodes);
    // private MissionNodeConnection CreateConnectionBetweenNodes(MissionNode parentMissionNode, MissionNode childMissionNode)
    // Offset: 0xEDC85C
    GlobalNamespace::MissionNodeConnection* CreateConnectionBetweenNodes(GlobalNamespace::MissionNode* parentMissionNode, GlobalNamespace::MissionNode* childMissionNode);
    // public System.Void .ctor()
    // Offset: 0xEDC998
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionConnectionsGenerator* New_ctor();
  }; // MissionConnectionsGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionConnectionsGenerator*, "", "MissionConnectionsGenerator");
#pragma pack(pop)
