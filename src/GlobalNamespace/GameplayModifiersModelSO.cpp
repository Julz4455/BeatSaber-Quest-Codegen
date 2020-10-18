// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: GameplayModifiersModelSO
#include "GlobalNamespace/GameplayModifiersModelSO.hpp"
// Including type: GameplayModifiersModelSO/GameplayModifierBoolGetter
#include "GlobalNamespace/GameplayModifiersModelSO_GameplayModifierBoolGetter.hpp"
// Including type: GameplayModifiersModelSO/<>c
#include "GlobalNamespace/GameplayModifiersModelSO_--c.hpp"
// Including type: GameplayModifierParamsSO
#include "GlobalNamespace/GameplayModifierParamsSO.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GameplayModifiersModelSO.CreateGameplayModifiers
GlobalNamespace::GameplayModifiers* GlobalNamespace::GameplayModifiersModelSO::CreateGameplayModifiers(System::Func_2<GlobalNamespace::GameplayModifierParamsSO*, bool>* valueGetter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayModifiers*>(this, "CreateGameplayModifiers", valueGetter));
}
// Autogenerated method: GameplayModifiersModelSO.GetModifierBoolValue
bool GlobalNamespace::GameplayModifiersModelSO::GetModifierBoolValue(GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifierParamsSO* gameplayModifierParams) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetModifierBoolValue", gameplayModifiers, gameplayModifierParams));
}
// Autogenerated method: GameplayModifiersModelSO.GetModifierParams
System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* GlobalNamespace::GameplayModifiersModelSO::GetModifierParams(GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*>(this, "GetModifierParams", gameplayModifiers));
}
// Autogenerated method: GameplayModifiersModelSO.GetTotalMultiplier
float GlobalNamespace::GameplayModifiersModelSO::GetTotalMultiplier(GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetTotalMultiplier", gameplayModifiers));
}
// Autogenerated method: GameplayModifiersModelSO.MaxModifiedScoreForMaxRawScore
int GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxRawScore(int maxRawScore, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "MaxModifiedScoreForMaxRawScore", maxRawScore, gameplayModifiers));
}
// Autogenerated method: GameplayModifiersModelSO.MaxModifiedScoreForMaxRawScore
int GlobalNamespace::GameplayModifiersModelSO::MaxModifiedScoreForMaxRawScore(int maxRawScore, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "MaxModifiedScoreForMaxRawScore", maxRawScore, gameplayModifiers, gameplayModifiersModel));
}
// Autogenerated method: GameplayModifiersModelSO.GetModifiedScoreForGameplayModifiers
int GlobalNamespace::GameplayModifiersModelSO::GetModifiedScoreForGameplayModifiers(int rawScore, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetModifiedScoreForGameplayModifiers", rawScore, gameplayModifiers));
}
// Autogenerated method: GameplayModifiersModelSO.GetGameplayModifierParams
GlobalNamespace::GameplayModifierParamsSO* GlobalNamespace::GameplayModifiersModelSO::GetGameplayModifierParams(GlobalNamespace::GameplayModifierMask modifier) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayModifierParamsSO*>(this, "GetGameplayModifierParams", modifier));
}
// Autogenerated method: GameplayModifiersModelSO.OnEnable
void GlobalNamespace::GameplayModifiersModelSO::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: GameplayModifiersModelSO..ctor
GlobalNamespace::GameplayModifiersModelSO* GlobalNamespace::GameplayModifiersModelSO::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<GameplayModifiersModelSO*>());
}
