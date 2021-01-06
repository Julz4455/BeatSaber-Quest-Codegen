// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionObject
  class InteractionObject;
  // Forward declaring type: Poser
  class Poser;
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: InteractionTarget
  class InteractionTarget;
  // Forward declaring type: InteractionSystem
  class InteractionSystem;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xC9
  // Autogenerated type: RootMotion.FinalIK.InteractionEffector
  // [] Offset: FFFFFFFF
  class InteractionEffector : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDB7308
    // private RootMotion.FinalIK.FullBodyBipedEffector <effectorType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedEffector) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDB7318
    // private System.Boolean <isPaused>k__BackingField
    // Size: 0x1
    // Offset: 0x14
    bool isPaused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPaused and: interactionObject
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDB7328
    // private RootMotion.FinalIK.InteractionObject <interactionObject>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    RootMotion::FinalIK::InteractionObject* interactionObject;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionObject*) == 0x8);
    // private RootMotion.FinalIK.Poser poser
    // Size: 0x8
    // Offset: 0x20
    RootMotion::FinalIK::Poser* poser;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::Poser*) == 0x8);
    // private RootMotion.FinalIK.IKEffector effector
    // Size: 0x8
    // Offset: 0x28
    RootMotion::FinalIK::IKEffector* effector;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::IKEffector*) == 0x8);
    // private System.Single timer
    // Size: 0x4
    // Offset: 0x30
    float timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single length
    // Size: 0x4
    // Offset: 0x34
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single weight
    // Size: 0x4
    // Offset: 0x38
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single fadeInSpeed
    // Size: 0x4
    // Offset: 0x3C
    float fadeInSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPositionWeight
    // Size: 0x4
    // Offset: 0x40
    float defaultPositionWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultRotationWeight
    // Size: 0x4
    // Offset: 0x44
    float defaultRotationWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPull
    // Size: 0x4
    // Offset: 0x48
    float defaultPull;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultReach
    // Size: 0x4
    // Offset: 0x4C
    float defaultReach;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPush
    // Size: 0x4
    // Offset: 0x50
    float defaultPush;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultPushParent
    // Size: 0x4
    // Offset: 0x54
    float defaultPushParent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single defaultBendGoalWeight
    // Size: 0x4
    // Offset: 0x58
    float defaultBendGoalWeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single resetTimer
    // Size: 0x4
    // Offset: 0x5C
    float resetTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean positionWeightUsed
    // Size: 0x1
    // Offset: 0x60
    bool positionWeightUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean rotationWeightUsed
    // Size: 0x1
    // Offset: 0x61
    bool rotationWeightUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pullUsed
    // Size: 0x1
    // Offset: 0x62
    bool pullUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean reachUsed
    // Size: 0x1
    // Offset: 0x63
    bool reachUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pushUsed
    // Size: 0x1
    // Offset: 0x64
    bool pushUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pushParentUsed
    // Size: 0x1
    // Offset: 0x65
    bool pushParentUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean bendGoalWeightUsed
    // Size: 0x1
    // Offset: 0x66
    bool bendGoalWeightUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pickedUp
    // Size: 0x1
    // Offset: 0x67
    bool pickedUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean defaults
    // Size: 0x1
    // Offset: 0x68
    bool defaults;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean pickUpOnPostFBBIK
    // Size: 0x1
    // Offset: 0x69
    bool pickUpOnPostFBBIK;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: pickUpOnPostFBBIK and: pickUpPosition
    char __padding26[0x2] = {};
    // private UnityEngine.Vector3 pickUpPosition
    // Size: 0xC
    // Offset: 0x6C
    UnityEngine::Vector3 pickUpPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 pausePositionRelative
    // Size: 0xC
    // Offset: 0x78
    UnityEngine::Vector3 pausePositionRelative;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion pickUpRotation
    // Size: 0x10
    // Offset: 0x84
    UnityEngine::Quaternion pickUpRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion pauseRotationRelative
    // Size: 0x10
    // Offset: 0x94
    UnityEngine::Quaternion pauseRotationRelative;
    // Field size check
    static_assert(sizeof(UnityEngine::Quaternion) == 0x10);
    // Padding between fields: pauseRotationRelative and: interactionTarget
    char __padding30[0x4] = {};
    // private RootMotion.FinalIK.InteractionTarget interactionTarget
    // Size: 0x8
    // Offset: 0xA8
    RootMotion::FinalIK::InteractionTarget* interactionTarget;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionTarget*) == 0x8);
    // private UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0xB0
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private System.Collections.Generic.List`1<System.Boolean> triggered
    // Size: 0x8
    // Offset: 0xB8
    System::Collections::Generic::List_1<bool>* triggered;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<bool>*) == 0x8);
    // private RootMotion.FinalIK.InteractionSystem interactionSystem
    // Size: 0x8
    // Offset: 0xC0
    RootMotion::FinalIK::InteractionSystem* interactionSystem;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionSystem*) == 0x8);
    // private System.Boolean started
    // Size: 0x1
    // Offset: 0xC8
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InteractionEffector
    InteractionEffector(RootMotion::FinalIK::FullBodyBipedEffector effectorType_ = {}, bool isPaused_ = {}, RootMotion::FinalIK::InteractionObject* interactionObject_ = {}, RootMotion::FinalIK::Poser* poser_ = {}, RootMotion::FinalIK::IKEffector* effector_ = {}, float timer_ = {}, float length_ = {}, float weight_ = {}, float fadeInSpeed_ = {}, float defaultPositionWeight_ = {}, float defaultRotationWeight_ = {}, float defaultPull_ = {}, float defaultReach_ = {}, float defaultPush_ = {}, float defaultPushParent_ = {}, float defaultBendGoalWeight_ = {}, float resetTimer_ = {}, bool positionWeightUsed_ = {}, bool rotationWeightUsed_ = {}, bool pullUsed_ = {}, bool reachUsed_ = {}, bool pushUsed_ = {}, bool pushParentUsed_ = {}, bool bendGoalWeightUsed_ = {}, bool pickedUp_ = {}, bool defaults_ = {}, bool pickUpOnPostFBBIK_ = {}, UnityEngine::Vector3 pickUpPosition_ = {}, UnityEngine::Vector3 pausePositionRelative_ = {}, UnityEngine::Quaternion pickUpRotation_ = {}, UnityEngine::Quaternion pauseRotationRelative_ = {}, RootMotion::FinalIK::InteractionTarget* interactionTarget_ = {}, UnityEngine::Transform* target_ = {}, System::Collections::Generic::List_1<bool>* triggered_ = {}, RootMotion::FinalIK::InteractionSystem* interactionSystem_ = {}, bool started_ = {}) noexcept : effectorType{effectorType_}, isPaused{isPaused_}, interactionObject{interactionObject_}, poser{poser_}, effector{effector_}, timer{timer_}, length{length_}, weight{weight_}, fadeInSpeed{fadeInSpeed_}, defaultPositionWeight{defaultPositionWeight_}, defaultRotationWeight{defaultRotationWeight_}, defaultPull{defaultPull_}, defaultReach{defaultReach_}, defaultPush{defaultPush_}, defaultPushParent{defaultPushParent_}, defaultBendGoalWeight{defaultBendGoalWeight_}, resetTimer{resetTimer_}, positionWeightUsed{positionWeightUsed_}, rotationWeightUsed{rotationWeightUsed_}, pullUsed{pullUsed_}, reachUsed{reachUsed_}, pushUsed{pushUsed_}, pushParentUsed{pushParentUsed_}, bendGoalWeightUsed{bendGoalWeightUsed_}, pickedUp{pickedUp_}, defaults{defaults_}, pickUpOnPostFBBIK{pickUpOnPostFBBIK_}, pickUpPosition{pickUpPosition_}, pausePositionRelative{pausePositionRelative_}, pickUpRotation{pickUpRotation_}, pauseRotationRelative{pauseRotationRelative_}, interactionTarget{interactionTarget_}, target{target_}, triggered{triggered_}, interactionSystem{interactionSystem_}, started{started_} {}
    // public RootMotion.FinalIK.FullBodyBipedEffector get_effectorType()
    // Offset: 0x17E732C
    RootMotion::FinalIK::FullBodyBipedEffector get_effectorType();
    // private System.Void set_effectorType(RootMotion.FinalIK.FullBodyBipedEffector value)
    // Offset: 0x17E7334
    void set_effectorType(RootMotion::FinalIK::FullBodyBipedEffector value);
    // public System.Boolean get_isPaused()
    // Offset: 0x17E733C
    bool get_isPaused();
    // private System.Void set_isPaused(System.Boolean value)
    // Offset: 0x17E7344
    void set_isPaused(bool value);
    // public RootMotion.FinalIK.InteractionObject get_interactionObject()
    // Offset: 0x17E7350
    RootMotion::FinalIK::InteractionObject* get_interactionObject();
    // private System.Void set_interactionObject(RootMotion.FinalIK.InteractionObject value)
    // Offset: 0x17E7358
    void set_interactionObject(RootMotion::FinalIK::InteractionObject* value);
    // public System.Boolean get_inInteraction()
    // Offset: 0x17E7360
    bool get_inInteraction();
    // public System.Void .ctor(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17E73D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionEffector* New_ctor(RootMotion::FinalIK::FullBodyBipedEffector effectorType) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("RootMotion::FinalIK").WithContext("InteractionEffector").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionEffector*, creationType>(effectorType)));
    }
    // public System.Void Initiate(RootMotion.FinalIK.InteractionSystem interactionSystem)
    // Offset: 0x17E7460
    void Initiate(RootMotion::FinalIK::InteractionSystem* interactionSystem);
    // private System.Void StoreDefaults()
    // Offset: 0x17E7530
    void StoreDefaults();
    // public System.Boolean ResetToDefaults(System.Single speed)
    // Offset: 0x17E76A8
    bool ResetToDefaults(float speed);
    // public System.Boolean Pause()
    // Offset: 0x17E7B58
    bool Pause();
    // public System.Boolean Resume()
    // Offset: 0x17E7F10
    bool Resume();
    // public System.Boolean Start(RootMotion.FinalIK.InteractionObject interactionObject, System.String tag, System.Single fadeInTime, System.Boolean interrupt)
    // Offset: 0x17E7F64
    bool Start(RootMotion::FinalIK::InteractionObject* interactionObject, ::Il2CppString* tag, float fadeInTime, bool interrupt);
    // public System.Void Update(UnityEngine.Transform root, System.Single speed)
    // Offset: 0x17E8B14
    void Update(UnityEngine::Transform* root, float speed);
    // public System.Single get_progress()
    // Offset: 0x17E9E10
    float get_progress();
    // private System.Void TriggerUntriggeredEvents(System.Boolean checkTime, out System.Boolean pickUp, out System.Boolean pause)
    // Offset: 0x17E963C
    void TriggerUntriggeredEvents(bool checkTime, bool& pickUp, bool& pause);
    // private System.Void PickUp(UnityEngine.Transform root)
    // Offset: 0x17E9864
    void PickUp(UnityEngine::Transform* root);
    // public System.Boolean Stop()
    // Offset: 0x17E9CA0
    bool Stop();
    // public System.Void OnPostFBBIK()
    // Offset: 0x17EA2EC
    void OnPostFBBIK();
  }; // RootMotion.FinalIK.InteractionEffector
  static check_size<sizeof(InteractionEffector), 200 + sizeof(bool)> __RootMotion_FinalIK_InteractionEffectorSizeCheck;
  static_assert(sizeof(InteractionEffector) == 0xC9);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionEffector*, "RootMotion.FinalIK", "InteractionEffector");
#pragma pack(pop)
