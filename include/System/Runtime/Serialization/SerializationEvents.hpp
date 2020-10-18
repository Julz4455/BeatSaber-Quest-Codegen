// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SerializationEvents
  class SerializationEvents : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializingMethods
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnSerializingMethods;
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnSerializedMethods
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnSerializedMethods;
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializingMethods
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnDeserializingMethods;
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> m_OnDeserializedMethods
    // Offset: 0x28
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* m_OnDeserializedMethods;
    // private System.Collections.Generic.List`1<System.Reflection.MethodInfo> GetMethodsWithAttribute(System.Type attribute, System.Type t)
    // Offset: 0x169E11C
    System::Collections::Generic::List_1<System::Reflection::MethodInfo*>* GetMethodsWithAttribute(System::Type* attribute, System::Type* t);
    // System.Void .ctor(System.Type t)
    // Offset: 0x169E2FC
    static SerializationEvents* New_ctor(System::Type* t);
    // System.Boolean get_HasOnSerializingEvents()
    // Offset: 0x169E434
    bool get_HasOnSerializingEvents();
    // System.Void InvokeOnSerializing(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x169E454
    void InvokeOnSerializing(::Il2CppObject* obj, System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserializing(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x169E684
    void InvokeOnDeserializing(::Il2CppObject* obj, System::Runtime::Serialization::StreamingContext context);
    // System.Void InvokeOnDeserialized(System.Object obj, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x169DB20
    void InvokeOnDeserialized(::Il2CppObject* obj, System::Runtime::Serialization::StreamingContext context);
    // System.Runtime.Serialization.SerializationEventHandler AddOnSerialized(System.Object obj, System.Runtime.Serialization.SerializationEventHandler handler)
    // Offset: 0x169E8B4
    System::Runtime::Serialization::SerializationEventHandler* AddOnSerialized(::Il2CppObject* obj, System::Runtime::Serialization::SerializationEventHandler* handler);
    // System.Runtime.Serialization.SerializationEventHandler AddOnDeserialized(System.Object obj, System.Runtime.Serialization.SerializationEventHandler handler)
    // Offset: 0x169EABC
    System::Runtime::Serialization::SerializationEventHandler* AddOnDeserialized(::Il2CppObject* obj, System::Runtime::Serialization::SerializationEventHandler* handler);
  }; // System.Runtime.Serialization.SerializationEvents
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEvents*, "System.Runtime.Serialization", "SerializationEvents");
#pragma pack(pop)
