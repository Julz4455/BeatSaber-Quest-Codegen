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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CenterStageScreenController
  class CenterStageScreenController;
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLobbyCenterStageManager
  class MultiplayerLobbyCenterStageManager : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _centerObjectTransform
    // Offset: 0x18
    UnityEngine::Transform* centerObjectTransform;
    // private CenterStageScreenController _centerStageScreenController
    // Offset: 0x20
    GlobalNamespace::CenterStageScreenController* centerStageScreenController;
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Offset: 0x28
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // private System.Single _innerCircleRadius
    // Offset: 0x30
    float innerCircleRadius;
    // private System.Single _minOuterCircleRadius
    // Offset: 0x34
    float minOuterCircleRadius;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init(System.Single innerCircleRadius, System.Single minOuterCircleRadius)
    // Offset: 0x2237028
    void Init(float innerCircleRadius, float minOuterCircleRadius);
    // public System.Void ActivateCenterStageManager()
    // Offset: 0x2237030
    void ActivateCenterStageManager();
    // public System.Void DeactivateCenterStageManager()
    // Offset: 0x22371B4
    void DeactivateCenterStageManager();
    // private System.Void RecalculateCenterPosition()
    // Offset: 0x2237060
    void RecalculateCenterPosition();
    // public System.Void .ctor()
    // Offset: 0x22371E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLobbyCenterStageManager* New_ctor();
  }; // MultiplayerLobbyCenterStageManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLobbyCenterStageManager*, "", "MultiplayerLobbyCenterStageManager");
#pragma pack(pop)
