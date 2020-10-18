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
  // Forward declaring type: FloatSignal
  class FloatSignal;
  // Forward declaring type: FloatUnityEvent
  class FloatUnityEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FloatSignalListener
  class FloatSignalListener : public UnityEngine::MonoBehaviour {
    public:
    // private FloatSignal _floatSignal
    // Offset: 0x18
    GlobalNamespace::FloatSignal* floatSignal;
    // private FloatUnityEvent _unityEvent
    // Offset: 0x20
    GlobalNamespace::FloatUnityEvent* unityEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x1098114
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x10981B0
    void OnDisable();
    // private System.Void HandleEvent(System.Single f)
    // Offset: 0x109824C
    void HandleEvent(float f);
    // public System.Void .ctor()
    // Offset: 0x10982B4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FloatSignalListener* New_ctor();
  }; // FloatSignalListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FloatSignalListener*, "", "FloatSignalListener");
#pragma pack(pop)
