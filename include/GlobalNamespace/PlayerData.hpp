// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
  // Forward declaring type: PlayerAllOverallStatsData
  class PlayerAllOverallStatsData;
  // Forward declaring type: PlayerLevelStatsData
  class PlayerLevelStatsData;
  // Forward declaring type: PlayerMissionStatsData
  class PlayerMissionStatsData;
  // Forward declaring type: ColorSchemesSettings
  class ColorSchemesSettings;
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
  // Forward declaring type: MultiplayerModeSettings
  class MultiplayerModeSettings;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionHelpSO
  class MissionHelpSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  // Autogenerated type: PlayerData
  // [] Offset: FFFFFFFF
  class PlayerData : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDC4A9C
    // private System.String <playerId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4AAC
    // private System.String <playerName>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4ABC
    // private System.Boolean <shouldShowTutorialPrompt>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool shouldShowTutorialPrompt;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC4ACC
    // private System.Boolean <shouldShow360Warning>k__BackingField
    // Size: 0x1
    // Offset: 0x21
    bool shouldShow360Warning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC4ADC
    // private System.Boolean <agreedToEula>k__BackingField
    // Size: 0x1
    // Offset: 0x22
    bool agreedToEula;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC4AEC
    // private System.Boolean <agreedToMultiplayerDisclaimer>k__BackingField
    // Size: 0x1
    // Offset: 0x23
    bool agreedToMultiplayerDisclaimer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [CompilerGeneratedAttribute] Offset: 0xDC4AFC
    // private System.Boolean <avatarCreated>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool avatarCreated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: avatarCreated and: lastSelectedBeatmapDifficulty
    char __padding6[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC4B0C
    // private BeatmapDifficulty <lastSelectedBeatmapDifficulty>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficulty) == 0x4);
    // Padding between fields: lastSelectedBeatmapDifficulty and: lastSelectedBeatmapCharacteristic
    char __padding7[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDC4B1C
    // private BeatmapCharacteristicSO <lastSelectedBeatmapCharacteristic>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapCharacteristicSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B2C
    // private GameplayModifiers <gameplayModifiers>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiers*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B3C
    // private PlayerSpecificSettings <playerSpecificSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerSpecificSettings*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B4C
    // private PracticeSettings <practiceSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::PracticeSettings* practiceSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PracticeSettings*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B5C
    // private PlayerAllOverallStatsData <playerAllOverallStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerAllOverallStatsData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B6C
    // private System.Collections.Generic.List`1<PlayerLevelStatsData> <levelsStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B7C
    // private System.Collections.Generic.List`1<PlayerMissionStatsData> <missionsStatsData>k__BackingField
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B8C
    // private System.Collections.Generic.List`1<System.String> <showedMissionHelpIds>k__BackingField
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4B9C
    // private System.Collections.Generic.List`1<System.String> <guestPlayerNames>k__BackingField
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::List_1<::Il2CppString*>* guestPlayerNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4BAC
    // private ColorSchemesSettings <colorSchemesSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::ColorSchemesSettings* colorSchemesSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemesSettings*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4BBC
    // private OverrideEnvironmentSettings <overrideEnvironmentSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OverrideEnvironmentSettings*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4BCC
    // private System.Collections.Generic.HashSet`1<System.String> <favoritesLevelIds>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::HashSet_1<::Il2CppString*>* favoritesLevelIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4BDC
    // private MultiplayerModeSettings <multiplayerModeSettings>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerModeSettings*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4BEC
    // private System.Action favoriteLevelsSetDidChangeEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action* favoriteLevelsSetDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC4BFC
    // private System.Action didIncreaseNumberOfGameplaysEvent
    // Size: 0x8
    // Offset: 0xA0
    System::Action* didIncreaseNumberOfGameplaysEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: PlayerData
    PlayerData(::Il2CppString* playerId_ = {}, ::Il2CppString* playerName_ = {}, bool shouldShowTutorialPrompt_ = {}, bool shouldShow360Warning_ = {}, bool agreedToEula_ = {}, bool agreedToMultiplayerDisclaimer_ = {}, bool avatarCreated_ = {}, GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty_ = {}, GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic_ = {}, GlobalNamespace::GameplayModifiers* gameplayModifiers_ = {}, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings_ = {}, GlobalNamespace::PracticeSettings* practiceSettings_ = {}, GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* guestPlayerNames_ = {}, GlobalNamespace::ColorSchemesSettings* colorSchemesSettings_ = {}, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* favoritesLevelIds_ = {}, GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings_ = {}, System::Action* favoriteLevelsSetDidChangeEvent_ = {}, System::Action* didIncreaseNumberOfGameplaysEvent_ = {}) noexcept : playerId{playerId_}, playerName{playerName_}, shouldShowTutorialPrompt{shouldShowTutorialPrompt_}, shouldShow360Warning{shouldShow360Warning_}, agreedToEula{agreedToEula_}, agreedToMultiplayerDisclaimer{agreedToMultiplayerDisclaimer_}, avatarCreated{avatarCreated_}, lastSelectedBeatmapDifficulty{lastSelectedBeatmapDifficulty_}, lastSelectedBeatmapCharacteristic{lastSelectedBeatmapCharacteristic_}, gameplayModifiers{gameplayModifiers_}, playerSpecificSettings{playerSpecificSettings_}, practiceSettings{practiceSettings_}, playerAllOverallStatsData{playerAllOverallStatsData_}, levelsStatsData{levelsStatsData_}, missionsStatsData{missionsStatsData_}, showedMissionHelpIds{showedMissionHelpIds_}, guestPlayerNames{guestPlayerNames_}, colorSchemesSettings{colorSchemesSettings_}, overrideEnvironmentSettings{overrideEnvironmentSettings_}, favoritesLevelIds{favoritesLevelIds_}, multiplayerModeSettings{multiplayerModeSettings_}, favoriteLevelsSetDidChangeEvent{favoriteLevelsSetDidChangeEvent_}, didIncreaseNumberOfGameplaysEvent{didIncreaseNumberOfGameplaysEvent_} {}
    // static field const value: static public System.Int32 kMaxGuestPlayers
    static constexpr const int kMaxGuestPlayers = 10;
    // Get static field: static public System.Int32 kMaxGuestPlayers
    static int _get_kMaxGuestPlayers();
    // Set static field: static public System.Int32 kMaxGuestPlayers
    static void _set_kMaxGuestPlayers(int value);
    // public System.String get_playerId()
    // Offset: 0xF0BCBC
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0xF0BCC4
    void set_playerId(::Il2CppString* value);
    // public System.String get_playerName()
    // Offset: 0xF0BCCC
    ::Il2CppString* get_playerName();
    // private System.Void set_playerName(System.String value)
    // Offset: 0xF0BCD4
    void set_playerName(::Il2CppString* value);
    // public System.Boolean get_shouldShowTutorialPrompt()
    // Offset: 0xF0BCDC
    bool get_shouldShowTutorialPrompt();
    // private System.Void set_shouldShowTutorialPrompt(System.Boolean value)
    // Offset: 0xF0BCE4
    void set_shouldShowTutorialPrompt(bool value);
    // public System.Boolean get_shouldShow360Warning()
    // Offset: 0xF0BCF0
    bool get_shouldShow360Warning();
    // private System.Void set_shouldShow360Warning(System.Boolean value)
    // Offset: 0xF0BCF8
    void set_shouldShow360Warning(bool value);
    // public System.Boolean get_agreedToEula()
    // Offset: 0xF0BD04
    bool get_agreedToEula();
    // private System.Void set_agreedToEula(System.Boolean value)
    // Offset: 0xF0BD0C
    void set_agreedToEula(bool value);
    // public System.Boolean get_agreedToMultiplayerDisclaimer()
    // Offset: 0xF0BD18
    bool get_agreedToMultiplayerDisclaimer();
    // private System.Void set_agreedToMultiplayerDisclaimer(System.Boolean value)
    // Offset: 0xF0BD20
    void set_agreedToMultiplayerDisclaimer(bool value);
    // public System.Boolean get_avatarCreated()
    // Offset: 0xF0BD2C
    bool get_avatarCreated();
    // private System.Void set_avatarCreated(System.Boolean value)
    // Offset: 0xF0BD34
    void set_avatarCreated(bool value);
    // public BeatmapDifficulty get_lastSelectedBeatmapDifficulty()
    // Offset: 0xF0BD40
    GlobalNamespace::BeatmapDifficulty get_lastSelectedBeatmapDifficulty();
    // private System.Void set_lastSelectedBeatmapDifficulty(BeatmapDifficulty value)
    // Offset: 0xF0BD48
    void set_lastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty value);
    // public BeatmapCharacteristicSO get_lastSelectedBeatmapCharacteristic()
    // Offset: 0xF0BD50
    GlobalNamespace::BeatmapCharacteristicSO* get_lastSelectedBeatmapCharacteristic();
    // private System.Void set_lastSelectedBeatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0xF0BD58
    void set_lastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xF0BD60
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(GameplayModifiers value)
    // Offset: 0xF0BD68
    void set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // public PlayerSpecificSettings get_playerSpecificSettings()
    // Offset: 0xF0BD70
    GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();
    // private System.Void set_playerSpecificSettings(PlayerSpecificSettings value)
    // Offset: 0xF0BD78
    void set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings* value);
    // public PracticeSettings get_practiceSettings()
    // Offset: 0xF0BD80
    GlobalNamespace::PracticeSettings* get_practiceSettings();
    // private System.Void set_practiceSettings(PracticeSettings value)
    // Offset: 0xF0BD88
    void set_practiceSettings(GlobalNamespace::PracticeSettings* value);
    // public PlayerAllOverallStatsData get_playerAllOverallStatsData()
    // Offset: 0xF0BD90
    GlobalNamespace::PlayerAllOverallStatsData* get_playerAllOverallStatsData();
    // private System.Void set_playerAllOverallStatsData(PlayerAllOverallStatsData value)
    // Offset: 0xF0BD98
    void set_playerAllOverallStatsData(GlobalNamespace::PlayerAllOverallStatsData* value);
    // public System.Collections.Generic.List`1<PlayerLevelStatsData> get_levelsStatsData()
    // Offset: 0xF0BDA0
    System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* get_levelsStatsData();
    // private System.Void set_levelsStatsData(System.Collections.Generic.List`1<PlayerLevelStatsData> value)
    // Offset: 0xF0BDA8
    void set_levelsStatsData(System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* value);
    // public System.Collections.Generic.List`1<PlayerMissionStatsData> get_missionsStatsData()
    // Offset: 0xF0BDB0
    System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* get_missionsStatsData();
    // private System.Void set_missionsStatsData(System.Collections.Generic.List`1<PlayerMissionStatsData> value)
    // Offset: 0xF0BDB8
    void set_missionsStatsData(System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* value);
    // public System.Collections.Generic.List`1<System.String> get_showedMissionHelpIds()
    // Offset: 0xF0BDC0
    System::Collections::Generic::List_1<::Il2CppString*>* get_showedMissionHelpIds();
    // private System.Void set_showedMissionHelpIds(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0xF0BDC8
    void set_showedMissionHelpIds(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public System.Collections.Generic.List`1<System.String> get_guestPlayerNames()
    // Offset: 0xF0BDD0
    System::Collections::Generic::List_1<::Il2CppString*>* get_guestPlayerNames();
    // private System.Void set_guestPlayerNames(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0xF0BDD8
    void set_guestPlayerNames(System::Collections::Generic::List_1<::Il2CppString*>* value);
    // public ColorSchemesSettings get_colorSchemesSettings()
    // Offset: 0xF0BDE0
    GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();
    // private System.Void set_colorSchemesSettings(ColorSchemesSettings value)
    // Offset: 0xF0BDE8
    void set_colorSchemesSettings(GlobalNamespace::ColorSchemesSettings* value);
    // public OverrideEnvironmentSettings get_overrideEnvironmentSettings()
    // Offset: 0xF0BDF0
    GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();
    // private System.Void set_overrideEnvironmentSettings(OverrideEnvironmentSettings value)
    // Offset: 0xF0BDF8
    void set_overrideEnvironmentSettings(GlobalNamespace::OverrideEnvironmentSettings* value);
    // public System.Collections.Generic.HashSet`1<System.String> get_favoritesLevelIds()
    // Offset: 0xF0BE00
    System::Collections::Generic::HashSet_1<::Il2CppString*>* get_favoritesLevelIds();
    // private System.Void set_favoritesLevelIds(System.Collections.Generic.HashSet`1<System.String> value)
    // Offset: 0xF0BE08
    void set_favoritesLevelIds(System::Collections::Generic::HashSet_1<::Il2CppString*>* value);
    // public MultiplayerModeSettings get_multiplayerModeSettings()
    // Offset: 0xF0BE10
    GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();
    // private System.Void set_multiplayerModeSettings(MultiplayerModeSettings value)
    // Offset: 0xF0BE18
    void set_multiplayerModeSettings(GlobalNamespace::MultiplayerModeSettings* value);
    // public System.Void add_favoriteLevelsSetDidChangeEvent(System.Action value)
    // Offset: 0xF0BE20
    void add_favoriteLevelsSetDidChangeEvent(System::Action* value);
    // public System.Void remove_favoriteLevelsSetDidChangeEvent(System.Action value)
    // Offset: 0xF0BEC4
    void remove_favoriteLevelsSetDidChangeEvent(System::Action* value);
    // public System.Void add_didIncreaseNumberOfGameplaysEvent(System.Action value)
    // Offset: 0xF0BF68
    void add_didIncreaseNumberOfGameplaysEvent(System::Action* value);
    // public System.Void remove_didIncreaseNumberOfGameplaysEvent(System.Action value)
    // Offset: 0xF0C00C
    void remove_didIncreaseNumberOfGameplaysEvent(System::Action* value);
    // public System.Void .ctor(System.String playerId, System.String playerName, BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, ColorSchemesSettings colorSchemesSettings, OverrideEnvironmentSettings overrideEnvironmentSettings)
    // Offset: 0xF0C0B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerData* New_ctor(::Il2CppString* playerId, ::Il2CppString* playerName, GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic, GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerData").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerData*, creationType>(playerId, playerName, lastSelectedBeatmapCharacteristic, colorSchemesSettings, overrideEnvironmentSettings)));
    }
    // public System.Void .ctor(System.String playerId, System.String playerName, System.Boolean shouldShowTutorialPrompt, System.Boolean shouldShow360Warning, System.Boolean agreedToEula, System.Boolean agreedToMultiplayerDisclaimer, System.Boolean avatarCreated, BeatmapDifficulty lastSelectedBeatmapDifficulty, BeatmapCharacteristicSO lastSelectedBeatmapCharacteristic, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, PlayerAllOverallStatsData playerAllOverallStatsData, System.Collections.Generic.List`1<PlayerLevelStatsData> levelsStatsData, System.Collections.Generic.List`1<PlayerMissionStatsData> missionsStatsData, System.Collections.Generic.List`1<System.String> showedMissionHelpIds, System.Collections.Generic.List`1<System.String> guestPlayerNames, ColorSchemesSettings colorSchemesSettings, OverrideEnvironmentSettings overrideEnvironmentSettings, System.Collections.Generic.List`1<System.String> favoritesLevelIds, MultiplayerModeSettings multiplayerModeSettings)
    // Offset: 0xF0C278
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerData* New_ctor(::Il2CppString* playerId, ::Il2CppString* playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool agreedToMultiplayerDisclaimer, bool avatarCreated, GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty, GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData, System::Collections::Generic::List_1<GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData, System::Collections::Generic::List_1<::Il2CppString*>* showedMissionHelpIds, System::Collections::Generic::List_1<::Il2CppString*>* guestPlayerNames, GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, System::Collections::Generic::List_1<::Il2CppString*>* favoritesLevelIds, GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("PlayerData").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerData*, creationType>(playerId, playerName, shouldShowTutorialPrompt, shouldShow360Warning, agreedToEula, agreedToMultiplayerDisclaimer, avatarCreated, lastSelectedBeatmapDifficulty, lastSelectedBeatmapCharacteristic, gameplayModifiers, playerSpecificSettings, practiceSettings, playerAllOverallStatsData, levelsStatsData, missionsStatsData, showedMissionHelpIds, guestPlayerNames, colorSchemesSettings, overrideEnvironmentSettings, favoritesLevelIds, multiplayerModeSettings)));
    }
    // public PlayerLevelStatsData GetPlayerLevelStatsData(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xF0C4BC
    GlobalNamespace::PlayerLevelStatsData* GetPlayerLevelStatsData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public PlayerLevelStatsData GetPlayerLevelStatsData(System.String levelId, BeatmapDifficulty difficulty, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xF0C738
    GlobalNamespace::PlayerLevelStatsData* GetPlayerLevelStatsData(::Il2CppString* levelId, GlobalNamespace::BeatmapDifficulty difficulty, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public PlayerMissionStatsData GetPlayerMissionStatsData(System.String missionId)
    // Offset: 0xF0C908
    GlobalNamespace::PlayerMissionStatsData* GetPlayerMissionStatsData(::Il2CppString* missionId);
    // public System.Boolean WasMissionHelpShowed(MissionHelpSO missionHelp)
    // Offset: 0xF0CA70
    bool WasMissionHelpShowed(GlobalNamespace::MissionHelpSO* missionHelp);
    // public System.Void MissionHelpWasShowed(MissionHelpSO missionHelp)
    // Offset: 0xF0CADC
    void MissionHelpWasShowed(GlobalNamespace::MissionHelpSO* missionHelp);
    // public System.Void IncreaseNumberOfGameplays(PlayerLevelStatsData playerLevelStats)
    // Offset: 0xF0CB78
    void IncreaseNumberOfGameplays(GlobalNamespace::PlayerLevelStatsData* playerLevelStats);
    // public System.Boolean IsLevelUserFavorite(IPreviewBeatmapLevel level)
    // Offset: 0xF0CBC0
    bool IsLevelUserFavorite(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void AddLevelToFavorites(IPreviewBeatmapLevel level)
    // Offset: 0xF0CC98
    void AddLevelToFavorites(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void RemoveLevelFromFavorites(IPreviewBeatmapLevel level)
    // Offset: 0xF0CDA0
    void RemoveLevelFromFavorites(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void MarkTutorialAsShown()
    // Offset: 0xF0CEA8
    void MarkTutorialAsShown();
    // public System.Void Mark360WarningAsShown()
    // Offset: 0xF0CEB0
    void Mark360WarningAsShown();
    // public System.Void MarkEulaAsAgreed()
    // Offset: 0xF0CEB8
    void MarkEulaAsAgreed();
    // public System.Void MarkMultiplayerDisclaimerAsAgreed()
    // Offset: 0xF0CEC4
    void MarkMultiplayerDisclaimerAsAgreed();
    // public System.Void MarkAvatarCreated()
    // Offset: 0xF0CED0
    void MarkAvatarCreated();
    // public System.Void AddGuestPlayerName(System.String guestPlayerName)
    // Offset: 0xF0CEDC
    void AddGuestPlayerName(::Il2CppString* guestPlayerName);
    // public System.Void DeleteAllGuestPlayers()
    // Offset: 0xF0D034
    void DeleteAllGuestPlayers();
    // public System.Void SetLastSelectedBeatmapDifficulty(BeatmapDifficulty beatmapDifficulty)
    // Offset: 0xF0D08C
    void SetLastSelectedBeatmapDifficulty(GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // public System.Void SetLastSelectedBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xF0D094
    void SetLastSelectedBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void SetGameplayModifiers(GameplayModifiers newGameplayModifiers)
    // Offset: 0xF0D09C
    void SetGameplayModifiers(GlobalNamespace::GameplayModifiers* newGameplayModifiers);
    // public System.Void SetPlayerSpecificSettings(PlayerSpecificSettings newPlayerSpecificSettings)
    // Offset: 0xF0D0A4
    void SetPlayerSpecificSettings(GlobalNamespace::PlayerSpecificSettings* newPlayerSpecificSettings);
    // public System.Void SetMultiplayerModeSettings(MultiplayerModeSettings multiplayerModeSettings)
    // Offset: 0xF0D0AC
    void SetMultiplayerModeSettings(GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);
  }; // PlayerData
  static check_size<sizeof(PlayerData), 160 + sizeof(System::Action*)> __GlobalNamespace_PlayerDataSizeCheck;
  static_assert(sizeof(PlayerData) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerData*, "", "PlayerData");
#pragma pack(pop)
