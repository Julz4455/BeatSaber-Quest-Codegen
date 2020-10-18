// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: UIntPtr
  struct UIntPtr;
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingDataCollector
  class TraceLoggingDataCollector : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static System::Diagnostics::Tracing::TraceLoggingDataCollector* _get_Instance();
    // Set static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static void _set_Instance(System::Diagnostics::Tracing::TraceLoggingDataCollector* value);
    // public System.Int32 BeginBufferedArray()
    // Offset: 0x124E740
    int BeginBufferedArray();
    // public System.Void EndBufferedArray(System.Int32 bookmark, System.Int32 count)
    // Offset: 0x124E790
    void EndBufferedArray(int bookmark, int count);
    // public System.Void AddScalar(System.Boolean value)
    // Offset: 0x124E7F8
    void AddScalar(bool value);
    // public System.Void AddScalar(System.SByte value)
    // Offset: 0x124D53C
    void AddScalar(int8_t value);
    // public System.Void AddScalar(System.Byte value)
    // Offset: 0x124E85C
    void AddScalar(uint8_t value);
    // public System.Void AddScalar(System.Int16 value)
    // Offset: 0x12477B8
    void AddScalar(int16_t value);
    // public System.Void AddScalar(System.UInt16 value)
    // Offset: 0x124E8BC
    void AddScalar(uint16_t value);
    // public System.Void AddScalar(System.Int32 value)
    // Offset: 0x1247B30
    void AddScalar(int value);
    // public System.Void AddScalar(System.UInt32 value)
    // Offset: 0x124E91C
    void AddScalar(uint value);
    // public System.Void AddScalar(System.Int64 value)
    // Offset: 0x1247E80
    void AddScalar(int64_t value);
    // public System.Void AddScalar(System.UInt64 value)
    // Offset: 0x124E97C
    void AddScalar(uint64_t value);
    // public System.Void AddScalar(System.IntPtr value)
    // Offset: 0x1248218
    void AddScalar(System::IntPtr value);
    // public System.Void AddScalar(System.UIntPtr value)
    // Offset: 0x124E9DC
    void AddScalar(System::UIntPtr value);
    // public System.Void AddScalar(System.Single value)
    // Offset: 0x124D898
    void AddScalar(float value);
    // public System.Void AddScalar(System.Double value)
    // Offset: 0x124EA6C
    void AddScalar(double value);
    // public System.Void AddScalar(System.Char value)
    // Offset: 0x124EACC
    void AddScalar(::Il2CppChar value);
    // public System.Void AddScalar(System.Guid value)
    // Offset: 0x1247450
    void AddScalar(System::Guid value);
    // public System.Void AddBinary(System.String value)
    // Offset: 0x124E330
    void AddBinary(::Il2CppString* value);
    // public System.Void AddBinary(System.Byte[] value)
    // Offset: 0x124EB2C
    void AddBinary(::Array<uint8_t>* value);
    // public System.Void AddArray(System.Boolean[] value)
    // Offset: 0x124EB9C
    void AddArray(::Array<bool>* value);
    // public System.Void AddArray(System.SByte[] value)
    // Offset: 0x124D3D0
    void AddArray(::Array<int8_t>* value);
    // public System.Void AddArray(System.Int16[] value)
    // Offset: 0x124764C
    void AddArray(::Array<int16_t>* value);
    // public System.Void AddArray(System.UInt16[] value)
    // Offset: 0x124EC10
    void AddArray(::Array<uint16_t>* value);
    // public System.Void AddArray(System.Int32[] value)
    // Offset: 0x12479C4
    void AddArray(::Array<int>* value);
    // public System.Void AddArray(System.UInt32[] value)
    // Offset: 0x124EC84
    void AddArray(::Array<uint>* value);
    // public System.Void AddArray(System.Int64[] value)
    // Offset: 0x1247D14
    void AddArray(::Array<int64_t>* value);
    // public System.Void AddArray(System.UInt64[] value)
    // Offset: 0x124ECF8
    void AddArray(::Array<uint64_t>* value);
    // public System.Void AddArray(System.IntPtr[] value)
    // Offset: 0x1248084
    void AddArray(::Array<System::IntPtr>* value);
    // public System.Void AddArray(System.UIntPtr[] value)
    // Offset: 0x124ED6C
    void AddArray(::Array<System::UIntPtr>* value);
    // public System.Void AddArray(System.Single[] value)
    // Offset: 0x124D72C
    void AddArray(::Array<float>* value);
    // public System.Void AddArray(System.Double[] value)
    // Offset: 0x124EE20
    void AddArray(::Array<double>* value);
    // public System.Void AddArray(System.Char[] value)
    // Offset: 0x124EE94
    void AddArray(::Array<::Il2CppChar>* value);
    // public System.Void AddArray(System.Guid[] value)
    // Offset: 0x12471DC
    void AddArray(::Array<System::Guid>* value);
    // static private System.Void .cctor()
    // Offset: 0x124EF08
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x124E738
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TraceLoggingDataCollector* New_ctor();
  }; // System.Diagnostics.Tracing.TraceLoggingDataCollector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingDataCollector*, "System.Diagnostics.Tracing", "TraceLoggingDataCollector");
#pragma pack(pop)
