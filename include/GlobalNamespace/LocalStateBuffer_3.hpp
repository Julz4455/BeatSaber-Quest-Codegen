// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StateBuffer`3
#include "GlobalNamespace/StateBuffer_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStateTable`2<TType, TState>
  template<typename TType, typename TState>
  class IStateTable_2;
  // Skipping declaration: IEquatableByReference`1 because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Forward declaring type: IConvertible
  class IConvertible;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalStateBuffer`3
  template<typename TStateTable, typename TType, typename TState>
  class LocalStateBuffer_3 : public GlobalNamespace::StateBuffer_3<TStateTable, TType, TState> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TStateTable>> || std::is_base_of_v<GlobalNamespace::IStateTable_2<TType, TState>, std::remove_pointer_t<TStateTable>>) && (!std::is_complete_v<std::remove_pointer_t<TStateTable>> || std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<TStateTable>>) && (!std::is_complete_v<std::remove_pointer_t<TStateTable>> || std::is_base_of_v<GlobalNamespace::IEquatableByReference_1<TStateTable>, std::remove_pointer_t<TStateTable>>) && (!std::is_complete_v<std::remove_pointer_t<TStateTable>> || is_value_type_v<TStateTable>));
    static_assert((!std::is_complete_v<std::remove_pointer_t<TType>> || std::is_base_of_v<System::IConvertible, std::remove_pointer_t<TType>>) && (!std::is_complete_v<std::remove_pointer_t<TType>> || is_value_type_v<TType>));
    static_assert((!std::is_complete_v<std::remove_pointer_t<TState>> || is_value_type_v<TState>));
    public:
    // private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> _current
    // Offset: 0x0
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable current;
    // private readonly System.Single _reliableUpdateFrequency
    // Offset: 0x0
    float reliableUpdateFrequency;
    // private readonly System.Single _unreliableUpdateFrequency
    // Offset: 0x0
    float unreliableUpdateFrequency;
    // private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> _lastReliableSerialized
    // Offset: 0x0
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable lastReliableSerialized;
    // private StateBuffer`3/TimestampedStateTable<TStateTable,TType,TState> _lastUnreliableSerialized
    // Offset: 0x0
    typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::TimestampedStateTable lastUnreliableSerialized;
    // private System.Boolean _dirty
    // Offset: 0x0
    bool dirty;
    // public System.Void .ctor(System.Single reliableUpdateFrequency, System.Single unreliableUpdateFrequency, System.Int32 size, StateBuffer`3/InterpolationDelegate<TStateTable,TType,TState> interpolator, StateBuffer`3/SmoothingDelegate<TStateTable,TType,TState> smoother)
    // Offset: 0xFFFFFFFF
    static LocalStateBuffer_3<TStateTable, TType, TState>* New_ctor(float reliableUpdateFrequency, float unreliableUpdateFrequency, int size, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::InterpolationDelegate* interpolator, typename GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>::SmoothingDelegate* smoother) {
      return THROW_UNLESS((il2cpp_utils::New<LocalStateBuffer_3<TStateTable, TType, TState>*>(reliableUpdateFrequency, unreliableUpdateFrequency, size, interpolator, smoother)));
    }
    // public System.Void MarkDirty()
    // Offset: 0xFFFFFFFF
    void MarkDirty() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "MarkDirty"));
    }
    // public System.Boolean TryGetSerialized(System.Boolean reliable, out TStateTable state)
    // Offset: 0xFFFFFFFF
    bool TryGetSerialized(bool reliable, TStateTable& state) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetSerialized", reliable, state));
    }
    // public System.Void SetTime(System.Single time)
    // Offset: 0xFFFFFFFF
    void SetTime(float time) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetTime", time));
    }
    // public System.Void SetState(TType type, TState state)
    // Offset: 0xFFFFFFFF
    void SetState(TType type, TState state) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetState", type, state));
    }
    // public TState GetState(TType type)
    // Offset: 0xFFFFFFFF
    TState GetState(TType type) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TState>(this, "GetState", type));
    }
  }; // LocalStateBuffer`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::LocalStateBuffer_3, "", "LocalStateBuffer`3");
#pragma pack(pop)
