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
  // Forward declaring type: CountdownElementController
  class CountdownElementController;
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CountdownController
  class CountdownController : public UnityEngine::MonoBehaviour {
    public:
    // private CountdownElementController[] _countdownElementControllers
    // Offset: 0x18
    ::Array<GlobalNamespace::CountdownElementController*>* countdownElementControllers;
    // private readonly ITimeProvider _timeProvider
    // Offset: 0x20
    GlobalNamespace::ITimeProvider* timeProvider;
    // private System.Single _countdownEndTime
    // Offset: 0x28
    float countdownEndTime;
    // private System.Int32 _currentRemainingSecond
    // Offset: 0x2C
    int currentRemainingSecond;
    // private readonly System.Collections.Generic.Queue`1<CountdownElementController> _countdownElementControllerQueue
    // Offset: 0x30
    System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>* countdownElementControllerQueue;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF289F8
    void Awake();
    // protected System.Void Update()
    // Offset: 0xF28A04
    void Update();
    // public System.Void StartCountdown(System.Single countdownEndTime)
    // Offset: 0xF1D684
    void StartCountdown(float countdownEndTime);
    // public System.Void UpdateCountdown(System.Single countdownEndTime)
    // Offset: 0xF1D85C
    void UpdateCountdown(float countdownEndTime);
    // public System.Void StopCountdown()
    // Offset: 0xF1D778
    void StopCountdown();
    // public System.Void .ctor()
    // Offset: 0xF28BFC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CountdownController* New_ctor();
  }; // CountdownController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CountdownController*, "", "CountdownController");
#pragma pack(pop)
