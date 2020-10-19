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
  // Forward declaring type: MultiplayerCenterResizeController
  class MultiplayerCenterResizeController;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLocalActiveCenterRingLightsController
  class MultiplayerLocalActiveCenterRingLightsController : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single[] _verticalLinePositions
    // Offset: 0x18
    ::Array<float>* verticalLinePositions;
    // private UnityEngine.Transform[] _horizontalLines
    // Offset: 0x20
    ::Array<UnityEngine::Transform*>* horizontalLines;
    // private readonly MultiplayerCenterResizeController _centerResizeController
    // Offset: 0x28
    GlobalNamespace::MultiplayerCenterResizeController* centerResizeController;
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Offset: 0x30
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    // Offset: 0x38
    GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter;
    // private System.Boolean _edgeDistanceFromCenterCalculated
    // Offset: 0x40
    bool edgeDistanceFromCenterCalculated;
    // private System.Boolean _spawnCenterDistanceFound
    // Offset: 0x41
    bool spawnCenterDistanceFound;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x2046B84
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x2046D54
    void OnDestroy();
    // private System.Void TryResize()
    // Offset: 0x2046EAC
    void TryResize();
    // private System.Void Resize()
    // Offset: 0x2046EC4
    void Resize();
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single spawnCenterDistance)
    // Offset: 0x2046D3C
    void HandleSpawnCenterDistanceWasFound(float spawnCenterDistance);
    // private System.Void HandleEdgeDistanceFromCenterWasCalculated(System.Single constructEdgeDistanceFromCenter)
    // Offset: 0x2046D24
    void HandleEdgeDistanceFromCenterWasCalculated(float constructEdgeDistanceFromCenter);
    // public System.Void .ctor()
    // Offset: 0x2047234
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalActiveCenterRingLightsController* New_ctor();
  }; // MultiplayerLocalActiveCenterRingLightsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActiveCenterRingLightsController*, "", "MultiplayerLocalActiveCenterRingLightsController");
#pragma pack(pop)