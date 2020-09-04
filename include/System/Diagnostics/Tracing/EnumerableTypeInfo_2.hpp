// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.hpp"
// Including type: System.Diagnostics.Tracing.EventFieldFormat
#include "System/Diagnostics/Tracing/EventFieldFormat.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingMetadataCollector
  class TraceLoggingMetadataCollector;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EnumerableTypeInfo`2
  template<typename IterableType, typename ElementType>
  class EnumerableTypeInfo_2 : public System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<IterableType> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<IterableType>> || std::is_base_of_v<System::Collections::Generic::IEnumerable_1<ElementType>, std::remove_pointer_t<IterableType>>));
    public:
    // private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<ElementType> elementInfo
    // Offset: 0x0
    System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ElementType>* elementInfo;
    // Creating conversion operator: operator System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ElementType>*
    constexpr operator System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ElementType>*() const noexcept {
      return elementInfo;
    }
    // public override System.Void WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteMetadata(System.Diagnostics.Tracing.TraceLoggingMetadataCollector collector, System.String name, System.Diagnostics.Tracing.EventFieldFormat format)
    void WriteMetadata(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, ::Il2CppString* name, System::Diagnostics::Tracing::EventFieldFormat format) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteMetadata", collector, name, format));
    }
    // public override System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref IterableType value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
    // Base method: System.Void TraceLoggingTypeInfo`1::WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref IterableType value)
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, IterableType& value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
    }
  }; // System.Diagnostics.Tracing.EnumerableTypeInfo`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::EnumerableTypeInfo_2, "System.Diagnostics.Tracing", "EnumerableTypeInfo`2");
#pragma pack(pop)
