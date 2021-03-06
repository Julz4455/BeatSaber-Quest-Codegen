// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
  // Forward declaring type: TextureCreationFlags
  struct TextureCreationFlags;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Texture2D
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBE1C0
  // [NativeHeaderAttribute] Offset: CBE1C0
  // [UsedByNativeCodeAttribute] Offset: CBE1C0
  class Texture2D : public UnityEngine::Texture {
    public:
    // Creating value type constructor for type: Texture2D
    Texture2D() noexcept {}
    // public UnityEngine.TextureFormat get_format()
    // Offset: 0x1AB5CA8
    UnityEngine::TextureFormat get_format();
    // static public UnityEngine.Texture2D get_whiteTexture()
    // Offset: 0x1AB5CE8
    static UnityEngine::Texture2D* get_whiteTexture();
    // static private System.Boolean Internal_CreateImpl(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
    // Offset: 0x1AB5D1C
    static bool Internal_CreateImpl(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, System::IntPtr nativeTex);
    // static private System.Void Internal_Create(UnityEngine.Texture2D mono, System.Int32 w, System.Int32 h, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.IntPtr nativeTex)
    // Offset: 0x1AB5DA4
    static void Internal_Create(UnityEngine::Texture2D* mono, int w, int h, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, System::IntPtr nativeTex);
    // private System.Void ApplyImpl(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
    // Offset: 0x1AB5ED0
    void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);
    // private System.Boolean ResizeImpl(System.Int32 width, System.Int32 height)
    // Offset: 0x1AB5F28
    bool ResizeImpl(int width, int height);
    // private UnityEngine.Color GetPixelBilinearImpl(System.Int32 image, System.Single u, System.Single v)
    // Offset: 0x1AB5F80
    UnityEngine::Color GetPixelBilinearImpl(int image, float u, float v);
    // private System.Boolean ResizeWithFormatImpl(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap)
    // Offset: 0x1AB6074
    bool ResizeWithFormatImpl(int width, int height, UnityEngine::TextureFormat format, bool hasMipMap);
    // private System.Void ReadPixelsImpl(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
    // Offset: 0x1AB60E4
    void ReadPixelsImpl(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps);
    // private System.Void SetPixelsImpl(System.Int32 x, System.Int32 y, System.Int32 w, System.Int32 h, UnityEngine.Color[] pixel, System.Int32 miplevel, System.Int32 frame)
    // Offset: 0x1AB61D4
    void SetPixelsImpl(int x, int y, int w, int h, ::Array<UnityEngine::Color>* pixel, int miplevel, int frame);
    // private System.IntPtr GetWritableImageData(System.Int32 frame)
    // Offset: 0x1AB626C
    System::IntPtr GetWritableImageData(int frame);
    // private System.Int64 GetRawImageDataSize()
    // Offset: 0x1AB62BC
    int64_t GetRawImageDataSize();
    // public System.Void UpdateExternalTexture(System.IntPtr nativeTex)
    // Offset: 0x1AB62FC
    void UpdateExternalTexture(System::IntPtr nativeTex);
    // private System.Void SetAllPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)
    // Offset: 0x1AB634C
    void SetAllPixels32(::Array<UnityEngine::Color32>* colors, int miplevel);
    // public UnityEngine.Color[] GetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, System.Int32 miplevel)
    // Offset: 0x1AB63A4
    ::Array<UnityEngine::Color>* GetPixels(int x, int y, int blockWidth, int blockHeight, int miplevel);
    // public UnityEngine.Color32[] GetPixels32(System.Int32 miplevel)
    // Offset: 0x1AB6424
    ::Array<UnityEngine::Color32>* GetPixels32(int miplevel);
    // public UnityEngine.Color32[] GetPixels32()
    // Offset: 0x1AB6474
    ::Array<UnityEngine::Color32>* GetPixels32();
    // System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount, System.Boolean linear, System.IntPtr nativeTex)
    // Offset: 0x1AB64B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2D* New_ctor(int width, int height, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear, System::IntPtr nativeTex) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2D*, creationType>(width, height, textureFormat, mipCount, linear, nativeTex)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain, System.Boolean linear)
    // Offset: 0x1AB65C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2D* New_ctor(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2D*, creationType>(width, height, textureFormat, mipChain, linear)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0x1AB6660
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2D* New_ctor(int width, int height, UnityEngine::TextureFormat textureFormat, bool mipChain) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2D*, creationType>(width, height, textureFormat, mipChain)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height)
    // Offset: 0x1AB66EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture2D* New_ctor(int width, int height) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture2D*, creationType>(width, height)));
    }
    // static public UnityEngine.Texture2D CreateExternalTexture(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean mipChain, System.Boolean linear, System.IntPtr nativeTex)
    // Offset: 0x1AB6780
    static UnityEngine::Texture2D* CreateExternalTexture(int width, int height, UnityEngine::TextureFormat format, bool mipChain, bool linear, System::IntPtr nativeTex);
    // public System.Void SetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color[] colors, System.Int32 miplevel)
    // Offset: 0x1AB687C
    void SetPixels(int x, int y, int blockWidth, int blockHeight, ::Array<UnityEngine::Color>* colors, int miplevel);
    // public System.Void SetPixels(System.Int32 x, System.Int32 y, System.Int32 blockWidth, System.Int32 blockHeight, UnityEngine.Color[] colors)
    // Offset: 0x1AB6958
    void SetPixels(int x, int y, int blockWidth, int blockHeight, ::Array<UnityEngine::Color>* colors);
    // public UnityEngine.Color GetPixelBilinear(System.Single u, System.Single v)
    // Offset: 0x1AB6960
    UnityEngine::Color GetPixelBilinear(float u, float v);
    // public Unity.Collections.NativeArray`1<T> GetRawTextureData()
    // Offset: 0xFFFFFFFF
    template<class T>
    Unity::Collections::NativeArray_1<T> GetRawTextureData() {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Texture2D::GetRawTextureData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetRawTextureData", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Unity::Collections::NativeArray_1<T>, false>(this, ___generic__method);
    }
    // public System.Void Apply(System.Boolean updateMipmaps, System.Boolean makeNoLongerReadable)
    // Offset: 0x1AB69EC
    void Apply(bool updateMipmaps, bool makeNoLongerReadable);
    // public System.Void Apply()
    // Offset: 0x1AB6A94
    void Apply();
    // public System.Boolean Resize(System.Int32 width, System.Int32 height)
    // Offset: 0x1AB6AA0
    bool Resize(int width, int height);
    // public System.Boolean Resize(System.Int32 width, System.Int32 height, UnityEngine.TextureFormat format, System.Boolean hasMipMap)
    // Offset: 0x1AB6B48
    bool Resize(int width, int height, UnityEngine::TextureFormat format, bool hasMipMap);
    // public System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
    // Offset: 0x1AB6C08
    void ReadPixels(UnityEngine::Rect source, int destX, int destY, bool recalculateMipMaps);
    // public System.Void ReadPixels(UnityEngine.Rect source, System.Int32 destX, System.Int32 destY)
    // Offset: 0x1AB6CD0
    void ReadPixels(UnityEngine::Rect source, int destX, int destY);
    // public System.Void SetPixels32(UnityEngine.Color32[] colors, System.Int32 miplevel)
    // Offset: 0x1AB6CD8
    void SetPixels32(::Array<UnityEngine::Color32>* colors, int miplevel);
    // public System.Void SetPixels32(UnityEngine.Color32[] colors)
    // Offset: 0x1AB6D30
    void SetPixels32(::Array<UnityEngine::Color32>* colors);
    // public UnityEngine.Color[] GetPixels(System.Int32 miplevel)
    // Offset: 0x1AB6D84
    ::Array<UnityEngine::Color>* GetPixels(int miplevel);
    // public UnityEngine.Color[] GetPixels()
    // Offset: 0x1AB6E24
    ::Array<UnityEngine::Color>* GetPixels();
    // private System.Void GetPixelBilinearImpl_Injected(System.Int32 image, System.Single u, System.Single v, out UnityEngine.Color ret)
    // Offset: 0x1AB6004
    void GetPixelBilinearImpl_Injected(int image, float u, float v, UnityEngine::Color& ret);
    // private System.Void ReadPixelsImpl_Injected(ref UnityEngine.Rect source, System.Int32 destX, System.Int32 destY, System.Boolean recalculateMipMaps)
    // Offset: 0x1AB6164
    void ReadPixelsImpl_Injected(UnityEngine::Rect& source, int destX, int destY, bool recalculateMipMaps);
    // public override System.Boolean get_isReadable()
    // Offset: 0x1AB5E90
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.Texture2D
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Texture2D*, "UnityEngine", "Texture2D");
