// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Diagnostics.Tracing.EtwSession
#include "System/Diagnostics/Tracing/EtwSession.hpp"
// Including type: System.Diagnostics.Tracing.EtwSession/<>c__DisplayClass1_0
#include "System/Diagnostics/Tracing/EtwSession_--c__DisplayClass1_0.hpp"
// Including type: System.Diagnostics.Tracing.EtwSession/<>c
#include "System/Diagnostics/Tracing/EtwSession_--c.hpp"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.WeakReference`1
#include "System/WeakReference_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<System.WeakReference`1<System.Diagnostics.Tracing.EtwSession>> s_etwSessions
System::Collections::Generic::List_1<System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>*>* System::Diagnostics::Tracing::EtwSession::_get_s_etwSessions() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>*>*>("System.Diagnostics.Tracing", "EtwSession", "s_etwSessions"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<System.WeakReference`1<System.Diagnostics.Tracing.EtwSession>> s_etwSessions
void System::Diagnostics::Tracing::EtwSession::_set_s_etwSessions(System::Collections::Generic::List_1<System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Diagnostics.Tracing", "EtwSession", "s_etwSessions", value));
}
// Autogenerated method: System.Diagnostics.Tracing.EtwSession.GetEtwSession
System::Diagnostics::Tracing::EtwSession* System::Diagnostics::Tracing::EtwSession::GetEtwSession(int etwSessionId, bool bCreateIfNeeded) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::EtwSession*>("System.Diagnostics.Tracing", "EtwSession", "GetEtwSession", etwSessionId, bCreateIfNeeded));
}
// Autogenerated method: System.Diagnostics.Tracing.EtwSession.RemoveEtwSession
void System::Diagnostics::Tracing::EtwSession::RemoveEtwSession(System::Diagnostics::Tracing::EtwSession* etwSession) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EtwSession", "RemoveEtwSession", etwSession));
}
// Autogenerated method: System.Diagnostics.Tracing.EtwSession.TrimGlobalList
void System::Diagnostics::Tracing::EtwSession::TrimGlobalList() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EtwSession", "TrimGlobalList"));
}
// Autogenerated method: System.Diagnostics.Tracing.EtwSession..ctor
System::Diagnostics::Tracing::EtwSession* System::Diagnostics::Tracing::EtwSession::New_ctor(int etwSessionId) {
  return (EtwSession*)THROW_UNLESS(il2cpp_utils::New("System.Diagnostics.Tracing", "EtwSession", etwSessionId));
}
// Autogenerated method: System.Diagnostics.Tracing.EtwSession..cctor
void System::Diagnostics::Tracing::EtwSession::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Diagnostics.Tracing", "EtwSession", ".cctor"));
}
