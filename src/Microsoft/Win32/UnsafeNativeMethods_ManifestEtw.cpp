// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Diagnostics.Tracing.EventDescriptor
#include "System/Diagnostics/Tracing/EventDescriptor.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EtwEnableCallback.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_FILTER_DESCRIPTOR
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EVENT_FILTER_DESCRIPTOR.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/ActivityControl
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_ActivityControl.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EVENT_INFO_CLASS
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_EVENT_INFO_CLASS.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_QUERY_INFO_CLASS
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_TRACE_QUERY_INFO_CLASS.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_GUID_INFO
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_TRACE_GUID_INFO.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_PROVIDER_INSTANCE_INFO
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFO.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFO.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Including type: System.Diagnostics.Tracing.EventProvider/EventData
#include "System/Diagnostics/Tracing/EventProvider_EventData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw.EventRegister
uint Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EventRegister(System::Guid& providerId, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EtwEnableCallback*& enableCallback, void*& callbackContext, int64_t& registrationHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw", "EventRegister", providerId, enableCallback, callbackContext, registrationHandle));
}
// Autogenerated method: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw.EventUnregister
uint Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EventUnregister(int64_t& registrationHandle) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint>("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw", "EventUnregister", registrationHandle));
}
// Autogenerated method: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw.EventWriteTransferWrapper
template<>
int Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EventWriteTransferWrapper(int64_t registrationHandle, System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, System::Guid* activityId, System::Guid* relatedActivityId, int userDataCount, System::Diagnostics::Tracing::EventProvider::EventData* userData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw", "EventWriteTransferWrapper", registrationHandle, eventDescriptor, activityId, relatedActivityId, userDataCount, userData));
}
// Autogenerated method: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw.EventWriteTransfer
template<>
int Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EventWriteTransfer(int64_t& registrationHandle, System::Diagnostics::Tracing::EventDescriptor& eventDescriptor, System::Guid*& activityId, System::Guid*& relatedActivityId, int& userDataCount, System::Diagnostics::Tracing::EventProvider::EventData*& userData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw", "EventWriteTransfer", registrationHandle, eventDescriptor, activityId, relatedActivityId, userDataCount, userData));
}
// Autogenerated method: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw.EventActivityIdControl
int Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EventActivityIdControl(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::ActivityControl& ControlCode, System::Guid& ActivityId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw", "EventActivityIdControl", ControlCode, ActivityId));
}
// Autogenerated method: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw.EventSetInformation
int Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EventSetInformation(int64_t& registrationHandle, Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EVENT_INFO_CLASS& informationClass, void*& eventInformation, int& informationLength) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw", "EventSetInformation", registrationHandle, informationClass, eventInformation, informationLength));
}
// Autogenerated method: Microsoft.Win32.UnsafeNativeMethods/ManifestEtw.EnumerateTraceGuidsEx
int Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::EnumerateTraceGuidsEx(Microsoft::Win32::UnsafeNativeMethods::ManifestEtw::TRACE_QUERY_INFO_CLASS TraceQueryInfoClass, void* InBuffer, int InBufferSize, void* OutBuffer, int OutBufferSize, int& ReturnLength) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw", "EnumerateTraceGuidsEx", TraceQueryInfoClass, InBuffer, InBufferSize, OutBuffer, OutBufferSize, ReturnLength));
}
