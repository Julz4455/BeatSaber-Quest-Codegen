// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCallbackItemDataList/SpawnBasicNoteCallback
#include "GlobalNamespace/BeatmapCallbackItemDataList_SpawnBasicNoteCallback.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBasicNoteCallback..ctor
GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback* GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapCallbackItemDataList::SpawnBasicNoteCallback*>(object, method));
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBasicNoteCallback.Invoke
void GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback::Invoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", noteData, cutDirectionAngleOffset));
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBasicNoteCallback.BeginInvoke
System::IAsyncResult* GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback::BeginInvoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", noteData, cutDirectionAngleOffset, callback, object));
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnBasicNoteCallback.EndInvoke
void GlobalNamespace::BeatmapCallbackItemDataList::SpawnBasicNoteCallback::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
