// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EtwSession
#include "System/Diagnostics/Tracing/EtwSession.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference`1<T>
  template<typename T>
  class WeakReference_1;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EtwSession/<>c__DisplayClass1_0
  class EtwSession::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public System.Diagnostics.Tracing.EtwSession etwSession
    // Offset: 0x10
    System::Diagnostics::Tracing::EtwSession* etwSession;
    // Creating conversion operator: operator System::Diagnostics::Tracing::EtwSession*
    constexpr operator System::Diagnostics::Tracing::EtwSession*() const noexcept {
      return etwSession;
    }
    // System.Boolean <RemoveEtwSession>b__0(System.WeakReference`1<System.Diagnostics.Tracing.EtwSession> wrEtwSession)
    // Offset: 0x147AE48
    bool $RemoveEtwSession$b__0(System::WeakReference_1<System::Diagnostics::Tracing::EtwSession*>* wrEtwSession);
    // public System.Void .ctor()
    // Offset: 0x147ACE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static EtwSession::$$c__DisplayClass1_0* New_ctor();
  }; // System.Diagnostics.Tracing.EtwSession/<>c__DisplayClass1_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EtwSession::$$c__DisplayClass1_0*, "System.Diagnostics.Tracing", "EtwSession/<>c__DisplayClass1_0");
#pragma pack(pop)
