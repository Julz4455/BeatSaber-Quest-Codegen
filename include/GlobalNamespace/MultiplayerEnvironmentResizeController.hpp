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
  // Forward declaring type: MultiplayerCenterResizeController
  class MultiplayerCenterResizeController;
  // Forward declaring type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerEnvironmentResizeController
  class MultiplayerEnvironmentResizeController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeType
    struct ResizeType;
    // Nested type: GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData
    class ResizeData;
    // private UnityEngine.Transform _platformEnd
    // Offset: 0x18
    UnityEngine::Transform* platformEnd;
    // private MultiplayerEnvironmentResizeController/ResizeData[] _resizeData
    // Offset: 0x20
    ::Array<GlobalNamespace::MultiplayerEnvironmentResizeController::ResizeData*>* resizeData;
    // private readonly MultiplayerCenterResizeController _centerResizeController
    // Offset: 0x28
    GlobalNamespace::MultiplayerCenterResizeController* centerResizeController;
    // private readonly BeatmapObjectSpawnCenter _beatmapObjectSpawnCenter
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectSpawnCenter* beatmapObjectSpawnCenter;
    // private System.Action resizingDidFinishEvent
    // Offset: 0x38
    System::Action* resizingDidFinishEvent;
    // private System.Boolean _isResizingFinished
    // Offset: 0x40
    bool isResizingFinished;
    // private System.Boolean _edgeDistanceFromCenterFound
    // Offset: 0x41
    bool edgeDistanceFromCenterFound;
    // private System.Boolean _spawnCenterDistanceFound
    // Offset: 0x42
    bool spawnCenterDistanceFound;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isResizingFinished()
    // Offset: 0xFD2C1C
    bool get_isResizingFinished();
    // public System.Void add_resizingDidFinishEvent(System.Action value)
    // Offset: 0xFD2C24
    void add_resizingDidFinishEvent(System::Action* value);
    // public System.Void remove_resizingDidFinishEvent(System.Action value)
    // Offset: 0xFD2CC8
    void remove_resizingDidFinishEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0xFD2D6C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFD2ED8
    void OnDestroy();
    // private System.Void HandleEdgeDistanceFromCenterWasCalculated(System.Single edgeDistanceFromCenter)
    // Offset: 0xFD2EA8
    void HandleEdgeDistanceFromCenterWasCalculated(float edgeDistanceFromCenter);
    // private System.Void HandleSpawnCenterDistanceWasFound(System.Single distance)
    // Offset: 0xFD2EC0
    void HandleSpawnCenterDistanceWasFound(float distance);
    // private System.Void TryResize()
    // Offset: 0xFD302C
    void TryResize();
    // private System.Void Resize()
    // Offset: 0xFD3044
    void Resize();
    // public System.Void .ctor()
    // Offset: 0xFD333C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerEnvironmentResizeController* New_ctor();
  }; // MultiplayerEnvironmentResizeController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerEnvironmentResizeController*, "", "MultiplayerEnvironmentResizeController");
#pragma pack(pop)
