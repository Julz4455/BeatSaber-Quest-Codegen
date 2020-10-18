// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.AutoUnwrapSettings
#include "UnityEngine/ProBuilder/AutoUnwrapSettings.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Face
  class Face : public ::Il2CppObject {
    public:
    // private System.Int32[] m_Indexes
    // Offset: 0x10
    ::Array<int>* m_Indexes;
    // private System.Int32 m_SmoothingGroup
    // Offset: 0x18
    int m_SmoothingGroup;
    // private UnityEngine.ProBuilder.AutoUnwrapSettings m_Uv
    // Offset: 0x1C
    UnityEngine::ProBuilder::AutoUnwrapSettings m_Uv;
    // private UnityEngine.Material m_Material
    // Offset: 0x40
    UnityEngine::Material* m_Material;
    // private System.Int32 m_SubmeshIndex
    // Offset: 0x48
    int m_SubmeshIndex;
    // private System.Boolean m_ManualUV
    // Offset: 0x4C
    bool m_ManualUV;
    // System.Int32 elementGroup
    // Offset: 0x50
    int elementGroup;
    // private System.Int32 m_TextureGroup
    // Offset: 0x54
    int m_TextureGroup;
    // private System.Int32[] m_DistinctIndexes
    // Offset: 0x58
    ::Array<int>* m_DistinctIndexes;
    // private UnityEngine.ProBuilder.Edge[] m_Edges
    // Offset: 0x60
    ::Array<UnityEngine::ProBuilder::Edge>* m_Edges;
    // public System.Boolean get_manualUV()
    // Offset: 0x193AC60
    bool get_manualUV();
    // public System.Void set_manualUV(System.Boolean value)
    // Offset: 0x193AC68
    void set_manualUV(bool value);
    // public System.Int32 get_textureGroup()
    // Offset: 0x193AC74
    int get_textureGroup();
    // public System.Void set_textureGroup(System.Int32 value)
    // Offset: 0x193AC7C
    void set_textureGroup(int value);
    // System.Int32[] get_indexesInternal()
    // Offset: 0x193AC84
    ::Array<int>* get_indexesInternal();
    // System.Void set_indexesInternal(System.Int32[] value)
    // Offset: 0x193AC8C
    void set_indexesInternal(::Array<int>* value);
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> get_indexes()
    // Offset: 0x193ADD0
    System::Collections::ObjectModel::ReadOnlyCollection_1<int>* get_indexes();
    // public System.Void SetIndexes(System.Collections.Generic.IEnumerable`1<System.Int32> indices)
    // Offset: 0x193AE40
    void SetIndexes(System::Collections::Generic::IEnumerable_1<int>* indices);
    // System.Int32[] get_distinctIndexesInternal()
    // Offset: 0x193A5BC
    ::Array<int>* get_distinctIndexesInternal();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32> get_distinctIndexes()
    // Offset: 0x193B008
    System::Collections::ObjectModel::ReadOnlyCollection_1<int>* get_distinctIndexes();
    // UnityEngine.ProBuilder.Edge[] get_edgesInternal()
    // Offset: 0x193AA80
    ::Array<UnityEngine::ProBuilder::Edge>* get_edgesInternal();
    // public System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.ProBuilder.Edge> get_edges()
    // Offset: 0x193B304
    System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::Edge>* get_edges();
    // public System.Int32 get_smoothingGroup()
    // Offset: 0x193B384
    int get_smoothingGroup();
    // public System.Void set_smoothingGroup(System.Int32 value)
    // Offset: 0x193B38C
    void set_smoothingGroup(int value);
    // public UnityEngine.Material get_material()
    // Offset: 0x193B394
    UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0x193B39C
    void set_material(UnityEngine::Material* value);
    // public System.Int32 get_submeshIndex()
    // Offset: 0x193B3A4
    int get_submeshIndex();
    // public System.Void set_submeshIndex(System.Int32 value)
    // Offset: 0x193B3AC
    void set_submeshIndex(int value);
    // public UnityEngine.ProBuilder.AutoUnwrapSettings get_uv()
    // Offset: 0x193B3B4
    UnityEngine::ProBuilder::AutoUnwrapSettings get_uv();
    // public System.Void set_uv(UnityEngine.ProBuilder.AutoUnwrapSettings value)
    // Offset: 0x193B3C4
    void set_uv(UnityEngine::ProBuilder::AutoUnwrapSettings value);
    // public System.Int32 get_Item(System.Int32 i)
    // Offset: 0x193B3D4
    int get_Item(int i);
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Int32> indices)
    // Offset: 0x193B438
    static Face* New_ctor(System::Collections::Generic::IEnumerable_1<int>* indices);
    // System.Void .ctor(System.Int32[] triangles, UnityEngine.Material m, UnityEngine.ProBuilder.AutoUnwrapSettings u, System.Int32 smoothing, System.Int32 texture, System.Int32 element, System.Boolean manualUVs)
    // Offset: 0x193B504
    static Face* New_ctor(::Array<int>* triangles, UnityEngine::Material* m, UnityEngine::ProBuilder::AutoUnwrapSettings u, int smoothing, int texture, int element, bool manualUVs);
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Int32> triangles, System.Int32 submeshIndex, UnityEngine.ProBuilder.AutoUnwrapSettings u, System.Int32 smoothing, System.Int32 texture, System.Int32 element, System.Boolean manualUVs)
    // Offset: 0x193B5C0
    static Face* New_ctor(System::Collections::Generic::IEnumerable_1<int>* triangles, int submeshIndex, UnityEngine::ProBuilder::AutoUnwrapSettings u, int smoothing, int texture, int element, bool manualUVs);
    // public System.Void .ctor(UnityEngine.ProBuilder.Face other)
    // Offset: 0x193B66C
    static Face* New_ctor(UnityEngine::ProBuilder::Face* other);
    // public System.Void CopyFrom(UnityEngine.ProBuilder.Face other)
    // Offset: 0x193B69C
    void CopyFrom(UnityEngine::ProBuilder::Face* other);
    // System.Void InvalidateCache()
    // Offset: 0x193AD9C
    void InvalidateCache();
    // private UnityEngine.ProBuilder.Edge[] CacheEdges()
    // Offset: 0x193B088
    ::Array<UnityEngine::ProBuilder::Edge>* CacheEdges();
    // private System.Int32[] CacheDistinctIndexes()
    // Offset: 0x193AF68
    ::Array<int>* CacheDistinctIndexes();
    // public System.Boolean Contains(System.Int32 a, System.Int32 b, System.Int32 c)
    // Offset: 0x193B804
    bool Contains(int a, int b, int c);
    // public System.Boolean IsQuad()
    // Offset: 0x193B8A4
    bool IsQuad();
    // public System.Int32[] ToQuad()
    // Offset: 0x193B8F8
    ::Array<int>* ToQuad();
    // public System.Void ShiftIndexes(System.Int32 offset)
    // Offset: 0x193BE3C
    void ShiftIndexes(int offset);
    // private System.Int32 SmallestIndexValue()
    // Offset: 0x193BED0
    int SmallestIndexValue();
    // public System.Void ShiftIndexesToZero()
    // Offset: 0x193BF30
    void ShiftIndexesToZero();
    // public System.Void Reverse()
    // Offset: 0x193BFB8
    void Reverse();
    // static System.Void GetIndices(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x193BFFC
    static void GetIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::List_1<int>* indices);
    // static System.Void GetDistinctIndices(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Collections.Generic.List`1<System.Int32> indices)
    // Offset: 0x193C304
    static void GetDistinctIndices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, System::Collections::Generic::List_1<int>* indices);
    // System.Boolean TryGetNextEdge(UnityEngine.ProBuilder.Edge source, System.Int32 index, ref UnityEngine.ProBuilder.Edge nextEdge, ref System.Int32 nextIndex)
    // Offset: 0x193C630
    bool TryGetNextEdge(UnityEngine::ProBuilder::Edge source, int index, UnityEngine::ProBuilder::Edge& nextEdge, int& nextIndex);
    // public System.Void .ctor()
    // Offset: 0x193B410
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Face* New_ctor();
    // public override System.String ToString()
    // Offset: 0x193BC7C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Face
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Face*, "UnityEngine.ProBuilder", "Face");
#pragma pack(pop)
