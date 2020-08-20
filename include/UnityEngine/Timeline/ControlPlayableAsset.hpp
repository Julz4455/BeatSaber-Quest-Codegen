// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.Timeline.IPropertyPreview
#include "UnityEngine/Timeline/IPropertyPreview.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Including type: UnityEngine.ExposedReference`1
#include "UnityEngine/ExposedReference_1.hpp"
// Including type: UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState
#include "UnityEngine/Timeline/ActivationControlPlayable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ClipCaps
  struct ClipCaps;
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.ControlPlayableAsset
  class ControlPlayableAsset : public UnityEngine::Playables::PlayableAsset, public UnityEngine::Timeline::IPropertyPreview, public UnityEngine::Timeline::ITimelineClipAsset {
    public:
    // Nested type: UnityEngine::Timeline::ControlPlayableAsset::$GetControlableScripts$d__38
    class $GetControlableScripts$d__38;
    // public UnityEngine.ExposedReference`1<UnityEngine.GameObject> sourceGameObject
    // Offset: 0x18
    UnityEngine::ExposedReference_1<UnityEngine::GameObject*> sourceGameObject;
    // public UnityEngine.GameObject prefabGameObject
    // Offset: 0x28
    UnityEngine::GameObject* prefabGameObject;
    // public System.Boolean updateParticle
    // Offset: 0x30
    bool updateParticle;
    // public System.UInt32 particleRandomSeed
    // Offset: 0x34
    uint particleRandomSeed;
    // public System.Boolean updateDirector
    // Offset: 0x38
    bool updateDirector;
    // public System.Boolean updateITimeControl
    // Offset: 0x39
    bool updateITimeControl;
    // public System.Boolean searchHierarchy
    // Offset: 0x3A
    bool searchHierarchy;
    // public System.Boolean active
    // Offset: 0x3B
    bool active;
    // public UnityEngine.Timeline.ActivationControlPlayable/PostPlaybackState postPlayback
    // Offset: 0x3C
    UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState postPlayback;
    // private UnityEngine.Playables.PlayableAsset m_ControlDirectorAsset
    // Offset: 0x40
    UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset;
    // private System.Double m_Duration
    // Offset: 0x48
    double m_Duration;
    // private System.Boolean m_SupportLoop
    // Offset: 0x50
    bool m_SupportLoop;
    // private System.Boolean <controllingDirectors>k__BackingField
    // Offset: 0x51
    bool controllingDirectors;
    // private System.Boolean <controllingParticles>k__BackingField
    // Offset: 0x52
    bool controllingParticles;
    // static field const value: static private System.Int32 k_MaxRandInt
    static constexpr const int k_MaxRandInt = 10000;
    // Get static field: static private System.Int32 k_MaxRandInt
    static int _get_k_MaxRandInt();
    // Set static field: static private System.Int32 k_MaxRandInt
    static void _set_k_MaxRandInt(int value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.Playables.PlayableDirector> k_EmptyDirectorsList
    static System::Collections::Generic::List_1<UnityEngine::Playables::PlayableDirector*>* _get_k_EmptyDirectorsList();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.Playables.PlayableDirector> k_EmptyDirectorsList
    static void _set_k_EmptyDirectorsList(System::Collections::Generic::List_1<UnityEngine::Playables::PlayableDirector*>* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.ParticleSystem> k_EmptyParticlesList
    static System::Collections::Generic::List_1<UnityEngine::ParticleSystem*>* _get_k_EmptyParticlesList();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.ParticleSystem> k_EmptyParticlesList
    static void _set_k_EmptyParticlesList(System::Collections::Generic::List_1<UnityEngine::ParticleSystem*>* value);
    // Get static field: static private System.Collections.Generic.HashSet`1<UnityEngine.Playables.PlayableDirector> s_ProcessedDirectors
    static System::Collections::Generic::HashSet_1<UnityEngine::Playables::PlayableDirector*>* _get_s_ProcessedDirectors();
    // Set static field: static private System.Collections.Generic.HashSet`1<UnityEngine.Playables.PlayableDirector> s_ProcessedDirectors
    static void _set_s_ProcessedDirectors(System::Collections::Generic::HashSet_1<UnityEngine::Playables::PlayableDirector*>* value);
    // Get static field: static private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> s_CreatedPrefabs
    static System::Collections::Generic::HashSet_1<UnityEngine::GameObject*>* _get_s_CreatedPrefabs();
    // Set static field: static private System.Collections.Generic.HashSet`1<UnityEngine.GameObject> s_CreatedPrefabs
    static void _set_s_CreatedPrefabs(System::Collections::Generic::HashSet_1<UnityEngine::GameObject*>* value);
    // System.Boolean get_controllingDirectors()
    // Offset: 0xFF1F14
    bool get_controllingDirectors();
    // private System.Void set_controllingDirectors(System.Boolean value)
    // Offset: 0xFF1F1C
    void set_controllingDirectors(bool value);
    // System.Boolean get_controllingParticles()
    // Offset: 0xFF1F28
    bool get_controllingParticles();
    // private System.Void set_controllingParticles(System.Boolean value)
    // Offset: 0xFF1F30
    void set_controllingParticles(bool value);
    // public System.Void OnEnable()
    // Offset: 0xFF1F3C
    void OnEnable();
    // static private UnityEngine.Playables.Playable ConnectPlayablesToMixer(UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> playables)
    // Offset: 0xFF3DC0
    static UnityEngine::Playables::Playable ConnectPlayablesToMixer(UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* playables);
    // private System.Void CreateActivationPlayable(UnityEngine.GameObject root, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables)
    // Offset: 0xFF31D4
    void CreateActivationPlayable(UnityEngine::GameObject* root, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables);
    // private System.Void SearchHiearchyAndConnectParticleSystem(System.Collections.Generic.IEnumerable`1<UnityEngine.ParticleSystem> particleSystems, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables)
    // Offset: 0xFF36A8
    void SearchHiearchyAndConnectParticleSystem(System::Collections::Generic::IEnumerable_1<UnityEngine::ParticleSystem*>* particleSystems, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables);
    // private System.Void SearchHierarchyAndConnectDirector(System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableDirector> directors, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables, System.Boolean disableSelfReferences)
    // Offset: 0xFF32D8
    void SearchHierarchyAndConnectDirector(System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableDirector*>* directors, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables, bool disableSelfReferences);
    // static private System.Void SearchHierarchyAndConnectControlableScripts(System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour> controlableScripts, UnityEngine.Playables.PlayableGraph graph, System.Collections.Generic.List`1<UnityEngine.Playables.Playable> outplayables)
    // Offset: 0xFF3A84
    static void SearchHierarchyAndConnectControlableScripts(System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>* controlableScripts, UnityEngine::Playables::PlayableGraph graph, System::Collections::Generic::List_1<UnityEngine::Playables::Playable>* outplayables);
    // static private System.Void ConnectMixerAndPlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.Playables.Playable mixer, UnityEngine.Playables.Playable playable, System.Int32 portIndex)
    // Offset: 0xFF3F0C
    static void ConnectMixerAndPlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::Playables::Playable mixer, UnityEngine::Playables::Playable playable, int portIndex);
    // System.Collections.Generic.IList`1<T> GetComponent(UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFF
    template<class T>
    System::Collections::Generic::IList_1<T>* GetComponent(UnityEngine::GameObject* gameObject) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::IList_1<T>*>(this, "GetComponent", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, gameObject)));
    }
    // static private System.Collections.Generic.IEnumerable`1<UnityEngine.MonoBehaviour> GetControlableScripts(UnityEngine.GameObject root)
    // Offset: 0xFF39F8
    static System::Collections::Generic::IEnumerable_1<UnityEngine::MonoBehaviour*>* GetControlableScripts(UnityEngine::GameObject* root);
    // System.Void UpdateDurationAndLoopFlag(System.Collections.Generic.IList`1<UnityEngine.Playables.PlayableDirector> directors, System.Collections.Generic.IList`1<UnityEngine.ParticleSystem> particleSystems)
    // Offset: 0xFF297C
    void UpdateDurationAndLoopFlag(System::Collections::Generic::IList_1<UnityEngine::Playables::PlayableDirector*>* directors, System::Collections::Generic::IList_1<UnityEngine::ParticleSystem*>* particleSystems);
    // private System.Collections.Generic.IList`1<UnityEngine.ParticleSystem> GetParticleSystemRoots(UnityEngine.GameObject go)
    // Offset: 0xFF2894
    System::Collections::Generic::IList_1<UnityEngine::ParticleSystem*>* GetParticleSystemRoots(UnityEngine::GameObject* go);
    // static private System.Void GetParticleSystemRoots(UnityEngine.Transform t, System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem> roots)
    // Offset: 0xFF43FC
    static void GetParticleSystemRoots(UnityEngine::Transform* t, System::Collections::Generic::ICollection_1<UnityEngine::ParticleSystem*>* roots);
    // public override System.Double get_duration()
    // Offset: 0xFF1F78
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0xFF1F80
    // Implemented from: UnityEngine.Timeline.ITimelineClipAsset
    // Base method: UnityEngine.Timeline.ClipCaps ITimelineClipAsset::get_clipCaps()
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0xFF1F8C
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0xFF45A0
    // Implemented from: UnityEngine.Timeline.IPropertyPreview
    // Base method: System.Void IPropertyPreview::GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
    // public System.Void .ctor()
    // Offset: 0xFF5358
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ControlPlayableAsset* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xFF53EC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // UnityEngine.Timeline.ControlPlayableAsset
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ControlPlayableAsset*, "UnityEngine.Timeline", "ControlPlayableAsset");
#pragma pack(pop)
