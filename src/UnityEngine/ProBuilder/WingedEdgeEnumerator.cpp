// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.WingedEdgeEnumerator
#include "UnityEngine/ProBuilder/WingedEdgeEnumerator.hpp"
// Including type: UnityEngine.ProBuilder.WingedEdge
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.WingedEdgeEnumerator..ctor
UnityEngine::ProBuilder::WingedEdgeEnumerator* UnityEngine::ProBuilder::WingedEdgeEnumerator::New_ctor(UnityEngine::ProBuilder::WingedEdge* start) {
  return (WingedEdgeEnumerator*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "WingedEdgeEnumerator", start));
}
// Autogenerated method: UnityEngine.ProBuilder.WingedEdgeEnumerator.MoveNext
bool UnityEngine::ProBuilder::WingedEdgeEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: UnityEngine.ProBuilder.WingedEdgeEnumerator.Reset
void UnityEngine::ProBuilder::WingedEdgeEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void UnityEngine::ProBuilder::WingedEdgeEnumerator::System_Collections_IEnumerator_Reset() {
  UnityEngine::ProBuilder::WingedEdgeEnumerator::Reset();
}
// Autogenerated method: UnityEngine.ProBuilder.WingedEdgeEnumerator.get_Current
UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdgeEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::WingedEdge*>(this, "get_Current"));
}
UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdgeEnumerator::System_Collections_Generic_IEnumerator_1_get_Current() {
  return UnityEngine::ProBuilder::WingedEdgeEnumerator::get_Current();
}
// Autogenerated method: UnityEngine.ProBuilder.WingedEdgeEnumerator.System.Collections.IEnumerator.get_Current
::Il2CppObject* UnityEngine::ProBuilder::WingedEdgeEnumerator::System_Collections_IEnumerator_get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
}
// Autogenerated method: UnityEngine.ProBuilder.WingedEdgeEnumerator.Dispose
void UnityEngine::ProBuilder::WingedEdgeEnumerator::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void UnityEngine::ProBuilder::WingedEdgeEnumerator::System_IDisposable_Dispose() {
  UnityEngine::ProBuilder::WingedEdgeEnumerator::Dispose();
}
