// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: EventBinder
#include "GlobalNamespace/EventBinder.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Action
#include "System/Action.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: EventBinder.Bind
void GlobalNamespace::EventBinder::Bind(System::Action* subscribe, System::Action* unsubscribe) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Bind", subscribe, unsubscribe));
}
// Autogenerated method: EventBinder.ClearAllBindings
void GlobalNamespace::EventBinder::ClearAllBindings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearAllBindings"));
}
// Autogenerated method: EventBinder..ctor
GlobalNamespace::EventBinder* GlobalNamespace::EventBinder::New_ctor() {
  return (EventBinder*)THROW_UNLESS(il2cpp_utils::New("", "EventBinder"));
}
