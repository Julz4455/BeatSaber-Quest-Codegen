// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableAsset
#include "UnityEngine/Playables/PlayableAsset.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.Timeline.ITimelineClipAsset
#include "UnityEngine/Timeline/ITimelineClipAsset.hpp"
// Including type: UnityEngine.Timeline.IPropertyPreview
#include "UnityEngine/Timeline/IPropertyPreview.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: MarkerTrack
  class MarkerTrack;
  // Forward declaring type: TrackAsset
  class TrackAsset;
  // Skipping declaration: DurationMode because it is already included!
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: ClipCaps
  struct ClipCaps;
  // Forward declaring type: IPropertyCollector
  class IPropertyCollector;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ScriptableObject because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: PlayableDirector
  class PlayableDirector;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TimelineAsset
  class TimelineAsset : public UnityEngine::Playables::PlayableAsset, public UnityEngine::ISerializationCallbackReceiver, public UnityEngine::Timeline::ITimelineClipAsset, public UnityEngine::Timeline::IPropertyPreview {
    public:
    // Nested type: UnityEngine::Timeline::TimelineAsset::Versions
    struct Versions;
    // Nested type: UnityEngine::Timeline::TimelineAsset::TimelineAssetUpgrade
    class TimelineAssetUpgrade;
    // Nested type: UnityEngine::Timeline::TimelineAsset::MediaType
    struct MediaType;
    // Nested type: UnityEngine::Timeline::TimelineAsset::DurationMode
    struct DurationMode;
    // Nested type: UnityEngine::Timeline::TimelineAsset::EditorSettings
    class EditorSettings;
    // Nested type: UnityEngine::Timeline::TimelineAsset::$get_outputs$d__27
    class $get_outputs$d__27;
    // Autogenerated type: UnityEngine.Timeline.TimelineAsset/DurationMode
    struct DurationMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.Timeline.TimelineAsset/DurationMode BasedOnClips
      static constexpr const int BasedOnClips = 0;
      // Get static field: static public UnityEngine.Timeline.TimelineAsset/DurationMode BasedOnClips
      static UnityEngine::Timeline::TimelineAsset::DurationMode _get_BasedOnClips();
      // Set static field: static public UnityEngine.Timeline.TimelineAsset/DurationMode BasedOnClips
      static void _set_BasedOnClips(UnityEngine::Timeline::TimelineAsset::DurationMode value);
      // static field const value: static public UnityEngine.Timeline.TimelineAsset/DurationMode FixedLength
      static constexpr const int FixedLength = 1;
      // Get static field: static public UnityEngine.Timeline.TimelineAsset/DurationMode FixedLength
      static UnityEngine::Timeline::TimelineAsset::DurationMode _get_FixedLength();
      // Set static field: static public UnityEngine.Timeline.TimelineAsset/DurationMode FixedLength
      static void _set_FixedLength(UnityEngine::Timeline::TimelineAsset::DurationMode value);
      // Creating value type constructor for type: DurationMode
      DurationMode(int value_ = {}) : value{value_} {}
    }; // UnityEngine.Timeline.TimelineAsset/DurationMode
    // private System.Int32 m_Version
    // Offset: 0x18
    int m_Version;
    // private System.Collections.Generic.List`1<UnityEngine.ScriptableObject> m_Tracks
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* m_Tracks;
    // private System.Double m_FixedDuration
    // Offset: 0x28
    double m_FixedDuration;
    // private UnityEngine.Timeline.TrackAsset[] m_CacheOutputTracks
    // Offset: 0x30
    ::Array<UnityEngine::Timeline::TrackAsset*>* m_CacheOutputTracks;
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> m_CacheRootTracks
    // Offset: 0x38
    System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset*>* m_CacheRootTracks;
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> m_CacheFlattenedTracks
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset*>* m_CacheFlattenedTracks;
    // private UnityEngine.Timeline.TimelineAsset/EditorSettings m_EditorSettings
    // Offset: 0x48
    UnityEngine::Timeline::TimelineAsset::EditorSettings* m_EditorSettings;
    // private UnityEngine.Timeline.TimelineAsset/DurationMode m_DurationMode
    // Offset: 0x50
    UnityEngine::Timeline::TimelineAsset::DurationMode m_DurationMode;
    // private UnityEngine.Timeline.MarkerTrack m_MarkerTrack
    // Offset: 0x58
    UnityEngine::Timeline::MarkerTrack* m_MarkerTrack;
    // static field const value: static private System.Int32 k_LatestVersion
    static constexpr const int k_LatestVersion = 0;
    // Get static field: static private System.Int32 k_LatestVersion
    static int _get_k_LatestVersion();
    // Set static field: static private System.Int32 k_LatestVersion
    static void _set_k_LatestVersion(int value);
    // private System.Void UpgradeToLatestVersion()
    // Offset: 0xFFE58C
    void UpgradeToLatestVersion();
    // public UnityEngine.Timeline.TimelineAsset/EditorSettings get_editorSettings()
    // Offset: 0xFFE590
    UnityEngine::Timeline::TimelineAsset::EditorSettings* get_editorSettings();
    // public System.Double get_fixedDuration()
    // Offset: 0xFFE920
    double get_fixedDuration();
    // public System.Void set_fixedDuration(System.Double value)
    // Offset: 0xFFE9F0
    void set_fixedDuration(double value);
    // public UnityEngine.Timeline.TimelineAsset/DurationMode get_durationMode()
    // Offset: 0xFFEA70
    UnityEngine::Timeline::TimelineAsset::DurationMode get_durationMode();
    // public System.Void set_durationMode(UnityEngine.Timeline.TimelineAsset/DurationMode value)
    // Offset: 0xFFEA78
    void set_durationMode(UnityEngine::Timeline::TimelineAsset::DurationMode value);
    // public System.Int32 get_outputTrackCount()
    // Offset: 0xFFEF4C
    int get_outputTrackCount();
    // public System.Int32 get_rootTrackCount()
    // Offset: 0xFFF368
    int get_rootTrackCount();
    // private System.Void OnValidate()
    // Offset: 0xFFF628
    void OnValidate();
    // static private System.Single GetValidFramerate(System.Single framerate)
    // Offset: 0xFFF65C
    static float GetValidFramerate(float framerate);
    // public UnityEngine.Timeline.TrackAsset GetRootTrack(System.Int32 index)
    // Offset: 0xFFF730
    UnityEngine::Timeline::TrackAsset* GetRootTrack(int index);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> GetRootTracks()
    // Offset: 0xFFEE38
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* GetRootTracks();
    // public UnityEngine.Timeline.TrackAsset GetOutputTrack(System.Int32 index)
    // Offset: 0xFFF7B0
    UnityEngine::Timeline::TrackAsset* GetOutputTrack(int index);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> GetOutputTracks()
    // Offset: 0xFFF800
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* GetOutputTracks();
    // private System.Void UpdateRootTrackCache()
    // Offset: 0xFFF3C0
    void UpdateRootTrackCache();
    // private System.Void UpdateOutputTrackCache()
    // Offset: 0xFFEF7C
    void UpdateOutputTrackCache();
    // System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> get_flattenedTracks()
    // Offset: 0xFFF824
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset*>* get_flattenedTracks();
    // public UnityEngine.Timeline.MarkerTrack get_markerTrack()
    // Offset: 0xFFFC0C
    UnityEngine::Timeline::MarkerTrack* get_markerTrack();
    // System.Collections.Generic.List`1<UnityEngine.ScriptableObject> get_trackObjects()
    // Offset: 0xFFFC14
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* get_trackObjects();
    // System.Void AddTrackInternal(UnityEngine.Timeline.TrackAsset track)
    // Offset: 0xFFFC1C
    void AddTrackInternal(UnityEngine::Timeline::TrackAsset* track);
    // System.Void RemoveTrack(UnityEngine.Timeline.TrackAsset track)
    // Offset: 0xFFFCE4
    void RemoveTrack(UnityEngine::Timeline::TrackAsset* track);
    // private System.Void __internalAwake()
    // Offset: 0xFFFF60
    void __internalAwake();
    // public System.Void CreateMarkerTrack()
    // Offset: 0x10000C8
    void CreateMarkerTrack();
    // System.Void Invalidate()
    // Offset: 0xFFFCA0
    void Invalidate();
    // private System.Double CalculateDuration()
    // Offset: 0xFFE5AC
    double CalculateDuration();
    // static private System.Void AddSubTracksRecursive(UnityEngine.Timeline.TrackAsset track, System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> allTracks)
    // Offset: 0xFFF934
    static void AddSubTracksRecursive(UnityEngine::Timeline::TrackAsset* track, System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset*>*& allTracks);
    // public UnityEngine.Timeline.TrackAsset CreateTrack(System.Type type, UnityEngine.Timeline.TrackAsset parent, System.String name)
    // Offset: 0x10001C4
    UnityEngine::Timeline::TrackAsset* CreateTrack(System::Type* type, UnityEngine::Timeline::TrackAsset* parent, ::Il2CppString* name);
    // public T CreateTrack(UnityEngine.Timeline.TrackAsset parent, System.String trackName)
    // Offset: 0xFFFFFFFF
    template<class T>
    T CreateTrack(UnityEngine::Timeline::TrackAsset* parent, ::Il2CppString* trackName) {
      static_assert(std::is_convertible_v<T, UnityEngine::Timeline::TrackAsset*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "CreateTrack", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, parent, trackName)));
    }
    // public T CreateTrack(System.String trackName)
    // Offset: 0xFFFFFFFF
    template<class T>
    T CreateTrack(::Il2CppString* trackName) {
      static_assert(std::is_convertible_v<T, UnityEngine::Timeline::TrackAsset*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "CreateTrack", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, trackName)));
    }
    // public T CreateTrack()
    // Offset: 0xFFFFFFFF
    template<class T>
    T CreateTrack() {
      static_assert(std::is_convertible_v<T, UnityEngine::Timeline::TrackAsset*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>(this, "CreateTrack", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
    }
    // public System.Boolean DeleteClip(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1000788
    bool DeleteClip(UnityEngine::Timeline::TimelineClip* clip);
    // public System.Boolean DeleteTrack(UnityEngine.Timeline.TrackAsset track)
    // Offset: 0x1000B08
    bool DeleteTrack(UnityEngine::Timeline::TrackAsset* track);
    // System.Void MoveLastTrackBefore(UnityEngine.Timeline.TrackAsset asset)
    // Offset: 0x1001124
    void MoveLastTrackBefore(UnityEngine::Timeline::TrackAsset* asset);
    // UnityEngine.Timeline.TrackAsset AllocateTrack(UnityEngine.Timeline.TrackAsset trackAssetParent, System.String trackName, System.Type trackType)
    // Offset: 0x1000550
    UnityEngine::Timeline::TrackAsset* AllocateTrack(UnityEngine::Timeline::TrackAsset* trackAssetParent, ::Il2CppString* trackName, System::Type* trackType);
    // private System.Void DeleteRecordedAnimation(UnityEngine.Timeline.TrackAsset track)
    // Offset: 0x1000FA0
    void DeleteRecordedAnimation(UnityEngine::Timeline::TrackAsset* track);
    // private System.Void DeleteRecordedAnimation(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1000984
    void DeleteRecordedAnimation(UnityEngine::Timeline::TimelineClip* clip);
    // public override System.Double get_duration()
    // Offset: 0xFFE598
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Double PlayableAsset::get_duration()
    double get_duration();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> get_outputs()
    // Offset: 0xFFEA80
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.Playables.PlayableBinding> PlayableAsset::get_outputs()
    System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>* get_outputs();
    // public UnityEngine.Timeline.ClipCaps get_clipCaps()
    // Offset: 0xFFEB44
    // Implemented from: UnityEngine.Timeline.ITimelineClipAsset
    // Base method: UnityEngine.Timeline.ClipCaps ITimelineClipAsset::get_clipCaps()
    UnityEngine::Timeline::ClipCaps get_clipCaps();
    // public override UnityEngine.Playables.Playable CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    // Offset: 0xFFFDF4
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: UnityEngine.Playables.Playable PlayableAsset::CreatePlayable(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject go)
    UnityEngine::Playables::Playable CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject* go);
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0xFFFF54
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0xFFFF5C
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public System.Void GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    // Offset: 0xFF50C0
    // Implemented from: UnityEngine.Timeline.IPropertyPreview
    // Base method: System.Void IPropertyPreview::GatherProperties(UnityEngine.Playables.PlayableDirector director, UnityEngine.Timeline.IPropertyCollector driver)
    void GatherProperties(UnityEngine::Playables::PlayableDirector* director, UnityEngine::Timeline::IPropertyCollector* driver);
    // public System.Void .ctor()
    // Offset: 0x1001350
    // Implemented from: UnityEngine.Playables.PlayableAsset
    // Base method: System.Void PlayableAsset::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TimelineAsset* New_ctor();
  }; // UnityEngine.Timeline.TimelineAsset
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineAsset*, "UnityEngine.Timeline", "TimelineAsset");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineAsset::DurationMode, "UnityEngine.Timeline", "TimelineAsset/DurationMode");
#pragma pack(pop)
