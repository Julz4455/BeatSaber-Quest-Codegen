// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerSessionManager/MessageType
#include "GlobalNamespace/MultiplayerSessionManager_MessageType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: IStateTable`2<TType, TState>
  template<typename TType, typename TState>
  class IStateTable_2;
  // Forward declaring type: IEquatableByReference`1<T>
  template<typename T>
  class IEquatableByReference_1;
  // Forward declaring type: ISyncStateSerializable`1<T>
  template<typename T>
  class ISyncStateSerializable_1;
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: LocalMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class LocalMultiplayerSyncState_3;
  // Forward declaring type: RemoteMultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class RemoteMultiplayerSyncState_3;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerSyncState`3<TStateTable, TType, TState>
  template<typename TStateTable, typename TType, typename TState>
  class MultiplayerSyncState_3;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
  // Skipping declaration: IConvertible because it is already included!
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerSyncStateManager`4
  // [] Offset: FFFFFFFF
  template<typename TStateTable, typename TType, typename TState, typename TSerializable>
  class MultiplayerSyncStateManager_4 : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerSyncStateManager_4::$$c<TStateTable, TType, TState, TSerializable>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: MultiplayerSyncStateManager`4/<>c
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D30EA0
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>*;
      static constexpr std::string_view NESTED_NAME = "$$c";
      // Creating value type constructor for type: $$c
      $$c() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly MultiplayerSyncStateManager`4/<>c<TStateTable,TType,TState,TSerializable> <>9
      static typename GlobalNamespace::MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename GlobalNamespace::MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly MultiplayerSyncStateManager`4/<>c<TStateTable,TType,TState,TSerializable> <>9
      static void _set_$$9(typename GlobalNamespace::MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>,System.Int32> <>9__33_0
      static System::Func_2<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>* _get_$$9__33_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::$$c::_get_$$9__33_0");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9__33_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>,System.Int32> <>9__33_0
      static void _set_$$9__33_0(System::Func_2<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int>* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::$$c::_set_$$9__33_0");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), "<>9__33_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // System.Int32 <HandlePlayerConnected>b__33_0(RemoteMultiplayerSyncState`3<TStateTable,TType,TState> s)
      // Offset: 0xFFFFFFFF
      int $HandlePlayerConnected$b__33_0(GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* s) {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::$$c::<HandlePlayerConnected>b__33_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<HandlePlayerConnected>b__33_0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(s))));
        return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, s);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>::$$c*, creationType>()));
      }
    }; // MultiplayerSyncStateManager`4/<>c
    // Could not write size check! Type: MultiplayerSyncStateManager`4/<>c is generic, or has no fields that are valid for size checks!
    // [InjectAttribute] Offset: 0xD36470
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private LocalMultiplayerSyncState`3<TStateTable,TType,TState> _localState
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _connectedPlayerStates
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* connectedPlayerStates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<RemoteMultiplayerSyncState`3<TStateTable,TType,TState>> _disconnectedPlayerStates
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* disconnectedPlayerStates;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerSyncStateManager_4
    MultiplayerSyncStateManager_4(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* localState_ = {}, System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* connectedPlayerStates_ = {}, System::Collections::Generic::List_1<GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* disconnectedPlayerStates_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, localState{localState_}, connectedPlayerStates{connectedPlayerStates_}, disconnectedPlayerStates{disconnectedPlayerStates_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected IMultiplayerSessionManager get_multiplayerSessionManager()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IMultiplayerSessionManager* get_multiplayerSessionManager() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_multiplayerSessionManager");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_multiplayerSessionManager", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IMultiplayerSessionManager*, false>(this, ___internal__method);
    }
    // public LocalMultiplayerSyncState`3<TStateTable,TType,TState> get_localState()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* get_localState() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_localState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_localState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method);
    }
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0xFFFFFFFF
    int get_connectedPlayerCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_connectedPlayerCount");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_connectedPlayerCount", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_disconnectedPlayerCount()
    // Offset: 0xFFFFFFFF
    int get_disconnectedPlayerCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_disconnectedPlayerCount");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_disconnectedPlayerCount", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_syncTime");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_syncTime", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // protected System.Single get_unreliableUpdateFrequency()
    // Offset: 0xFFFFFFFF
    float get_unreliableUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_unreliableUpdateFrequency");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_unreliableUpdateFrequency", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // protected System.Single get_reliableUpdateFrequency()
    // Offset: 0xFFFFFFFF
    float get_reliableUpdateFrequency() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_reliableUpdateFrequency");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_reliableUpdateFrequency", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // protected System.Int32 get_localBufferSize()
    // Offset: 0xFFFFFFFF
    int get_localBufferSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_localBufferSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_localBufferSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // protected System.Int32 get_remoteBufferSize()
    // Offset: 0xFFFFFFFF
    int get_remoteBufferSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_remoteBufferSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_remoteBufferSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // protected IPacketPool`1<TSerializable> get_serializablePool()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IPacketPool_1<TSerializable>* get_serializablePool() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_serializablePool");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_serializablePool", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IPacketPool_1<TSerializable>*, false>(this, ___internal__method);
    }
    // protected MultiplayerSessionManager/MessageType get_messageType()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::get_messageType");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_messageType", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSessionManager_MessageType, false>(this, ___internal__method);
    }
    // protected System.Void Start()
    // Offset: 0xFFFFFFFF
    void Start() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::Start");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Start", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void LateUpdate()
    // Offset: 0xFFFFFFFF
    void LateUpdate() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::LateUpdate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LateUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::OnDestroy");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected TState Interpolate(TState a, System.Single timeA, TState b, System.Single timeB, System.Single time)
    // Offset: 0xFFFFFFFF
    TState Interpolate(TState a, float timeA, TState b, float timeB, float time) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::Interpolate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Interpolate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(a, timeA, b, timeB, time)));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, a, timeA, b, timeB, time);
    }
    // protected TState Smooth(TState a, TState b, System.Single smoooth)
    // Offset: 0xFFFFFFFF
    TState Smooth(TState a, TState b, float smoooth) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::Smooth");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Smooth", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(a, b, smoooth)));
      return ::il2cpp_utils::RunMethodThrow<TState, false>(this, ___internal__method, a, b, smoooth);
    }
    // public System.Void ClearBufferedStates()
    // Offset: 0xFFFFFFFF
    void ClearBufferedStates() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::ClearBufferedStates");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ClearBufferedStates", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void TryCreateLocalState()
    // Offset: 0xFFFFFFFF
    void TryCreateLocalState() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::TryCreateLocalState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryCreateLocalState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void HandlePlayerConnected(IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    void HandlePlayerConnected(GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::HandlePlayerConnected");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandlePlayerConnected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(player)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
    }
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::HandlePlayerDisconnected");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandlePlayerDisconnected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(player)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, player);
    }
    // private System.Void HandleSyncPacket(TSerializable packet, IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    void HandleSyncPacket(TSerializable packet, GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::HandleSyncPacket");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleSyncPacket", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(packet, player)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, player);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncState(System.Int32 i)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncState(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::GetSyncState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetSyncState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(i)));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, i);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetSyncStateForPlayer(IConnectedPlayer player)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetSyncStateForPlayer(GlobalNamespace::IConnectedPlayer* player) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::GetSyncStateForPlayer");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetSyncStateForPlayer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(player)));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, player);
    }
    // public MultiplayerSyncState`3<TStateTable,TType,TState> GetDisconnectedSyncState(System.Int32 i)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GetDisconnectedSyncState(int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::GetDisconnectedSyncState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetDisconnectedSyncState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(i)));
      return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal__method, i);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSyncStateManager_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSyncStateManager_4<TStateTable, TType, TState, TSerializable>*, creationType>()));
    }
  }; // MultiplayerSyncStateManager`4
  // Could not write size check! Type: MultiplayerSyncStateManager`4 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MultiplayerSyncStateManager_4, "", "MultiplayerSyncStateManager`4");
