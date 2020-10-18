// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: IMarker
  class IMarker;
  // Forward declaring type: TimelineAsset
  class TimelineAsset;
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.MarkerList
  struct MarkerList : public System::ValueType, public UnityEngine::ISerializationCallbackReceiver {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.ScriptableObject> m_Objects
    // Offset: 0x0
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* m_Objects;
    // private System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> m_Cache
    // Offset: 0x8
    System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* m_Cache;
    // private System.Boolean m_CacheDirty
    // Offset: 0x10
    bool m_CacheDirty;
    // private System.Boolean m_HasNotifications
    // Offset: 0x11
    bool m_HasNotifications;
    // Creating value type constructor for type: MarkerList
    constexpr MarkerList(System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* m_Objects_ = {}, System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* m_Cache_ = {}, bool m_CacheDirty_ = {}, bool m_HasNotifications_ = {}) noexcept : m_Objects{m_Objects_}, m_Cache{m_Cache_}, m_CacheDirty{m_CacheDirty_}, m_HasNotifications{m_HasNotifications_} {}
    // public System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> get_markers()
    // Offset: 0xDB9994
    System::Collections::Generic::List_1<UnityEngine::Timeline::IMarker*>* get_markers();
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xDB99BC
    MarkerList(int capacity);
    // public System.Void Add(UnityEngine.ScriptableObject item)
    // Offset: 0xDB99C4
    void Add(UnityEngine::ScriptableObject* item);
    // public System.Boolean Remove(UnityEngine.Timeline.IMarker item)
    // Offset: 0xDB99CC
    bool Remove(UnityEngine::Timeline::IMarker* item);
    // public System.Boolean Remove(UnityEngine.ScriptableObject item, UnityEngine.Timeline.TimelineAsset timelineAsset, UnityEngine.Playables.PlayableAsset thingToDirty)
    // Offset: 0xDB99D4
    bool Remove(UnityEngine::ScriptableObject* item, UnityEngine::Timeline::TimelineAsset* timelineAsset, UnityEngine::Playables::PlayableAsset* thingToDirty);
    // public System.Void Clear()
    // Offset: 0xDB99DC
    void Clear();
    // public System.Boolean Contains(UnityEngine.ScriptableObject item)
    // Offset: 0xDB99E4
    bool Contains(UnityEngine::ScriptableObject* item);
    // public System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.IMarker> GetMarkers()
    // Offset: 0xDB99EC
    System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::IMarker*>* GetMarkers();
    // public System.Int32 get_Count()
    // Offset: 0xDB9A14
    int get_Count();
    // public UnityEngine.Timeline.IMarker get_Item(System.Int32 idx)
    // Offset: 0xDB9A1C
    UnityEngine::Timeline::IMarker* get_Item(int idx);
    // public System.Collections.Generic.List`1<UnityEngine.ScriptableObject> GetRawMarkerList()
    // Offset: 0xDB9A24
    System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* GetRawMarkerList();
    // public UnityEngine.Timeline.IMarker CreateMarker(System.Type type, System.Double time, UnityEngine.Timeline.TrackAsset owner)
    // Offset: 0xDB9A2C
    UnityEngine::Timeline::IMarker* CreateMarker(System::Type* type, double time, UnityEngine::Timeline::TrackAsset* owner);
    // public System.Boolean HasNotifications()
    // Offset: 0xDB9A34
    bool HasNotifications();
    // private System.Void BuildCache()
    // Offset: 0xDB9A6C
    void BuildCache();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0xDB9A5C
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0xDB9A60
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
  }; // UnityEngine.Timeline.MarkerList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::MarkerList, "UnityEngine.Timeline", "MarkerList");
#pragma pack(pop)
