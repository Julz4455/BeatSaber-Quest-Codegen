// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Diagnostics.Tracing.EventTags
#include "System/Diagnostics/Tracing/EventTags.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
// Including type: System.Diagnostics.Tracing.ConcurrentSet`2
#include "System/Diagnostics/Tracing/ConcurrentSet_2.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
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
  // Forward declaring type: NameInfo
  class NameInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingEventTypes
  // [] Offset: FFFFFFFF
  class TraceLoggingEventTypes : public ::Il2CppObject {
    public:
    // readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo[] typeInfos
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos;
    // Field size check
    static_assert(sizeof(::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>*) == 0x8);
    // readonly System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // readonly System.Diagnostics.Tracing.EventTags tags
    // Size: 0x4
    // Offset: 0x20
    System::Diagnostics::Tracing::EventTags tags;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventTags) == 0x4);
    // readonly System.Byte level
    // Size: 0x1
    // Offset: 0x24
    uint8_t level;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // readonly System.Byte opcode
    // Size: 0x1
    // Offset: 0x25
    uint8_t opcode;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // readonly System.Diagnostics.Tracing.EventKeywords keywords
    // Size: 0x8
    // Offset: 0x28
    System::Diagnostics::Tracing::EventKeywords keywords;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventKeywords) == 0x8);
    // readonly System.Byte[] typeMetadata
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* typeMetadata;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // readonly System.Int32 scratchSize
    // Size: 0x4
    // Offset: 0x38
    int scratchSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 dataCount
    // Size: 0x4
    // Offset: 0x3C
    int dataCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // readonly System.Int32 pinCount
    // Size: 0x4
    // Offset: 0x40
    int pinCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Diagnostics.Tracing.ConcurrentSet`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Diagnostics.Tracing.EventTags>,System.Diagnostics.Tracing.NameInfo> nameInfos
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    System::Diagnostics::Tracing::ConcurrentSet_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Diagnostics::Tracing::EventTags>, System::Diagnostics::Tracing::NameInfo*> nameInfos;
    // Creating value type constructor for type: TraceLoggingEventTypes
    TraceLoggingEventTypes(::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos_ = {}, ::Il2CppString* name_ = {}, System::Diagnostics::Tracing::EventTags tags_ = {}, uint8_t level_ = {}, uint8_t opcode_ = {}, System::Diagnostics::Tracing::EventKeywords keywords_ = {}, ::Array<uint8_t>* typeMetadata_ = {}, int scratchSize_ = {}, int dataCount_ = {}, int pinCount_ = {}, System::Diagnostics::Tracing::ConcurrentSet_2<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, System::Diagnostics::Tracing::EventTags>, System::Diagnostics::Tracing::NameInfo*> nameInfos_ = {}) noexcept : typeInfos{typeInfos_}, name{name_}, tags{tags_}, level{level_}, opcode{opcode_}, keywords{keywords_}, typeMetadata{typeMetadata_}, scratchSize{scratchSize_}, dataCount{dataCount_}, pinCount{pinCount_}, nameInfos{nameInfos_} {}
    // System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, params System.Type[] types)
    // Offset: 0x12A7F78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, ::Array<System::Type*>* types) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingEventTypes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingEventTypes*, creationType>(name, tags, types)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, params System.Type[] types)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, std::initializer_list<System::Type*> types) {
      return New_ctor<creationType>(name, tags, ::Array<System::Type*>::New(types));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, params System.Type[] types)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, TParams&&... types) {
      return New_ctor<creationType>(name, tags, {types...});
    }
    // System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventTags tags, System.Reflection.ParameterInfo[] paramInfos)
    // Offset: 0x12A8364
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingEventTypes* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags, ::Array<System::Reflection::ParameterInfo*>* paramInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingEventTypes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingEventTypes*, creationType>(name, tags, paramInfos)));
    }
    // private System.Void .ctor(System.Diagnostics.Tracing.EventTags tags, System.String defaultName, System.Diagnostics.Tracing.TraceLoggingTypeInfo[] typeInfos)
    // Offset: 0x12A8164
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingEventTypes* New_ctor(System::Diagnostics::Tracing::EventTags tags, ::Il2CppString* defaultName, ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* typeInfos) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingEventTypes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingEventTypes*, creationType>(tags, defaultName, typeInfos)));
    }
    // System.String get_Name()
    // Offset: 0x12A88BC
    ::Il2CppString* get_Name();
    // System.Diagnostics.Tracing.EventTags get_Tags()
    // Offset: 0x12A88C4
    System::Diagnostics::Tracing::EventTags get_Tags();
    // System.Diagnostics.Tracing.NameInfo GetNameInfo(System.String name, System.Diagnostics.Tracing.EventTags tags)
    // Offset: 0x12A88CC
    System::Diagnostics::Tracing::NameInfo* GetNameInfo(::Il2CppString* name, System::Diagnostics::Tracing::EventTags tags);
    // private System.Diagnostics.Tracing.TraceLoggingTypeInfo[] MakeArray(System.Reflection.ParameterInfo[] paramInfos)
    // Offset: 0x12A85AC
    ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(::Array<System::Reflection::ParameterInfo*>* paramInfos);
    // static private System.Diagnostics.Tracing.TraceLoggingTypeInfo[] MakeArray(System.Type[] types)
    // Offset: 0x12A7FBC
    static ::Array<System::Diagnostics::Tracing::TraceLoggingTypeInfo*>* MakeArray(::Array<System::Type*>* types);
  }; // System.Diagnostics.Tracing.TraceLoggingEventTypes
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingEventTypes*, "System.Diagnostics.Tracing", "TraceLoggingEventTypes");
