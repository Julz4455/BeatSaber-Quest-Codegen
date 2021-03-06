// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.UInt64ArrayTypeInfo
  // [] Offset: FFFFFFFF
  class UInt64ArrayTypeInfo : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Array<uint64_t>*> {
    public:
    // Creating value type constructor for type: UInt64ArrayTypeInfo
    UInt64ArrayTypeInfo() noexcept {}
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref System.UInt64[] value)
    // Offset: 0x12A9E40
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Array<uint64_t>*& value);
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0x12A9DB0
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format);
    // public System.Void .ctor()
    // Offset: 0x12A9E58
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UInt64ArrayTypeInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::UInt64ArrayTypeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UInt64ArrayTypeInfo*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.UInt64ArrayTypeInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::UInt64ArrayTypeInfo*, "System.Diagnostics.Tracing", "UInt64ArrayTypeInfo");
