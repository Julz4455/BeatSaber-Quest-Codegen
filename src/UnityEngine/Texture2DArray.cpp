// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.Texture2DArray
#include "UnityEngine/Texture2DArray.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Texture2DArray.get_allSlices
int UnityEngine::Texture2DArray::get_allSlices() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Texture2DArray", "get_allSlices"));
}
// Autogenerated method: UnityEngine.Texture2DArray.Internal_CreateImpl
bool UnityEngine::Texture2DArray::Internal_CreateImpl(UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine", "Texture2DArray", "Internal_CreateImpl", mono, w, h, d, mipCount, format, flags));
}
// Autogenerated method: UnityEngine.Texture2DArray.Internal_Create
void UnityEngine::Texture2DArray::Internal_Create(UnityEngine::Texture2DArray* mono, int w, int h, int d, int mipCount, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Texture2DArray", "Internal_Create", mono, w, h, d, mipCount, format, flags));
}
// Autogenerated method: UnityEngine.Texture2DArray..ctor
UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return (Texture2DArray*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Texture2DArray", width, height, depth, format, flags));
}
// Autogenerated method: UnityEngine.Texture2DArray..ctor
UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
  return (Texture2DArray*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Texture2DArray", width, height, depth, format, flags));
}
// Autogenerated method: UnityEngine.Texture2DArray..ctor
UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int width, int height, int depth, UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
  return (Texture2DArray*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Texture2DArray", width, height, depth, format, flags, mipCount));
}
// Autogenerated method: UnityEngine.Texture2DArray..ctor
UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, int mipCount, bool linear) {
  return (Texture2DArray*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Texture2DArray", width, height, depth, textureFormat, mipCount, linear));
}
// Autogenerated method: UnityEngine.Texture2DArray..ctor
UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear) {
  return (Texture2DArray*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Texture2DArray", width, height, depth, textureFormat, mipChain, linear));
}
// Autogenerated method: UnityEngine.Texture2DArray..ctor
UnityEngine::Texture2DArray* UnityEngine::Texture2DArray::New_ctor(int width, int height, int depth, UnityEngine::TextureFormat textureFormat, bool mipChain) {
  return (Texture2DArray*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Texture2DArray", width, height, depth, textureFormat, mipChain));
}
// Autogenerated method: UnityEngine.Texture2DArray.get_isReadable
bool UnityEngine::Texture2DArray::get_isReadable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isReadable"));
}
