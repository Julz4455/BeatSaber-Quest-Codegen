// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerScoreProvider
#include "GlobalNamespace/MultiplayerScoreProvider.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
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
  // Autogenerated type: MultiplayerLeadPlayerProvider
  class MultiplayerLeadPlayerProvider : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _timeToGainFirstLead
    // Offset: 0x18
    float timeToGainFirstLead;
    // private System.Single _timeToLooseLead
    // Offset: 0x1C
    float timeToLooseLead;
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // private readonly MultiplayerController _multiplayerController
    // Offset: 0x28
    GlobalNamespace::MultiplayerController* multiplayerController;
    // private System.Action`1<System.String> newLeaderWasSelectedEvent
    // Offset: 0x30
    System::Action_1<::Il2CppString*>* newLeaderWasSelectedEvent;
    // private System.Single _currentLeadingPlayerStartTime
    // Offset: 0x38
    float currentLeadingPlayerStartTime;
    // private MultiplayerScoreProvider/RankedPlayer _currentlyDisplayedUser
    // Offset: 0x40
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyDisplayedUser;
    // private MultiplayerScoreProvider/RankedPlayer _currentlyLeadingUser
    // Offset: 0x48
    GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* currentlyLeadingUser;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_newLeaderWasSelectedEvent(System.Action`1<System.String> value)
    // Offset: 0x222E8F8
    void add_newLeaderWasSelectedEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_newLeaderWasSelectedEvent(System.Action`1<System.String> value)
    // Offset: 0x222E6E4
    void remove_newLeaderWasSelectedEvent(System::Action_1<::Il2CppString*>* value);
    // protected System.Void Start()
    // Offset: 0x2231B44
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x2231C14
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x2231D6C
    void Update();
    // private System.Void StopProviding()
    // Offset: 0x2231E48
    void StopProviding();
    // private System.Void StartProviding()
    // Offset: 0x2231EEC
    void StartProviding();
    // private System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0x2231C04
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // private System.Void HandleFirstPlayerDidChange(MultiplayerScoreProvider/RankedPlayer firstPlayer)
    // Offset: 0x2231F94
    void HandleFirstPlayerDidChange(GlobalNamespace::MultiplayerScoreProvider::RankedPlayer* firstPlayer);
    // public System.Void .ctor()
    // Offset: 0x22320E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLeadPlayerProvider* New_ctor();
  }; // MultiplayerLeadPlayerProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLeadPlayerProvider*, "", "MultiplayerLeadPlayerProvider");
#pragma pack(pop)
