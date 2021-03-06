// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalMultiplayerSyncState`3
#include "GlobalNamespace/LocalMultiplayerSyncState_3.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MockStandardScoreSyncState
  // [] Offset: FFFFFFFF
  class MockStandardScoreSyncState : public GlobalNamespace::LocalMultiplayerSyncState_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int> {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<StandardScoreSyncState/Score,System.Int32> _poseDictionary
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<GlobalNamespace::StandardScoreSyncState_Score, int>* poseDictionary;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::StandardScoreSyncState_Score, int>*) == 0x8);
    // Creating value type constructor for type: MockStandardScoreSyncState
    MockStandardScoreSyncState(System::Collections::Generic::Dictionary_2<GlobalNamespace::StandardScoreSyncState_Score, int>* poseDictionary_ = {}) noexcept : poseDictionary{poseDictionary_} {}
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<GlobalNamespace::StandardScoreSyncState_Score, int>*
    constexpr operator System::Collections::Generic::Dictionary_2<GlobalNamespace::StandardScoreSyncState_Score, int>*() const noexcept {
      return poseDictionary;
    }
    // public System.Int32 GetState(StandardScoreSyncState/Score type, System.Single time)
    // Offset: 0x101476C
    int GetState(GlobalNamespace::StandardScoreSyncState_Score type, float time);
    // public System.Void SetState(StandardScoreSyncState/Score type, System.Int32 state)
    // Offset: 0x10147EC
    void SetState(GlobalNamespace::StandardScoreSyncState_Score type, int state);
    // public System.Void SetMockedState(StandardScoreSyncState/Score type, System.Int32 state)
    // Offset: 0x1014250
    void SetMockedState(GlobalNamespace::StandardScoreSyncState_Score type, int state);
    // public System.Void .ctor(IConnectedPlayer player, System.Single reliableUpdateFrequency, System.Single unreliableUpdateFrequency, System.Int32 size, StateBuffer`3/InterpolationDelegate<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> interpolator, StateBuffer`3/SmoothingDelegate<StandardScoreSyncState,StandardScoreSyncState/Score,System.Int32> smoother)
    // Offset: 0x1013E44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockStandardScoreSyncState* New_ctor(GlobalNamespace::IConnectedPlayer* player, float reliableUpdateFrequency, float unreliableUpdateFrequency, int size, typename GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int>::SmoothingDelegate* smoother) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MockStandardScoreSyncState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockStandardScoreSyncState*, creationType>(player, reliableUpdateFrequency, unreliableUpdateFrequency, size, interpolator, smoother)));
    }
  }; // MockStandardScoreSyncState
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockStandardScoreSyncState*, "", "MockStandardScoreSyncState");
