// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x28
  // Autogenerated type: UnityEngine.Timeline.DirectorControlPlayable
  // [] Offset: FFFFFFFF
  class DirectorControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // public UnityEngine.Playables.PlayableDirector director
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Playables::PlayableDirector* director;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableDirector*) == 0x8);
    // private System.Boolean m_SyncTime
    // Size: 0x1
    // Offset: 0x18
    bool m_SyncTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_SyncTime and: m_AssetDuration
    char __padding1[0x7] = {};
    // private System.Double m_AssetDuration
    // Size: 0x8
    // Offset: 0x20
    double m_AssetDuration;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Creating value type constructor for type: DirectorControlPlayable
    DirectorControlPlayable(UnityEngine::Playables::PlayableDirector* director_ = {}, bool m_SyncTime_ = {}, double m_AssetDuration_ = {}) noexcept : director{director_}, m_SyncTime{m_SyncTime_}, m_AssetDuration{m_AssetDuration_} {}
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.DirectorControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.PlayableDirector director)
    // Offset: 0x1419298
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::DirectorControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::PlayableDirector* director);
    // private System.Void SyncSpeed(System.Double speed)
    // Offset: 0x141B35C
    void SyncSpeed(double speed);
    // private System.Void SyncPlayState(UnityEngine.Playables.PlayableGraph graph, System.Double playableTime)
    // Offset: 0x141B48C
    void SyncPlayState(UnityEngine::Playables::PlayableGraph graph, double playableTime);
    // private System.Boolean DetectDiscontinuity(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x141B25C
    bool DetectDiscontinuity(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // private System.Boolean DetectOutOfSync(UnityEngine.Playables.Playable playable)
    // Offset: 0x141B854
    bool DetectOutOfSync(UnityEngine::Playables::Playable playable);
    // private System.Void UpdateTime(UnityEngine.Playables.Playable playable)
    // Offset: 0x141B994
    void UpdateTime(UnityEngine::Playables::Playable playable);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x141AFC4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(UnityEngine::Playables::Playable playable);
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x141B0A8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x141B51C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x141B610
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    // Offset: 0x141B728
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object playerData)
    void ProcessFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info, ::Il2CppObject* playerData);
    // public System.Void .ctor()
    // Offset: 0x141BB70
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectorControlPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Timeline").WithContext("DirectorControlPlayable").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectorControlPlayable*, creationType>()));
    }
  }; // UnityEngine.Timeline.DirectorControlPlayable
  static check_size<sizeof(DirectorControlPlayable), 32 + sizeof(double)> __UnityEngine_Timeline_DirectorControlPlayableSizeCheck;
  static_assert(sizeof(DirectorControlPlayable) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::DirectorControlPlayable*, "UnityEngine.Timeline", "DirectorControlPlayable");
#pragma pack(pop)
