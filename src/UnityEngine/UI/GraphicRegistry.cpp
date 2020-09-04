// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.UI.GraphicRegistry
#include "UnityEngine/UI/GraphicRegistry.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: UnityEngine.Canvas
#include "UnityEngine/Canvas.hpp"
// Including type: UnityEngine.UI.Collections.IndexedSet`1
#include "UnityEngine/UI/Collections/IndexedSet_1.hpp"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.UI.GraphicRegistry s_Instance
UnityEngine::UI::GraphicRegistry* UnityEngine::UI::GraphicRegistry::_get_s_Instance() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::UI::GraphicRegistry*>("UnityEngine.UI", "GraphicRegistry", "s_Instance"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.UI.GraphicRegistry s_Instance
void UnityEngine::UI::GraphicRegistry::_set_s_Instance(UnityEngine::UI::GraphicRegistry* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.UI", "GraphicRegistry", "s_Instance", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_EmptyList
System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* UnityEngine::UI::GraphicRegistry::_get_s_EmptyList() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>*>("UnityEngine.UI", "GraphicRegistry", "s_EmptyList"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_EmptyList
void UnityEngine::UI::GraphicRegistry::_set_s_EmptyList(System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.UI", "GraphicRegistry", "s_EmptyList", value));
}
// Autogenerated method: UnityEngine.UI.GraphicRegistry.get_instance
UnityEngine::UI::GraphicRegistry* UnityEngine::UI::GraphicRegistry::get_instance() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::UI::GraphicRegistry*>("UnityEngine.UI", "GraphicRegistry", "get_instance"));
}
// Autogenerated method: UnityEngine.UI.GraphicRegistry.RegisterGraphicForCanvas
void UnityEngine::UI::GraphicRegistry::RegisterGraphicForCanvas(UnityEngine::Canvas* c, UnityEngine::UI::Graphic* graphic) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "GraphicRegistry", "RegisterGraphicForCanvas", c, graphic));
}
// Autogenerated method: UnityEngine.UI.GraphicRegistry.UnregisterGraphicForCanvas
void UnityEngine::UI::GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine::Canvas* c, UnityEngine::UI::Graphic* graphic) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "GraphicRegistry", "UnregisterGraphicForCanvas", c, graphic));
}
// Autogenerated method: UnityEngine.UI.GraphicRegistry.GetGraphicsForCanvas
System::Collections::Generic::IList_1<UnityEngine::UI::Graphic*>* UnityEngine::UI::GraphicRegistry::GetGraphicsForCanvas(UnityEngine::Canvas* canvas) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IList_1<UnityEngine::UI::Graphic*>*>("UnityEngine.UI", "GraphicRegistry", "GetGraphicsForCanvas", canvas));
}
// Autogenerated method: UnityEngine.UI.GraphicRegistry..cctor
void UnityEngine::UI::GraphicRegistry::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "GraphicRegistry", ".cctor"));
}
// Autogenerated method: UnityEngine.UI.GraphicRegistry..ctor
UnityEngine::UI::GraphicRegistry* UnityEngine::UI::GraphicRegistry::New_ctor() {
  return (GraphicRegistry*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.UI", "GraphicRegistry"));
}
