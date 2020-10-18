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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapObjectSpawnCenter
  class BeatmapObjectSpawnCenter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance
    class PlayerCountToDistance;
    // private BeatmapObjectSpawnCenter/PlayerCountToDistance[] _distances
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapObjectSpawnCenter::PlayerCountToDistance*>* distances;
    // private System.Single _defaultDistnace
    // Offset: 0x20
    float defaultDistnace;
    // private System.Action`1<System.Single> spawnCenterDistanceWasFoundEvent
    // Offset: 0x28
    System::Action_1<float>* spawnCenterDistanceWasFoundEvent;
    // private System.Boolean _spawnCenterDistanceWasFound
    // Offset: 0x30
    bool spawnCenterDistanceWasFound;
    // private System.Single _spawnCenterDistance
    // Offset: 0x34
    float spawnCenterDistance;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_spawnCenterDistance()
    // Offset: 0xF1675C
    float get_spawnCenterDistance();
    // public System.Boolean get_spawnCenterDistanceWasFound()
    // Offset: 0xF16764
    bool get_spawnCenterDistanceWasFound();
    // public System.Void add_spawnCenterDistanceWasFoundEvent(System.Action`1<System.Single> value)
    // Offset: 0xF1676C
    void add_spawnCenterDistanceWasFoundEvent(System::Action_1<float>* value);
    // public System.Void remove_spawnCenterDistanceWasFoundEvent(System.Action`1<System.Single> value)
    // Offset: 0xF16810
    void remove_spawnCenterDistanceWasFoundEvent(System::Action_1<float>* value);
    // public System.Single CalculateSpawnCenterPosition(System.Int32 numberOfPlayers)
    // Offset: 0xF168B4
    float CalculateSpawnCenterPosition(int numberOfPlayers);
    // private System.Void ReportAndSaveSpawnCenterDistance(System.Single distance)
    // Offset: 0xF169E0
    void ReportAndSaveSpawnCenterDistance(float distance);
    // public System.Void .ctor()
    // Offset: 0xF16A60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapObjectSpawnCenter* New_ctor();
  }; // BeatmapObjectSpawnCenter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnCenter*, "", "BeatmapObjectSpawnCenter");
#pragma pack(pop)
