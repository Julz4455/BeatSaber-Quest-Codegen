// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Gradient
  class Gradient;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xE8
  // Autogenerated type: CloudsMeshGenerator
  // [] Offset: FFFFFFFF
  class CloudsMeshGenerator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::CloudsMeshGenerator::Cloud
    struct Cloud;
    // Nested type: GlobalNamespace::CloudsMeshGenerator::Ring
    struct Ring;
    // Nested type: GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius
    struct ProhibitedRadius;
    // Nested type: GlobalNamespace::CloudsMeshGenerator::RadiusChunk
    struct RadiusChunk;
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshFilter*) == 0x8);
    // private System.String _meshName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* meshName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [HeaderAttribute] Offset: 0xDC0454
    // private System.Boolean _pauseGenerator
    // Size: 0x1
    // Offset: 0x28
    bool pauseGenerator;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [HeaderAttribute] Offset: 0xDC04A0
    // private System.Boolean _bottomPushEnabled
    // Size: 0x1
    // Offset: 0x29
    bool bottomPushEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bottomPushEnabled and: bottomPushDistance
    char __padding3[0x2] = {};
    // [DrawIfAttribute] Offset: 0xDC04EC
    // private System.Single _bottomPushDistance
    // Size: 0x4
    // Offset: 0x2C
    float bottomPushDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xDC0594
    // private UnityEngine.Vector2 _bottomScaleTopBottom
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Vector2 bottomScaleTopBottom;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [DrawIfAttribute] Offset: 0xDC063C
    // private System.Single _bottomHorizontalScale
    // Size: 0x4
    // Offset: 0x38
    float bottomHorizontalScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xDC06E4
    // private System.Boolean _drawRingGizmos
    // Size: 0x1
    // Offset: 0x3C
    bool drawRingGizmos;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: drawRingGizmos and: prohibitedRadii
    char __padding7[0x3] = {};
    // private CloudsMeshGenerator/ProhibitedRadius[] _prohibitedRadii
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>* prohibitedRadii;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>*) == 0x8);
    // [HeaderAttribute] Offset: 0xDC0740
    // private UnityEngine.Vector2 _meshSize
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Vector2 meshSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [RangeAttribute] Offset: 0xDC078C
    // private System.Single _sizeRandomness
    // Size: 0x4
    // Offset: 0x50
    float sizeRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDC07CC
    // private System.Single _ratioRandomness
    // Size: 0x4
    // Offset: 0x54
    float ratioRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xDC080C
    // [TooltipAttribute] Offset: 0xDC080C
    // [RangeAttribute] Offset: 0xDC080C
    // private System.Single _perMeshRadiusOffset
    // Size: 0x4
    // Offset: 0x58
    float perMeshRadiusOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: perMeshRadiusOffset and: possibleColors
    char __padding12[0x4] = {};
    // private UnityEngine.Gradient _possibleColors
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Gradient* possibleColors;
    // Field size check
    static_assert(sizeof(UnityEngine::Gradient*) == 0x8);
    // [RangeAttribute] Offset: 0xDC08AC
    // private System.Int32 _randomSeed
    // Size: 0x4
    // Offset: 0x68
    int randomSeed;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _heightRandomness
    // Size: 0x4
    // Offset: 0x6C
    float heightRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _ringRotationRandomness
    // Size: 0x4
    // Offset: 0x70
    float ringRotationRandomness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0xDC0910
    // private System.Int32 _ringCount
    // Size: 0x4
    // Offset: 0x74
    int ringCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _meshesPerRadius
    // Size: 0x4
    // Offset: 0x78
    float meshesPerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xDC095C
    // private UnityEngine.Vector2 _radiusCloseFar
    // Size: 0x8
    // Offset: 0x7C
    UnityEngine::Vector2 radiusCloseFar;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _sizeCloseFar
    // Size: 0x8
    // Offset: 0x84
    UnityEngine::Vector2 sizeCloseFar;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // Padding between fields: sizeCloseFar and: heightCloseFar
    char __padding20[0x4] = {};
    // private UnityEngine.AnimationCurve _heightCloseFar
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::AnimationCurve* heightCloseFar;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _lowPolyThreshold
    // Size: 0x4
    // Offset: 0x98
    float lowPolyThreshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [HeaderAttribute] Offset: 0xDC09D8
    // private System.Boolean _flipNormals
    // Size: 0x1
    // Offset: 0x9C
    bool flipNormals;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _curveMesh
    // Size: 0x1
    // Offset: 0x9D
    bool curveMesh;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: curveMesh and: clouds
    char __padding24[0x2] = {};
    // private CloudsMeshGenerator/Cloud[] _clouds
    // Size: 0x8
    // Offset: 0xA0
    ::Array<GlobalNamespace::CloudsMeshGenerator::Cloud>* clouds;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CloudsMeshGenerator::Cloud>*) == 0x8);
    // [HeaderAttribute] Offset: 0xDC0A44
    // private System.Int32 _meshCount
    // Size: 0x4
    // Offset: 0xA8
    int meshCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _vertexCount
    // Size: 0x4
    // Offset: 0xAC
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Mesh _generatedMesh
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Mesh* generatedMesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // private UnityEngine.Bounds _meshBounds
    // Size: 0x18
    // Offset: 0xB8
    UnityEngine::Bounds meshBounds;
    // Field size check
    static_assert(sizeof(UnityEngine::Bounds) == 0x18);
    // private CloudsMeshGenerator/RadiusChunk[] _radiusChunks
    // Size: 0x8
    // Offset: 0xD0
    ::Array<GlobalNamespace::CloudsMeshGenerator::RadiusChunk>* radiusChunks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CloudsMeshGenerator::RadiusChunk>*) == 0x8);
    // private CloudsMeshGenerator/Ring[] _rings
    // Size: 0x8
    // Offset: 0xD8
    ::Array<GlobalNamespace::CloudsMeshGenerator::Ring>* rings;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CloudsMeshGenerator::Ring>*) == 0x8);
    // private CloudsMeshGenerator/ProhibitedRadius[] _sortedProhibitedRadii
    // Size: 0x8
    // Offset: 0xE0
    ::Array<GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>* sortedProhibitedRadii;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>*) == 0x8);
    // Creating value type constructor for type: CloudsMeshGenerator
    CloudsMeshGenerator(UnityEngine::MeshFilter* meshFilter_ = {}, ::Il2CppString* meshName_ = {}, bool pauseGenerator_ = {}, bool bottomPushEnabled_ = {}, float bottomPushDistance_ = {}, UnityEngine::Vector2 bottomScaleTopBottom_ = {}, float bottomHorizontalScale_ = {}, bool drawRingGizmos_ = {}, ::Array<GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>* prohibitedRadii_ = {}, UnityEngine::Vector2 meshSize_ = {}, float sizeRandomness_ = {}, float ratioRandomness_ = {}, float perMeshRadiusOffset_ = {}, UnityEngine::Gradient* possibleColors_ = {}, int randomSeed_ = {}, float heightRandomness_ = {}, float ringRotationRandomness_ = {}, int ringCount_ = {}, float meshesPerRadius_ = {}, UnityEngine::Vector2 radiusCloseFar_ = {}, UnityEngine::Vector2 sizeCloseFar_ = {}, UnityEngine::AnimationCurve* heightCloseFar_ = {}, float lowPolyThreshold_ = {}, bool flipNormals_ = {}, bool curveMesh_ = {}, ::Array<GlobalNamespace::CloudsMeshGenerator::Cloud>* clouds_ = {}, int meshCount_ = {}, int vertexCount_ = {}, UnityEngine::Mesh* generatedMesh_ = {}, UnityEngine::Bounds meshBounds_ = {}, ::Array<GlobalNamespace::CloudsMeshGenerator::RadiusChunk>* radiusChunks_ = {}, ::Array<GlobalNamespace::CloudsMeshGenerator::Ring>* rings_ = {}, ::Array<GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>* sortedProhibitedRadii_ = {}) noexcept : meshFilter{meshFilter_}, meshName{meshName_}, pauseGenerator{pauseGenerator_}, bottomPushEnabled{bottomPushEnabled_}, bottomPushDistance{bottomPushDistance_}, bottomScaleTopBottom{bottomScaleTopBottom_}, bottomHorizontalScale{bottomHorizontalScale_}, drawRingGizmos{drawRingGizmos_}, prohibitedRadii{prohibitedRadii_}, meshSize{meshSize_}, sizeRandomness{sizeRandomness_}, ratioRandomness{ratioRandomness_}, perMeshRadiusOffset{perMeshRadiusOffset_}, possibleColors{possibleColors_}, randomSeed{randomSeed_}, heightRandomness{heightRandomness_}, ringRotationRandomness{ringRotationRandomness_}, ringCount{ringCount_}, meshesPerRadius{meshesPerRadius_}, radiusCloseFar{radiusCloseFar_}, sizeCloseFar{sizeCloseFar_}, heightCloseFar{heightCloseFar_}, lowPolyThreshold{lowPolyThreshold_}, flipNormals{flipNormals_}, curveMesh{curveMesh_}, clouds{clouds_}, meshCount{meshCount_}, vertexCount{vertexCount_}, generatedMesh{generatedMesh_}, meshBounds{meshBounds_}, radiusChunks{radiusChunks_}, rings{rings_}, sortedProhibitedRadii{sortedProhibitedRadii_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1A4F240
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CloudsMeshGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("CloudsMeshGenerator").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CloudsMeshGenerator*, creationType>()));
    }
  }; // CloudsMeshGenerator
  static check_size<sizeof(CloudsMeshGenerator), 224 + sizeof(::Array<GlobalNamespace::CloudsMeshGenerator::ProhibitedRadius>*)> __GlobalNamespace_CloudsMeshGeneratorSizeCheck;
  static_assert(sizeof(CloudsMeshGenerator) == 0xE8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CloudsMeshGenerator*, "", "CloudsMeshGenerator");
#pragma pack(pop)
