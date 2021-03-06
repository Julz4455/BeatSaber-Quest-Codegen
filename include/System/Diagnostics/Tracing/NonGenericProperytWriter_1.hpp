// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.PropertyAccessor`1
#include "System/Diagnostics/Tracing/PropertyAccessor_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingTypeInfo
  class TraceLoggingTypeInfo;
  // Forward declaring type: PropertyAnalysis
  class PropertyAnalysis;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.NonGenericProperytWriter`1
  // [] Offset: FFFFFFFF
  template<typename ContainerType>
  class NonGenericProperytWriter_1 : public System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType> {
    public:
    // private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo typeInfo
    // Size: 0x8
    // Offset: 0x0
    System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::TraceLoggingTypeInfo*) == 0x8);
    // private readonly System.Reflection.MethodInfo getterInfo
    // Size: 0x8
    // Offset: 0x0
    System::Reflection::MethodInfo* getterInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // Creating value type constructor for type: NonGenericProperytWriter_1
    NonGenericProperytWriter_1(System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo_ = {}, System::Reflection::MethodInfo* getterInfo_ = {}) noexcept : typeInfo{typeInfo_}, getterInfo{getterInfo_} {}
    // public System.Void .ctor(System.Diagnostics.Tracing.PropertyAnalysis property)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NonGenericProperytWriter_1<ContainerType>* New_ctor(System::Diagnostics::Tracing::PropertyAnalysis* property) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::NonGenericProperytWriter_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NonGenericProperytWriter_1<ContainerType>*, creationType>(property)));
    }
    // public override System.Void Write(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref ContainerType container)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.PropertyAccessor`1
    // Base method: System.Void PropertyAccessor_1::Write(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref ContainerType container)
    void Write(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ContainerType& container) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::NonGenericProperytWriter_1::Write");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Write", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(collector, container)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, collector, container);
    }
    // public override System.Object GetData(ContainerType container)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.PropertyAccessor`1
    // Base method: System.Object PropertyAccessor_1::GetData(ContainerType container)
    ::Il2CppObject* GetData(ContainerType container) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::NonGenericProperytWriter_1::GetData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container)));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, container);
    }
  }; // System.Diagnostics.Tracing.NonGenericProperytWriter`1
  // Could not write size check! Type: System.Diagnostics.Tracing.NonGenericProperytWriter`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::NonGenericProperytWriter_1, "System.Diagnostics.Tracing", "NonGenericProperytWriter`1");
