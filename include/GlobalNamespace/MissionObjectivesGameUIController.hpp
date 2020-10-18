// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveGameUIView
  class MissionObjectiveGameUIView;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectivesGameUIController
  class MissionObjectivesGameUIController : public UnityEngine::MonoBehaviour {
    public:
    // private MissionObjectiveGameUIView _missionObjectiveGameUIViewPrefab
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveGameUIView* missionObjectiveGameUIViewPrefab;
    // private System.Single _separator
    // Offset: 0x20
    float separator;
    // private System.Single _elementWidth
    // Offset: 0x24
    float elementWidth;
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Offset: 0x28
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // private System.Collections.Generic.List`1<MissionObjectiveGameUIView> _missionObjectiveGameUIViews
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::MissionObjectiveGameUIView*>* missionObjectiveGameUIViews;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xEE3C80
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xEE405C
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectivesListDidChange()
    // Offset: 0xEE412C
    void HandleMissionObjectiveCheckersManagerObjectivesListDidChange();
    // private System.Void CreateUIElements()
    // Offset: 0xEE3D10
    void CreateUIElements();
    // public System.Void .ctor()
    // Offset: 0xEE4130
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionObjectivesGameUIController* New_ctor();
  }; // MissionObjectivesGameUIController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectivesGameUIController*, "", "MissionObjectivesGameUIController");
#pragma pack(pop)
