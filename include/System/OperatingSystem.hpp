// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.PlatformID
#include "System/PlatformID.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
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
  // Autogenerated type: System.OperatingSystem
  class OperatingSystem : public ::Il2CppObject, public System::ICloneable, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.PlatformID _platform
    // Offset: 0x10
    System::PlatformID platform;
    // private System.Version _version
    // Offset: 0x18
    System::Version* version;
    // private System.String _servicePack
    // Offset: 0x20
    ::Il2CppString* servicePack;
    // public System.Void .ctor(System.PlatformID platform, System.Version version)
    // Offset: 0x1AB33D8
    static OperatingSystem* New_ctor(System::PlatformID platform, System::Version* version);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1AB3538
    static OperatingSystem* New_ctor(System::Runtime::Serialization::SerializationInfo* information, System::Runtime::Serialization::StreamingContext context);
    // public System.PlatformID get_Platform()
    // Offset: 0x1AB36C4
    System::PlatformID get_Platform();
    // public System.Version get_Version()
    // Offset: 0x1AB36CC
    System::Version* get_Version();
    // public System.String get_ServicePack()
    // Offset: 0x1AB36D4
    ::Il2CppString* get_ServicePack();
    // public System.Object Clone()
    // Offset: 0x1AB36DC
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1AB3750
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x1AB3814
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.OperatingSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::OperatingSystem*, "System", "OperatingSystem");
#pragma pack(pop)
