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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IEquatable`1<T>
  template<typename T>
  class IEquatable_1;
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.SetPropertyUtility
  class SetPropertyUtility : public ::Il2CppObject {
    public:
    // static public System.Boolean SetColor(ref UnityEngine.Color currentValue, UnityEngine.Color newValue)
    // Offset: 0xF40378
    static bool SetColor(UnityEngine::Color& currentValue, UnityEngine::Color newValue);
    // static public System.Boolean SetEquatableStruct(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool SetEquatableStruct(T& currentValue, T newValue) {
      static_assert(std::is_base_of_v<System::IEquatable_1<T>, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("TMPro", "SetPropertyUtility", "SetEquatableStruct", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue)));
    }
    // static public System.Boolean SetStruct(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool SetStruct(T& currentValue, T newValue) {
      static_assert(is_value_type_v<T>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("TMPro", "SetPropertyUtility", "SetStruct", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue)));
    }
    // static public System.Boolean SetClass(ref T currentValue, T newValue)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool SetClass(T& currentValue, T newValue) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("TMPro", "SetPropertyUtility", "SetClass", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, currentValue, newValue)));
    }
  }; // TMPro.SetPropertyUtility
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::SetPropertyUtility*, "TMPro", "SetPropertyUtility");
#pragma pack(pop)
