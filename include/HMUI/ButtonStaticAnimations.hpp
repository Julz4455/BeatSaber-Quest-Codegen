// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.NoTransitionsButton
#include "HMUI/NoTransitionsButton.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ButtonStaticAnimations
  class ButtonStaticAnimations : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.NoTransitionsButton _button
    // Offset: 0x18
    HMUI::NoTransitionsButton* button;
    // private UnityEngine.AnimationClip _normalClip
    // Offset: 0x20
    UnityEngine::AnimationClip* normalClip;
    // private UnityEngine.AnimationClip _highlightedClip
    // Offset: 0x28
    UnityEngine::AnimationClip* highlightedClip;
    // private UnityEngine.AnimationClip _pressedClip
    // Offset: 0x30
    UnityEngine::AnimationClip* pressedClip;
    // private UnityEngine.AnimationClip _disabledClip
    // Offset: 0x38
    UnityEngine::AnimationClip* disabledClip;
    // private System.Boolean _didStart
    // Offset: 0x40
    bool didStart;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x11B0800
    void Awake();
    // protected System.Void Start()
    // Offset: 0x11B0894
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x11B09C8
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x11B09E4
    void OnDestroy();
    // private System.Void HandleButtonSelectionStateDidChange(HMUI.NoTransitionsButton/SelectionState state)
    // Offset: 0x11B08B8
    void HandleButtonSelectionStateDidChange(HMUI::NoTransitionsButton::SelectionState state);
    // public System.Void .ctor()
    // Offset: 0x11B0AC0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ButtonStaticAnimations* New_ctor();
  }; // HMUI.ButtonStaticAnimations
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonStaticAnimations*, "HMUI", "ButtonStaticAnimations");
#pragma pack(pop)
