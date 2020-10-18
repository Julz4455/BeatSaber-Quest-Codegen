// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.DeleteElements
  class DeleteElements : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c
    class $$c;
    // static public System.Void DeleteVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<System.Int32> distinctIndexes)
    // Offset: 0x13F2274
    static void DeleteVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* distinctIndexes);
    // static public System.Int32[] DeleteFace(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x13F26E4
    static ::Array<int>* DeleteFace(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public System.Int32[] DeleteFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x13EA740
    static ::Array<int>* DeleteFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Int32[] DeleteFaces(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<System.Int32> faceIndexes)
    // Offset: 0x13F27A8
    static ::Array<int>* DeleteFaces(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<int>* faceIndexes);
    // static public System.Int32[] RemoveDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x13F2D2C
    static ::Array<int>* RemoveDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Int32[] RemoveUnusedVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x13F2DB8
    static ::Array<int>* RemoveUnusedVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
  }; // UnityEngine.ProBuilder.MeshOperations.DeleteElements
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::DeleteElements*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements");
#pragma pack(pop)
