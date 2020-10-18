// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SingleFixedSceneScenesTransitionSetupDataSO
#include "GlobalNamespace/SingleFixedSceneScenesTransitionSetupDataSO.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapEditorScenesTransitionSetupDataSO
  class BeatmapEditorScenesTransitionSetupDataSO : public GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
    public:
    // private System.Action`1<BeatmapEditorScenesTransitionSetupDataSO> didFinishEvent
    // Offset: 0x30
    System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`1<BeatmapEditorScenesTransitionSetupDataSO> value)
    // Offset: 0x104FE60
    void add_didFinishEvent(System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<BeatmapEditorScenesTransitionSetupDataSO> value)
    // Offset: 0x104FF04
    void remove_didFinishEvent(System::Action_1<GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*>* value);
    // public System.Void Init()
    // Offset: 0x104FFA8
    void Init();
    // public System.Void Finish()
    // Offset: 0x1050014
    void Finish();
    // public System.Void .ctor()
    // Offset: 0x1050078
    // Implemented from: SingleFixedSceneScenesTransitionSetupDataSO
    // Base method: System.Void SingleFixedSceneScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapEditorScenesTransitionSetupDataSO* New_ctor();
  }; // BeatmapEditorScenesTransitionSetupDataSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*, "", "BeatmapEditorScenesTransitionSetupDataSO");
#pragma pack(pop)
