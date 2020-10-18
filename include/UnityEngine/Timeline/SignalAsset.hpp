// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.SignalAsset
  class SignalAsset : public UnityEngine::ScriptableObject {
    public:
    // Get static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
    static System::Action_1<UnityEngine::Timeline::SignalAsset*>* _get_OnEnableCallback();
    // Set static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
    static void _set_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value);
    // static System.Void add_OnEnableCallback(System.Action`1<UnityEngine.Timeline.SignalAsset> value)
    // Offset: 0x16233C4
    static void add_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value);
    // static System.Void remove_OnEnableCallback(System.Action`1<UnityEngine.Timeline.SignalAsset> value)
    // Offset: 0x1623478
    static void remove_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value);
    // private System.Void OnEnable()
    // Offset: 0x162352C
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x16235A0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SignalAsset* New_ctor();
  }; // UnityEngine.Timeline.SignalAsset
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalAsset*, "UnityEngine.Timeline", "SignalAsset");
#pragma pack(pop)
