// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: CharacterController
  class CharacterController;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlayerController
  class OVRPlayerController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single Acceleration
    // Offset: 0x18
    float Acceleration;
    // public System.Single Damping
    // Offset: 0x1C
    float Damping;
    // public System.Single BackAndSideDampen
    // Offset: 0x20
    float BackAndSideDampen;
    // public System.Single JumpForce
    // Offset: 0x24
    float JumpForce;
    // public System.Single RotationAmount
    // Offset: 0x28
    float RotationAmount;
    // public System.Single RotationRatchet
    // Offset: 0x2C
    float RotationRatchet;
    // public System.Boolean SnapRotation
    // Offset: 0x30
    bool SnapRotation;
    // public System.Int32 FixedSpeedSteps
    // Offset: 0x34
    int FixedSpeedSteps;
    // public System.Boolean HmdResetsY
    // Offset: 0x38
    bool HmdResetsY;
    // public System.Boolean HmdRotatesY
    // Offset: 0x39
    bool HmdRotatesY;
    // public System.Single GravityModifier
    // Offset: 0x3C
    float GravityModifier;
    // public System.Boolean useProfileData
    // Offset: 0x40
    bool useProfileData;
    // public System.Single CameraHeight
    // Offset: 0x44
    float CameraHeight;
    // private System.Action`1<UnityEngine.Transform> TransformUpdated
    // Offset: 0x48
    System::Action_1<UnityEngine::Transform*>* TransformUpdated;
    // public System.Boolean Teleported
    // Offset: 0x50
    bool Teleported;
    // private System.Action CameraUpdated
    // Offset: 0x58
    System::Action* CameraUpdated;
    // private System.Action PreCharacterMove
    // Offset: 0x60
    System::Action* PreCharacterMove;
    // public System.Boolean EnableLinearMovement
    // Offset: 0x68
    bool EnableLinearMovement;
    // public System.Boolean EnableRotation
    // Offset: 0x69
    bool EnableRotation;
    // public System.Boolean RotationEitherThumbstick
    // Offset: 0x6A
    bool RotationEitherThumbstick;
    // protected UnityEngine.CharacterController Controller
    // Offset: 0x70
    UnityEngine::CharacterController* Controller;
    // protected OVRCameraRig CameraRig
    // Offset: 0x78
    GlobalNamespace::OVRCameraRig* CameraRig;
    // private System.Single MoveScale
    // Offset: 0x80
    float MoveScale;
    // private UnityEngine.Vector3 MoveThrottle
    // Offset: 0x84
    UnityEngine::Vector3 MoveThrottle;
    // private System.Single FallSpeed
    // Offset: 0x90
    float FallSpeed;
    // private System.Nullable`1<OVRPose> InitialPose
    // Offset: 0x94
    System::Nullable_1<GlobalNamespace::OVRPose> InitialPose;
    // private System.Single <InitialYRotation>k__BackingField
    // Offset: 0xB4
    float InitialYRotation;
    // private System.Single MoveScaleMultiplier
    // Offset: 0xB8
    float MoveScaleMultiplier;
    // private System.Single RotationScaleMultiplier
    // Offset: 0xBC
    float RotationScaleMultiplier;
    // private System.Boolean SkipMouseRotation
    // Offset: 0xC0
    bool SkipMouseRotation;
    // private System.Boolean HaltUpdateMovement
    // Offset: 0xC1
    bool HaltUpdateMovement;
    // private System.Boolean prevHatLeft
    // Offset: 0xC2
    bool prevHatLeft;
    // private System.Boolean prevHatRight
    // Offset: 0xC3
    bool prevHatRight;
    // private System.Single SimulationRate
    // Offset: 0xC4
    float SimulationRate;
    // private System.Single buttonRotation
    // Offset: 0xC8
    float buttonRotation;
    // private System.Boolean ReadyToSnapTurn
    // Offset: 0xCC
    bool ReadyToSnapTurn;
    // private System.Boolean playerControllerEnabled
    // Offset: 0xCD
    bool playerControllerEnabled;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_TransformUpdated(System.Action`1<UnityEngine.Transform> value)
    // Offset: 0xEF7DC0
    void add_TransformUpdated(System::Action_1<UnityEngine::Transform*>* value);
    // public System.Void remove_TransformUpdated(System.Action`1<UnityEngine.Transform> value)
    // Offset: 0xEF7E64
    void remove_TransformUpdated(System::Action_1<UnityEngine::Transform*>* value);
    // public System.Void add_CameraUpdated(System.Action value)
    // Offset: 0xEF7F08
    void add_CameraUpdated(System::Action* value);
    // public System.Void remove_CameraUpdated(System.Action value)
    // Offset: 0xEF7FAC
    void remove_CameraUpdated(System::Action* value);
    // public System.Void add_PreCharacterMove(System.Action value)
    // Offset: 0xEF8050
    void add_PreCharacterMove(System::Action* value);
    // public System.Void remove_PreCharacterMove(System.Action value)
    // Offset: 0xEF80F4
    void remove_PreCharacterMove(System::Action* value);
    // public System.Single get_InitialYRotation()
    // Offset: 0xEF8198
    float get_InitialYRotation();
    // private System.Void set_InitialYRotation(System.Single value)
    // Offset: 0xEF81A0
    void set_InitialYRotation(float value);
    // private System.Void Start()
    // Offset: 0xEF81A8
    void Start();
    // private System.Void Awake()
    // Offset: 0xEF827C
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0xEF8454
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xEF8458
    void OnDisable();
    // private System.Void Update()
    // Offset: 0xEF85DC
    void Update();
    // protected System.Void UpdateController()
    // Offset: 0xEF87C8
    void UpdateController();
    // public System.Void UpdateMovement()
    // Offset: 0xEF9054
    void UpdateMovement();
    // public System.Void UpdateTransform(OVRCameraRig rig)
    // Offset: 0xEF9FE8
    void UpdateTransform(GlobalNamespace::OVRCameraRig* rig);
    // public System.Boolean Jump()
    // Offset: 0xEFA194
    bool Jump();
    // public System.Void Stop()
    // Offset: 0xEFA298
    void Stop();
    // public System.Void GetMoveScaleMultiplier(ref System.Single moveScaleMultiplier)
    // Offset: 0xEFA32C
    void GetMoveScaleMultiplier(float& moveScaleMultiplier);
    // public System.Void SetMoveScaleMultiplier(System.Single moveScaleMultiplier)
    // Offset: 0xEFA338
    void SetMoveScaleMultiplier(float moveScaleMultiplier);
    // public System.Void GetRotationScaleMultiplier(ref System.Single rotationScaleMultiplier)
    // Offset: 0xEFA340
    void GetRotationScaleMultiplier(float& rotationScaleMultiplier);
    // public System.Void SetRotationScaleMultiplier(System.Single rotationScaleMultiplier)
    // Offset: 0xEFA34C
    void SetRotationScaleMultiplier(float rotationScaleMultiplier);
    // public System.Void GetSkipMouseRotation(ref System.Boolean skipMouseRotation)
    // Offset: 0xEFA354
    void GetSkipMouseRotation(bool& skipMouseRotation);
    // public System.Void SetSkipMouseRotation(System.Boolean skipMouseRotation)
    // Offset: 0xEFA360
    void SetSkipMouseRotation(bool skipMouseRotation);
    // public System.Void GetHaltUpdateMovement(ref System.Boolean haltUpdateMovement)
    // Offset: 0xEFA36C
    void GetHaltUpdateMovement(bool& haltUpdateMovement);
    // public System.Void SetHaltUpdateMovement(System.Boolean haltUpdateMovement)
    // Offset: 0xEFA378
    void SetHaltUpdateMovement(bool haltUpdateMovement);
    // public System.Void ResetOrientation()
    // Offset: 0xEFA384
    void ResetOrientation();
    // public System.Void .ctor()
    // Offset: 0xEFA484
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRPlayerController* New_ctor();
  }; // OVRPlayerController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlayerController*, "", "OVRPlayerController");
#pragma pack(pop)
