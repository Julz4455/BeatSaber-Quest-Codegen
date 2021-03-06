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
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Quaternion because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x71
  #pragma pack(push, 1)
  // Autogenerated type: NoteController
  // [] Offset: FFFFFFFF
  class NoteController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteController::$DissolveCoroutine$d__71
    class $DissolveCoroutine$d__71;
    // protected NoteMovement _noteMovement
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::NoteMovement* noteMovement;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteMovement*) == 0x8);
    // protected UnityEngine.Transform _noteTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* noteTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD379C4
    // private System.Action`1<NoteController> didInitEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<GlobalNamespace::NoteController*>* didInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD379D4
    // private System.Action`1<NoteController> noteDidStartJumpEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::NoteController*>* noteDidStartJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD379E4
    // private System.Action`1<NoteController> noteDidFinishJumpEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::NoteController*>* noteDidFinishJumpEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD379F4
    // private System.Action`1<NoteController> noteDidPassJumpThreeQuartersEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<GlobalNamespace::NoteController*>* noteDidPassJumpThreeQuartersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37A04
    // private System.Action`2<NoteController,NoteCutInfo> noteWasCutEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* noteWasCutEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37A14
    // private System.Action`1<NoteController> noteWasMissedEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_1<GlobalNamespace::NoteController*>* noteWasMissedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37A24
    // private System.Action`2<NoteController,System.Single> noteDidStartDissolvingEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_2<GlobalNamespace::NoteController*, float>* noteDidStartDissolvingEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::NoteController*, float>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37A34
    // private System.Action`1<NoteController> noteDidDissolveEvent
    // Size: 0x8
    // Offset: 0x60
    System::Action_1<GlobalNamespace::NoteController*>* noteDidDissolveEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::NoteController*>*) == 0x8);
    // private NoteData _noteData
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::NoteData* noteData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteData*) == 0x8);
    // private System.Boolean _dissolving
    // Size: 0x1
    // Offset: 0x70
    bool dissolving;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NoteController
    NoteController(GlobalNamespace::NoteMovement* noteMovement_ = {}, UnityEngine::Transform* noteTransform_ = {}, System::Action_1<GlobalNamespace::NoteController*>* didInitEvent_ = {}, System::Action_1<GlobalNamespace::NoteController*>* noteDidStartJumpEvent_ = {}, System::Action_1<GlobalNamespace::NoteController*>* noteDidFinishJumpEvent_ = {}, System::Action_1<GlobalNamespace::NoteController*>* noteDidPassJumpThreeQuartersEvent_ = {}, System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* noteWasCutEvent_ = {}, System::Action_1<GlobalNamespace::NoteController*>* noteWasMissedEvent_ = {}, System::Action_2<GlobalNamespace::NoteController*, float>* noteDidStartDissolvingEvent_ = {}, System::Action_1<GlobalNamespace::NoteController*>* noteDidDissolveEvent_ = {}, GlobalNamespace::NoteData* noteData_ = {}, bool dissolving_ = {}) noexcept : noteMovement{noteMovement_}, noteTransform{noteTransform_}, didInitEvent{didInitEvent_}, noteDidStartJumpEvent{noteDidStartJumpEvent_}, noteDidFinishJumpEvent{noteDidFinishJumpEvent_}, noteDidPassJumpThreeQuartersEvent{noteDidPassJumpThreeQuartersEvent_}, noteWasCutEvent{noteWasCutEvent_}, noteWasMissedEvent{noteWasMissedEvent_}, noteDidStartDissolvingEvent{noteDidStartDissolvingEvent_}, noteDidDissolveEvent{noteDidDissolveEvent_}, noteData{noteData_}, dissolving{dissolving_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didInitEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8EB20
    void add_didInitEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_didInitEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8EBC4
    void remove_didInitEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8EC68
    void add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidStartJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8ED0C
    void remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidFinishJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8EDB0
    void add_noteDidFinishJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidFinishJumpEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8EE54
    void remove_noteDidFinishJumpEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8EEF8
    void add_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidPassJumpThreeQuartersEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8EF9C
    void remove_noteDidPassJumpThreeQuartersEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0xF8F040
    void add_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void remove_noteWasCutEvent(System.Action`2<NoteController,NoteCutInfo> value)
    // Offset: 0xF8F0E4
    void remove_noteWasCutEvent(System::Action_2<GlobalNamespace::NoteController*, GlobalNamespace::NoteCutInfo*>* value);
    // public System.Void add_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8F188
    void add_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteWasMissedEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8F22C
    void remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void add_noteDidStartDissolvingEvent(System.Action`2<NoteController,System.Single> value)
    // Offset: 0xF8F2D0
    void add_noteDidStartDissolvingEvent(System::Action_2<GlobalNamespace::NoteController*, float>* value);
    // public System.Void remove_noteDidStartDissolvingEvent(System.Action`2<NoteController,System.Single> value)
    // Offset: 0xF8F374
    void remove_noteDidStartDissolvingEvent(System::Action_2<GlobalNamespace::NoteController*, float>* value);
    // public System.Void add_noteDidDissolveEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8F418
    void add_noteDidDissolveEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public System.Void remove_noteDidDissolveEvent(System.Action`1<NoteController> value)
    // Offset: 0xF8F4BC
    void remove_noteDidDissolveEvent(System::Action_1<GlobalNamespace::NoteController*>* value);
    // public UnityEngine.Transform get_noteTransform()
    // Offset: 0xF8F560
    UnityEngine::Transform* get_noteTransform();
    // public UnityEngine.Quaternion get_worldRotation()
    // Offset: 0xF8F568
    UnityEngine::Quaternion get_worldRotation();
    // public UnityEngine.Quaternion get_inverseWorldRotation()
    // Offset: 0xF8F584
    UnityEngine::Quaternion get_inverseWorldRotation();
    // public System.Single get_moveStartTime()
    // Offset: 0xF8F5A0
    float get_moveStartTime();
    // public System.Single get_moveDuration()
    // Offset: 0xF8F5BC
    float get_moveDuration();
    // public System.Single get_jumpDuration()
    // Offset: 0xF8F5D8
    float get_jumpDuration();
    // public UnityEngine.Vector3 get_jumpMoveVec()
    // Offset: 0xF8F5F4
    UnityEngine::Vector3 get_jumpMoveVec();
    // public UnityEngine.Vector3 get_beatPos()
    // Offset: 0xF8F610
    UnityEngine::Vector3 get_beatPos();
    // public UnityEngine.Vector3 get_jumpStartPos()
    // Offset: 0xF8F62C
    UnityEngine::Vector3 get_jumpStartPos();
    // public NoteData get_noteData()
    // Offset: 0xF8F648
    GlobalNamespace::NoteData* get_noteData();
    // public UnityEngine.Vector3 get_moveVec()
    // Offset: 0xF8F650
    UnityEngine::Vector3 get_moveVec();
    // public System.Void set_hide(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_hide(bool value);
    // public System.Boolean get_hide()
    // Offset: 0xFFFFFFFF
    bool get_hide();
    // public System.Void set_pause(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_pause(bool value);
    // protected System.Void Awake()
    // Offset: 0xF8F730
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF8F880
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF8FA18
    void Update();
    // public System.Void ManualUpdate()
    // Offset: 0xF8FA24
    void ManualUpdate();
    // private System.Void HandleNoteDidStartJump()
    // Offset: 0xF8FA40
    void HandleNoteDidStartJump();
    // private System.Void HandleNoteDidFinishJump()
    // Offset: 0xF8FAB4
    void HandleNoteDidFinishJump();
    // private System.Void HandleNoteDidPassJumpThreeQuarters(NoteMovement noteMovement)
    // Offset: 0xF8FB30
    void HandleNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteMovement* noteMovement);
    // private System.Void HandleNoteDidPassMissedMarkerEvent()
    // Offset: 0xF8FBC0
    void HandleNoteDidPassMissedMarkerEvent();
    // protected System.Void NoteDidStartJump()
    // Offset: 0xF8FBDC
    void NoteDidStartJump();
    // protected System.Void NoteDidFinishJump()
    // Offset: 0xF8FBE0
    void NoteDidFinishJump();
    // protected System.Void NoteDidPassJumpThreeQuarters(NoteMovement noteMovement)
    // Offset: 0xF8FBE4
    void NoteDidPassJumpThreeQuarters(GlobalNamespace::NoteMovement* noteMovement);
    // protected System.Void NoteDidPassMissedMarker()
    // Offset: 0xF8FBE8
    void NoteDidPassMissedMarker();
    // protected System.Void NoteDidStartDissolving()
    // Offset: 0xF8FBEC
    void NoteDidStartDissolving();
    // protected System.Void SendNoteWasMissedEvent()
    // Offset: 0xF8FBF0
    void SendNoteWasMissedEvent();
    // protected System.Void SendNoteWasCutEvent(NoteCutInfo noteCutInfo)
    // Offset: 0xF8FC54
    void SendNoteWasCutEvent(GlobalNamespace::NoteCutInfo* noteCutInfo);
    // protected System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, System.Single endRotation)
    // Offset: 0xF8FCCC
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, float endRotation);
    // private System.Collections.IEnumerator DissolveCoroutine(System.Single duration)
    // Offset: 0xF8FE90
    System::Collections::IEnumerator* DissolveCoroutine(float duration);
    // public System.Void Dissolve(System.Single duration)
    // Offset: 0xF8FF48
    void Dissolve(float duration);
    // protected System.Void .ctor()
    // Offset: 0xF8FFAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteController*, creationType>()));
    }
  }; // NoteController
  #pragma pack(pop)
  static check_size<sizeof(NoteController), 112 + sizeof(bool)> __GlobalNamespace_NoteControllerSizeCheck;
  static_assert(sizeof(NoteController) == 0x71);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteController*, "", "NoteController");
