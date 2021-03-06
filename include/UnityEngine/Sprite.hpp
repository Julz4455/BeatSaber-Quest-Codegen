// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: SpriteMeshType
  struct SpriteMeshType;
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: SpritePackingMode
  struct SpritePackingMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Sprite
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBFB7C
  // [NativeHeaderAttribute] Offset: CBFB7C
  // [NativeHeaderAttribute] Offset: CBFB7C
  // [ExcludeFromPresetAttribute] Offset: CBFB7C
  // [NativeTypeAttribute] Offset: CBFB7C
  class Sprite : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: Sprite
    Sprite() noexcept {}
    // System.Int32 GetPackingMode()
    // Offset: 0x1AB30DC
    int GetPackingMode();
    // System.Int32 GetPacked()
    // Offset: 0x1AB311C
    int GetPacked();
    // UnityEngine.Rect GetTextureRect()
    // Offset: 0x1AB315C
    UnityEngine::Rect GetTextureRect();
    // UnityEngine.Vector4 GetInnerUVs()
    // Offset: 0x1AB3208
    UnityEngine::Vector4 GetInnerUVs();
    // UnityEngine.Vector4 GetOuterUVs()
    // Offset: 0x1AB32B4
    UnityEngine::Vector4 GetOuterUVs();
    // UnityEngine.Vector4 GetPadding()
    // Offset: 0x1AB3360
    UnityEngine::Vector4 GetPadding();
    // static UnityEngine.Sprite CreateSprite(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1AB340C
    static UnityEngine::Sprite* CreateSprite(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1AB3548
    UnityEngine::Bounds get_bounds();
    // public UnityEngine.Rect get_rect()
    // Offset: 0x1AB3604
    UnityEngine::Rect get_rect();
    // public UnityEngine.Vector4 get_border()
    // Offset: 0x1AB36B0
    UnityEngine::Vector4 get_border();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x1AB375C
    UnityEngine::Texture2D* get_texture();
    // public System.Single get_pixelsPerUnit()
    // Offset: 0x1AB379C
    float get_pixelsPerUnit();
    // public UnityEngine.Texture2D get_associatedAlphaSplitTexture()
    // Offset: 0x1AB37DC
    UnityEngine::Texture2D* get_associatedAlphaSplitTexture();
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0x1AB381C
    UnityEngine::Vector2 get_pivot();
    // public System.Boolean get_packed()
    // Offset: 0x1AB38C4
    bool get_packed();
    // public UnityEngine.SpritePackingMode get_packingMode()
    // Offset: 0x1AB3910
    UnityEngine::SpritePackingMode get_packingMode();
    // public UnityEngine.Rect get_textureRect()
    // Offset: 0x1AB3950
    UnityEngine::Rect get_textureRect();
    // public UnityEngine.Vector2[] get_vertices()
    // Offset: 0x1AB39E0
    ::Array<UnityEngine::Vector2>* get_vertices();
    // public System.UInt16[] get_triangles()
    // Offset: 0x1AB3A20
    ::Array<uint16_t>* get_triangles();
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0x1AB3A60
    ::Array<UnityEngine::Vector2>* get_uv();
    // static public UnityEngine.Sprite Create(UnityEngine.Texture2D texture, UnityEngine.Rect rect, UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1AB3AA0
    static UnityEngine::Sprite* Create(UnityEngine::Texture2D* texture, UnityEngine::Rect rect, UnityEngine::Vector2 pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4 border, bool generateFallbackPhysicsShape);
    // private System.Void GetTextureRect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1AB31B8
    void GetTextureRect_Injected(UnityEngine::Rect& ret);
    // private System.Void GetInnerUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1AB3264
    void GetInnerUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetOuterUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1AB3310
    void GetOuterUVs_Injected(UnityEngine::Vector4& ret);
    // private System.Void GetPadding_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1AB33BC
    void GetPadding_Injected(UnityEngine::Vector4& ret);
    // static private UnityEngine.Sprite CreateSprite_Injected(UnityEngine.Texture2D texture, ref UnityEngine.Rect rect, ref UnityEngine.Vector2 pivot, System.Single pixelsPerUnit, System.UInt32 extrude, UnityEngine.SpriteMeshType meshType, ref UnityEngine.Vector4 border, System.Boolean generateFallbackPhysicsShape)
    // Offset: 0x1AB34B0
    static UnityEngine::Sprite* CreateSprite_Injected(UnityEngine::Texture2D* texture, UnityEngine::Rect& rect, UnityEngine::Vector2& pivot, float pixelsPerUnit, uint extrude, UnityEngine::SpriteMeshType meshType, UnityEngine::Vector4& border, bool generateFallbackPhysicsShape);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x1AB35B4
    void get_bounds_Injected(UnityEngine::Bounds& ret);
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1AB3660
    void get_rect_Injected(UnityEngine::Rect& ret);
    // private System.Void get_border_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0x1AB370C
    void get_border_Injected(UnityEngine::Vector4& ret);
    // private System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0x1AB3874
    void get_pivot_Injected(UnityEngine::Vector2& ret);
    // private System.Void .ctor()
    // Offset: 0x1AB3074
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sprite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Sprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sprite*, creationType>()));
    }
  }; // UnityEngine.Sprite
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Sprite*, "UnityEngine", "Sprite");
