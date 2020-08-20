// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.PropertyAccessor`1
#include "System/Diagnostics/Tracing/PropertyAccessor_1.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Skipping declaration: Getter because it is already included!
  // Forward declaring type: TraceLoggingTypeInfo`1<DataType>
  template<typename DataType>
  class TraceLoggingTypeInfo_1;
  // Forward declaring type: PropertyAnalysis
  class PropertyAnalysis;
  // Forward declaring type: TraceLoggingDataCollector
  class TraceLoggingDataCollector;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ClassPropertyWriter`2
  template<typename ContainerType, typename ValueType>
  class ClassPropertyWriter_2 : public System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType> {
    public:
    // Nested type: System::Diagnostics::Tracing::ClassPropertyWriter_2::Getter<ContainerType, ValueType>
    class Getter;
    // Autogenerated type: System.Diagnostics.Tracing.ClassPropertyWriter`2/Getter
    class Getter : public System::MulticastDelegate, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ClassPropertyWriter_2<ContainerType, ValueType>*;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      static typename ClassPropertyWriter_2<ContainerType, ValueType>::Getter* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        return (typename ClassPropertyWriter_2<ContainerType, ValueType>::Getter*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename ClassPropertyWriter_2<ContainerType, ValueType>::Getter*>::get(), object, method)));
      }
      // public ValueType Invoke(ContainerType container)
      // Offset: 0xFFFFFFFF
      ValueType Invoke(ContainerType container) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<ValueType>(this, "Invoke", container));
      }
      // public System.IAsyncResult BeginInvoke(ContainerType container, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(ContainerType container, System::AsyncCallback* callback, ::Il2CppObject* object) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", container, callback, object));
      }
      // public ValueType EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      ValueType EndInvoke(System::IAsyncResult* result) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<ValueType>(this, "EndInvoke", result));
      }
    }; // System.Diagnostics.Tracing.ClassPropertyWriter`2/Getter
    // private readonly System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<ValueType> valueTypeInfo
    // Offset: 0x0
    System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ValueType>* valueTypeInfo;
    // private readonly System.Diagnostics.Tracing.ClassPropertyWriter`2/Getter<ContainerType,ValueType> getter
    // Offset: 0x0
    typename System::Diagnostics::Tracing::ClassPropertyWriter_2<ContainerType, ValueType>::Getter* getter;
    // public System.Void .ctor(System.Diagnostics.Tracing.PropertyAnalysis property)
    // Offset: 0xFFFFFFFF
    static ClassPropertyWriter_2<ContainerType, ValueType>* New_ctor(System::Diagnostics::Tracing::PropertyAnalysis* property) {
      return (ClassPropertyWriter_2<ContainerType, ValueType>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ClassPropertyWriter_2<ContainerType, ValueType>*>::get(), property)));
    }
    // public override System.Void Write(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ContainerType container)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.PropertyAccessor`1
    // Base method: System.Void PropertyAccessor`1::Write(System.Diagnostics.Tracing.TraceLoggingDataCollector collector, ContainerType container)
    void Write(System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, ContainerType& container) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Write", collector, container));
    }
    // public override System.Object GetData(ContainerType container)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Diagnostics.Tracing.PropertyAccessor`1
    // Base method: System.Object PropertyAccessor`1::GetData(ContainerType container)
    ::Il2CppObject* GetData(ContainerType container) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetData", container));
    }
  }; // System.Diagnostics.Tracing.ClassPropertyWriter`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::ClassPropertyWriter_2, "System.Diagnostics.Tracing", "ClassPropertyWriter`2");
#pragma pack(pop)
