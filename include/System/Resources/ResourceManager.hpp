// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.UltimateResourceFallbackLocation
#include "System/Resources/UltimateResourceFallbackLocation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceSet
  class ResourceSet;
  // Forward declaring type: IResourceGroveler
  class IResourceGroveler;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: RuntimeAssembly
  class RuntimeAssembly;
  // Forward declaring type: AssemblyName
  class AssemblyName;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceManager
  class ResourceManager : public ::Il2CppObject {
    public:
    // Nested type: System::Resources::ResourceManager::CultureNameResourceSetPair
    class CultureNameResourceSetPair;
    // Nested type: System::Resources::ResourceManager::ResourceManagerMediator
    class ResourceManagerMediator;
    // protected System.String BaseNameField
    // Offset: 0x10
    ::Il2CppString* BaseNameField;
    // protected System.Collections.Hashtable ResourceSets
    // Offset: 0x18
    System::Collections::Hashtable* ResourceSets;
    // private System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> _resourceSets
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>* resourceSets;
    // private System.String moduleDir
    // Offset: 0x28
    ::Il2CppString* moduleDir;
    // protected System.Reflection.Assembly MainAssembly
    // Offset: 0x30
    System::Reflection::Assembly* MainAssembly;
    // private System.Type _locationInfo
    // Offset: 0x38
    System::Type* locationInfo;
    // private System.Type _userResourceSet
    // Offset: 0x40
    System::Type* userResourceSet;
    // private System.Globalization.CultureInfo _neutralResourcesCulture
    // Offset: 0x48
    System::Globalization::CultureInfo* neutralResourcesCulture;
    // private System.Resources.ResourceManager/CultureNameResourceSetPair _lastUsedResourceCache
    // Offset: 0x50
    System::Resources::ResourceManager::CultureNameResourceSetPair* lastUsedResourceCache;
    // private System.Boolean _ignoreCase
    // Offset: 0x58
    bool ignoreCase;
    // private System.Boolean UseManifest
    // Offset: 0x59
    bool UseManifest;
    // private System.Boolean UseSatelliteAssem
    // Offset: 0x5A
    bool UseSatelliteAssem;
    // private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    // Offset: 0x5C
    System::Resources::UltimateResourceFallbackLocation fallbackLoc;
    // private System.Version _satelliteContractVersion
    // Offset: 0x60
    System::Version* satelliteContractVersion;
    // private System.Boolean _lookedForSatelliteContractVersion
    // Offset: 0x68
    bool lookedForSatelliteContractVersion;
    // private System.Reflection.Assembly _callingAssembly
    // Offset: 0x70
    System::Reflection::Assembly* callingAssembly;
    // private System.Reflection.RuntimeAssembly m_callingAssembly
    // Offset: 0x78
    System::Reflection::RuntimeAssembly* m_callingAssembly;
    // private System.Resources.IResourceGroveler resourceGroveler
    // Offset: 0x80
    System::Resources::IResourceGroveler* resourceGroveler;
    // Get static field: static public readonly System.Int32 MagicNumber
    static int _get_MagicNumber();
    // Set static field: static public readonly System.Int32 MagicNumber
    static void _set_MagicNumber(int value);
    // Get static field: static public readonly System.Int32 HeaderVersionNumber
    static int _get_HeaderVersionNumber();
    // Set static field: static public readonly System.Int32 HeaderVersionNumber
    static void _set_HeaderVersionNumber(int value);
    // Get static field: static private readonly System.Type _minResourceSet
    static System::Type* _get__minResourceSet();
    // Set static field: static private readonly System.Type _minResourceSet
    static void _set__minResourceSet(System::Type* value);
    // Get static field: static readonly System.String ResReaderTypeName
    static ::Il2CppString* _get_ResReaderTypeName();
    // Set static field: static readonly System.String ResReaderTypeName
    static void _set_ResReaderTypeName(::Il2CppString* value);
    // Get static field: static readonly System.String ResSetTypeName
    static ::Il2CppString* _get_ResSetTypeName();
    // Set static field: static readonly System.String ResSetTypeName
    static void _set_ResSetTypeName(::Il2CppString* value);
    // Get static field: static readonly System.String MscorlibName
    static ::Il2CppString* _get_MscorlibName();
    // Set static field: static readonly System.String MscorlibName
    static void _set_MscorlibName(::Il2CppString* value);
    // Get static field: static readonly System.Int32 DEBUG
    static int _get_DEBUG();
    // Set static field: static readonly System.Int32 DEBUG
    static void _set_DEBUG(int value);
    // private System.Void Init()
    // Offset: 0x18DB1C8
    void Init();
    // public System.Void .ctor(System.String baseName, System.Reflection.Assembly assembly)
    // Offset: 0x18DB3E8
    static ResourceManager* New_ctor(::Il2CppString* baseName, System::Reflection::Assembly* assembly);
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x18DB7A4
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x18DB7E8
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x18DB9A4
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void CommonAssemblyInit()
    // Offset: 0x18DB650
    void CommonAssemblyInit();
    // public System.String get_BaseName()
    // Offset: 0x18DBA24
    ::Il2CppString* get_BaseName();
    // protected System.Resources.UltimateResourceFallbackLocation get_FallbackLocation()
    // Offset: 0x18DBA2C
    System::Resources::UltimateResourceFallbackLocation get_FallbackLocation();
    // protected System.String GetResourceFileName(System.Globalization.CultureInfo culture)
    // Offset: 0x18DBA34
    ::Il2CppString* GetResourceFileName(System::Globalization::CultureInfo* culture);
    // System.Resources.ResourceSet GetFirstResourceSet(System.Globalization.CultureInfo culture)
    // Offset: 0x18DBB68
    System::Resources::ResourceSet* GetFirstResourceSet(System::Globalization::CultureInfo* culture);
    // public System.Resources.ResourceSet GetResourceSet(System.Globalization.CultureInfo culture, System.Boolean createIfNotExists, System.Boolean tryParents)
    // Offset: 0x18DBEFC
    System::Resources::ResourceSet* GetResourceSet(System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents);
    // protected System.Resources.ResourceSet InternalGetResourceSet(System.Globalization.CultureInfo culture, System.Boolean createIfNotExists, System.Boolean tryParents)
    // Offset: 0x18DC3B8
    System::Resources::ResourceSet* InternalGetResourceSet(System::Globalization::CultureInfo* culture, bool createIfNotExists, bool tryParents);
    // private System.Resources.ResourceSet InternalGetResourceSet(System.Globalization.CultureInfo requestedCulture, System.Boolean createIfNotExists, System.Boolean tryParents, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x18DC3E8
    System::Resources::ResourceSet* InternalGetResourceSet(System::Globalization::CultureInfo* requestedCulture, bool createIfNotExists, bool tryParents, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void AddResourceSet(System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> localResourceSets, System.String cultureName, ref System.Resources.ResourceSet rs)
    // Offset: 0x18DC220
    static void AddResourceSet(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Resources::ResourceSet*>* localResourceSets, ::Il2CppString* cultureName, System::Resources::ResourceSet*& rs);
    // static protected System.Version GetSatelliteContractVersion(System.Reflection.Assembly a)
    // Offset: 0x18DCB5C
    static System::Version* GetSatelliteContractVersion(System::Reflection::Assembly* a);
    // static System.Boolean CompareNames(System.String asmTypeName1, System.String typeName2, System.Reflection.AssemblyName asmName2)
    // Offset: 0x18DA908
    static bool CompareNames(::Il2CppString* asmTypeName1, ::Il2CppString* typeName2, System::Reflection::AssemblyName* asmName2);
    // private System.Void SetAppXConfiguration()
    // Offset: 0x18DB64C
    void SetAppXConfiguration();
    // public System.String GetString(System.String name, System.Globalization.CultureInfo culture)
    // Offset: 0x18DD270
    ::Il2CppString* GetString(::Il2CppString* name, System::Globalization::CultureInfo* culture);
    // static private System.Void .cctor()
    // Offset: 0x18DD6E4
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x18DB260
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ResourceManager* New_ctor();
  }; // System.Resources.ResourceManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceManager*, "System.Resources", "ResourceManager");
#pragma pack(pop)
