// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.Ephemeron
#include "System/Runtime/CompilerServices/Ephemeron.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.GC
  // [] Offset: FFFFFFFF
  class GC : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GC
    GC() noexcept {}
    // Get static field: static readonly System.Object EPHEMERON_TOMBSTONE
    static ::Il2CppObject* _get_EPHEMERON_TOMBSTONE();
    // Set static field: static readonly System.Object EPHEMERON_TOMBSTONE
    static void _set_EPHEMERON_TOMBSTONE(::Il2CppObject* value);
    // static private System.Int32 GetMaxGeneration()
    // Offset: 0x12B2938
    static int GetMaxGeneration();
    // static private System.Void InternalCollect(System.Int32 generation)
    // Offset: 0x12B293C
    static void InternalCollect(int generation);
    // static System.Void register_ephemeron_array(System.Runtime.CompilerServices.Ephemeron[] array)
    // Offset: 0x12B2940
    static void register_ephemeron_array(::Array<System::Runtime::CompilerServices::Ephemeron>* array);
    // static private System.Object get_ephemeron_tombstone()
    // Offset: 0x12B2944
    static ::Il2CppObject* get_ephemeron_tombstone();
    // static public System.Void Collect()
    // Offset: 0x12B2948
    static void Collect();
    // static public System.Void KeepAlive(System.Object obj)
    // Offset: 0x12B2A04
    static void KeepAlive(::Il2CppObject* obj);
    // static public System.Int32 get_MaxGeneration()
    // Offset: 0x12B29A8
    static int get_MaxGeneration();
    // static private System.Void _SuppressFinalize(System.Object o)
    // Offset: 0x12B2A08
    static void _SuppressFinalize(::Il2CppObject* o);
    // static public System.Void SuppressFinalize(System.Object obj)
    // Offset: 0x12B2A0C
    static void SuppressFinalize(::Il2CppObject* obj);
    // static private System.Void _ReRegisterForFinalize(System.Object o)
    // Offset: 0x12B2AB0
    static void _ReRegisterForFinalize(::Il2CppObject* o);
    // static public System.Void ReRegisterForFinalize(System.Object obj)
    // Offset: 0x12B2AB4
    static void ReRegisterForFinalize(::Il2CppObject* obj);
    // static private System.Void .cctor()
    // Offset: 0x12B2B58
    static void _cctor();
  }; // System.GC
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::GC*, "System", "GC");
