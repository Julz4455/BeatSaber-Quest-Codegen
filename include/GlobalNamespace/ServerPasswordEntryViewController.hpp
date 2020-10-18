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
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ServerPasswordEntryViewController
  class ServerPasswordEntryViewController : public HMUI::ViewController {
    public:
    // private HMUI.InputFieldView _passwordInput
    // Offset: 0x70
    HMUI::InputFieldView* passwordInput;
    // private HMUI.UIKeyboard _uiKeyboard
    // Offset: 0x78
    HMUI::UIKeyboard* uiKeyboard;
    // private System.Action`2<INetworkPlayer,System.String> didFinishEvent
    // Offset: 0x80
    System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>* didFinishEvent;
    // private INetworkPlayer _selectedNetworkPlayer
    // Offset: 0x88
    GlobalNamespace::INetworkPlayer* selectedNetworkPlayer;
    // public System.Void add_didFinishEvent(System.Action`2<INetworkPlayer,System.String> value)
    // Offset: 0xEE99FC
    void add_didFinishEvent(System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<INetworkPlayer,System.String> value)
    // Offset: 0xEE9AA0
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::INetworkPlayer*, ::Il2CppString*>* value);
    // public System.Void Setup(INetworkPlayer selectedPlayer)
    // Offset: 0xEE9B44
    void Setup(GlobalNamespace::INetworkPlayer* selectedPlayer);
    // private System.Void HandleJoinClicked()
    // Offset: 0xEE9CCC
    void HandleJoinClicked();
    // private System.Void HandleUIKeyboardOkButtonWasPressed()
    // Offset: 0xEE9D40
    void HandleUIKeyboardOkButtonWasPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0xEE9B4C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0xEE9C14
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0xEE9DB4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ServerPasswordEntryViewController* New_ctor();
  }; // ServerPasswordEntryViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerPasswordEntryViewController*, "", "ServerPasswordEntryViewController");
#pragma pack(pop)
