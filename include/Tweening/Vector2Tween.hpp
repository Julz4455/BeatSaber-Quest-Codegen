// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Skipping declaration: EaseType because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // Autogenerated type: Tweening.Vector2Tween
  class Vector2Tween : public Tweening::Tween_1<UnityEngine::Vector2> {
    public:
    // public System.Void .ctor(UnityEngine.Vector2 fromValue, UnityEngine.Vector2 toValue, System.Action`1<UnityEngine.Vector2> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0x12E1CAC
    static Vector2Tween* New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, Tweening::EaseType easeType, float delay);
    // public System.Void .ctor(UnityEngine.Vector2 fromValue, UnityEngine.Vector2 toValue, System.Action`1<UnityEngine.Vector2> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0x12E1D5C
    static Vector2Tween* New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay);
    // public UnityEngine.Vector2 GetValue(System.Single t)
    // Offset: 0x12E1E0C
    UnityEngine::Vector2 GetValue(float t);
  }; // Tweening.Vector2Tween
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Tweening::Vector2Tween*, "Tweening", "Vector2Tween");
#pragma pack(pop)
