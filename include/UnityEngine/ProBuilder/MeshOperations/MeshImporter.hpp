// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.EdgeLookup
#include "UnityEngine/ProBuilder/EdgeLookup.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: MeshImportSettings
  class MeshImportSettings;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshImporter
  class MeshImporter : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::MeshOperations::MeshImporter::$$c
    class $$c;
    // private UnityEngine.Mesh m_SourceMesh
    // Offset: 0x10
    UnityEngine::Mesh* m_SourceMesh;
    // private UnityEngine.Material[] m_SourceMaterials
    // Offset: 0x18
    ::Array<UnityEngine::Material*>* m_SourceMaterials;
    // private UnityEngine.ProBuilder.ProBuilderMesh m_Destination
    // Offset: 0x20
    UnityEngine::ProBuilder::ProBuilderMesh* m_Destination;
    // private UnityEngine.ProBuilder.Vertex[] m_Vertices
    // Offset: 0x28
    ::Array<UnityEngine::ProBuilder::Vertex*>* m_Vertices;
    // Get static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* _get_k_DefaultImportSettings();
    // Set static field: static private readonly UnityEngine.ProBuilder.MeshOperations.MeshImportSettings k_DefaultImportSettings
    static void _set_k_DefaultImportSettings(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* value);
    // public System.Void .ctor(UnityEngine.GameObject gameObject)
    // Offset: 0x1572EFC
    static MeshImporter* New_ctor(UnityEngine::GameObject* gameObject);
    // public System.Void .ctor(UnityEngine.Mesh sourceMesh, UnityEngine.Material[] sourceMaterials, UnityEngine.ProBuilder.ProBuilderMesh destination)
    // Offset: 0x1573060
    static MeshImporter* New_ctor(UnityEngine::Mesh* sourceMesh, ::Array<UnityEngine::Material*>* sourceMaterials, UnityEngine::ProBuilder::ProBuilderMesh* destination);
    // public System.Void .ctor(UnityEngine.ProBuilder.ProBuilderMesh destination)
    // Offset: 0x15731AC
    static MeshImporter* New_ctor(UnityEngine::ProBuilder::ProBuilderMesh* destination);
    // public System.Boolean Import(UnityEngine.GameObject go, UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x15731E0
    bool Import(UnityEngine::GameObject* go, UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // public System.Void Import(UnityEngine.ProBuilder.MeshOperations.MeshImportSettings importSettings)
    // Offset: 0x157338C
    void Import(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings);
    // static private UnityEngine.ProBuilder.Face GetBestQuadConnection(UnityEngine.ProBuilder.WingedEdge wing, System.Collections.Generic.Dictionary`2<UnityEngine.ProBuilder.EdgeLookup,System.Single> connections)
    // Offset: 0x1574DA4
    static UnityEngine::ProBuilder::Face* GetBestQuadConnection(UnityEngine::ProBuilder::WingedEdge* wing, System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::EdgeLookup, float>* connections);
    // private System.Single GetQuadScore(UnityEngine.ProBuilder.WingedEdge left, UnityEngine.ProBuilder.WingedEdge right, System.Single normalThreshold)
    // Offset: 0x1574814
    float GetQuadScore(UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right, float normalThreshold);
    // static private System.Void .cctor()
    // Offset: 0x1574F94
    static void _cctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshImporter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshImporter*, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
#pragma pack(pop)
