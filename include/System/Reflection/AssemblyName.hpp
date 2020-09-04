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
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.InteropServices._AssemblyName
#include "System/Runtime/InteropServices/_AssemblyName.hpp"
// Including type: System.Reflection.AssemblyNameFlags
#include "System/Reflection/AssemblyNameFlags.hpp"
// Including type: System.Configuration.Assemblies.AssemblyHashAlgorithm
#include "System/Configuration/Assemblies/AssemblyHashAlgorithm.hpp"
// Including type: System.Configuration.Assemblies.AssemblyVersionCompatibility
#include "System/Configuration/Assemblies/AssemblyVersionCompatibility.hpp"
// Including type: System.Reflection.ProcessorArchitecture
#include "System/Reflection/ProcessorArchitecture.hpp"
// Including type: System.Reflection.AssemblyContentType
#include "System/Reflection/AssemblyContentType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: StrongNameKeyPair
  class StrongNameKeyPair;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: MonoAssemblyName
  struct MonoAssemblyName;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyName
  class AssemblyName : public ::Il2CppObject, public System::ICloneable, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback, public System::Runtime::InteropServices::_AssemblyName {
    public:
    // private System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // private System.String codebase
    // Offset: 0x18
    ::Il2CppString* codebase;
    // private System.Int32 major
    // Offset: 0x20
    int major;
    // private System.Int32 minor
    // Offset: 0x24
    int minor;
    // private System.Int32 build
    // Offset: 0x28
    int build;
    // private System.Int32 revision
    // Offset: 0x2C
    int revision;
    // private System.Globalization.CultureInfo cultureinfo
    // Offset: 0x30
    System::Globalization::CultureInfo* cultureinfo;
    // private System.Reflection.AssemblyNameFlags flags
    // Offset: 0x38
    System::Reflection::AssemblyNameFlags flags;
    // private System.Configuration.Assemblies.AssemblyHashAlgorithm hashalg
    // Offset: 0x3C
    System::Configuration::Assemblies::AssemblyHashAlgorithm hashalg;
    // private System.Reflection.StrongNameKeyPair keypair
    // Offset: 0x40
    System::Reflection::StrongNameKeyPair* keypair;
    // private System.Byte[] publicKey
    // Offset: 0x48
    ::Array<uint8_t>* publicKey;
    // private System.Byte[] keyToken
    // Offset: 0x50
    ::Array<uint8_t>* keyToken;
    // private System.Configuration.Assemblies.AssemblyVersionCompatibility versioncompat
    // Offset: 0x58
    System::Configuration::Assemblies::AssemblyVersionCompatibility versioncompat;
    // private System.Version version
    // Offset: 0x60
    System::Version* version;
    // private System.Reflection.ProcessorArchitecture processor_architecture
    // Offset: 0x68
    System::Reflection::ProcessorArchitecture processor_architecture;
    // private System.Reflection.AssemblyContentType contentType
    // Offset: 0x6C
    System::Reflection::AssemblyContentType contentType;
    // static private System.Boolean ParseAssemblyName(System.IntPtr name, out Mono.MonoAssemblyName aname, out System.Boolean is_version_definited, out System.Boolean is_token_defined)
    // Offset: 0x1368B48
    static bool ParseAssemblyName(System::IntPtr name, Mono::MonoAssemblyName& aname, bool& is_version_definited, bool& is_token_defined);
    // public System.Void .ctor(System.String assemblyName)
    // Offset: 0x1368B4C
    static AssemblyName* New_ctor(::Il2CppString* assemblyName);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext sc)
    // Offset: 0x1368D6C
    static AssemblyName* New_ctor(System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext sc);
    // public System.String get_Name()
    // Offset: 0x1369174
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x136917C
    void set_Name(::Il2CppString* value);
    // public System.Globalization.CultureInfo get_CultureInfo()
    // Offset: 0x1369184
    System::Globalization::CultureInfo* get_CultureInfo();
    // public System.Void set_CultureInfo(System.Globalization.CultureInfo value)
    // Offset: 0x136918C
    void set_CultureInfo(System::Globalization::CultureInfo* value);
    // public System.Reflection.AssemblyNameFlags get_Flags()
    // Offset: 0x1369194
    System::Reflection::AssemblyNameFlags get_Flags();
    // public System.Void set_Flags(System.Reflection.AssemblyNameFlags value)
    // Offset: 0x136919C
    void set_Flags(System::Reflection::AssemblyNameFlags value);
    // public System.String get_FullName()
    // Offset: 0x13691A4
    ::Il2CppString* get_FullName();
    // public System.Version get_Version()
    // Offset: 0x13695BC
    System::Version* get_Version();
    // public System.Void set_Version(System.Version value)
    // Offset: 0x1367D60
    void set_Version(System::Version* value);
    // public System.Byte[] GetPublicKey()
    // Offset: 0x13695F8
    ::Array<uint8_t>* GetPublicKey();
    // public System.Byte[] GetPublicKeyToken()
    // Offset: 0x1369600
    ::Array<uint8_t>* GetPublicKeyToken();
    // private System.Boolean get_IsPublicKeyValid()
    // Offset: 0x13696FC
    bool get_IsPublicKeyValid();
    // private System.Byte[] InternalGetPublicKeyToken()
    // Offset: 0x13694D4
    ::Array<uint8_t>* InternalGetPublicKeyToken();
    // static private System.Void get_public_token(System.Byte* token, System.Byte* pubkey, System.Int32 len)
    // Offset: 0x1369820
    static void get_public_token(uint8_t* token, uint8_t* pubkey, int len);
    // private System.Byte[] ComputePublicKeyToken()
    // Offset: 0x136978C
    ::Array<uint8_t>* ComputePublicKeyToken();
    // public System.Void SetPublicKey(System.Byte[] publicKey)
    // Offset: 0x1367D40
    void SetPublicKey(::Array<uint8_t>* publicKey);
    // static private Mono.MonoAssemblyName* GetNativeName(System.IntPtr assembly_ptr)
    // Offset: 0x1369BA8
    static Mono::MonoAssemblyName* GetNativeName(System::IntPtr assembly_ptr);
    // System.Void FillName(Mono.MonoAssemblyName* native, System.String codeBase, System.Boolean addVersion, System.Boolean addPublickey, System.Boolean defaultToken, System.Boolean assemblyRef)
    // Offset: 0x13681E4
    void FillName(Mono::MonoAssemblyName* native, ::Il2CppString* codeBase, bool addVersion, bool addPublickey, bool defaultToken, bool assemblyRef);
    // static System.Reflection.AssemblyName Create(System.Reflection.Assembly assembly, System.Boolean fillCodebase)
    // Offset: 0x1369BAC
    static System::Reflection::AssemblyName* Create(System::Reflection::Assembly* assembly, bool fillCodebase);
    // public System.Void .ctor()
    // Offset: 0x1367D34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AssemblyName* New_ctor();
    // public override System.String ToString()
    // Offset: 0x13695C4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1369824
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object Clone()
    // Offset: 0x1369A8C
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0x1369BA0
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
  }; // System.Reflection.AssemblyName
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyName*, "System.Reflection", "AssemblyName");
#pragma pack(pop)
