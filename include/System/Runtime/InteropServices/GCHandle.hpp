// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Runtime.InteropServices.GCHandleType
#include "System/Runtime/InteropServices/GCHandleType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.GCHandle
  // [] Offset: FFFFFFFF
  // [MonoTODOAttribute] Offset: CAC9C0
  // [ComVisibleAttribute] Offset: CAC9C0
  struct GCHandle/*, public System::ValueType*/ {
    public:
    // private System.Int32 handle
    // Size: 0x4
    // Offset: 0x0
    int handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GCHandle
    constexpr GCHandle(int handle_ = {}) noexcept : handle{handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return handle;
    }
    // private System.Void .ctor(System.IntPtr h)
    // Offset: 0xDF9838
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GCHandle(System::IntPtr h) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GCHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(h)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, h);
    }
    // private System.Void .ctor(System.Object obj)
    // Offset: 0xDF9864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GCHandle(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GCHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, obj);
    }
    // System.Void .ctor(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0xDF9894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    GCHandle(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::GCHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value, type)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, value, type);
    }
    // public System.Boolean get_IsAllocated()
    // Offset: 0xDF98CC
    bool get_IsAllocated();
    // public System.Object get_Target()
    // Offset: 0xDF98DC
    ::Il2CppObject* get_Target();
    // public System.Void set_Target(System.Object value)
    // Offset: 0xDF98E4
    void set_Target(::Il2CppObject* value);
    // public System.IntPtr AddrOfPinnedObject()
    // Offset: 0xDF9918
    System::IntPtr AddrOfPinnedObject();
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value)
    // Offset: 0x130B72C
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value);
    // static public System.Runtime.InteropServices.GCHandle Alloc(System.Object value, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x130B74C
    static System::Runtime::InteropServices::GCHandle Alloc(::Il2CppObject* value, System::Runtime::InteropServices::GCHandleType type);
    // public System.Void Free()
    // Offset: 0xDF9920
    void Free();
    // static public System.IntPtr op_Explicit(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x130B81C
    explicit operator System::IntPtr();
    // static public System.Runtime.InteropServices.GCHandle op_Explicit(System.IntPtr value)
    // Offset: 0x130B824
    explicit GCHandle(System::IntPtr& value);
    // static private System.Boolean CheckCurrentDomain(System.Int32 handle)
    // Offset: 0x130B904
    static bool CheckCurrentDomain(int handle);
    // static private System.Object GetTarget(System.Int32 handle)
    // Offset: 0x130B5F0
    static ::Il2CppObject* GetTarget(int handle);
    // static private System.Int32 GetTargetHandle(System.Object obj, System.Int32 handle, System.Runtime.InteropServices.GCHandleType type)
    // Offset: 0x130B544
    static int GetTargetHandle(::Il2CppObject* obj, int handle, System::Runtime::InteropServices::GCHandleType type);
    // static private System.Void FreeHandle(System.Int32 handle)
    // Offset: 0x130B818
    static void FreeHandle(int handle);
    // static private System.IntPtr GetAddrOfPinnedObject(System.Int32 handle)
    // Offset: 0x130B728
    static System::IntPtr GetAddrOfPinnedObject(int handle);
    // static public System.Runtime.InteropServices.GCHandle FromIntPtr(System.IntPtr value)
    // Offset: 0x130B9A4
    static System::Runtime::InteropServices::GCHandle FromIntPtr(System::IntPtr value);
    // static public System.IntPtr ToIntPtr(System.Runtime.InteropServices.GCHandle value)
    // Offset: 0x130B9BC
    static System::IntPtr ToIntPtr(System::Runtime::InteropServices::GCHandle value);
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0xDF9928
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDF9930
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Runtime.InteropServices.GCHandle
  #pragma pack(pop)
  static check_size<sizeof(GCHandle), 0 + sizeof(int)> __System_Runtime_InteropServices_GCHandleSizeCheck;
  static_assert(sizeof(GCHandle) == 0x4);
  // static public System.Boolean op_Equality(System.Runtime.InteropServices.GCHandle a, System.Runtime.InteropServices.GCHandle b)
  // Offset: 0x130B908
  bool operator ==(const System::Runtime::InteropServices::GCHandle& a, const System::Runtime::InteropServices::GCHandle& b);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
