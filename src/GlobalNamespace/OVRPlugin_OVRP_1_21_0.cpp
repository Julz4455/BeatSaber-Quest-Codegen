// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OVRPlugin/OVRP_1_21_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_21_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVRPlugin/Result
#include "GlobalNamespace/OVRPlugin_Result.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/FixedFoveatedRenderingLevel
#include "GlobalNamespace/OVRPlugin_FixedFoveatedRenderingLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_21_0::_get_version() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_21_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_21_0::_set_version(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_21_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_GetTiledMultiResSupported
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetTiledMultiResSupported(GlobalNamespace::OVRPlugin::Bool& foveationSupported) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_GetTiledMultiResSupported", foveationSupported));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_GetTiledMultiResLevel
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetTiledMultiResLevel(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel& level) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_GetTiledMultiResLevel", level));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_SetTiledMultiResLevel
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_SetTiledMultiResLevel(GlobalNamespace::OVRPlugin::FixedFoveatedRenderingLevel level) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_SetTiledMultiResLevel", level));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_GetGPUUtilSupported
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetGPUUtilSupported(GlobalNamespace::OVRPlugin::Bool& gpuUtilSupported) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_GetGPUUtilSupported", gpuUtilSupported));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_GetGPUUtilLevel
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetGPUUtilLevel(float& gpuUtil) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_GetGPUUtilLevel", gpuUtil));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_GetSystemDisplayFrequency2
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetSystemDisplayFrequency2(float& systemDisplayFrequency) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_GetSystemDisplayFrequency2", systemDisplayFrequency));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_GetSystemDisplayAvailableFrequencies
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetSystemDisplayAvailableFrequencies(System::IntPtr systemDisplayAvailableFrequencies, int& numFrequencies) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_GetSystemDisplayAvailableFrequencies", systemDisplayAvailableFrequencies, numFrequencies));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_SetSystemDisplayFrequency
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_SetSystemDisplayFrequency(float requestedFrequency) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_SetSystemDisplayFrequency", requestedFrequency));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0.ovrp_GetAppAsymmetricFov
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_21_0::ovrp_GetAppAsymmetricFov(GlobalNamespace::OVRPlugin::Bool& useAsymmetricFov) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_21_0", "ovrp_GetAppAsymmetricFov", useAsymmetricFov));
}
// Autogenerated method: OVRPlugin/OVRP_1_21_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_21_0::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRPlugin/OVRP_1_21_0", ".cctor"));
}
