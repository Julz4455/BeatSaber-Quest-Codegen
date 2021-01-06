// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IUnifiedNetworkPlayerModel
#include "GlobalNamespace/IUnifiedNetworkPlayerModel.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Skipping declaration: INetworkPlayerModel because it is already included!
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: INetworkPlayerModelPartyConfig`1<T>
  template<typename T>
  class INetworkPlayerModelPartyConfig_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
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
  // Size: 0xB8
  // Autogenerated type: MockNetworkPlayerModel
  // [] Offset: FFFFFFFF
  class MockNetworkPlayerModel : public ::Il2CppObject/*, public GlobalNamespace::IUnifiedNetworkPlayerModel*/ {
    public:
    // [InjectAttribute] Offset: 0xDC97B8
    // private readonly MultiplayerMockSettings _mockSettings
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MultiplayerMockSettings* mockSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerMockSettings*) == 0x8);
    // [InjectAttribute] Offset: 0xDC97C8
    // private readonly MockMultiplayerSessionManager _mockMultiplayerSessionManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MockMultiplayerSessionManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC97D8
    // private System.Boolean <discoveryEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool discoveryEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC97E8
    // private readonly System.Boolean <localPlayerIsPartyOwner>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool localPlayerIsPartyOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: localPlayerIsPartyOwner and: maxPartySize
    char __padding3[0x2] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC97F8
    // private System.Int32 <maxPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDC9808
    // private GameplayServerConfiguration <configuration>k__BackingField
    // Size: 0x18
    // Offset: 0x28
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // [CompilerGeneratedAttribute] Offset: 0xDC9818
    // private readonly System.Int32 <currentPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x40
    int currentPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentPartySize and: connectedPlayerManager
    char __padding6[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC9828
    // private readonly ConnectedPlayerManager <connectedPlayerManager>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConnectedPlayerManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9838
    // private System.Boolean <enableLocalNetwork>k__BackingField
    // Size: 0x1
    // Offset: 0x50
    bool enableLocalNetwork;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: enableLocalNetwork and: serverFilter
    char __padding8[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC9848
    // private GameplayServerFilter <serverFilter>k__BackingField
    // Size: 0x28
    // Offset: 0x58
    GlobalNamespace::GameplayServerFilter serverFilter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerFilter) == 0x28);
    // [CompilerGeneratedAttribute] Offset: 0xDC9858
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerCreatedEvent
    // Size: 0x8
    // Offset: 0x80
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9868
    // private System.Action`1<INetworkPlayerModel> connectedPlayerManagerDestroyedEvent
    // Size: 0x8
    // Offset: 0x88
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9878
    // private System.Action partyRefreshingEvent
    // Size: 0x8
    // Offset: 0x90
    System::Action* partyRefreshingEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9888
    // private System.Action`1<INetworkPlayerModel> partyChangedEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayerModel*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC9898
    // private System.Action`1<System.Int32> partySizeChangedEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action_1<int>* partySizeChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC98A8
    // private System.Action`1<INetworkPlayer> joinRequestedEvent
    // Size: 0x8
    // Offset: 0xA8
    System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC98B8
    // private System.Action`1<INetworkPlayer> inviteRequestedEvent
    // Size: 0x8
    // Offset: 0xB0
    System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*) == 0x8);
    // Creating value type constructor for type: MockNetworkPlayerModel
    MockNetworkPlayerModel(GlobalNamespace::MultiplayerMockSettings* mockSettings_ = {}, GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager_ = {}, bool discoveryEnabled_ = {}, bool localPlayerIsPartyOwner_ = {}, int maxPartySize_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}, int currentPartySize_ = {}, GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager_ = {}, bool enableLocalNetwork_ = {}, GlobalNamespace::GameplayServerFilter serverFilter_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerCreatedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* connectedPlayerManagerDestroyedEvent_ = {}, System::Action* partyRefreshingEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent_ = {}, System::Action_1<int>* partySizeChangedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* joinRequestedEvent_ = {}, System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent_ = {}) noexcept : mockSettings{mockSettings_}, mockMultiplayerSessionManager{mockMultiplayerSessionManager_}, discoveryEnabled{discoveryEnabled_}, localPlayerIsPartyOwner{localPlayerIsPartyOwner_}, maxPartySize{maxPartySize_}, configuration{configuration_}, currentPartySize{currentPartySize_}, connectedPlayerManager{connectedPlayerManager_}, enableLocalNetwork{enableLocalNetwork_}, serverFilter{serverFilter_}, connectedPlayerManagerCreatedEvent{connectedPlayerManagerCreatedEvent_}, connectedPlayerManagerDestroyedEvent{connectedPlayerManagerDestroyedEvent_}, partyRefreshingEvent{partyRefreshingEvent_}, partyChangedEvent{partyChangedEvent_}, partySizeChangedEvent{partySizeChangedEvent_}, joinRequestedEvent{joinRequestedEvent_}, inviteRequestedEvent{inviteRequestedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IUnifiedNetworkPlayerModel
    operator GlobalNamespace::IUnifiedNetworkPlayerModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IUnifiedNetworkPlayerModel*>(this);
    }
    // private System.Void set_maxPartySize(System.Int32 value)
    // Offset: 0x10257B8
    void set_maxPartySize(int value);
    // public System.Void set_configuration(GameplayServerConfiguration value)
    // Offset: 0x10257D4
    void set_configuration(GlobalNamespace::GameplayServerConfiguration value);
    // private System.Void set_serverFilter(GameplayServerFilter value)
    // Offset: 0x1025900
    void set_serverFilter(GlobalNamespace::GameplayServerFilter value);
    // public System.Void Refresh(System.Boolean clearCurrentList)
    // Offset: 0x1026344
    void Refresh(bool clearCurrentList);
    // public System.Boolean get_discoveryEnabled()
    // Offset: 0x1025794
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_discoveryEnabled()
    bool get_discoveryEnabled();
    // public System.Void set_discoveryEnabled(System.Boolean value)
    // Offset: 0x102579C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::set_discoveryEnabled(System.Boolean value)
    void set_discoveryEnabled(bool value);
    // public System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0x10257A8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::get_localPlayerIsPartyOwner()
    bool get_localPlayerIsPartyOwner();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x10257B0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_maxPartySize()
    int get_maxPartySize();
    // public GameplayServerConfiguration get_configuration()
    // Offset: 0x10257C0
    // Implemented from: INetworkPlayerModel
    // Base method: GameplayServerConfiguration INetworkPlayerModel::get_configuration()
    GlobalNamespace::GameplayServerConfiguration get_configuration();
    // public System.Int32 get_currentPartySize()
    // Offset: 0x10257E8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Int32 INetworkPlayerModel::get_currentPartySize()
    int get_currentPartySize();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_partyPlayers()
    // Offset: 0x10257F0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_partyPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_partyPlayers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_otherPlayers()
    // Offset: 0x102585C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> INetworkPlayerModel::get_otherPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_otherPlayers();
    // Creating proxy method: GlobalNamespace_INetworkPlayerModel_get_otherPlayers
    // Maps to method: get_otherPlayers
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GlobalNamespace_INetworkPlayerModel_get_otherPlayers();
    // public ConnectedPlayerManager get_connectedPlayerManager()
    // Offset: 0x1025878
    // Implemented from: INetworkPlayerModel
    // Base method: ConnectedPlayerManager INetworkPlayerModel::get_connectedPlayerManager()
    GlobalNamespace::ConnectedPlayerManager* get_connectedPlayerManager();
    // public INetworkPlayer get_localPlayer()
    // Offset: 0x1025880
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: INetworkPlayer IUnifiedNetworkPlayerModel::get_localPlayer()
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // public System.Boolean get_enableLocalNetwork()
    // Offset: 0x102589C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Boolean IUnifiedNetworkPlayerModel::get_enableLocalNetwork()
    bool get_enableLocalNetwork();
    // public System.Void set_enableLocalNetwork(System.Boolean value)
    // Offset: 0x10258A4
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::set_enableLocalNetwork(System.Boolean value)
    void set_enableLocalNetwork(bool value);
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_publicServers()
    // Offset: 0x10258B0
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> IUnifiedNetworkPlayerModel::get_publicServers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_publicServers();
    // public System.Collections.Generic.IEnumerable`1<INetworkPlayer> get_localNetworkPlayers()
    // Offset: 0x10258CC
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> IUnifiedNetworkPlayerModel::get_localNetworkPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* get_localNetworkPlayers();
    // public GameplayServerFilter get_serverFilter()
    // Offset: 0x10258E8
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: GameplayServerFilter IUnifiedNetworkPlayerModel::get_serverFilter()
    GlobalNamespace::GameplayServerFilter get_serverFilter();
    // public System.String get_userId()
    // Offset: 0x1025924
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x102596C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_userName()
    ::Il2CppString* get_userName();
    // public System.String get_secret()
    // Offset: 0x10259B4
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_secret()
    ::Il2CppString* get_secret();
    // public System.String get_code()
    // Offset: 0x10259FC
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.String IUnifiedNetworkPlayerModel::get_code()
    ::Il2CppString* get_code();
    // public System.Void add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1025A44
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1025AE8
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerCreatedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1025B8C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1025C30
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_connectedPlayerManagerDestroyedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partyRefreshingEvent(System.Action value)
    // Offset: 0x1025CD4
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::add_partyRefreshingEvent(System.Action value)
    void add_partyRefreshingEvent(System::Action* value);
    // public System.Void remove_partyRefreshingEvent(System.Action value)
    // Offset: 0x1025D78
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::remove_partyRefreshingEvent(System.Action value)
    void remove_partyRefreshingEvent(System::Action* value);
    // public System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1025E1C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x1025EC0
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1025F64
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x1026008
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public System.Void add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10260AC
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1026150
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_joinRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x10261F4
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x1026298
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> config)
    // Offset: 0xFFFFFFFF
    // Implemented from: INetworkPlayerModel
    // Base method: System.Boolean INetworkPlayerModel::CreateParty(INetworkPlayerModelPartyConfig`1<T> config)
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* config) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNetworkPlayerModel").WithContext("CreateParty");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CreateParty", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(config)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, config);
    }
    // public System.Void DestroyParty()
    // Offset: 0x102633C
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::DestroyParty()
    void DestroyParty();
    // public System.Void Disconnect()
    // Offset: 0x1026340
    // Implemented from: INetworkPlayerModel
    // Base method: System.Void INetworkPlayerModel::Disconnect()
    void Disconnect();
    // public System.Void SetServerFilter(GameplayServerFilter filter)
    // Offset: 0x1026348
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::SetServerFilter(GameplayServerFilter filter)
    void SetServerFilter(GlobalNamespace::GameplayServerFilter filter);
    // public System.Void JoinMatchmaking(GameplayServerConfiguration configuration, System.String secret)
    // Offset: 0x102636C
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::JoinMatchmaking(GameplayServerConfiguration configuration, System.String secret)
    void JoinMatchmaking(GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret);
    // public System.Void ConnectToServerWithCode(System.String serverCode, System.String serverPassword)
    // Offset: 0x10263E0
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::ConnectToServerWithCode(System.String serverCode, System.String serverPassword)
    void ConnectToServerWithCode(::Il2CppString* serverCode, ::Il2CppString* serverPassword);
    // public System.Void ResetMasterServerReachability()
    // Offset: 0x10263E4
    // Implemented from: IUnifiedNetworkPlayerModel
    // Base method: System.Void IUnifiedNetworkPlayerModel::ResetMasterServerReachability()
    void ResetMasterServerReachability();
    // public System.Void .ctor()
    // Offset: 0x10263E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockNetworkPlayerModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("MockNetworkPlayerModel").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockNetworkPlayerModel*, creationType>()));
    }
  }; // MockNetworkPlayerModel
  static check_size<sizeof(MockNetworkPlayerModel), 176 + sizeof(System::Action_1<GlobalNamespace::INetworkPlayer*>*)> __GlobalNamespace_MockNetworkPlayerModelSizeCheck;
  static_assert(sizeof(MockNetworkPlayerModel) == 0xB8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockNetworkPlayerModel*, "", "MockNetworkPlayerModel");
#pragma pack(pop)
