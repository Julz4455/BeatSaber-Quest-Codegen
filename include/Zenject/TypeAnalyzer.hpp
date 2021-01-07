// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ReflectionBakingCoverageModes
#include "Zenject/ReflectionBakingCoverageModes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  // Autogenerated type: Zenject.TypeAnalyzer
  // [] Offset: FFFFFFFF
  class TypeAnalyzer : public ::Il2CppObject {
    public:
    // Nested type: Zenject::TypeAnalyzer::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // Creating value type constructor for type: TypeAnalyzer
    TypeAnalyzer() noexcept {}
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,Zenject.InjectTypeInfo> _typeInfo
    static System::Collections::Generic::Dictionary_2<System::Type*, Zenject::InjectTypeInfo*>* _get__typeInfo();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,Zenject.InjectTypeInfo> _typeInfo
    static void _set__typeInfo(System::Collections::Generic::Dictionary_2<System::Type*, Zenject::InjectTypeInfo*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _allowDuringValidation
    static System::Collections::Generic::Dictionary_2<System::Type*, bool>* _get__allowDuringValidation();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> _allowDuringValidation
    static void _set__allowDuringValidation(System::Collections::Generic::Dictionary_2<System::Type*, bool>* value);
    // static field const value: static public System.String ReflectionBakingGetInjectInfoMethodName
    static constexpr const char* ReflectionBakingGetInjectInfoMethodName = "__zenCreateInjectTypeInfo";
    // Get static field: static public System.String ReflectionBakingGetInjectInfoMethodName
    static ::Il2CppString* _get_ReflectionBakingGetInjectInfoMethodName();
    // Set static field: static public System.String ReflectionBakingGetInjectInfoMethodName
    static void _set_ReflectionBakingGetInjectInfoMethodName(::Il2CppString* value);
    // static field const value: static public System.String ReflectionBakingFactoryMethodName
    static constexpr const char* ReflectionBakingFactoryMethodName = "__zenCreate";
    // Get static field: static public System.String ReflectionBakingFactoryMethodName
    static ::Il2CppString* _get_ReflectionBakingFactoryMethodName();
    // Set static field: static public System.String ReflectionBakingFactoryMethodName
    static void _set_ReflectionBakingFactoryMethodName(::Il2CppString* value);
    // static field const value: static public System.String ReflectionBakingInjectMethodPrefix
    static constexpr const char* ReflectionBakingInjectMethodPrefix = "__zenInjectMethod";
    // Get static field: static public System.String ReflectionBakingInjectMethodPrefix
    static ::Il2CppString* _get_ReflectionBakingInjectMethodPrefix();
    // Set static field: static public System.String ReflectionBakingInjectMethodPrefix
    static void _set_ReflectionBakingInjectMethodPrefix(::Il2CppString* value);
    // static field const value: static public System.String ReflectionBakingFieldSetterPrefix
    static constexpr const char* ReflectionBakingFieldSetterPrefix = "__zenFieldSetter";
    // Get static field: static public System.String ReflectionBakingFieldSetterPrefix
    static ::Il2CppString* _get_ReflectionBakingFieldSetterPrefix();
    // Set static field: static public System.String ReflectionBakingFieldSetterPrefix
    static void _set_ReflectionBakingFieldSetterPrefix(::Il2CppString* value);
    // static field const value: static public System.String ReflectionBakingPropertySetterPrefix
    static constexpr const char* ReflectionBakingPropertySetterPrefix = "__zenPropertySetter";
    // Get static field: static public System.String ReflectionBakingPropertySetterPrefix
    static ::Il2CppString* _get_ReflectionBakingPropertySetterPrefix();
    // Set static field: static public System.String ReflectionBakingPropertySetterPrefix
    static void _set_ReflectionBakingPropertySetterPrefix(::Il2CppString* value);
    // [CompilerGeneratedAttribute] Offset: 0xD94D80
    // Get static field: static private Zenject.ReflectionBakingCoverageModes <ReflectionBakingCoverageMode>k__BackingField
    static Zenject::ReflectionBakingCoverageModes _get_$ReflectionBakingCoverageMode$k__BackingField();
    // Set static field: static private Zenject.ReflectionBakingCoverageModes <ReflectionBakingCoverageMode>k__BackingField
    static void _set_$ReflectionBakingCoverageMode$k__BackingField(Zenject::ReflectionBakingCoverageModes value);
    // static public Zenject.ReflectionBakingCoverageModes get_ReflectionBakingCoverageMode()
    // Offset: 0x19D1768
    static Zenject::ReflectionBakingCoverageModes get_ReflectionBakingCoverageMode();
    // static public System.Void set_ReflectionBakingCoverageMode(Zenject.ReflectionBakingCoverageModes value)
    // Offset: 0x19D17D0
    static void set_ReflectionBakingCoverageMode(Zenject::ReflectionBakingCoverageModes value);
    // static public System.Boolean ShouldAllowDuringValidation()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ShouldAllowDuringValidation() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("ShouldAllowDuringValidation");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "ShouldAllowDuringValidation", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public System.Boolean ShouldAllowDuringValidation(System.Type type)
    // Offset: 0x19D183C
    static bool ShouldAllowDuringValidation(System::Type* type);
    // static private System.Boolean ShouldAllowDuringValidationInternal(System.Type type)
    // Offset: 0x19D1928
    static bool ShouldAllowDuringValidationInternal(System::Type* type);
    // static public System.Boolean HasInfo()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool HasInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("HasInfo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "HasInfo", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public System.Boolean HasInfo(System.Type type)
    // Offset: 0x19D1A38
    static bool HasInfo(System::Type* type);
    // static public Zenject.InjectTypeInfo GetInfo()
    // Offset: 0xFFFFFFFF
    template<class T>
    static Zenject::InjectTypeInfo* GetInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("GetInfo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "GetInfo", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public Zenject.InjectTypeInfo GetInfo(System.Type type)
    // Offset: 0x19D1CA0
    static Zenject::InjectTypeInfo* GetInfo(System::Type* type);
    // static public Zenject.InjectTypeInfo TryGetInfo()
    // Offset: 0xFFFFFFFF
    template<class T>
    static Zenject::InjectTypeInfo* TryGetInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("TypeAnalyzer").WithContext("TryGetInfo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "TypeAnalyzer", "TryGetInfo", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::InjectTypeInfo*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public Zenject.InjectTypeInfo TryGetInfo(System.Type type)
    // Offset: 0x19D1AA8
    static Zenject::InjectTypeInfo* TryGetInfo(System::Type* type);
    // static private Zenject.InjectTypeInfo GetInfoInternal(System.Type type)
    // Offset: 0x19D1D28
    static Zenject::InjectTypeInfo* GetInfoInternal(System::Type* type);
    // static public System.Boolean ShouldSkipTypeAnalysis(System.Type type)
    // Offset: 0x19D1FB8
    static bool ShouldSkipTypeAnalysis(System::Type* type);
    // static private System.Boolean IsStaticType(System.Type type)
    // Offset: 0x19D25A8
    static bool IsStaticType(System::Type* type);
    // static private Zenject.InjectTypeInfo CreateTypeInfoFromReflection(System.Type type)
    // Offset: 0x19D235C
    static Zenject::InjectTypeInfo* CreateTypeInfoFromReflection(System::Type* type);
    // static private System.Void .cctor()
    // Offset: 0x19D2650
    static void _cctor();
  }; // Zenject.TypeAnalyzer
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TypeAnalyzer*, "Zenject", "TypeAnalyzer");
#pragma pack(pop)
