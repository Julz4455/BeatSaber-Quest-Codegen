// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeRegistryHandle
  class SafeRegistryHandle;
}
// Forward declaring namespace: Microsoft::Win32
namespace Microsoft::Win32 {
  // Forward declaring type: IRegistryApi
  class IRegistryApi;
  // Forward declaring type: RegistryHive
  struct RegistryHive;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: IOException
  class IOException;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.RegistryKey
  class RegistryKey : public System::MarshalByRefObject, public System::IDisposable {
    public:
    // private System.Object handle
    // Offset: 0x18
    ::Il2CppObject* handle;
    // private Microsoft.Win32.SafeHandles.SafeRegistryHandle safe_handle
    // Offset: 0x20
    Microsoft::Win32::SafeHandles::SafeRegistryHandle* safe_handle;
    // private System.Object hive
    // Offset: 0x28
    ::Il2CppObject* hive;
    // private readonly System.String qname
    // Offset: 0x30
    ::Il2CppString* qname;
    // private readonly System.Boolean isRemoteRoot
    // Offset: 0x38
    bool isRemoteRoot;
    // private readonly System.Boolean isWritable
    // Offset: 0x39
    bool isWritable;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private readonly Microsoft.Win32.IRegistryApi RegistryApi
    static Microsoft::Win32::IRegistryApi* _get_RegistryApi();
    // Set static field: static private readonly Microsoft.Win32.IRegistryApi RegistryApi
    static void _set_RegistryApi(Microsoft::Win32::IRegistryApi* value);
    // static private System.Void .cctor()
    // Offset: 0x17CFC98
    static void _cctor();
    // System.Void .ctor(Microsoft.Win32.RegistryHive hiveId)
    // Offset: 0x17CFC4C
    static RegistryKey* New_ctor(Microsoft::Win32::RegistryHive hiveId);
    // System.Void .ctor(Microsoft.Win32.RegistryHive hiveId, System.IntPtr keyHandle, System.Boolean remoteRoot)
    // Offset: 0x17CFDD8
    static RegistryKey* New_ctor(Microsoft::Win32::RegistryHive hiveId, System::IntPtr keyHandle, bool remoteRoot);
    // System.Void .ctor(System.Object data, System.String keyName, System.Boolean writable)
    // Offset: 0x17CCB1C
    static RegistryKey* New_ctor(::Il2CppObject* data, ::Il2CppString* keyName, bool writable);
    // static System.Boolean IsEquals(Microsoft.Win32.RegistryKey a, Microsoft.Win32.RegistryKey b)
    // Offset: 0x17CFFE0
    static bool IsEquals(Microsoft::Win32::RegistryKey* a, Microsoft::Win32::RegistryKey* b);
    // public System.String get_Name()
    // Offset: 0x17D0218
    ::Il2CppString* get_Name();
    // public System.Void Flush()
    // Offset: 0x17D0220
    void Flush();
    // public System.Void Close()
    // Offset: 0x17D00F4
    void Close();
    // public Microsoft.Win32.SafeHandles.SafeRegistryHandle get_Handle()
    // Offset: 0x17D0300
    Microsoft::Win32::SafeHandles::SafeRegistryHandle* get_Handle();
    // public Microsoft.Win32.RegistryKey OpenSubKey(System.String name)
    // Offset: 0x17D04EC
    Microsoft::Win32::RegistryKey* OpenSubKey(::Il2CppString* name);
    // public Microsoft.Win32.RegistryKey OpenSubKey(System.String name, System.Boolean writable)
    // Offset: 0x17D04F4
    Microsoft::Win32::RegistryKey* OpenSubKey(::Il2CppString* name, bool writable);
    // public System.Object GetValue(System.String name)
    // Offset: 0x17D06C8
    ::Il2CppObject* GetValue(::Il2CppString* name);
    // public System.Object GetValue(System.String name, System.Object defaultValue)
    // Offset: 0x17D06D0
    ::Il2CppObject* GetValue(::Il2CppString* name, ::Il2CppObject* defaultValue);
    // public System.String[] GetSubKeyNames()
    // Offset: 0x17D07D4
    ::Array<::Il2CppString*>* GetSubKeyNames();
    // System.Boolean get_IsRoot()
    // Offset: 0x17CE19C
    bool get_IsRoot();
    // Microsoft.Win32.RegistryHive get_Hive()
    // Offset: 0x17CE1AC
    Microsoft::Win32::RegistryHive get_Hive();
    // System.Object get_InternalHandle()
    // Offset: 0x17D09A4
    ::Il2CppObject* get_InternalHandle();
    // private System.Void AssertKeyStillValid()
    // Offset: 0x17D043C
    void AssertKeyStillValid();
    // private System.Void AssertKeyNameLength(System.String name)
    // Offset: 0x17D0638
    void AssertKeyNameLength(::Il2CppString* name);
    // static System.String DecodeString(System.Byte[] data)
    // Offset: 0x17D09AC
    static ::Il2CppString* DecodeString(::Array<uint8_t>* data);
    // static System.IO.IOException CreateMarkedForDeletionException()
    // Offset: 0x17D0A5C
    static System::IO::IOException* CreateMarkedForDeletionException();
    // static private System.String GetHiveName(Microsoft.Win32.RegistryHive hive)
    // Offset: 0x17CFEE0
    static ::Il2CppString* GetHiveName(Microsoft::Win32::RegistryHive hive);
    // public System.Void Dispose()
    // Offset: 0x17D0084
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public override System.String ToString()
    // Offset: 0x17D08BC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Microsoft.Win32.RegistryKey
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::RegistryKey*, "Microsoft.Win32", "RegistryKey");
#pragma pack(pop)
