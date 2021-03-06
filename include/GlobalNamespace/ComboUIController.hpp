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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x35
  #pragma pack(push, 1)
  // Autogenerated type: ComboUIController
  // [] Offset: FFFFFFFF
  class ComboUIController : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _comboText
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* comboText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // [InjectAttribute] Offset: 0xD39824
    // private readonly ScoreController _scoreController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreController*) == 0x8);
    // private System.Int32 _comboLostID
    // Size: 0x4
    // Offset: 0x30
    int comboLostID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _comboLost
    // Size: 0x1
    // Offset: 0x34
    bool comboLost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ComboUIController
    ComboUIController(TMPro::TextMeshProUGUI* comboText_ = {}, UnityEngine::Animator* animator_ = {}, GlobalNamespace::ScoreController* scoreController_ = {}, int comboLostID_ = {}, bool comboLost_ = {}) noexcept : comboText{comboText_}, animator{animator_}, scoreController{scoreController_}, comboLostID{comboLostID_}, comboLost{comboLost_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1042C3C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x1042E4C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1042E50
    void OnDisable();
    // private System.Void RegisterForEvents()
    // Offset: 0x1042CB8
    void RegisterForEvents();
    // private System.Void UnregisterFromEvents()
    // Offset: 0x1042E54
    void UnregisterFromEvents();
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0x1042F74
    void HandleComboDidChange(int combo);
    // private System.Void HandleComboBreakingEventHappened()
    // Offset: 0x1042FB8
    void HandleComboBreakingEventHappened();
    // public System.Void .ctor()
    // Offset: 0x1042FF0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComboUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ComboUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComboUIController*, creationType>()));
    }
  }; // ComboUIController
  #pragma pack(pop)
  static check_size<sizeof(ComboUIController), 52 + sizeof(bool)> __GlobalNamespace_ComboUIControllerSizeCheck;
  static_assert(sizeof(ComboUIController) == 0x35);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComboUIController*, "", "ComboUIController");
