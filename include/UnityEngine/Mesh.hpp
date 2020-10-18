// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Rendering.VertexAttribute
#include "UnityEngine/Rendering/VertexAttribute.hpp"
// Including type: UnityEngine.Rendering.VertexAttributeFormat
#include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: IndexFormat
  struct IndexFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshTopology
  struct MeshTopology;
  // Forward declaring type: BoneWeight
  struct BoneWeight;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Mesh
  class Mesh : public UnityEngine::Object {
    public:
    // static private System.Void Internal_Create(UnityEngine.Mesh mono)
    // Offset: 0x1B958A4
    static void Internal_Create(UnityEngine::Mesh* mono);
    // public System.Void set_indexFormat(UnityEngine.Rendering.IndexFormat value)
    // Offset: 0x1B9597C
    void set_indexFormat(UnityEngine::Rendering::IndexFormat value);
    // private System.UInt32 GetIndexCountImpl(System.Int32 submesh)
    // Offset: 0x1B959CC
    uint GetIndexCountImpl(int submesh);
    // private System.Int32[] GetTrianglesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1B95A1C
    ::Array<int>* GetTrianglesImpl(int submesh, bool applyBaseVertex);
    // private System.Int32[] GetIndicesImpl(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1B95A74
    ::Array<int>* GetIndicesImpl(int submesh, bool applyBaseVertex);
    // private System.Void SetIndicesImpl(System.Int32 submesh, UnityEngine.MeshTopology topology, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array indices, System.Int32 arrayStart, System.Int32 arraySize, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B95ACC
    void SetIndicesImpl(int submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array* indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex);
    // private System.Void PrintErrorCantAccessChannel(UnityEngine.Rendering.VertexAttribute ch)
    // Offset: 0x1B95B6C
    void PrintErrorCantAccessChannel(UnityEngine::Rendering::VertexAttribute ch);
    // public System.Boolean HasVertexAttribute(UnityEngine.Rendering.VertexAttribute attr)
    // Offset: 0x1B95BBC
    bool HasVertexAttribute(UnityEngine::Rendering::VertexAttribute attr);
    // private System.Void SetArrayForChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 arraySize, System.Int32 valuesStart, System.Int32 valuesCount)
    // Offset: 0x1B95C0C
    void SetArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values, int arraySize, int valuesStart, int valuesCount);
    // private System.Array GetAllocArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
    // Offset: 0x1B95CA4
    System::Array* GetAllocArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim);
    // private System.Void GetArrayFromChannelImpl(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values)
    // Offset: 0x1B95D0C
    void GetArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values);
    // private System.Void SetBoneWeightsImpl(UnityEngine.BoneWeight[] weights)
    // Offset: 0x1B95D7C
    void SetBoneWeightsImpl(::Array<UnityEngine::BoneWeight>* weights);
    // public System.Void set_bindposes(UnityEngine.Matrix4x4[] value)
    // Offset: 0x1B95DCC
    void set_bindposes(::Array<UnityEngine::Matrix4x4>* value);
    // System.Boolean get_canAccess()
    // Offset: 0x1B95E1C
    bool get_canAccess();
    // public System.Int32 get_vertexCount()
    // Offset: 0x1B95E5C
    int get_vertexCount();
    // public System.Int32 get_subMeshCount()
    // Offset: 0x1B95E9C
    int get_subMeshCount();
    // public System.Void set_subMeshCount(System.Int32 value)
    // Offset: 0x1B95EDC
    void set_subMeshCount(int value);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1B95F2C
    UnityEngine::Bounds get_bounds();
    // public System.Void set_bounds(UnityEngine.Bounds value)
    // Offset: 0x1B95FE8
    void set_bounds(UnityEngine::Bounds value);
    // private System.Void ClearImpl(System.Boolean keepVertexLayout)
    // Offset: 0x1B96088
    void ClearImpl(bool keepVertexLayout);
    // private System.Void RecalculateBoundsImpl()
    // Offset: 0x1B960D8
    void RecalculateBoundsImpl();
    // private System.Void MarkDynamicImpl()
    // Offset: 0x1B96118
    void MarkDynamicImpl();
    // private UnityEngine.MeshTopology GetTopologyImpl(System.Int32 submesh)
    // Offset: 0x1B96158
    UnityEngine::MeshTopology GetTopologyImpl(int submesh);
    // UnityEngine.Rendering.VertexAttribute GetUVChannel(System.Int32 uvIndex)
    // Offset: 0x1B961A8
    UnityEngine::Rendering::VertexAttribute GetUVChannel(int uvIndex);
    // static System.Int32 DefaultDimensionForChannel(UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0x1B9623C
    static int DefaultDimensionForChannel(UnityEngine::Rendering::VertexAttribute channel);
    // private T[] GetAllocArrayFromChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetAllocArrayFromChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, format, dim)));
    }
    // private T[] GetAllocArrayFromChannel(UnityEngine.Rendering.VertexAttribute channel)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>(this, "GetAllocArrayFromChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel)));
    }
    // private System.Void SetSizedArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Array values, System.Int32 valuesArrayLength, System.Int32 valuesStart, System.Int32 valuesCount)
    // Offset: 0x1B962F8
    void SetSizedArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Array* values, int valuesArrayLength, int valuesStart, int valuesCount);
    // private System.Void SetArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, T[] values)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, ::Array<T>* values) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetArrayForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, format, dim, values));
    }
    // private System.Void SetArrayForChannel(UnityEngine.Rendering.VertexAttribute channel, T[] values)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, ::Array<T>* values) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetArrayForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, values));
    }
    // private System.Void SetListForChannel(UnityEngine.Rendering.VertexAttribute channel, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dim, System.Collections.Generic.List`1<T> values, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int dim, System::Collections::Generic::List_1<T>* values, int start, int length) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, format, dim, values, start, length));
    }
    // private System.Void SetListForChannel(UnityEngine.Rendering.VertexAttribute channel, System.Collections.Generic.List`1<T> values, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, System::Collections::Generic::List_1<T>* values, int start, int length) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, channel, values, start, length));
    }
    // private System.Void GetListForChannel(System.Collections.Generic.List`1<T> buffer, System.Int32 capacity, UnityEngine.Rendering.VertexAttribute channel, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetListForChannel(System::Collections::Generic::List_1<T>* buffer, int capacity, UnityEngine::Rendering::VertexAttribute channel, int dim) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, buffer, capacity, channel, dim));
    }
    // private System.Void GetListForChannel(System.Collections.Generic.List`1<T> buffer, System.Int32 capacity, UnityEngine.Rendering.VertexAttribute channel, System.Int32 dim, UnityEngine.Rendering.VertexAttributeFormat channelType)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetListForChannel(System::Collections::Generic::List_1<T>* buffer, int capacity, UnityEngine::Rendering::VertexAttribute channel, int dim, UnityEngine::Rendering::VertexAttributeFormat channelType) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetListForChannel", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, buffer, capacity, channel, dim, channelType));
    }
    // public UnityEngine.Vector3[] get_vertices()
    // Offset: 0x1B96584
    ::Array<UnityEngine::Vector3>* get_vertices();
    // public System.Void set_vertices(UnityEngine.Vector3[] value)
    // Offset: 0x1B965D8
    void set_vertices(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Vector3[] get_normals()
    // Offset: 0x1B9663C
    ::Array<UnityEngine::Vector3>* get_normals();
    // public System.Void set_normals(UnityEngine.Vector3[] value)
    // Offset: 0x1B96690
    void set_normals(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Vector4[] get_tangents()
    // Offset: 0x1B966F4
    ::Array<UnityEngine::Vector4>* get_tangents();
    // public System.Void set_tangents(UnityEngine.Vector4[] value)
    // Offset: 0x1B96748
    void set_tangents(::Array<UnityEngine::Vector4>* value);
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0x1B967AC
    ::Array<UnityEngine::Vector2>* get_uv();
    // public System.Void set_uv(UnityEngine.Vector2[] value)
    // Offset: 0x1B96800
    void set_uv(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv2()
    // Offset: 0x1B96864
    ::Array<UnityEngine::Vector2>* get_uv2();
    // public System.Void set_uv2(UnityEngine.Vector2[] value)
    // Offset: 0x1B968B8
    void set_uv2(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv3()
    // Offset: 0x1B9691C
    ::Array<UnityEngine::Vector2>* get_uv3();
    // public System.Void set_uv3(UnityEngine.Vector2[] value)
    // Offset: 0x1B96970
    void set_uv3(::Array<UnityEngine::Vector2>* value);
    // public UnityEngine.Vector2[] get_uv4()
    // Offset: 0x1B969D4
    ::Array<UnityEngine::Vector2>* get_uv4();
    // public UnityEngine.Color[] get_colors()
    // Offset: 0x1B96A28
    ::Array<UnityEngine::Color>* get_colors();
    // public System.Void set_colors(UnityEngine.Color[] value)
    // Offset: 0x1B96A7C
    void set_colors(::Array<UnityEngine::Color>* value);
    // public UnityEngine.Color32[] get_colors32()
    // Offset: 0x1B96AE0
    ::Array<UnityEngine::Color32>* get_colors32();
    // public System.Void set_colors32(UnityEngine.Color32[] value)
    // Offset: 0x1B96B3C
    void set_colors32(::Array<UnityEngine::Color32>* value);
    // public System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices)
    // Offset: 0x1B96BA8
    void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3>* inVertices);
    // public System.Void SetVertices(System.Collections.Generic.List`1<UnityEngine.Vector3> inVertices, System.Int32 start, System.Int32 length)
    // Offset: 0x1B96C18
    void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3>* inVertices, int start, int length);
    // public System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals)
    // Offset: 0x1B96C94
    void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3>* inNormals);
    // public System.Void SetNormals(System.Collections.Generic.List`1<UnityEngine.Vector3> inNormals, System.Int32 start, System.Int32 length)
    // Offset: 0x1B96D04
    void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3>* inNormals, int start, int length);
    // public System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents)
    // Offset: 0x1B96D80
    void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4>* inTangents);
    // public System.Void SetTangents(System.Collections.Generic.List`1<UnityEngine.Vector4> inTangents, System.Int32 start, System.Int32 length)
    // Offset: 0x1B96DF0
    void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4>* inTangents, int start, int length);
    // public System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors)
    // Offset: 0x1B96E6C
    void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32>* inColors);
    // public System.Void SetColors(System.Collections.Generic.List`1<UnityEngine.Color32> inColors, System.Int32 start, System.Int32 length)
    // Offset: 0x1B96EDC
    void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32>* inColors, int start, int length);
    // private System.Void SetUvsImpl(System.Int32 uvIndex, System.Int32 dim, System.Collections.Generic.List`1<T> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    void SetUvsImpl(int uvIndex, int dim, System::Collections::Generic::List_1<T>* uvs, int start, int length) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SetUvsImpl", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, uvIndex, dim, uvs, start, length));
    }
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs)
    // Offset: 0x1B96F60
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector2>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector3> uvs)
    // Offset: 0x1B9705C
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector3>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
    // Offset: 0x1B97158
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector2> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x1B96FD8
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector2>* uvs, int start, int length);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector3> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x1B970D4
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector3>* uvs, int start, int length);
    // public System.Void SetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs, System.Int32 start, System.Int32 length)
    // Offset: 0x1B971D0
    void SetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs, int start, int length);
    // private System.Void GetUVsImpl(System.Int32 uvIndex, System.Collections.Generic.List`1<T> uvs, System.Int32 dim)
    // Offset: 0xFFFFFFFF
    template<class T>
    void GetUVsImpl(int uvIndex, System::Collections::Generic::List_1<T>* uvs, int dim) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "GetUVsImpl", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, uvIndex, uvs, dim));
    }
    // public System.Void GetUVs(System.Int32 channel, System.Collections.Generic.List`1<UnityEngine.Vector4> uvs)
    // Offset: 0x1B97254
    void GetUVs(int channel, System::Collections::Generic::List_1<UnityEngine::Vector4>* uvs);
    // private System.Void PrintErrorCantAccessIndices()
    // Offset: 0x1B972C0
    void PrintErrorCantAccessIndices();
    // private System.Boolean CheckCanAccessSubmesh(System.Int32 submesh, System.Boolean errorAboutTriangles)
    // Offset: 0x1B973D8
    bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles);
    // private System.Boolean CheckCanAccessSubmeshTriangles(System.Int32 submesh)
    // Offset: 0x1B97508
    bool CheckCanAccessSubmeshTriangles(int submesh);
    // private System.Boolean CheckCanAccessSubmeshIndices(System.Int32 submesh)
    // Offset: 0x1B97510
    bool CheckCanAccessSubmeshIndices(int submesh);
    // public System.Int32[] get_triangles()
    // Offset: 0x1B97518
    ::Array<int>* get_triangles();
    // public System.Void set_triangles(System.Int32[] value)
    // Offset: 0x1B975D4
    void set_triangles(::Array<int>* value);
    // public System.Int32[] GetTriangles(System.Int32 submesh)
    // Offset: 0x1B97758
    ::Array<int>* GetTriangles(int submesh);
    // public System.Int32[] GetTriangles(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1B97760
    ::Array<int>* GetTriangles(int submesh, bool applyBaseVertex);
    // public System.Int32[] GetIndices(System.Int32 submesh)
    // Offset: 0x1B97810
    ::Array<int>* GetIndices(int submesh);
    // public System.Int32[] GetIndices(System.Int32 submesh, System.Boolean applyBaseVertex)
    // Offset: 0x1B97818
    ::Array<int>* GetIndices(int submesh, bool applyBaseVertex);
    // public System.UInt32 GetIndexCount(System.Int32 submesh)
    // Offset: 0x1B978C8
    uint GetIndexCount(int submesh);
    // private System.Void CheckIndicesArrayRange(System.Int32 valuesLength, System.Int32 start, System.Int32 length)
    // Offset: 0x1B979AC
    void CheckIndicesArrayRange(int valuesLength, int start, int length);
    // private System.Void SetTrianglesImpl(System.Int32 submesh, UnityEngine.Rendering.IndexFormat indicesFormat, System.Array triangles, System.Int32 trianglesArrayLength, System.Int32 start, System.Int32 length, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B976AC
    void SetTrianglesImpl(int submesh, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array* triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh)
    // Offset: 0x1B97B5C
    void SetTriangles(::Array<int>* triangles, int submesh);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B97B68
    void SetTriangles(::Array<int>* triangles, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Int32[] triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B97BD8
    void SetTriangles(::Array<int>* triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh)
    // Offset: 0x1B97C7C
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int submesh);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B97C88
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetTriangles(System.Collections.Generic.List`1<System.Int32> triangles, System.Int32 trianglesStart, System.Int32 trianglesLength, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B97D18
    void SetTriangles(System::Collections::Generic::List_1<int>* triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh)
    // Offset: 0x1B97E4C
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds)
    // Offset: 0x1B97EDC
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds);
    // public System.Void SetIndices(System.Int32[] indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B97E58
    void SetIndices(::Array<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Int32[] indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B97EE8
    void SetIndices(::Array<int>* indices, int indicesStart, int indicesLength, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B97FD8
    void SetIndices(System::Collections::Generic::List_1<int>* indices, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void SetIndices(System.Collections.Generic.List`1<System.Int32> indices, System.Int32 indicesStart, System.Int32 indicesLength, UnityEngine.MeshTopology topology, System.Int32 submesh, System.Boolean calculateBounds, System.Int32 baseVertex)
    // Offset: 0x1B98084
    void SetIndices(System::Collections::Generic::List_1<int>* indices, int indicesStart, int indicesLength, UnityEngine::MeshTopology topology, int submesh, bool calculateBounds, int baseVertex);
    // public System.Void set_boneWeights(UnityEngine.BoneWeight[] value)
    // Offset: 0x1B981C4
    void set_boneWeights(::Array<UnityEngine::BoneWeight>* value);
    // public System.Void Clear()
    // Offset: 0x1B98214
    void Clear();
    // public System.Void RecalculateBounds()
    // Offset: 0x1B98258
    void RecalculateBounds();
    // public System.Void MarkDynamic()
    // Offset: 0x1B98348
    void MarkDynamic();
    // public UnityEngine.MeshTopology GetTopology(System.Int32 submesh)
    // Offset: 0x1B983C0
    UnityEngine::MeshTopology GetTopology(int submesh);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x1B95F98
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void set_bounds_Injected(ref UnityEngine.Bounds value)
    // Offset: 0x1B96038
    void set_bounds_Injected(UnityEngine::Bounds& value);
    // public System.Void .ctor()
    // Offset: 0x1B958E4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Mesh* New_ctor();
  }; // UnityEngine.Mesh
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mesh*, "UnityEngine", "Mesh");
#pragma pack(pop)
