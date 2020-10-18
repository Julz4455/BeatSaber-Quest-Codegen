// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TableCellWithSeparator
#include "GlobalNamespace/TableCellWithSeparator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ResultsTableCell
  class ResultsTableCell : public GlobalNamespace::TableCellWithSeparator {
    public:
    // private UnityEngine.GameObject _border
    // Offset: 0x58
    UnityEngine::GameObject* border;
    // private TMPro.TextMeshProUGUI _orderText
    // Offset: 0x60
    TMPro::TextMeshProUGUI* orderText;
    // private TMPro.TextMeshProUGUI _nameText
    // Offset: 0x68
    TMPro::TextMeshProUGUI* nameText;
    // private TMPro.TextMeshProUGUI _scoreText
    // Offset: 0x70
    TMPro::TextMeshProUGUI* scoreText;
    // private TMPro.TextMeshProUGUI _rankText
    // Offset: 0x78
    TMPro::TextMeshProUGUI* rankText;
    // public System.Void SetData(System.Int32 order, IConnectedPlayer connectedPlayer, LevelCompletionResults levelCompletionResults)
    // Offset: 0xF78340
    void SetData(int order, GlobalNamespace::IConnectedPlayer* connectedPlayer, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0xF78660
    // Implemented from: TableCellWithSeparator
    // Base method: System.Void TableCellWithSeparator::.ctor()
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ResultsTableCell* New_ctor();
  }; // ResultsTableCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsTableCell*, "", "ResultsTableCell");
#pragma pack(pop)
