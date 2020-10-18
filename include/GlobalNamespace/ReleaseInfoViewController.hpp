// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
  // Forward declaring type: LocalizedTextAsset
  class LocalizedTextAsset;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextPageScrollView
  class TextPageScrollView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ReleaseInfoViewController
  class ReleaseInfoViewController : public HMUI::ViewController {
    public:
    // private MainSettingsModelSO _mainSettingsModel
    // Offset: 0x70
    GlobalNamespace::MainSettingsModelSO* mainSettingsModel;
    // private HMUI.TextPageScrollView _textPageScrollView
    // Offset: 0x78
    HMUI::TextPageScrollView* textPageScrollView;
    // private LocalizedTextAsset _releaseNotesLocalizedTextAsset
    // Offset: 0x80
    GlobalNamespace::LocalizedTextAsset* releaseNotesLocalizedTextAsset;
    // private LocalizedTextAsset _firstLocalizedTextAsset
    // Offset: 0x88
    GlobalNamespace::LocalizedTextAsset* firstLocalizedTextAsset;
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xF780E8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0xF78154
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ReleaseInfoViewController* New_ctor();
  }; // ReleaseInfoViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReleaseInfoViewController*, "", "ReleaseInfoViewController");
#pragma pack(pop)
