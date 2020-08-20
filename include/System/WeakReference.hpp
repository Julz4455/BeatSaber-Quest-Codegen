// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.WeakReference
  class WeakReference : public ::Il2CppObject, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.Boolean isLongReference
    // Offset: 0x10
    bool isLongReference;
    // private System.Runtime.InteropServices.GCHandle gcHandle
    // Offset: 0x14
    System::Runtime::InteropServices::GCHandle gcHandle;
    // private System.Void AllocateHandle(System.Object target)
    // Offset: 0x16F71D0
    void AllocateHandle(::Il2CppObject* target);
    // public System.Void .ctor(System.Object target)
    // Offset: 0x16F720C
    static WeakReference* New_ctor(::Il2CppObject* target);
    // public System.Void .ctor(System.Object target, System.Boolean trackResurrection)
    // Offset: 0x16F7240
    static WeakReference* New_ctor(::Il2CppObject* target, bool trackResurrection);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16F7284
    static WeakReference* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Boolean get_IsAlive()
    // Offset: 0x16F7394
    bool get_IsAlive();
    // public System.Object get_Target()
    // Offset: 0x16F73B8
    ::Il2CppObject* get_Target();
    // public System.Void set_Target(System.Object value)
    // Offset: 0x16F73FC
    void set_Target(::Il2CppObject* value);
    // public System.Boolean get_TrackResurrection()
    // Offset: 0x16F7408
    bool get_TrackResurrection();
    // protected System.Void .ctor()
    // Offset: 0x16F7204
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WeakReference* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x16F7410
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x16F7480
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.WeakReference
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::WeakReference*, "System", "WeakReference");
#pragma pack(pop)
