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
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition : public UnityEngine::MonoBehaviour {
    public:
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Offset: 0x18
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // private UnityEngine.Vector3 _positionOffset
    // Offset: 0x20
    UnityEngine::Vector3 positionOffset;
    // private UnityEngine.Quaternion _rotationOffset
    // Offset: 0x2C
    UnityEngine::Quaternion rotationOffset;
    // private UnityEngine.Vector3 _lastParentPosition
    // Offset: 0x3C
    UnityEngine::Vector3 lastParentPosition;
    // private UnityEngine.Quaternion _lastParentRotation
    // Offset: 0x48
    UnityEngine::Quaternion lastParentRotation;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1FD0DBC
    void Awake();
    // protected System.Void Update()
    // Offset: 0x1FD0E28
    void Update();
    // public System.Void SetEnabled(System.Boolean isEnabled)
    // Offset: 0x1FD0E1C
    void SetEnabled(bool isEnabled);
    // private System.Void UpdatePositionAndRotationIfNeeded()
    // Offset: 0x1FD0E2C
    void UpdatePositionAndRotationIfNeeded();
    // public System.Void .ctor()
    // Offset: 0x1FD1154
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerOffsetPositionByLocalPlayerPosition* New_ctor();
  }; // MultiplayerOffsetPositionByLocalPlayerPosition
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*, "", "MultiplayerOffsetPositionByLocalPlayerPosition");
#pragma pack(pop)