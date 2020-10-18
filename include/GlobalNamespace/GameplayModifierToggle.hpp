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
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifierToggle
  class GameplayModifierToggle : public UnityEngine::MonoBehaviour {
    public:
    // private GameplayModifierParamsSO _gameplayModifier
    // Offset: 0x18
    GlobalNamespace::GameplayModifierParamsSO* gameplayModifier;
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* nameText;
    // private HMUI.HoverHint _hoverHint
    // Offset: 0x28
    HMUI::HoverHint* hoverHint;
    // private UnityEngine.UI.Image _icon
    // Offset: 0x30
    UnityEngine::UI::Image* icon;
    // private UnityEngine.UI.Toggle _toggle
    // Offset: 0x38
    UnityEngine::UI::Toggle* toggle;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.UI.Toggle get_toggle()
    // Offset: 0xEC8644
    UnityEngine::UI::Toggle* get_toggle();
    // public GameplayModifierParamsSO get_gameplayModifier()
    // Offset: 0xEC864C
    GlobalNamespace::GameplayModifierParamsSO* get_gameplayModifier();
    // protected System.Void Start()
    // Offset: 0xEC8654
    void Start();
    // public System.Void .ctor()
    // Offset: 0xEC8794
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayModifierToggle* New_ctor();
  }; // GameplayModifierToggle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierToggle*, "", "GameplayModifierToggle");
#pragma pack(pop)
