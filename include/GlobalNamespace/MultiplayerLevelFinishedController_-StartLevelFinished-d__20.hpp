// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLevelFinishedController
#include "GlobalNamespace/MultiplayerLevelFinishedController.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLevelFinishedController/<StartLevelFinished>d__20
  class MultiplayerLevelFinishedController::$StartLevelFinished$d__20 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public LevelCompletionResults localPlayerResults
    // Offset: 0x20
    GlobalNamespace::LevelCompletionResults* localPlayerResults;
    // public MultiplayerLevelFinishedController <>4__this
    // Offset: 0x28
    GlobalNamespace::MultiplayerLevelFinishedController* $$4__this;
    // private System.Single <waitStartTime>5__2
    // Offset: 0x30
    float $waitStartTime$5__2;
    // private System.Single <resultsTimeoutLength>5__3
    // Offset: 0x34
    float $resultsTimeoutLength$5__3;
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x2233640
    static MultiplayerLevelFinishedController::$StartLevelFinished$d__20* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x2233784
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x2233788
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x2233BDC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x2233BE4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2233C44
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // MultiplayerLevelFinishedController/<StartLevelFinished>d__20
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLevelFinishedController::$StartLevelFinished$d__20*, "", "MultiplayerLevelFinishedController/<StartLevelFinished>d__20");
#pragma pack(pop)
