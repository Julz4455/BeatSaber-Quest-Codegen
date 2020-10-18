// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: UnityEngine.Shader
#include "UnityEngine/Shader.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Rendering.ShaderPropertyFlags
#include "UnityEngine/Rendering/ShaderPropertyFlags.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Material.CreateWithShader
void UnityEngine::Material::CreateWithShader(UnityEngine::Material* self, UnityEngine::Shader* shader) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Material", "CreateWithShader", self, shader));
}
// Autogenerated method: UnityEngine.Material.CreateWithMaterial
void UnityEngine::Material::CreateWithMaterial(UnityEngine::Material* self, UnityEngine::Material* source) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Material", "CreateWithMaterial", self, source));
}
// Autogenerated method: UnityEngine.Material.CreateWithString
void UnityEngine::Material::CreateWithString(UnityEngine::Material* self) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Material", "CreateWithString", self));
}
// Autogenerated method: UnityEngine.Material..ctor
UnityEngine::Material* UnityEngine::Material::New_ctor(UnityEngine::Shader* shader) {
  return THROW_UNLESS(il2cpp_utils::New<Material*>(shader));
}
// Autogenerated method: UnityEngine.Material..ctor
UnityEngine::Material* UnityEngine::Material::New_ctor(UnityEngine::Material* source) {
  return THROW_UNLESS(il2cpp_utils::New<Material*>(source));
}
// Autogenerated method: UnityEngine.Material..ctor
UnityEngine::Material* UnityEngine::Material::New_ctor(::Il2CppString* contents) {
  return THROW_UNLESS(il2cpp_utils::New<Material*>(contents));
}
// Autogenerated method: UnityEngine.Material.get_shader
UnityEngine::Shader* UnityEngine::Material::get_shader() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Shader*>(this, "get_shader"));
}
// Autogenerated method: UnityEngine.Material.get_color
UnityEngine::Color UnityEngine::Material::get_color() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "get_color"));
}
// Autogenerated method: UnityEngine.Material.set_color
void UnityEngine::Material::set_color(UnityEngine::Color value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_color", value));
}
// Autogenerated method: UnityEngine.Material.get_mainTexture
UnityEngine::Texture* UnityEngine::Material::get_mainTexture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture*>(this, "get_mainTexture"));
}
// Autogenerated method: UnityEngine.Material.set_mainTexture
void UnityEngine::Material::set_mainTexture(UnityEngine::Texture* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_mainTexture", value));
}
// Autogenerated method: UnityEngine.Material.GetFirstPropertyNameIdByAttribute
int UnityEngine::Material::GetFirstPropertyNameIdByAttribute(UnityEngine::Rendering::ShaderPropertyFlags attributeFlag) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetFirstPropertyNameIdByAttribute", attributeFlag));
}
// Autogenerated method: UnityEngine.Material.HasProperty
bool UnityEngine::Material::HasProperty(int nameID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasProperty", nameID));
}
// Autogenerated method: UnityEngine.Material.HasProperty
bool UnityEngine::Material::HasProperty(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasProperty", name));
}
// Autogenerated method: UnityEngine.Material.set_renderQueue
void UnityEngine::Material::set_renderQueue(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_renderQueue", value));
}
// Autogenerated method: UnityEngine.Material.EnableKeyword
void UnityEngine::Material::EnableKeyword(::Il2CppString* keyword) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EnableKeyword", keyword));
}
// Autogenerated method: UnityEngine.Material.DisableKeyword
void UnityEngine::Material::DisableKeyword(::Il2CppString* keyword) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DisableKeyword", keyword));
}
// Autogenerated method: UnityEngine.Material.get_enableInstancing
bool UnityEngine::Material::get_enableInstancing() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_enableInstancing"));
}
// Autogenerated method: UnityEngine.Material.get_passCount
int UnityEngine::Material::get_passCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_passCount"));
}
// Autogenerated method: UnityEngine.Material.SetPass
bool UnityEngine::Material::SetPass(int pass) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SetPass", pass));
}
// Autogenerated method: UnityEngine.Material.CopyPropertiesFromMaterial
void UnityEngine::Material::CopyPropertiesFromMaterial(UnityEngine::Material* mat) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyPropertiesFromMaterial", mat));
}
// Autogenerated method: UnityEngine.Material.GetShaderKeywords
::Array<::Il2CppString*>* UnityEngine::Material::GetShaderKeywords() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "GetShaderKeywords"));
}
// Autogenerated method: UnityEngine.Material.SetShaderKeywords
void UnityEngine::Material::SetShaderKeywords(::Array<::Il2CppString*>* names) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetShaderKeywords", names));
}
// Autogenerated method: UnityEngine.Material.get_shaderKeywords
::Array<::Il2CppString*>* UnityEngine::Material::get_shaderKeywords() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "get_shaderKeywords"));
}
// Autogenerated method: UnityEngine.Material.set_shaderKeywords
void UnityEngine::Material::set_shaderKeywords(::Array<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_shaderKeywords", value));
}
// Autogenerated method: UnityEngine.Material.SetFloatImpl
void UnityEngine::Material::SetFloatImpl(int name, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetFloatImpl", name, value));
}
// Autogenerated method: UnityEngine.Material.SetColorImpl
void UnityEngine::Material::SetColorImpl(int name, UnityEngine::Color value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetColorImpl", name, value));
}
// Autogenerated method: UnityEngine.Material.SetMatrixImpl
void UnityEngine::Material::SetMatrixImpl(int name, UnityEngine::Matrix4x4 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMatrixImpl", name, value));
}
// Autogenerated method: UnityEngine.Material.SetTextureImpl
void UnityEngine::Material::SetTextureImpl(int name, UnityEngine::Texture* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetTextureImpl", name, value));
}
// Autogenerated method: UnityEngine.Material.GetFloatImpl
float UnityEngine::Material::GetFloatImpl(int name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetFloatImpl", name));
}
// Autogenerated method: UnityEngine.Material.GetColorImpl
UnityEngine::Color UnityEngine::Material::GetColorImpl(int name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetColorImpl", name));
}
// Autogenerated method: UnityEngine.Material.GetTextureImpl
UnityEngine::Texture* UnityEngine::Material::GetTextureImpl(int name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture*>(this, "GetTextureImpl", name));
}
// Autogenerated method: UnityEngine.Material.SetFloat
void UnityEngine::Material::SetFloat(::Il2CppString* name, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetFloat", name, value));
}
// Autogenerated method: UnityEngine.Material.SetFloat
void UnityEngine::Material::SetFloat(int nameID, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetFloat", nameID, value));
}
// Autogenerated method: UnityEngine.Material.SetInt
void UnityEngine::Material::SetInt(::Il2CppString* name, int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetInt", name, value));
}
// Autogenerated method: UnityEngine.Material.SetColor
void UnityEngine::Material::SetColor(::Il2CppString* name, UnityEngine::Color value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetColor", name, value));
}
// Autogenerated method: UnityEngine.Material.SetColor
void UnityEngine::Material::SetColor(int nameID, UnityEngine::Color value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetColor", nameID, value));
}
// Autogenerated method: UnityEngine.Material.SetVector
void UnityEngine::Material::SetVector(::Il2CppString* name, UnityEngine::Vector4 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetVector", name, value));
}
// Autogenerated method: UnityEngine.Material.SetVector
void UnityEngine::Material::SetVector(int nameID, UnityEngine::Vector4 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetVector", nameID, value));
}
// Autogenerated method: UnityEngine.Material.SetMatrix
void UnityEngine::Material::SetMatrix(int nameID, UnityEngine::Matrix4x4 value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMatrix", nameID, value));
}
// Autogenerated method: UnityEngine.Material.SetTexture
void UnityEngine::Material::SetTexture(::Il2CppString* name, UnityEngine::Texture* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetTexture", name, value));
}
// Autogenerated method: UnityEngine.Material.SetTexture
void UnityEngine::Material::SetTexture(int nameID, UnityEngine::Texture* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetTexture", nameID, value));
}
// Autogenerated method: UnityEngine.Material.GetFloat
float UnityEngine::Material::GetFloat(int nameID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetFloat", nameID));
}
// Autogenerated method: UnityEngine.Material.GetColor
UnityEngine::Color UnityEngine::Material::GetColor(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetColor", name));
}
// Autogenerated method: UnityEngine.Material.GetColor
UnityEngine::Color UnityEngine::Material::GetColor(int nameID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Color>(this, "GetColor", nameID));
}
// Autogenerated method: UnityEngine.Material.GetVector
UnityEngine::Vector4 UnityEngine::Material::GetVector(int nameID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector4>(this, "GetVector", nameID));
}
// Autogenerated method: UnityEngine.Material.GetTexture
UnityEngine::Texture* UnityEngine::Material::GetTexture(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture*>(this, "GetTexture", name));
}
// Autogenerated method: UnityEngine.Material.GetTexture
UnityEngine::Texture* UnityEngine::Material::GetTexture(int nameID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture*>(this, "GetTexture", nameID));
}
// Autogenerated method: UnityEngine.Material.SetColorImpl_Injected
void UnityEngine::Material::SetColorImpl_Injected(int name, UnityEngine::Color& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetColorImpl_Injected", name, value));
}
// Autogenerated method: UnityEngine.Material.SetMatrixImpl_Injected
void UnityEngine::Material::SetMatrixImpl_Injected(int name, UnityEngine::Matrix4x4& value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMatrixImpl_Injected", name, value));
}
// Autogenerated method: UnityEngine.Material.GetColorImpl_Injected
void UnityEngine::Material::GetColorImpl_Injected(int name, UnityEngine::Color& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetColorImpl_Injected", name, ret));
}
