// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.ProBuilder.MeshHandle
#include "UnityEngine/ProBuilder/MeshHandle.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.Mesh
#include "UnityEngine/Mesh.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.MeshHandle.get_mesh
UnityEngine::Mesh* UnityEngine::ProBuilder::MeshHandle::get_mesh() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Mesh*>(this, "get_mesh"));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshHandle..ctor
UnityEngine::ProBuilder::MeshHandle* UnityEngine::ProBuilder::MeshHandle::New_ctor(UnityEngine::Transform* transform, UnityEngine::Mesh* mesh) {
  return (MeshHandle*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "MeshHandle", transform, mesh));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshHandle.DrawMeshNow
void UnityEngine::ProBuilder::MeshHandle::DrawMeshNow(int submeshIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DrawMeshNow", submeshIndex));
}
