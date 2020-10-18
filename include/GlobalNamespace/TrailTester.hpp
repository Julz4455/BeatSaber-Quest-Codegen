// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IBladeMovementData
#include "GlobalNamespace/IBladeMovementData.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: BladeMovementDataElement
#include "GlobalNamespace/BladeMovementDataElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTrail
  class SaberTrail;
  // Forward declaring type: TestSaberModulationData
  class TestSaberModulationData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TrailTester
  class TrailTester : public UnityEngine::MonoBehaviour, public GlobalNamespace::IBladeMovementData {
    public:
    // private UnityEngine.Color _trailColor
    // Offset: 0x18
    UnityEngine::Color trailColor;
    // private SaberTrail _saberTrail
    // Offset: 0x28
    GlobalNamespace::SaberTrail* saberTrail;
    // private UnityEngine.Transform _saberPos
    // Offset: 0x30
    UnityEngine::Transform* saberPos;
    // private UnityEngine.Transform _handPos
    // Offset: 0x38
    UnityEngine::Transform* handPos;
    // private UnityEngine.Transform _topPos
    // Offset: 0x40
    UnityEngine::Transform* topPos;
    // private UnityEngine.Transform _bottomPos
    // Offset: 0x48
    UnityEngine::Transform* bottomPos;
    // private TestSaberModulationData _speed
    // Offset: 0x50
    GlobalNamespace::TestSaberModulationData* speed;
    // private TestSaberModulationData _handZPos
    // Offset: 0x58
    GlobalNamespace::TestSaberModulationData* handZPos;
    // private TestSaberModulationData _handYPos
    // Offset: 0x60
    GlobalNamespace::TestSaberModulationData* handYPos;
    // private TestSaberModulationData _handRotation
    // Offset: 0x68
    GlobalNamespace::TestSaberModulationData* handRotation;
    // private TestSaberModulationData _saberRotation
    // Offset: 0x70
    GlobalNamespace::TestSaberModulationData* saberRotation;
    // private BladeMovementDataElement <lastAddedData>k__BackingField
    // Offset: 0x78
    GlobalNamespace::BladeMovementDataElement lastAddedData;
    // private BladeMovementDataElement <prevAddedData>k__BackingField
    // Offset: 0xA4
    GlobalNamespace::BladeMovementDataElement prevAddedData;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void set_lastAddedData(BladeMovementDataElement value)
    // Offset: 0xF37078
    void set_lastAddedData(GlobalNamespace::BladeMovementDataElement value);
    // private System.Void set_prevAddedData(BladeMovementDataElement value)
    // Offset: 0xF370B0
    void set_prevAddedData(GlobalNamespace::BladeMovementDataElement value);
    // protected System.Void Awake()
    // Offset: 0xF370D0
    void Awake();
    // protected System.Void Update()
    // Offset: 0xF370F8
    void Update();
    // public System.Single get_bladeSpeed()
    // Offset: 0xF37058
    // Implemented from: IBladeMovementData
    // Base method: System.Single IBladeMovementData::get_bladeSpeed()
    float get_bladeSpeed();
    // public BladeMovementDataElement get_lastAddedData()
    // Offset: 0xF37060
    // Implemented from: IBladeMovementData
    // Base method: BladeMovementDataElement IBladeMovementData::get_lastAddedData()
    GlobalNamespace::BladeMovementDataElement get_lastAddedData();
    // public BladeMovementDataElement get_prevAddedData()
    // Offset: 0xF37098
    // Implemented from: IBladeMovementData
    // Base method: BladeMovementDataElement IBladeMovementData::get_prevAddedData()
    GlobalNamespace::BladeMovementDataElement get_prevAddedData();
    // public System.Void .ctor()
    // Offset: 0xF373E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrailTester* New_ctor();
  }; // TrailTester
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailTester*, "", "TrailTester");
#pragma pack(pop)
