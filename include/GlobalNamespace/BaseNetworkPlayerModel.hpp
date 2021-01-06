// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandaloneMonobehavior
#include "GlobalNamespace/StandaloneMonobehavior.hpp"
// Including type: INetworkPlayerModel
#include "GlobalNamespace/INetworkPlayerModel.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
  // Forward declaring type: IConnectionManager
  class IConnectionManager;
  // Forward declaring type: IConnectionInitParams`1<T>
  template<typename T>
  class IConnectionInitParams_1;
  // Forward declaring type: INetworkPlayerModelPartyConfig`1<T>
  template<typename T>
  class INetworkPlayerModelPartyConfig_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x78
  // Autogenerated type: BaseNetworkPlayerModel
  // [] Offset: FFFFFFFF
  class BaseNetworkPlayerModel : public GlobalNamespace::StandaloneMonobehavior/*, public GlobalNamespace::INetworkPlayerModel*/ {
    public:
    // Writing base type padding for base size: 0x2C to desired offset: 0x30
    char ___base_padding[0x4] = {};
    // Nested type: GlobalNamespace::BaseNetworkPlayerModel::PartyConfig
    class PartyConfig;
    // Nested type: GlobalNamespace::BaseNetworkPlayerModel::$GetPartyPlayers$d__55
    class $GetPartyPlayers$d__55;
    // Nested type: GlobalNamespace::BaseNetworkPlayerModel::$GetOtherPlayers$d__56
    class $GetOtherPlayers$d__56;
    // private ConnectedPlayerManager _connectedPlayerManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // private INetworkPlayerModel _partyManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::INetworkPlayerModel* partyManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayerModel*) == 0x8);
    // private System.Int32 _maxPartySize
    // Size: 0x4
    // Offset: 0x40
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: maxPartySize and: configuration
    char __padding2[0x4] = {};
    // private GameplayServerConfiguration _configuration
    // Size: 0x18
    // Offset: 0x48
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // [CompilerGeneratedAttribute] Offset: 0xDC44AC
    // private System.Boolean <discoveryEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x60
    bool discoveryEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: discoveryEnabled and: connectedPlayerManagerCreatedEvent
    char __padding4[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC44BC
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerCreatedEvent
    // Size: 0x8
    // Offset: 0x68
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC44CC
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerDestroyedEvent
    // Size: 0x8
    // Offset: 0x70
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // Creating value type constructor for type: BaseNetworkPlayerModel
    BaseNetworkPlayerModel(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager_ = {}, GlobalNamespace::INetworkPlayerModel* partyManager_ = {}, int maxPartySize_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, bool discoveryEnabled_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent_ = {}) noexcept : connectedPlayerManager{connectedPlayerManager_}, partyManager{partyManager_}, maxPartySize{maxPartySize_}, configuration{configuration_}, discoveryEnabled{discoveryEnabled_}, connectedPlayerManagerCreatedEvent{connectedPlayerManagerCreatedEvent_}, connectedPlayerManagerDestroyedEvent{connectedPlayerManagerDestroyedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModel
    operator GlobalNamespace::INetworkPlayerModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModel*>(this);
    }
    // public INetworkPlayerModel get_partyManager()
    // Offset: 0x1A4D5E4
    GlobalNamespace::INetworkPlayerModel* get_partyManager();
    // protected System.Boolean get_isConnectedOrConnecting()
    // Offset: 0x1A4D5F4
    bool get_isConnectedOrConnecting();
    // protected System.Boolean get_isConnectionOwner()
    // Offset: 0x1A4D608
    bool get_isConnectionOwner();
    // public INetworkPlayer get_localPlayer()
    // Offset: 0x1A4D61C
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // protected System.Boolean get_isServer()
    // Offset: 0x1A4D934
    bool get_isServer();
    // protected System.Boolean get_isClient()
    // Offset: 0x1A4D980
    bool get_isClient();
    // protected System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetPartyPlayers()
    // Offset: 0x1A4DC84
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();
    // protected System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetOtherPlayers()
    // Offset: 0x1A4DCE4
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();
    // protected System.Void ConnectionFailed(ConnectionFailedReason reason)
    // Offset: 0x1A4DD44
    void ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason);
    // protected System.Void PlayerConnected(IConnectedPlayer player)
    // Offset: 0x1A4DD48
    void PlayerConnected(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void PlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x1A4DD4C
    void PlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void PlayerStateChanged(IConnectedPlayer player)
    // Offset: 0x1A4DD50
    void PlayerStateChanged(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void ConnectedPlayerManagerChanged()
    // Offset: 0x1A4DD54
    void ConnectedPlayerManagerChanged();
    // protected System.Void PlayerOrderChanged(IConnectedPlayer player)
    // Offset: 0x1A4DD58
    void PlayerOrderChanged(GlobalNamespace::IConnectedPlayer* player);
    // protected System.Void PartySizeChanged(System.Int32 currentPartySize)
    // Offset: 0x1A4DD5C
    void PartySizeChanged(int currentPartySize);
    // protected System.Void Disconnected(DisconnectedReason disconnectedReason)
    // Offset: 0x1A4DD60
    void Disconnected(GlobalNamespace::DisconnectedReason disconnectedReason);
    // protected System.Void DestroyConnectedPlayerManager()
    // Offset: 0x1A4D9DC
    void DestroyConnectedPlayerManager();
    // protected System.Void CreateConnectedPlayerManager(IConnectionInitParams`1<T> initParams)
    // Offset: 0xFFFFFFFF
    template<class T>
    void CreateConnectedPlayerManager(GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
      static_assert(std::is_base_of_v<GlobalNamespace::IConnectionManager, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BaseNetworkPlayerModel").WithContext("CreateConnectedPlayerManager");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateConnectedPlayerManager", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(initParams)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, initParams);
    }
    // protected System.Void Log(System.String message)
    // Offset: 0x1A4DE80
    void Log(::Il2CppString* message);
    // public ConnectedPlayerManager get_connectedPlayerManager()
    // Offset: 0x1A4D5DC
    // Implemented from: INetworkPlayerModel
    // Base method: ConnectedPlayerManager INetworkPlayerModel::get_connectedPlayerManager()
    GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();
    // public System.Boolean get_discoveryEnabled()
    // Offset: 0x1A4D624
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_discoveryEnabled()
    bool get_discoveryEnabled();
    // public System.Void set_discoveryEnabled(System.Boolean value)
    // Offset: 0x1A4D62C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::set_discoveryEnabled(System.Boolean value)
    void set_discoveryEnabled(bool value);
    // public System.Int32 get_currentPartySize()
    // Offset: 0x1A4D638
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_currentPartySize()
    int get_currentPartySize();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x1A4D640
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_maxPartySize()
    int get_maxPartySize();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x1A4D648
    // Implemented from: INetworkPlayerModel
    // Base method: GameplayServerConfiguration INetworkPlayerModel::get_configuration()
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Void add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1A4D65C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1A4D700
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1A4D7A4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1A4D848
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1A4D8EC
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1A4D8F0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1A4D8F4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1A4D8F8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1A4D8FC
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1A4D900
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1A4D904
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1A4D908
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_partyPlayers()
    // Offset: 0x1A4D90C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_partyPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_partyPlayers();
    // private System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel.get_otherPlayers()
    // Offset: 0x1A4D91C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_otherPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GlobalNamespace_INetworkPlayerModel_get_otherPlayers();
    // public System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0x1A4D92C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_localPlayerIsPartyOwner()
    bool get_localPlayerIsPartyOwner();
    // protected override System.Void OnDestroy()
    // Offset: 0x1A4D9D8
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::OnDestroy()
    void OnDestroy();
    // protected override System.Void Update()
    // Offset: 0x1A4DC70
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::Update()
    void Update();
    // public System.Void Disconnect()
    // Offset: 0x1A4DD70
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::Disconnect()
    void Disconnect();
    // public System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    // Offset: 0xFFFFFFFF
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BaseNetworkPlayerModel").WithContext("CreateParty");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateParty", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(createConfig)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, createConfig);
    }
    // public System.Void DestroyParty()
    // Offset: 0x1A4DD74
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::DestroyParty()
    void DestroyParty();
    // protected System.Void .ctor()
    // Offset: 0x1A4DF48
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BaseNetworkPlayerModel").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseNetworkPlayerModel*, creationType>()));
    }
  }; // BaseNetworkPlayerModel
  static check_size<sizeof(BaseNetworkPlayerModel), 112 + sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*)> __GlobalNamespace_BaseNetworkPlayerModelSizeCheck;
  static_assert(sizeof(BaseNetworkPlayerModel) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel*, "", "BaseNetworkPlayerModel");
#pragma pack(pop)
