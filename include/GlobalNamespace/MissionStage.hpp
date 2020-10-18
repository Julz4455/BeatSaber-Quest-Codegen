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
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionStage
  class MissionStage : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _minimumMissionsToUnlock
    // Offset: 0x18
    int minimumMissionsToUnlock;
    // private UnityEngine.RectTransform _rectTransform
    // Offset: 0x20
    UnityEngine::RectTransform* rectTransform;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Int32 get_minimumMissionsToUnlock()
    // Offset: 0xFBED94
    int get_minimumMissionsToUnlock();
    // public UnityEngine.Vector2 get_position()
    // Offset: 0xFBED9C
    UnityEngine::Vector2 get_position();
    // public System.Void .ctor()
    // Offset: 0xFBEE3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionStage* New_ctor();
  }; // MissionStage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionStage*, "", "MissionStage");
#pragma pack(pop)
