// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.ProBuilder.SelectionPicker
#include "UnityEngine/ProBuilder/SelectionPicker.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: UnityEngine.ProBuilder.PickerOptions
#include "UnityEngine/ProBuilder/PickerOptions.hpp"
// Including type: UnityEngine.ProBuilder.Face
#include "UnityEngine/ProBuilder/Face.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.SelectionPicker.PickVerticesInRect
System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<int>*>* UnityEngine::ProBuilder::SelectionPicker::PickVerticesInRect(UnityEngine::Camera* cam, UnityEngine::Rect rect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<int>*>*>("UnityEngine.ProBuilder", "SelectionPicker", "PickVerticesInRect", cam, rect, selectable, options, pixelsPerPoint)));
}
// Autogenerated method: UnityEngine.ProBuilder.SelectionPicker.PickFacesInRect
System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>* UnityEngine::ProBuilder::SelectionPicker::PickFacesInRect(UnityEngine::Camera* cam, UnityEngine::Rect rect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>*>*>("UnityEngine.ProBuilder", "SelectionPicker", "PickFacesInRect", cam, rect, selectable, options, pixelsPerPoint)));
}
// Autogenerated method: UnityEngine.ProBuilder.SelectionPicker.PickEdgesInRect
System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge>*>* UnityEngine::ProBuilder::SelectionPicker::PickEdgesInRect(UnityEngine::Camera* cam, UnityEngine::Rect rect, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::ProBuilderMesh*>* selectable, UnityEngine::ProBuilder::PickerOptions options, float pixelsPerPoint) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::ProBuilderMesh*, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Edge>*>*>("UnityEngine.ProBuilder", "SelectionPicker", "PickEdgesInRect", cam, rect, selectable, options, pixelsPerPoint)));
}
// Autogenerated method: UnityEngine.ProBuilder.SelectionPicker.PickFace
UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::SelectionPicker::PickFace(UnityEngine::Camera* camera, UnityEngine::Vector3 mousePosition, UnityEngine::ProBuilder::ProBuilderMesh* pickable) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Face*>("UnityEngine.ProBuilder", "SelectionPicker", "PickFace", camera, mousePosition, pickable));
}
