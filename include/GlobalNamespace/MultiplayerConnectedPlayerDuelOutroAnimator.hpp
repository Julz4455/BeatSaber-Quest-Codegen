// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerConnectedPlayerOutroAnimator
#include "GlobalNamespace/IMultiplayerConnectedPlayerOutroAnimator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
  // Forward declaring type: MultiplayerPlayersManager
  class MultiplayerPlayersManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerDuelOutroAnimator
  class MultiplayerConnectedPlayerDuelOutroAnimator : public UnityEngine::MonoBehaviour, public GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator {
    public:
    // private ColorSO _offLightsColor
    // Offset: 0x18
    GlobalNamespace::ColorSO* offLightsColor;
    // private UnityEngine.Vector3 _targetPosition
    // Offset: 0x20
    UnityEngine::Vector3 targetPosition;
    // private UnityEngine.Transform _connectedPlayerContainerTransform
    // Offset: 0x30
    UnityEngine::Transform* connectedPlayerContainerTransform;
    // private LightsAnimator[] _lightsAnimators
    // Offset: 0x38
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x40
    Tweening::TweeningManager* tweeningManager;
    // private readonly MultiplayerPlayersManager _multiplayerPlayersManager
    // Offset: 0x48
    GlobalNamespace::MultiplayerPlayersManager* multiplayerPlayersManager;
    // private Tweening.Tween`1<UnityEngine.Vector3> _platformPositionTween
    // Offset: 0x50
    Tweening::Tween_1<UnityEngine::Vector3>* platformPositionTween;
    // private System.Boolean _initialized
    // Offset: 0x58
    bool initialized;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xFCAFF8
    void OnDestroy();
    // private System.Void InitIfNeeded()
    // Offset: 0xFCB090
    void InitIfNeeded();
    // private System.Void <InitIfNeeded>b__9_0(UnityEngine.Vector3 val)
    // Offset: 0xFCB324
    void $InitIfNeeded$b__9_0(UnityEngine::Vector3 val);
    // public System.Void Animate(System.Single duration)
    // Offset: 0xFCB1DC
    // Implemented from: IMultiplayerConnectedPlayerOutroAnimator
    // Base method: System.Void IMultiplayerConnectedPlayerOutroAnimator::Animate(System.Single duration)
    void Animate(float duration);
    // public System.Void .ctor()
    // Offset: 0xFCB31C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerConnectedPlayerDuelOutroAnimator* New_ctor();
  }; // MultiplayerConnectedPlayerDuelOutroAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerDuelOutroAnimator*, "", "MultiplayerConnectedPlayerDuelOutroAnimator");
#pragma pack(pop)
