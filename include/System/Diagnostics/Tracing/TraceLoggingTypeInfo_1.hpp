// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.TraceLoggingTypeInfo
#include "System/Diagnostics/Tracing/TraceLoggingTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
  template<typename DataType>
  class TraceLoggingTypeInfo_1 : public System::Diagnostics::Tracing::TraceLoggingTypeInfo {
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<DataType> instance
    static System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* _get_instance() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TraceLoggingTypeInfo_1<DataType>*>::get(), "instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<DataType> instance
    static void _set_instance(System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TraceLoggingTypeInfo_1<DataType>*>::get(), "instance", value));
    }
    // protected System.Void .ctor(System.String name, System.Diagnostics.Tracing.EventLevel level, System.Diagnostics.Tracing.EventOpcode opcode, System.Diagnostics.Tracing.EventKeywords keywords, System.Diagnostics.Tracing.EventTags tags)
    // Offset: 0xFFFFFFFF
    static TraceLoggingTypeInfo_1<DataType>* New_ctor(::Il2CppString* name, System::Diagnostics::Tracing::EventLevel level, System::Diagnostics::Tracing::EventOpcode opcode, System::Diagnostics::Tracing::EventKeywords keywords, System::Diagnostics::Tracing::EventTags tags) {
      return (TraceLoggingTypeInfo_1<DataType>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TraceLoggingTypeInfo_1<DataType>*>::get(), name, level, opcode, keywords, tags));
    }
    // static public System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<DataType> get_Instance()
    // Offset: 0xFFFFFFFF
    static System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* get_Instance() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TraceLoggingTypeInfo_1<DataType>*>::get(), "get_Instance"));
    }
    // public System.Void WriteData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ref DataType value)
    // Offset: 0xFFFFFFFF
    void WriteData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, DataType& value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteData", collector, value));
    }
    // static System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<DataType> GetInstance(System.Collections.Generic.List`1<System.Type> recursionCheck)
    // Offset: 0xFFFFFFFF
    static System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* GetInstance(System::Collections::Generic::List_1<System::Type*>* recursionCheck) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TraceLoggingTypeInfo_1<DataType>*>::get(), "GetInstance", recursionCheck));
    }
    // static private System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<DataType> InitInstance()
    // Offset: 0xFFFFFFFF
    static System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* InitInstance() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TraceLoggingTypeInfo_1<DataType>*>::get(), "InitInstance"));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TraceLoggingTypeInfo_1<DataType>* New_ctor() {
      return (TraceLoggingTypeInfo_1<DataType>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TraceLoggingTypeInfo_1<DataType>*>::get()));
    }
    // public override System.Void WriteObjectData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.TraceLoggingTypeInfo
    // Base method: System.Void TraceLoggingTypeInfo::WriteObjectData(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, System.Object value)
    void WriteObjectData(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ::Il2CppObject* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteObjectData", collector, value));
    }
  }; // System.Diagnostics.Tracing.TraceLoggingTypeInfo`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::TraceLoggingTypeInfo_1, "System.Diagnostics.Tracing", "TraceLoggingTypeInfo`1");
#pragma pack(pop)
