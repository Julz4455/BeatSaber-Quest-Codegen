// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.Interlocked
  class Interlocked : public ::Il2CppObject {
    public:
    // static public System.Int32 CompareExchange(ref System.Int32 location1, System.Int32 value, System.Int32 comparand)
    // Offset: 0x13DBD70
    static int CompareExchange(int& location1, int value, int comparand);
    // static System.Int32 CompareExchange(ref System.Int32 location1, System.Int32 value, System.Int32 comparand, ref System.Boolean succeeded)
    // Offset: 0x13DE860
    static int CompareExchange(int& location1, int value, int comparand, bool& succeeded);
    // static public System.Object CompareExchange(ref System.Object location1, System.Object value, System.Object comparand)
    // Offset: 0x13DE864
    static ::Il2CppObject* CompareExchange(::Il2CppObject*& location1, ::Il2CppObject* value, ::Il2CppObject* comparand);
    // static public System.Single CompareExchange(ref System.Single location1, System.Single value, System.Single comparand)
    // Offset: 0x13DE868
    static float CompareExchange(float& location1, float value, float comparand);
    // static public System.Int32 Decrement(ref System.Int32 location)
    // Offset: 0x13DE86C
    static int Decrement(int& location);
    // static public System.Int32 Increment(ref System.Int32 location)
    // Offset: 0x13DE870
    static int Increment(int& location);
    // static public System.Int64 Increment(ref System.Int64 location)
    // Offset: 0x13DE874
    static int64_t Increment(int64_t& location);
    // static public System.Int32 Exchange(ref System.Int32 location1, System.Int32 value)
    // Offset: 0x13DC278
    static int Exchange(int& location1, int value);
    // static public System.Object Exchange(ref System.Object location1, System.Object value)
    // Offset: 0x13DE878
    static ::Il2CppObject* Exchange(::Il2CppObject*& location1, ::Il2CppObject* value);
    // static public System.Single Exchange(ref System.Single location1, System.Single value)
    // Offset: 0x13DE87C
    static float Exchange(float& location1, float value);
    // static public System.Int64 CompareExchange(ref System.Int64 location1, System.Int64 value, System.Int64 comparand)
    // Offset: 0x13DE880
    static int64_t CompareExchange(int64_t& location1, int64_t value, int64_t comparand);
    // static public System.IntPtr CompareExchange(ref System.IntPtr location1, System.IntPtr value, System.IntPtr comparand)
    // Offset: 0x13DE884
    static System::IntPtr CompareExchange(System::IntPtr& location1, System::IntPtr value, System::IntPtr comparand);
    // static public System.Double CompareExchange(ref System.Double location1, System.Double value, System.Double comparand)
    // Offset: 0x13DE888
    static double CompareExchange(double& location1, double value, double comparand);
    // static public T CompareExchange(ref T location1, T value, T comparand)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T CompareExchange(T& location1, T value, T comparand) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System.Threading", "Interlocked", "CompareExchange", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, location1, value, comparand)));
    }
    // static public System.Int64 Exchange(ref System.Int64 location1, System.Int64 value)
    // Offset: 0x13DE88C
    static int64_t Exchange(int64_t& location1, int64_t value);
    // static public System.IntPtr Exchange(ref System.IntPtr location1, System.IntPtr value)
    // Offset: 0x13DE890
    static System::IntPtr Exchange(System::IntPtr& location1, System::IntPtr value);
    // static public System.Double Exchange(ref System.Double location1, System.Double value)
    // Offset: 0x13DE894
    static double Exchange(double& location1, double value);
    // static public T Exchange(ref T location1, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Exchange(T& location1, T value) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("System.Threading", "Interlocked", "Exchange", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, location1, value)));
    }
    // static public System.Int64 Read(ref System.Int64 location)
    // Offset: 0x13DE898
    static int64_t Read(int64_t& location);
    // static public System.Int32 Add(ref System.Int32 location1, System.Int32 value)
    // Offset: 0x13DE89C
    static int Add(int& location1, int value);
  }; // System.Threading.Interlocked
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Interlocked*, "System.Threading", "Interlocked");
#pragma pack(pop)
