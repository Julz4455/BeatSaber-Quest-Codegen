// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_LoadLevel
#include "GlobalNamespace/SteamVR_LoadLevel.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVROverlay
  class CVROverlay;
  // Forward declaring type: CVRCompositor
  class CVRCompositor;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_LoadLevel/<LoadLevel>d__45
  class SteamVR_LoadLevel::$LoadLevel$d__45 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public SteamVR_LoadLevel <>4__this
    // Offset: 0x20
    GlobalNamespace::SteamVR_LoadLevel* $$4__this;
    // private Valve.VR.CVROverlay <overlay>5__2
    // Offset: 0x28
    Valve::VR::CVROverlay* $overlay$5__2;
    // private System.Boolean <fadedForeground>5__3
    // Offset: 0x30
    bool $fadedForeground$5__3;
    // private Valve.VR.CVRCompositor <compositor>5__4
    // Offset: 0x38
    Valve::VR::CVRCompositor* $compositor$5__4;
    // private SteamVR_Controller/Device <hmd>5__5
    // Offset: 0x40
    GlobalNamespace::SteamVR_Controller::Device* $hmd$5__5;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xCE5238
    static SteamVR_LoadLevel::$LoadLevel$d__45* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0xCE53B4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0xCE53B8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0xCE6714
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0xCE671C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xCE677C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // SteamVR_LoadLevel/<LoadLevel>d__45
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_LoadLevel::$LoadLevel$d__45*, "", "SteamVR_LoadLevel/<LoadLevel>d__45");
#pragma pack(pop)
