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
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ClickButtonWithCommandArgument
  class ClickButtonWithCommandArgument : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ClickButtonWithCommandArgument::$Start$d__2
    class $Start$d__2;
    // private System.String _argument
    // Offset: 0x18
    ::Il2CppString* argument;
    // private UnityEngine.UI.Button _button
    // Offset: 0x20
    UnityEngine::UI::Button* button;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x10924F4
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x109259C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ClickButtonWithCommandArgument* New_ctor();
  }; // ClickButtonWithCommandArgument
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ClickButtonWithCommandArgument*, "", "ClickButtonWithCommandArgument");
#pragma pack(pop)
