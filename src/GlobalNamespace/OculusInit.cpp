// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OculusInit
#include "GlobalNamespace/OculusInit.hpp"
// Including type: OculusInit/<>c
#include "GlobalNamespace/OculusInit_--c.hpp"
// Including type: OculusDeeplinkManager
#include "GlobalNamespace/OculusDeeplinkManager.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Including type: Oculus.Platform.Models.PlatformInitialize
#include "Oculus/Platform/Models/PlatformInitialize.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OculusInit.Init
void GlobalNamespace::OculusInit::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: OculusInit.InitCallback
void GlobalNamespace::OculusInit::InitCallback(Oculus::Platform::Message_1<Oculus::Platform::Models::PlatformInitialize*>* msg) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitCallback", msg));
}
// Autogenerated method: OculusInit..ctor
GlobalNamespace::OculusInit* GlobalNamespace::OculusInit::New_ctor() {
  return (OculusInit*)THROW_UNLESS(il2cpp_utils::New("", "OculusInit"));
}
