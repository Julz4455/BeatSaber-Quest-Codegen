// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.GoogleDownload
#include "Polyglot/GoogleDownload.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Polyglot.GoogleDriveDownloadFormat
#include "Polyglot/GoogleDriveDownloadFormat.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.GoogleDownload/<DownloadSheet>d__0
  class GoogleDownload::$DownloadSheet$d__0 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public System.Func`2<System.Single,System.Boolean> progressbar
    // Offset: 0x20
    System::Func_2<float, bool>* progressbar;
    // public System.Action`1<System.String> done
    // Offset: 0x28
    System::Action_1<::Il2CppString*>* done;
    // public System.String docsId
    // Offset: 0x30
    ::Il2CppString* docsId;
    // public System.String sheetId
    // Offset: 0x38
    ::Il2CppString* sheetId;
    // public Polyglot.GoogleDriveDownloadFormat format
    // Offset: 0x40
    Polyglot::GoogleDriveDownloadFormat format;
    // private System.String <url>5__2
    // Offset: 0x48
    ::Il2CppString* $url$5__2;
    // private UnityEngine.Networking.UnityWebRequest <www>5__3
    // Offset: 0x50
    UnityEngine::Networking::UnityWebRequest* $www$5__3;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x219AC44
    static GoogleDownload::$DownloadSheet$d__0* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x219AC70
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x219AC74
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x219AF68
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x219AF70
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x219AFD0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Polyglot.GoogleDownload/<DownloadSheet>d__0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::GoogleDownload::$DownloadSheet$d__0*, "Polyglot", "GoogleDownload/<DownloadSheet>d__0");
#pragma pack(pop)
