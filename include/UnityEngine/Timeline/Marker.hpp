// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Timeline.IMarker
#include "UnityEngine/Timeline/IMarker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.Marker
  class Marker : public UnityEngine::ScriptableObject, public UnityEngine::Timeline::IMarker {
    public:
    // private System.Double m_Time
    // Offset: 0x18
    double m_Time;
    // private UnityEngine.Timeline.TrackAsset <parent>k__BackingField
    // Offset: 0x20
    UnityEngine::Timeline::TrackAsset* parent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void set_parent(UnityEngine.Timeline.TrackAsset value)
    // Offset: 0x161FB58
    void set_parent(UnityEngine::Timeline::TrackAsset* value);
    // public System.Void OnInitialize(UnityEngine.Timeline.TrackAsset aPent)
    // Offset: 0x161FD5C
    void OnInitialize(UnityEngine::Timeline::TrackAsset* aPent);
    // public UnityEngine.Timeline.TrackAsset get_parent()
    // Offset: 0x161FB50
    // Implemented from: UnityEngine.Timeline.IMarker
    // Base method: UnityEngine.Timeline.TrackAsset IMarker::get_parent()
    UnityEngine::Timeline::TrackAsset* get_parent();
    // public System.Double get_time()
    // Offset: 0x161FB60
    // Implemented from: UnityEngine.Timeline.IMarker
    // Base method: System.Double IMarker::get_time()
    double get_time();
    // public System.Void set_time(System.Double value)
    // Offset: 0x161FB68
    // Implemented from: UnityEngine.Timeline.IMarker
    // Base method: System.Void IMarker::set_time(System.Double value)
    void set_time(double value);
    // private System.Void UnityEngine.Timeline.IMarker.Initialize(UnityEngine.Timeline.TrackAsset parentTrack)
    // Offset: 0x161FBE8
    // Implemented from: UnityEngine.Timeline.IMarker
    // Base method: System.Void IMarker::Initialize(UnityEngine.Timeline.TrackAsset parentTrack)
    void UnityEngine_Timeline_IMarker_Initialize(UnityEngine::Timeline::TrackAsset* parentTrack);
    // protected System.Void .ctor()
    // Offset: 0x161FD60
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Marker* New_ctor();
  }; // UnityEngine.Timeline.Marker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::Marker*, "UnityEngine.Timeline", "Marker");
#pragma pack(pop)
