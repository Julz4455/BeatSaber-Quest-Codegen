// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: OnlineServices.PlatformOnlineServicesAvailabilityModel
#include "OnlineServices/PlatformOnlineServicesAvailabilityModel.hpp"
// Including type: OnlineServices.PlatformOnlineServicesAvailabilityModel/<GetPlatformServicesAvailabilityInfo>d__4
#include "OnlineServices/PlatformOnlineServicesAvailabilityModel_-GetPlatformServicesAvailabilityInfo-d__4.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: OnlineServices.PlatformServicesAvailabilityInfo
#include "OnlineServices/PlatformServicesAvailabilityInfo.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OnlineServices.PlatformOnlineServicesAvailabilityModel.add_platformServicesAvailabilityInfoChangedEvent
void OnlineServices::PlatformOnlineServicesAvailabilityModel::add_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_platformServicesAvailabilityInfoChangedEvent", value));
}
// Autogenerated method: OnlineServices.PlatformOnlineServicesAvailabilityModel.remove_platformServicesAvailabilityInfoChangedEvent
void OnlineServices::PlatformOnlineServicesAvailabilityModel::remove_platformServicesAvailabilityInfoChangedEvent(System::Action_1<OnlineServices::PlatformServicesAvailabilityInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_platformServicesAvailabilityInfoChangedEvent", value));
}
// Autogenerated method: OnlineServices.PlatformOnlineServicesAvailabilityModel.GetPlatformServicesAvailabilityInfo
System::Threading::Tasks::Task_1<OnlineServices::PlatformServicesAvailabilityInfo*>* OnlineServices::PlatformOnlineServicesAvailabilityModel::GetPlatformServicesAvailabilityInfo(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<OnlineServices::PlatformServicesAvailabilityInfo*>*>(this, "GetPlatformServicesAvailabilityInfo", cancellationToken));
}
// Autogenerated method: OnlineServices.PlatformOnlineServicesAvailabilityModel..ctor
OnlineServices::PlatformOnlineServicesAvailabilityModel* OnlineServices::PlatformOnlineServicesAvailabilityModel::New_ctor() {
  return (PlatformOnlineServicesAvailabilityModel*)THROW_UNLESS(il2cpp_utils::New("OnlineServices", "PlatformOnlineServicesAvailabilityModel"));
}
