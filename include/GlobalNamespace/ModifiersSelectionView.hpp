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
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ModifiersSelectionView
  class ModifiersSelectionView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ModifiersSelectionView::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // private GameplayModifierInfoListItemsList _modifierInfoList
    // Offset: 0x18
    GlobalNamespace::GameplayModifierInfoListItemsList* modifierInfoList;
    // private TMPro.TextMeshProUGUI _noModifiersText
    // Offset: 0x20
    TMPro::TextMeshProUGUI* noModifiersText;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x28
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0xFC6F60
    void SetGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void .ctor()
    // Offset: 0xFC70C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ModifiersSelectionView* New_ctor();
  }; // ModifiersSelectionView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ModifiersSelectionView*, "", "ModifiersSelectionView");
#pragma pack(pop)
