// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: Allocator
  struct Allocator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
  // [] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: CBCC74
  // [NativeHeaderAttribute] Offset: CBCC74
  class UnsafeUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnsafeUtility
    UnsafeUtility() noexcept {}
    // static public System.Void Free(System.Void* memory, Unity.Collections.Allocator allocator)
    // Offset: 0x1A11750
    static void Free(void* memory, Unity::Collections::Allocator allocator);
    // static public T ReadArrayElement(System.Void* source, System.Int32 index)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ReadArrayElement(void* source, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElement");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "ReadArrayElement", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(source, index)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, source, index);
    }
    // static public System.Void WriteArrayElement(System.Void* destination, System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void WriteArrayElement(void* destination, int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElement");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "WriteArrayElement", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(destination, index, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, destination, index, value);
    }
    // static public System.Int32 SizeOf()
    // Offset: 0xFFFFFFFF
    template<class T>
    static int SizeOf() {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "SizeOf", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
  }; // Unity.Collections.LowLevel.Unsafe.UnsafeUtility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
