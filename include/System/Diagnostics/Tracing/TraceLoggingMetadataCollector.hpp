// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventFieldTags
#include "System/Diagnostics/Tracing/EventFieldTags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: FieldMetadata
  class FieldMetadata;
  // Forward declaring type: TraceLoggingDataType
  struct TraceLoggingDataType;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingMetadataCollector
  // [] Offset: FFFFFFFF
  class TraceLoggingMetadataCollector : public ::Il2CppObject {
    public:
    // Nested type: System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl
    class Impl;
    // private readonly System.Diagnostics.Tracing.TraceLoggingMetadataCollector/Impl impl
    // Size: 0x8
    // Offset: 0x10
    System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl* impl;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl*) == 0x8);
    // private readonly System.Diagnostics.Tracing.FieldMetadata currentGroup
    // Size: 0x8
    // Offset: 0x18
    System::Diagnostics::Tracing::FieldMetadata* currentGroup;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::FieldMetadata*) == 0x8);
    // private System.Int32 bufferedArrayFieldCount
    // Size: 0x4
    // Offset: 0x20
    int bufferedArrayFieldCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCAFD0C
    // private System.Diagnostics.Tracing.EventFieldTags <Tags>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    System::Diagnostics::Tracing::EventFieldTags Tags;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventFieldTags) == 0x4);
    // Creating value type constructor for type: TraceLoggingMetadataCollector
    TraceLoggingMetadataCollector(System::Diagnostics::Tracing::TraceLoggingMetadataCollector::Impl* impl_ = {}, System::Diagnostics::Tracing::FieldMetadata* currentGroup_ = {}, int bufferedArrayFieldCount_ = {}, System::Diagnostics::Tracing::EventFieldTags Tags_ = {}) noexcept : impl{impl_}, currentGroup{currentGroup_}, bufferedArrayFieldCount{bufferedArrayFieldCount_}, Tags{Tags_} {}
    // private System.Void .ctor(System.Diagnostics.Tracing.TraceLoggingMetadataCollector other, System.Diagnostics.Tracing.FieldMetadata group)
    // Offset: 0x12A8A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingMetadataCollector* New_ctor(System::Diagnostics::Tracing::TraceLoggingMetadataCollector* other, System::Diagnostics::Tracing::FieldMetadata* group) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingMetadataCollector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingMetadataCollector*, creationType>(other, group)));
    }
    // System.Diagnostics.Tracing.EventFieldTags get_Tags()
    // Offset: 0x12A8A88
    System::Diagnostics::Tracing::EventFieldTags get_Tags();
    // System.Void set_Tags(System.Diagnostics.Tracing.EventFieldTags value)
    // Offset: 0x12A8A90
    void set_Tags(System::Diagnostics::Tracing::EventFieldTags value);
    // System.Int32 get_ScratchSize()
    // Offset: 0x12A8868
    int get_ScratchSize();
    // System.Int32 get_DataCount()
    // Offset: 0x12A8884
    int get_DataCount();
    // System.Int32 get_PinCount()
    // Offset: 0x12A88A0
    int get_PinCount();
    // private System.Boolean get_BeginningBufferedArray()
    // Offset: 0x12A8A98
    bool get_BeginningBufferedArray();
    // public System.Diagnostics.Tracing.TraceLoggingMetadataCollector AddGroup(System.String name)
    // Offset: 0x12A8AA8
    System::Diagnostics::Tracing::TraceLoggingMetadataCollector* AddGroup(::Il2CppString* name);
    // public System.Void AddScalar(System.String name, System.Diagnostics.Tracing.TraceLoggingDataType type)
    // Offset: 0x12A0330
    void AddScalar(::Il2CppString* name, System::Diagnostics::Tracing::TraceLoggingDataType type);
    // public System.Void AddBinary(System.String name, System.Diagnostics.Tracing.TraceLoggingDataType type)
    // Offset: 0x12A7218
    void AddBinary(::Il2CppString* name, System::Diagnostics::Tracing::TraceLoggingDataType type);
    // public System.Void AddArray(System.String name, System.Diagnostics.Tracing.TraceLoggingDataType type)
    // Offset: 0x12A006C
    void AddArray(::Il2CppString* name, System::Diagnostics::Tracing::TraceLoggingDataType type);
    // public System.Void BeginBufferedArray()
    // Offset: 0x12A8D44
    void BeginBufferedArray();
    // public System.Void EndBufferedArray()
    // Offset: 0x12A8E30
    void EndBufferedArray();
    // System.Byte[] GetMetadata()
    // Offset: 0x12A87E0
    ::Array<uint8_t>* GetMetadata();
    // private System.Void AddField(System.Diagnostics.Tracing.FieldMetadata fieldMetadata)
    // Offset: 0x12A8B7C
    void AddField(System::Diagnostics::Tracing::FieldMetadata* fieldMetadata);
    // System.Void .ctor()
    // Offset: 0x12A8768
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingMetadataCollector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingMetadataCollector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingMetadataCollector*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.TraceLoggingMetadataCollector
  #pragma pack(pop)
  static check_size<sizeof(TraceLoggingMetadataCollector), 36 + sizeof(System::Diagnostics::Tracing::EventFieldTags)> __System_Diagnostics_Tracing_TraceLoggingMetadataCollectorSizeCheck;
  static_assert(sizeof(TraceLoggingMetadataCollector) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingMetadataCollector*, "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector");
