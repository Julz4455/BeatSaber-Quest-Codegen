// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology
#include "UnityEngine/ProBuilder/MeshOperations/SurfaceTopology.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Vertex
  class Vertex;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c
  class SurfaceTopology::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__0_0
    static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* _get_$$9__0_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__0_0
    static void _set_$$9__0_0(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__3_0
    static System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Vertex,UnityEngine.Vector3> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::ProBuilder::Vertex*, UnityEngine::Vector3>* value);
    // static private System.Void .cctor()
    // Offset: 0x15795D8
    static void _cctor();
    // UnityEngine.ProBuilder.Face <ToTriangles>b__0_0(UnityEngine.ProBuilder.FaceRebuildData x)
    // Offset: 0x1579648
    UnityEngine::ProBuilder::Face* $ToTriangles$b__0_0(UnityEngine::ProBuilder::FaceRebuildData* x);
    // UnityEngine.Vector3 <GetWindingOrder>b__3_0(UnityEngine.ProBuilder.Vertex x)
    // Offset: 0x1579660
    UnityEngine::Vector3 $GetWindingOrder$b__3_0(UnityEngine::ProBuilder::Vertex* x);
    // public System.Void .ctor()
    // Offset: 0x1579640
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SurfaceTopology::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.SurfaceTopology/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::SurfaceTopology::$$c*, "UnityEngine.ProBuilder.MeshOperations", "SurfaceTopology/<>c");
#pragma pack(pop)
