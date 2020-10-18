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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FPSCounter
  class FPSCounter : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 <currentFPS>k__BackingField
    // Offset: 0x18
    int currentFPS;
    // private System.Int32 <lowestFPS>k__BackingField
    // Offset: 0x1C
    int lowestFPS;
    // private System.Int32 <highestFPS>k__BackingField
    // Offset: 0x20
    int highestFPS;
    // private System.Single _timeBuffer
    // Offset: 0x24
    float timeBuffer;
    // private System.Int32 _frameCounter
    // Offset: 0x28
    int frameCounter;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Int32 get_currentFPS()
    // Offset: 0xF67E4C
    int get_currentFPS();
    // private System.Void set_currentFPS(System.Int32 value)
    // Offset: 0xF67E54
    void set_currentFPS(int value);
    // public System.Int32 get_lowestFPS()
    // Offset: 0xF67E5C
    int get_lowestFPS();
    // private System.Void set_lowestFPS(System.Int32 value)
    // Offset: 0xF67E64
    void set_lowestFPS(int value);
    // public System.Int32 get_highestFPS()
    // Offset: 0xF67E6C
    int get_highestFPS();
    // private System.Void set_highestFPS(System.Int32 value)
    // Offset: 0xF67E74
    void set_highestFPS(int value);
    // protected System.Void Awake()
    // Offset: 0xF67E7C
    void Awake();
    // protected System.Void Update()
    // Offset: 0xF67E8C
    void Update();
    // public System.Void .ctor()
    // Offset: 0xF67F70
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FPSCounter* New_ctor();
  }; // FPSCounter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSCounter*, "", "FPSCounter");
#pragma pack(pop)
