// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingDataCollector
  // [] Offset: FFFFFFFF
  class TraceLoggingDataCollector : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TraceLoggingDataCollector
    TraceLoggingDataCollector() noexcept {}
    // Get static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static System::Diagnostics::Tracing::TraceLoggingDataCollector* _get_Instance();
    // Set static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static void _set_Instance(System::Diagnostics::Tracing::TraceLoggingDataCollector* value);
    // public System.Int32 BeginBufferedArray()
    // Offset: 0x12A7748
    int BeginBufferedArray();
    // public System.Void EndBufferedArray(System.Int32 bookmark, System.Int32 count)
    // Offset: 0x12A7798
    void EndBufferedArray(int bookmark, int count);
    // public System.Void AddScalar(System.Boolean value)
    // Offset: 0x12A7800
    void AddScalar(bool value);
    // public System.Void AddScalar(System.SByte value)
    // Offset: 0x12A6544
    void AddScalar(int8_t value);
    // public System.Void AddScalar(System.Byte value)
    // Offset: 0x12A7864
    void AddScalar(uint8_t value);
    // public System.Void AddScalar(System.Int16 value)
    // Offset: 0x12A07C0
    void AddScalar(int16_t value);
    // public System.Void AddScalar(System.UInt16 value)
    // Offset: 0x12A78C4
    void AddScalar(uint16_t value);
    // public System.Void AddScalar(System.Int32 value)
    // Offset: 0x12A0B38
    void AddScalar(int value);
    // public System.Void AddScalar(System.UInt32 value)
    // Offset: 0x12A7924
    void AddScalar(uint value);
    // public System.Void AddScalar(System.Int64 value)
    // Offset: 0x12A0E88
    void AddScalar(int64_t value);
    // public System.Void AddScalar(System.UInt64 value)
    // Offset: 0x12A7984
    void AddScalar(uint64_t value);
    // public System.Void AddScalar(System.IntPtr value)
    // Offset: 0x12A1220
    void AddScalar(System::IntPtr value);
    // public System.Void AddScalar(System.UIntPtr value)
    // Offset: 0x12A79E4
    void AddScalar(System::UIntPtr value);
    // public System.Void AddScalar(System.Single value)
    // Offset: 0x12A68A0
    void AddScalar(float value);
    // public System.Void AddScalar(System.Double value)
    // Offset: 0x12A7A74
    void AddScalar(double value);
    // public System.Void AddScalar(System.Char value)
    // Offset: 0x12A7AD4
    void AddScalar(::Il2CppChar value);
    // public System.Void AddScalar(System.Guid value)
    // Offset: 0x12A0458
    void AddScalar(System::Guid value);
    // public System.Void AddBinary(System.String value)
    // Offset: 0x12A7338
    void AddBinary(::Il2CppString* value);
    // public System.Void AddBinary(System.Byte[] value)
    // Offset: 0x12A7B34
    void AddBinary(::Array<uint8_t>* value);
    // public System.Void AddArray(System.Boolean[] value)
    // Offset: 0x12A7BA4
    void AddArray(::Array<bool>* value);
    // public System.Void AddArray(System.SByte[] value)
    // Offset: 0x12A63D8
    void AddArray(::Array<int8_t>* value);
    // public System.Void AddArray(System.Int16[] value)
    // Offset: 0x12A0654
    void AddArray(::Array<int16_t>* value);
    // public System.Void AddArray(System.UInt16[] value)
    // Offset: 0x12A7C18
    void AddArray(::Array<uint16_t>* value);
    // public System.Void AddArray(System.Int32[] value)
    // Offset: 0x12A09CC
    void AddArray(::Array<int>* value);
    // public System.Void AddArray(System.UInt32[] value)
    // Offset: 0x12A7C8C
    void AddArray(::Array<uint>* value);
    // public System.Void AddArray(System.Int64[] value)
    // Offset: 0x12A0D1C
    void AddArray(::Array<int64_t>* value);
    // public System.Void AddArray(System.UInt64[] value)
    // Offset: 0x12A7D00
    void AddArray(::Array<uint64_t>* value);
    // public System.Void AddArray(System.IntPtr[] value)
    // Offset: 0x12A108C
    void AddArray(::Array<System::IntPtr>* value);
    // public System.Void AddArray(System.UIntPtr[] value)
    // Offset: 0x12A7D74
    void AddArray(::Array<System::UIntPtr>* value);
    // public System.Void AddArray(System.Single[] value)
    // Offset: 0x12A6734
    void AddArray(::Array<float>* value);
    // public System.Void AddArray(System.Double[] value)
    // Offset: 0x12A7E28
    void AddArray(::Array<double>* value);
    // public System.Void AddArray(System.Char[] value)
    // Offset: 0x12A7E9C
    void AddArray(::Array<::Il2CppChar>* value);
    // public System.Void AddArray(System.Guid[] value)
    // Offset: 0x12A01E4
    void AddArray(::Array<System::Guid>* value);
    // static private System.Void .cctor()
    // Offset: 0x12A7F10
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x12A7740
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceLoggingDataCollector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::TraceLoggingDataCollector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceLoggingDataCollector*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.TraceLoggingDataCollector
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingDataCollector*, "System.Diagnostics.Tracing", "TraceLoggingDataCollector");
