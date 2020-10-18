// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCallbackItemDataList
#include "GlobalNamespace/BeatmapCallbackItemDataList.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCallbackItemDataList/SpawnLongNoteCallback
  class BeatmapCallbackItemDataList::SpawnLongNoteCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x10493A4
    static BeatmapCallbackItemDataList::SpawnLongNoteCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(NoteData noteData, System.Single cutDirectionAngleOffset)
    // Offset: 0x1048938
    void Invoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset);
    // public System.IAsyncResult BeginInvoke(NoteData noteData, System.Single cutDirectionAngleOffset, System.AsyncCallback callback, System.Object object)
    // Offset: 0x10493B8
    System::IAsyncResult* BeginInvoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1049454
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/SpawnLongNoteCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::SpawnLongNoteCallback*, "", "BeatmapCallbackItemDataList/SpawnLongNoteCallback");
#pragma pack(pop)
