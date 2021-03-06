// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerSpectatingSpot
#include "GlobalNamespace/IMultiplayerSpectatingSpot.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerSpectatingSpotManager
  class MultiplayerSpectatingSpotManager;
  // Forward declaring type: MultiplayerActivePlayersTimeOffsetAverage
  class MultiplayerActivePlayersTimeOffsetAverage;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerEnvironmentSpectatingSpot
  // [] Offset: FFFFFFFF
  class MultiplayerEnvironmentSpectatingSpot : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerSpectatingSpot*/ {
    public:
    // private System.Boolean _preferredSpectatingSpot
    // Size: 0x1
    // Offset: 0x18
    bool preferredSpectatingSpot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _displaySpotNumber
    // Size: 0x1
    // Offset: 0x19
    bool displaySpotNumber;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: displaySpotNumber and: spotNumber
    char __padding1[0x2] = {};
    // [DrawIfAttribute] Offset: 0xD3C970
    // private System.Int32 _spotNumber
    // Size: 0x4
    // Offset: 0x1C
    int spotNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [InjectAttribute] Offset: 0xD3CA18
    // private readonly MultiplayerSpectatingSpotManager _spectatingSpotManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MultiplayerSpectatingSpotManager* spectatingSpotManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerSpectatingSpotManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3CA28
    // private readonly MultiplayerActivePlayersTimeOffsetAverage _activePlayersTimeOffsetAverage
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* activePlayersTimeOffsetAverage;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3CA38
    // private System.Action`1<IMultiplayerSpectatingSpot> hasBeenRemovedEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerEnvironmentSpectatingSpot
    MultiplayerEnvironmentSpectatingSpot(bool preferredSpectatingSpot_ = {}, bool displaySpotNumber_ = {}, int spotNumber_ = {}, GlobalNamespace::MultiplayerSpectatingSpotManager* spectatingSpotManager_ = {}, GlobalNamespace::MultiplayerActivePlayersTimeOffsetAverage* activePlayersTimeOffsetAverage_ = {}, System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* hasBeenRemovedEvent_ = {}) noexcept : preferredSpectatingSpot{preferredSpectatingSpot_}, displaySpotNumber{displaySpotNumber_}, spotNumber{spotNumber_}, spectatingSpotManager{spectatingSpotManager_}, activePlayersTimeOffsetAverage{activePlayersTimeOffsetAverage_}, hasBeenRemovedEvent{hasBeenRemovedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSpectatingSpot
    operator GlobalNamespace::IMultiplayerSpectatingSpot() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSpectatingSpot*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1023260
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x1023280
    void OnDisable();
    // public System.Void add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x102305C
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Void IMultiplayerSpectatingSpot::add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    void add_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0x1023100
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Void IMultiplayerSpectatingSpot::remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    void remove_hasBeenRemovedEvent(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public IMultiplayerObservable get_observable()
    // Offset: 0x10231A4
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: IMultiplayerObservable IMultiplayerSpectatingSpot::get_observable()
    GlobalNamespace::IMultiplayerObservable* get_observable();
    // public System.String get_spotName()
    // Offset: 0x10231AC
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.String IMultiplayerSpectatingSpot::get_spotName()
    ::Il2CppString* get_spotName();
    // public System.Boolean get_isMain()
    // Offset: 0x1023258
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Boolean IMultiplayerSpectatingSpot::get_isMain()
    bool get_isMain();
    // public System.Void SetIsObserved(System.Boolean isObserved)
    // Offset: 0x10232E4
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: System.Void IMultiplayerSpectatingSpot::SetIsObserved(System.Boolean isObserved)
    void SetIsObserved(bool isObserved);
    // public System.Void .ctor()
    // Offset: 0x10232E8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerEnvironmentSpectatingSpot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerEnvironmentSpectatingSpot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerEnvironmentSpectatingSpot*, creationType>()));
    }
    // private UnityEngine.Transform IMultiplayerSpectatingSpot.get_transform()
    // Offset: 0x10232F0
    // Implemented from: IMultiplayerSpectatingSpot
    // Base method: UnityEngine.Transform IMultiplayerSpectatingSpot::get_transform()
    UnityEngine::Transform* GlobalNamespace_IMultiplayerSpectatingSpot_get_transform();
  }; // MultiplayerEnvironmentSpectatingSpot
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEnvironmentSpectatingSpot), 48 + sizeof(System::Action_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*)> __GlobalNamespace_MultiplayerEnvironmentSpectatingSpotSizeCheck;
  static_assert(sizeof(MultiplayerEnvironmentSpectatingSpot) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerEnvironmentSpectatingSpot*, "", "MultiplayerEnvironmentSpectatingSpot");
