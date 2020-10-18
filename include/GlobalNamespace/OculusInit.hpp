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
  // Forward declaring type: OculusDeeplinkManager
  class OculusDeeplinkManager;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusInit
  class OculusInit : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OculusInit::$$c
    class $$c;
    // private OculusDeeplinkManager _oculusDeeplinkManager
    // Offset: 0x18
    GlobalNamespace::OculusDeeplinkManager* oculusDeeplinkManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init()
    // Offset: 0x10BAC64
    void Init();
    // private System.Void InitCallback(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize> msg)
    // Offset: 0x10BAE24
    void InitCallback(Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize*>* msg);
    // public System.Void .ctor()
    // Offset: 0x10BAFBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OculusInit* New_ctor();
  }; // OculusInit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusInit*, "", "OculusInit");
#pragma pack(pop)
