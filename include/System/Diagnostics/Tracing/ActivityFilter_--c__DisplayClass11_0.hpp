// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ActivityFilter
#include "System/Diagnostics/Tracing/ActivityFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass11_0
  class ActivityFilter::$$c__DisplayClass11_0 : public ::Il2CppObject {
    public:
    // public System.Diagnostics.Tracing.ActivityFilter filterList
    // Offset: 0x10
    System::Diagnostics::Tracing::ActivityFilter* filterList;
    // Creating conversion operator: operator System::Diagnostics::Tracing::ActivityFilter*
    constexpr operator System::Diagnostics::Tracing::ActivityFilter*() const noexcept {
      return filterList;
    }
    // System.Void <GetActivityDyingDelegate>b__0(System.Guid oldActivity)
    // Offset: 0x14779C4
    void $GetActivityDyingDelegate$b__0(System::Guid oldActivity);
    // public System.Void .ctor()
    // Offset: 0x14779B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ActivityFilter::$$c__DisplayClass11_0* New_ctor();
  }; // System.Diagnostics.Tracing.ActivityFilter/<>c__DisplayClass11_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ActivityFilter::$$c__DisplayClass11_0*, "System.Diagnostics.Tracing", "ActivityFilter/<>c__DisplayClass11_0");
#pragma pack(pop)
