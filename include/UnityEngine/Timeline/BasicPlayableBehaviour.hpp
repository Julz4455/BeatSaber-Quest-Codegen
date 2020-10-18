// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Playables.IPlayableAsset
#include "UnityEngine/Playables/IPlayableAsset.hpp"
// Including type: UnityEngine.Playables.IPlayableBehaviour
#include "UnityEngine/Playables/IPlayableBehaviour.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.BasicPlayableBehaviour
  class BasicPlayableBehaviour : public UnityEngine::ScriptableObject, public UnityEngine::Playables::IPlayableAsset, public UnityEngine::Playables::IPlayableBehaviour {
    public:
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0x1619FC0
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public System.Void .ctor()
    // Offset: 0x1619F50
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BasicPlayableBehaviour* New_ctor();
    // public System.Double get_duration()
    // Offset: 0x1619F58
    // Implemented from: UnityEngine.Playables.IPlayableAsset
    // Base method: System.Double IPlayableAsset::get_duration()
    double get_duration();
    // public System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x161A028
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(UnityEngine::Playables::Playable playable);
    // public System.Void OnGraphStop(UnityEngine.Playables.Playable playable)
    // Offset: 0x161A02C
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnGraphStop(UnityEngine.Playables.Playable playable)
    void OnGraphStop(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableCreate(UnityEngine.Playables.Playable playable)
    // Offset: 0x161A030
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableCreate(UnityEngine.Playables.Playable playable)
    void OnPlayableCreate(UnityEngine::Playables::Playable playable);
    // public System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x161A034
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x161A038
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x161A03C
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x161A040
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x161A044
    // Implemented from: UnityEngine.Playables.IPlayableBehaviour
    // Base method: System.Void IPlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    // Offset: 0x161A048
    // Implemented from: UnityEngine.Playables.IPlayableAsset
    // Base method: UnityEngine.Playables.Playable IPlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject owner)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* owner);
  }; // UnityEngine.Timeline.BasicPlayableBehaviour
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::BasicPlayableBehaviour*, "UnityEngine.Timeline", "BasicPlayableBehaviour");
#pragma pack(pop)
