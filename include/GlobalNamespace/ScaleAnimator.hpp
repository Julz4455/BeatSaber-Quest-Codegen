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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScaleAnimator
  class ScaleAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _displayedScale
    // Offset: 0x18
    float displayedScale;
    // private UnityEngine.Transform _targetTransform
    // Offset: 0x20
    UnityEngine::Transform* targetTransform;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // private Tweening.Tween`1<System.Single> _scaleUpTween
    // Offset: 0x30
    Tweening::Tween_1<float>* scaleUpTween;
    // private Tweening.Tween`1<System.Single> _scaleDownTween
    // Offset: 0x38
    Tweening::Tween_1<float>* scaleDownTween;
    // private System.Boolean _initialized
    // Offset: 0x40
    bool initialized;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xF84694
    void OnDestroy();
    // private System.Void InitIfNeeded()
    // Offset: 0xF8472C
    void InitIfNeeded();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0xF84904
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void HideInstant()
    // Offset: 0xF84980
    void HideInstant();
    // public System.Void ShowInstant()
    // Offset: 0xF84A44
    void ShowInstant();
    // public System.Void Animate(System.Boolean show, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0xF84AEC
    void Animate(bool show, float duration, Tweening::EaseType easeType);
    // private System.Void <InitIfNeeded>b__7_0(System.Single val)
    // Offset: 0xF84CEC
    void $InitIfNeeded$b__7_0(float val);
    // private System.Void <InitIfNeeded>b__7_1(System.Single val)
    // Offset: 0xF84D48
    void $InitIfNeeded$b__7_1(float val);
    // private System.Void <InitIfNeeded>b__7_2()
    // Offset: 0xF84DA4
    void $InitIfNeeded$b__7_2();
    // public System.Void .ctor()
    // Offset: 0xF84CDC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScaleAnimator* New_ctor();
  }; // ScaleAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScaleAnimator*, "", "ScaleAnimator");
#pragma pack(pop)
