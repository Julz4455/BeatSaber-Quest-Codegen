// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Triangle
#include "UnityEngine/ProBuilder/Triangle.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
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
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class MeshValidation : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c
    class $$c;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Creating value type constructor for type: MeshValidation
    MeshValidation() noexcept {}
    // static public System.Boolean ContainsDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x138D5A8
    static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static public System.Boolean ContainsDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x138D5C0
    static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face*>* faces);
    // static public System.Boolean ContainsDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x138DA20
    static bool ContainsDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public System.Boolean ContainsNonContiguousTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x138DBA8
    static bool ContainsNonContiguousTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Face> EnsureFacesAreComposedOfContiguousTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0x138DCF8
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* EnsureFacesAreComposedOfContiguousTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.ProBuilder.Triangle>> CollectFaceGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0x138E2A4
    static System::Collections::Generic::List_1<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static public System.Boolean RemoveDegenerateTriangles(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x138E53C
    static bool RemoveDegenerateTriangles(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<int>* removed);
    // static public System.Boolean RemoveUnusedVertices(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x138A728
    static bool RemoveUnusedVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::List_1<int>* removed);
    // static System.Collections.Generic.List`1<System.Int32> RebuildIndexes(System.Collections.Generic.IEnumerable`1<System.Int32> indices, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x138ECE0
    static System::Collections::Generic::List_1<int>* RebuildIndexes(System::Collections::Generic::IEnumerable_1<int>* indices, System::Collections::Generic::List_1<int>* removed);
    // static System.Collections.Generic.List`1<UnityEngine.ProBuilder.Edge> RebuildEdges(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges, System.Collections.Generic.List`1<System.Int32> removed)
    // Offset: 0x138F004
    static System::Collections::Generic::List_1<UnityEngine::ProBuilder::Edge>* RebuildEdges(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, System::Collections::Generic::List_1<int>* removed);
    // static System.Void RebuildSelectionIndexes(UnityEngine.ProBuilder.ProBuilderMesh mesh, ref UnityEngine.ProBuilder.Face[] faces, ref UnityEngine.ProBuilder.Edge[] edges, ref System.Int32[] indices, System.Collections.Generic.IEnumerable`1<System.Int32> removed)
    // Offset: 0x138F3AC
    static void RebuildSelectionIndexes(UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Array<UnityEngine::ProBuilder::Face*>*& faces, ::Array<UnityEngine::ProBuilder::Edge>*& edges, ::Array<int>*& indices, System::Collections::Generic::IEnumerable_1<int>* removed);
    // static System.Boolean EnsureMeshIsValid(UnityEngine.ProBuilder.ProBuilderMesh mesh, out System.Int32 removedVertices)
    // Offset: 0x138F584
    static bool EnsureMeshIsValid(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int& removedVertices);
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation");
#pragma pack(pop)
