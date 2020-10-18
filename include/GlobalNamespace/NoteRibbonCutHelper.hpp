// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteRibbonCutHelper
  class NoteRibbonCutHelper : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _jumpPartTransform
    // Offset: 0x18
    UnityEngine::Transform* jumpPartTransform;
    // private System.Single _cutDetectionHalfWidth
    // Offset: 0x20
    float cutDetectionHalfWidth;
    // private System.Single _jumpHeight
    // Offset: 0x24
    float jumpHeight;
    // private System.Single _jumpLength
    // Offset: 0x28
    float jumpLength;
    // private System.Single _ribbonWidth
    // Offset: 0x2C
    float ribbonWidth;
    // private UnityEngine.Plane _plane
    // Offset: 0x30
    UnityEngine::Plane plane;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init(System.Single jumpGravity, System.Single jumpDuration, System.Single jumpLength, System.Single ribbonWidth, System.Single cutDetectionWidth)
    // Offset: 0x10B02C0
    void Init(float jumpGravity, float jumpDuration, float jumpLength, float ribbonWidth, float cutDetectionWidth);
    // public System.Boolean ComputeSplitPointForRay(UnityEngine.Ray ray, System.Single maxSqrDistance, out UnityEngine.Vector2 splitPoint)
    // Offset: 0x10B089C
    bool ComputeSplitPointForRay(UnityEngine::Ray ray, float maxSqrDistance, UnityEngine::Vector2& splitPoint);
    // public System.Void .ctor()
    // Offset: 0x10B11CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteRibbonCutHelper* New_ctor();
  }; // NoteRibbonCutHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteRibbonCutHelper*, "", "NoteRibbonCutHelper");
#pragma pack(pop)
