// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.RuntimeFieldInfo
#include "System/Reflection/RuntimeFieldInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypedReference
  struct TypedReference;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  // Autogenerated type: System.Reflection.RtFieldInfo
  // [] Offset: FFFFFFFF
  class RtFieldInfo : public System::Reflection::RuntimeFieldInfo {
    public:
    // Creating value type constructor for type: RtFieldInfo
    RtFieldInfo() noexcept {}
    // System.Object UnsafeGetValue(System.Object obj)
    // Offset: 0x15D04C8
    ::Il2CppObject* UnsafeGetValue(::Il2CppObject* obj);
    // System.Void CheckConsistency(System.Object target)
    // Offset: 0x15D04CC
    void CheckConsistency(::Il2CppObject* target);
    // System.Void UnsafeSetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x15D0684
    void UnsafeSetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public override System.Void SetValueDirect(System.TypedReference obj, System.Object value)
    // Offset: 0x15D06EC
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValueDirect(System.TypedReference obj, System.Object value)
    void SetValueDirect(System::TypedReference obj, ::Il2CppObject* value);
    // protected System.Void .ctor()
    // Offset: 0x15CC760
    // Implemented from: System.Reflection.RuntimeFieldInfo
    // Base method: System.Void RuntimeFieldInfo::.ctor()
    // Base method: System.Void FieldInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RtFieldInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Reflection").WithContext("RtFieldInfo").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RtFieldInfo*, creationType>()));
    }
  }; // System.Reflection.RtFieldInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RtFieldInfo*, "System.Reflection", "RtFieldInfo");
#pragma pack(pop)
