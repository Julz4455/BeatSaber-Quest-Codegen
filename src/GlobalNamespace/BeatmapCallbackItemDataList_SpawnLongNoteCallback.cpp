// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCallbackItemDataList/SpawnLongNoteCallback
#include "GlobalNamespace/BeatmapCallbackItemDataList_SpawnLongNoteCallback.hpp"
// Including type: NoteData
#include "GlobalNamespace/NoteData.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapCallbackItemDataList/SpawnLongNoteCallback..ctor
GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback* GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapCallbackItemDataList::SpawnLongNoteCallback*>(object, method));
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnLongNoteCallback.Invoke
void GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::Invoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", noteData, cutDirectionAngleOffset));
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnLongNoteCallback.BeginInvoke
System::IAsyncResult* GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::BeginInvoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", noteData, cutDirectionAngleOffset, callback, object));
}
// Autogenerated method: BeatmapCallbackItemDataList/SpawnLongNoteCallback.EndInvoke
void GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}