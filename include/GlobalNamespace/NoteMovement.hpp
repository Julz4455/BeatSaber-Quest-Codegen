// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MovementPhase because it is already included!
  // Forward declaring type: NoteFloorMovement
  class NoteFloorMovement;
  // Forward declaring type: NoteJump
  class NoteJump;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x84
  #pragma pack(push, 1)
  // Autogenerated type: NoteMovement
  // [] Offset: FFFFFFFF
  class NoteMovement : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteMovement::MovementPhase
    struct MovementPhase;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: NoteMovement/MovementPhase
    // [] Offset: FFFFFFFF
    struct MovementPhase/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: MovementPhase
      constexpr MovementPhase(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NoteMovement/MovementPhase None
      static constexpr const int None = 0;
      // Get static field: static public NoteMovement/MovementPhase None
      static GlobalNamespace::NoteMovement::MovementPhase _get_None();
      // Set static field: static public NoteMovement/MovementPhase None
      static void _set_None(GlobalNamespace::NoteMovement::MovementPhase value);
      // static field const value: static public NoteMovement/MovementPhase MovingOnTheFloor
      static constexpr const int MovingOnTheFloor = 1;
      // Get static field: static public NoteMovement/MovementPhase MovingOnTheFloor
      static GlobalNamespace::NoteMovement::MovementPhase _get_MovingOnTheFloor();
      // Set static field: static public NoteMovement/MovementPhase MovingOnTheFloor
      static void _set_MovingOnTheFloor(GlobalNamespace::NoteMovement::MovementPhase value);
      // static field const value: static public NoteMovement/MovementPhase Jumping
      static constexpr const int Jumping = 2;
      // Get static field: static public NoteMovement/MovementPhase Jumping
      static GlobalNamespace::NoteMovement::MovementPhase _get_Jumping();
      // Set static field: static public NoteMovement/MovementPhase Jumping
      static void _set_Jumping(GlobalNamespace::NoteMovement::MovementPhase value);
    }; // NoteMovement/MovementPhase
    #pragma pack(pop)
    static check_size<sizeof(NoteMovement::MovementPhase), 0 + sizeof(int)> __GlobalNamespace_NoteMovement_MovementPhaseSizeCheck;
    static_assert(sizeof(NoteMovement::MovementPhase) == 0x4);
    // private NoteFloorMovement _floorMovement
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteFloorMovement* floorMovement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteFloorMovement*) == 0x8);
    // private NoteJump _jump
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteJump* jump;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteJump*) == 0x8);
    // [SpaceAttribute] Offset: 0xD37DAC
    // private System.Single _zOffset
    // Size: 0x4
    // Offset: 0x28
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: zOffset and: didInitEvent
    char __padding2[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD37DE4
    // private System.Action didInitEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* didInitEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37DF4
    // private System.Action noteDidStartJumpEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* noteDidStartJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37E04
    // private System.Action noteDidFinishJumpEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* noteDidFinishJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37E14
    // private System.Action noteDidPassMissedMarkerEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* noteDidPassMissedMarkerEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37E24
    // private System.Action noteDidPassHalfJumpEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action* noteDidPassHalfJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37E34
    // private System.Action`1<NoteMovement> noteDidPassJumpThreeQuartersEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<GlobalNamespace::NoteMovement*>* noteDidPassJumpThreeQuartersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteMovement*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37E44
    // private System.Action noteDidMoveInJumpPhaseEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action* noteDidMoveInJumpPhaseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37E54
    // private NoteMovement/MovementPhase <movementPhase>k__BackingField
    // Size: 0x4
    // Offset: 0x68
    GlobalNamespace::NoteMovement::MovementPhase movementPhase;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteMovement::MovementPhase) == 0x4);
    // private UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _prevPosition
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 prevPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: NoteMovement
    NoteMovement(GlobalNamespace::NoteFloorMovement* floorMovement_ = {}, GlobalNamespace::NoteJump* jump_ = {}, float zOffset_ = {}, System::Action* didInitEvent_ = {}, System::Action* noteDidStartJumpEvent_ = {}, System::Action* noteDidFinishJumpEvent_ = {}, System::Action* noteDidPassMissedMarkerEvent_ = {}, System::Action* noteDidPassHalfJumpEvent_ = {}, System::Action_1<GlobalNamespace::NoteMovement*>* noteDidPassJumpThreeQuartersEvent_ = {}, System::Action* noteDidMoveInJumpPhaseEvent_ = {}, GlobalNamespace::NoteMovement::MovementPhase movementPhase_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Vector3 prevPosition_ = {}) noexcept : floorMovement{floorMovement_}, jump{jump_}, zOffset{zOffset_}, didInitEvent{didInitEvent_}, noteDidStartJumpEvent{noteDidStartJumpEvent_}, noteDidFinishJumpEvent{noteDidFinishJumpEvent_}, noteDidPassMissedMarkerEvent{noteDidPassMissedMarkerEvent_}, noteDidPassHalfJumpEvent{noteDidPassHalfJumpEvent_}, noteDidPassJumpThreeQuartersEvent{noteDidPassJumpThreeQuartersEvent_}, noteDidMoveInJumpPhaseEvent{noteDidMoveInJumpPhaseEvent_}, movementPhase{movementPhase_}, position{position_}, prevPosition{prevPosition_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didInitEvent(System.Action value)
    // Offset: 0x10F2A30
    void add_didInitEvent(System::Action* value);
    // public System.Void remove_didInitEvent(System.Action value)
    // Offset: 0x10F2AD4
    void remove_didInitEvent(System::Action* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action value)
    // Offset: 0x10F2B78
    void add_noteDidStartJumpEvent(System::Action* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action value)
    // Offset: 0x10F2C1C
    void remove_noteDidStartJumpEvent(System::Action* value);
    // public System.Void add_noteDidFinishJumpEvent(System.Action value)
    // Offset: 0x10F2CC0
    void add_noteDidFinishJumpEvent(System::Action* value);
    // public System.Void remove_noteDidFinishJumpEvent(System.Action value)
    // Offset: 0x10F2D64
    void remove_noteDidFinishJumpEvent(System::Action* value);
    // public System.Void add_noteDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0x10F2E08
    void add_noteDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void remove_noteDidPassMissedMarkerEvent(System.Action value)
    // Offset: 0x10F2EAC
    void remove_noteDidPassMissedMarkerEvent(System::Action* value);
    // public System.Void add_noteDidPassHalfJumpEvent(System.Action value)
    // Offset: 0x10F2F50
    void add_noteDidPassHalfJumpEvent(System::Action* value);
    // public System.Void remove_noteDidPassHalfJumpEvent(System.Action value)
    // Offset: 0x10F2FF4
    void remove_noteDidPassHalfJumpEvent(System::Action* value);
    // public System.Void add_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteMovement> value)
    // Offset: 0x10F3098
    void add_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement*>* value);
    // public System.Void remove_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteMovement> value)
    // Offset: 0x10F313C
    void remove_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteMovement*>* value);
    // public System.Void add_noteDidMoveInJumpPhaseEvent(System.Action value)
    // Offset: 0x10F31E0
    void add_noteDidMoveInJumpPhaseEvent(System::Action* value);
    // public System.Void remove_noteDidMoveInJumpPhaseEvent(System.Action value)
    // Offset: 0x10F3284
    void remove_noteDidMoveInJumpPhaseEvent(System::Action* value);
    // public NoteMovement/MovementPhase get_movementPhase()
    // Offset: 0x10F3328
    GlobalNamespace::NoteMovement::MovementPhase get_movementPhase();
    // private System.Void set_movementPhase(NoteMovement/MovementPhase value)
    // Offset: 0x10F3330
    void set_movementPhase(GlobalNamespace::NoteMovement::MovementPhase value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x10F3338
    UnityEngine::Vector3 get_position();
    // public UnityEngine.Vector3 get_prevPosition()
    // Offset: 0x10F3344
    UnityEngine::Vector3 get_prevPosition();
    // public UnityEngine.Quaternion get_worldRotation()
    // Offset: 0x10F3350
    UnityEngine::Quaternion get_worldRotation();
    // public UnityEngine.Quaternion get_inverseWorldRotation()
    // Offset: 0x10F3370
    UnityEngine::Quaternion get_inverseWorldRotation();
    // public UnityEngine.Vector3 get_moveEndPos()
    // Offset: 0x10F3390
    UnityEngine::Vector3 get_moveEndPos();
    // public System.Single get_moveStartTime()
    // Offset: 0x10F33B0
    float get_moveStartTime();
    // public System.Single get_moveDuration()
    // Offset: 0x10F33CC
    float get_moveDuration();
    // public UnityEngine.Vector3 get_beatPos()
    // Offset: 0x10F33E8
    UnityEngine::Vector3 get_beatPos();
    // public System.Single get_jumpDuration()
    // Offset: 0x10F3400
    float get_jumpDuration();
    // public UnityEngine.Vector3 get_jumpMoveVec()
    // Offset: 0x10F341C
    UnityEngine::Vector3 get_jumpMoveVec();
    // public System.Single get_distanceToPlayer()
    // Offset: 0x10F343C
    float get_distanceToPlayer();
    // public System.Void Init(System.Single beatTime, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single flipYSide, System.Single endRotation)
    // Offset: 0x10F3474
    void Init(float beatTime, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float flipYSide, float endRotation);
    // protected System.Void Awake()
    // Offset: 0x10F35DC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x10F3758
    void OnDestroy();
    // private System.Void HandleFloorMovementDidFinish()
    // Offset: 0x10F3948
    void HandleFloorMovementDidFinish();
    // private System.Void HandleNoteJumpDidFinish()
    // Offset: 0x10F399C
    void HandleNoteJumpDidFinish();
    // private System.Void HandleNoteJumpDidPassMissedMark()
    // Offset: 0x10F39B8
    void HandleNoteJumpDidPassMissedMark();
    // private System.Void HandleNoteJumpDidPassThreeQuarters(NoteJump noteJump)
    // Offset: 0x10F39CC
    void HandleNoteJumpDidPassThreeQuarters(GlobalNamespace::NoteJump* noteJump);
    // private System.Void HandleNoteJumpNoteJumpDidPassHalf()
    // Offset: 0x10F3A30
    void HandleNoteJumpNoteJumpDidPassHalf();
    // public System.Void ManualUpdate()
    // Offset: 0x10F3A44
    void ManualUpdate();
    // public System.Void .ctor()
    // Offset: 0x10F3AC4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteMovement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteMovement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteMovement*, creationType>()));
    }
  }; // NoteMovement
  #pragma pack(pop)
  static check_size<sizeof(NoteMovement), 120 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_NoteMovementSizeCheck;
  static_assert(sizeof(NoteMovement) == 0x84);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMovement*, "", "NoteMovement");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteMovement::MovementPhase, "", "NoteMovement/MovementPhase");
