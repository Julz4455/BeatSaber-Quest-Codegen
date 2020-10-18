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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShowHideAnimationController
  class ShowHideAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ShowHideAnimationController::$DeactivateSelfAfterDelayCoroutine$d__9
    class $DeactivateSelfAfterDelayCoroutine$d__9;
    // public UnityEngine.Animator _animator
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // public System.Boolean _deactivateSelfAfterDelay
    // Offset: 0x20
    bool deactivateSelfAfterDelay;
    // public System.Single _deactivationDelay
    // Offset: 0x24
    float deactivationDelay;
    // private System.Boolean _show
    // Offset: 0x28
    bool show;
    // private System.Int32 _showAnimatorParam
    // Offset: 0x2C
    int showAnimatorParam;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_Show(System.Boolean value)
    // Offset: 0x10A450C
    void set_Show(bool value);
    // public System.Boolean get_Show()
    // Offset: 0x10A466C
    bool get_Show();
    // protected System.Void Awake()
    // Offset: 0x10A4674
    void Awake();
    // private System.Collections.IEnumerator DeactivateSelfAfterDelayCoroutine(System.Single delay)
    // Offset: 0x10A46F0
    System::Collections::IEnumerator* DeactivateSelfAfterDelayCoroutine(float delay);
    // public System.Void .ctor()
    // Offset: 0x10A47A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ShowHideAnimationController* New_ctor();
  }; // ShowHideAnimationController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShowHideAnimationController*, "", "ShowHideAnimationController");
#pragma pack(pop)
