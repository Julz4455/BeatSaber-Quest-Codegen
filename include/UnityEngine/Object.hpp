// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HideFlags
  struct HideFlags;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Object
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBF5F8
  // [NativeHeaderAttribute] Offset: CBF5F8
  // [RequiredByNativeCodeAttribute] Offset: CBF5F8
  // [NativeHeaderAttribute] Offset: CBF5F8
  class Object : public ::Il2CppObject {
    public:
    // private System.IntPtr m_CachedPtr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_CachedPtr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: Object
    Object(System::IntPtr m_CachedPtr_ = {}) noexcept : m_CachedPtr{m_CachedPtr_} {}
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_CachedPtr;
    }
    // Get static field: static System.Int32 OffsetOfInstanceIDInCPlusPlusObject
    static int _get_OffsetOfInstanceIDInCPlusPlusObject();
    // Set static field: static System.Int32 OffsetOfInstanceIDInCPlusPlusObject
    static void _set_OffsetOfInstanceIDInCPlusPlusObject(int value);
    // static field const value: static private System.String objectIsNullMessage
    static constexpr const char* objectIsNullMessage = "The Object you want to instantiate is null.";
    // Get static field: static private System.String objectIsNullMessage
    static ::Il2CppString* _get_objectIsNullMessage();
    // Set static field: static private System.String objectIsNullMessage
    static void _set_objectIsNullMessage(::Il2CppString* value);
    // static field const value: static private System.String cloneDestroyedMessage
    static constexpr const char* cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake.";
    // Get static field: static private System.String cloneDestroyedMessage
    static ::Il2CppString* _get_cloneDestroyedMessage();
    // Set static field: static private System.String cloneDestroyedMessage
    static void _set_cloneDestroyedMessage(::Il2CppString* value);
    // public System.Int32 GetInstanceID()
    // Offset: 0x1B35E30
    int GetInstanceID();
    // static private System.Boolean CompareBaseObjects(UnityEngine.Object lhs, UnityEngine.Object rhs)
    // Offset: 0x1B360B8
    static bool CompareBaseObjects(UnityEngine::Object* lhs, UnityEngine::Object* rhs);
    // static private System.Boolean IsNativeObjectAlive(UnityEngine.Object o)
    // Offset: 0x1B361F4
    static bool IsNativeObjectAlive(UnityEngine::Object* o);
    // private System.IntPtr GetCachedPtr()
    // Offset: 0x1B36248
    System::IntPtr GetCachedPtr();
    // public System.String get_name()
    // Offset: 0x1B31FA8
    ::Il2CppString* get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0x1B36290
    void set_name(::Il2CppString* value);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x1B36374
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0x1B36640
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original)
    // Offset: 0x1B368AC
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original);
    // static public UnityEngine.Object Instantiate(UnityEngine.Object original, UnityEngine.Transform parent, System.Boolean instantiateInWorldSpace)
    // Offset: 0x1B369D8
    static UnityEngine::Object* Instantiate(UnityEngine::Object* original, UnityEngine::Transform* parent, bool instantiateInWorldSpace);
    // static public T Instantiate(T original)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(original)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, original);
    }
    // static public T Instantiate(T original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(original, position, rotation)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, original, position, rotation);
    }
    // static public T Instantiate(T original, UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Transform parent)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Vector3 position, UnityEngine::Quaternion rotation, UnityEngine::Transform* parent) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(original, position, rotation, parent)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, original, position, rotation, parent);
    }
    // static public T Instantiate(T original, UnityEngine.Transform parent)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Transform* parent) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(original, parent)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, original, parent);
    }
    // static public T Instantiate(T original, UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Instantiate(T original, UnityEngine::Transform* parent, bool worldPositionStays) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::Instantiate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Object", "Instantiate", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(original, parent, worldPositionStays)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, original, parent, worldPositionStays);
    }
    // static public System.Void Destroy(UnityEngine.Object obj, System.Single t)
    // Offset: 0x1B36B88
    static void Destroy(UnityEngine::Object* obj, float t);
    // static public System.Void Destroy(UnityEngine.Object obj)
    // Offset: 0x1B36BD8
    static void Destroy(UnityEngine::Object* obj);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj, System.Boolean allowDestroyingAssets)
    // Offset: 0x1B36C60
    static void DestroyImmediate(UnityEngine::Object* obj, bool allowDestroyingAssets);
    // static public System.Void DestroyImmediate(UnityEngine.Object obj)
    // Offset: 0x1B36CB0
    static void DestroyImmediate(UnityEngine::Object* obj);
    // static public UnityEngine.Object[] FindObjectsOfType(System.Type type)
    // Offset: 0x1B36D38
    static ::Array<UnityEngine::Object*>* FindObjectsOfType(System::Type* type);
    // static public System.Void DontDestroyOnLoad(UnityEngine.Object target)
    // Offset: 0x1B36D78
    static void DontDestroyOnLoad(UnityEngine::Object* target);
    // public UnityEngine.HideFlags get_hideFlags()
    // Offset: 0x1B36DB8
    UnityEngine::HideFlags get_hideFlags();
    // public System.Void set_hideFlags(UnityEngine.HideFlags value)
    // Offset: 0x1B34198
    void set_hideFlags(UnityEngine::HideFlags value);
    // static public T[] FindObjectsOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* FindObjectsOfType() {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::FindObjectsOfType");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Object", "FindObjectsOfType", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public T FindObjectOfType()
    // Offset: 0xFFFFFFFF
    template<class T>
    static T FindObjectOfType() {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::FindObjectOfType");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Object", "FindObjectOfType", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static private System.Void CheckNullArgument(System.Object arg, System.String message)
    // Offset: 0x1B36514
    static void CheckNullArgument(::Il2CppObject* arg, ::Il2CppString* message);
    // static public UnityEngine.Object FindObjectOfType(System.Type type)
    // Offset: 0x1B36DF8
    static UnityEngine::Object* FindObjectOfType(System::Type* type);
    // static private System.Int32 GetOffsetOfInstanceIDInCPlusPlusObject()
    // Offset: 0x1B35F68
    static int GetOffsetOfInstanceIDInCPlusPlusObject();
    // static private UnityEngine.Object Internal_CloneSingle(UnityEngine.Object data)
    // Offset: 0x1B36998
    static UnityEngine::Object* Internal_CloneSingle(UnityEngine::Object* data);
    // static private UnityEngine.Object Internal_CloneSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0x1B36B30
    static UnityEngine::Object* Internal_CloneSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, bool worldPositionStays);
    // static private UnityEngine.Object Internal_InstantiateSingle(UnityEngine.Object data, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x1B36598
    static UnityEngine::Object* Internal_InstantiateSingle(UnityEngine::Object* data, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // static private UnityEngine.Object Internal_InstantiateSingleWithParent(UnityEngine.Object data, UnityEngine.Transform parent, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot)
    // Offset: 0x1B367F4
    static UnityEngine::Object* Internal_InstantiateSingleWithParent(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3 pos, UnityEngine::Quaternion rot);
    // static private System.String ToString(UnityEngine.Object obj)
    // Offset: 0x1B36F20
    static ::Il2CppString* ToString(UnityEngine::Object* obj);
    // static private System.String GetName(UnityEngine.Object obj)
    // Offset: 0x1B36250
    static ::Il2CppString* GetName(UnityEngine::Object* obj);
    // static private System.Void SetName(UnityEngine.Object obj, System.String name)
    // Offset: 0x1B36324
    static void SetName(UnityEngine::Object* obj, ::Il2CppString* name);
    // static UnityEngine.Object FindObjectFromInstanceID(System.Int32 instanceID)
    // Offset: 0x1B370A0
    static UnityEngine::Object* FindObjectFromInstanceID(int instanceID);
    // static private System.Void .cctor()
    // Offset: 0x1B370E0
    static void _cctor();
    // static private UnityEngine.Object Internal_InstantiateSingle_Injected(UnityEngine.Object data, ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion rot)
    // Offset: 0x1B36FE0
    static UnityEngine::Object* Internal_InstantiateSingle_Injected(UnityEngine::Object* data, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // static private UnityEngine.Object Internal_InstantiateSingleWithParent_Injected(UnityEngine.Object data, UnityEngine.Transform parent, ref UnityEngine.Vector3 pos, ref UnityEngine.Quaternion rot)
    // Offset: 0x1B37038
    static UnityEngine::Object* Internal_InstantiateSingleWithParent_Injected(UnityEngine::Object* data, UnityEngine::Transform* parent, UnityEngine::Vector3& pos, UnityEngine::Quaternion& rot);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B35F9C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1B35FA4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0x1B36E9C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x1B305C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Object* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Object::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Object*, creationType>()));
    }
  }; // UnityEngine.Object
  #pragma pack(pop)
  static check_size<sizeof(Object), 16 + sizeof(System::IntPtr)> __UnityEngine_ObjectSizeCheck;
  static_assert(sizeof(Object) == 0x18);
  // static public System.Boolean op_Equality(UnityEngine.Object x, UnityEngine.Object y)
  // Offset: 0x1B33F3C
  bool operator ==(UnityEngine::Object* x, UnityEngine::Object& y);
  // static public System.Boolean op_Inequality(UnityEngine.Object x, UnityEngine.Object y)
  // Offset: 0x1B36F60
  bool operator !=(UnityEngine::Object* x, UnityEngine::Object& y);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Object*, "UnityEngine", "Object");
