// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Mesh
  class Mesh;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrailElementCollection
  class TrailElementCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberTrailRenderer
  class SaberTrailRenderer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x18
    UnityEngine::MeshRenderer* meshRenderer;
    // private UnityEngine.MeshFilter _meshFilter
    // Offset: 0x20
    UnityEngine::MeshFilter* meshFilter;
    // private UnityEngine.Mesh _mesh
    // Offset: 0x28
    UnityEngine::Mesh* mesh;
    // private UnityEngine.Vector3[] _vertices
    // Offset: 0x30
    ::Array<UnityEngine::Vector3>* vertices;
    // private System.Int32[] _indices
    // Offset: 0x38
    ::Array<int>* indices;
    // private UnityEngine.Vector2[] _uvs
    // Offset: 0x40
    ::Array<UnityEngine::Vector2>* uvs;
    // private UnityEngine.Color[] _colors
    // Offset: 0x48
    ::Array<UnityEngine::Color>* colors;
    // private System.Single _trailWidth
    // Offset: 0x50
    float trailWidth;
    // private System.Single _trailDuration
    // Offset: 0x54
    float trailDuration;
    // private System.Int32 _granularity
    // Offset: 0x58
    int granularity;
    // private System.Single _whiteSectionMaxDuration
    // Offset: 0x5C
    float whiteSectionMaxDuration;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private readonly UnityEngine.Bounds _bounds
    static UnityEngine::Bounds _get__bounds();
    // Set static field: static private readonly UnityEngine.Bounds _bounds
    static void _set__bounds(UnityEngine::Bounds value);
    // public System.Void Init(System.Single trailWidth, System.Single trailDuration, System.Int32 granularity, System.Single whiteSectionMaxDuration)
    // Offset: 0x207A29C
    void Init(float trailWidth, float trailDuration, int granularity, float whiteSectionMaxDuration);
    // protected System.Void OnDestroy()
    // Offset: 0x207A5F8
    void OnDestroy();
    // private System.Void OnValidate()
    // Offset: 0x207A604
    void OnValidate();
    // protected System.Void OnEnable()
    // Offset: 0x207A710
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x207A7A4
    void OnDisable();
    // public System.Void SetTrailWidth(System.Single width)
    // Offset: 0x207A838
    void SetTrailWidth(float width);
    // public System.Void UpdateMesh(TrailElementCollection trailElementCollection, UnityEngine.Color color)
    // Offset: 0x2079D20
    void UpdateMesh(GlobalNamespace::TrailElementCollection* trailElementCollection, UnityEngine::Color color);
    // protected System.Void UpdateVertices(TrailElementCollection trailElementCollection, UnityEngine.Color color)
    // Offset: 0x207A840
    void UpdateVertices(GlobalNamespace::TrailElementCollection* trailElementCollection, UnityEngine::Color color);
    // private System.Void UpdateIndices()
    // Offset: 0x207A410
    void UpdateIndices();
    // public System.Void .ctor()
    // Offset: 0x207AC5C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberTrailRenderer* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x207AC64
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SaberTrailRenderer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTrailRenderer*, "", "SaberTrailRenderer");
#pragma pack(pop)