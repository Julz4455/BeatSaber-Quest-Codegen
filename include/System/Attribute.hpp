// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Attribute
  class Attribute : public ::Il2CppObject {
    public:
    // static private System.Attribute[] InternalGetCustomAttributes(System.Reflection.PropertyInfo element, System.Type type, System.Boolean inherit)
    // Offset: 0x15C9A14
    static ::Array<System::Attribute*>* InternalGetCustomAttributes(System::Reflection::PropertyInfo* element, System::Type* type, bool inherit);
    // static private System.Attribute[] InternalGetCustomAttributes(System.Reflection.EventInfo element, System.Type type, System.Boolean inherit)
    // Offset: 0x15C9AC4
    static ::Array<System::Attribute*>* InternalGetCustomAttributes(System::Reflection::EventInfo* element, System::Type* type, bool inherit);
    // static private System.Attribute[] InternalParamGetCustomAttributes(System.Reflection.ParameterInfo parameter, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15C9B74
    static ::Array<System::Attribute*>* InternalParamGetCustomAttributes(System::Reflection::ParameterInfo* parameter, System::Type* attributeType, bool inherit);
    // static private System.Boolean InternalIsDefined(System.Reflection.PropertyInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15C9F58
    static bool InternalIsDefined(System::Reflection::PropertyInfo* element, System::Type* attributeType, bool inherit);
    // static private System.Boolean InternalIsDefined(System.Reflection.EventInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15C9FD8
    static bool InternalIsDefined(System::Reflection::EventInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.MemberInfo element, System.Type type, System.Boolean inherit)
    // Offset: 0x15CA058
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::MemberInfo* element, System::Type* type, bool inherit);
    // static public System.Boolean IsDefined(System.Reflection.MemberInfo element, System.Type attributeType)
    // Offset: 0x15CA320
    static bool IsDefined(System::Reflection::MemberInfo* element, System::Type* attributeType);
    // static public System.Boolean IsDefined(System.Reflection.MemberInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15CA328
    static bool IsDefined(System::Reflection::MemberInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute GetCustomAttribute(System.Reflection.MemberInfo element, System.Type attributeType)
    // Offset: 0x15CA5E0
    static System::Attribute* GetCustomAttribute(System::Reflection::MemberInfo* element, System::Type* attributeType);
    // static public System.Attribute GetCustomAttribute(System.Reflection.MemberInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15CA5E8
    static System::Attribute* GetCustomAttribute(System::Reflection::MemberInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.ParameterInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15CA6B8
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::ParameterInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x15CA954
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public System.Attribute[] GetCustomAttributes(System.Reflection.Assembly element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15CA95C
    static ::Array<System::Attribute*>* GetCustomAttributes(System::Reflection::Assembly* element, System::Type* attributeType, bool inherit);
    // static public System.Attribute GetCustomAttribute(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x15CAB74
    static System::Attribute* GetCustomAttribute(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public System.Attribute GetCustomAttribute(System.Reflection.Assembly element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x15CAB7C
    static System::Attribute* GetCustomAttribute(System::Reflection::Assembly* element, System::Type* attributeType, bool inherit);
    // static private System.Boolean AreFieldValuesEqual(System.Object thisValue, System.Object thatValue)
    // Offset: 0x15CAE9C
    static bool AreFieldValuesEqual(::Il2CppObject* thisValue, ::Il2CppObject* thatValue);
    // protected System.Void .ctor()
    // Offset: 0x15CAC4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Attribute* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15CAC54
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15CB064
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Attribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Attribute*, "System", "Attribute");
#pragma pack(pop)
