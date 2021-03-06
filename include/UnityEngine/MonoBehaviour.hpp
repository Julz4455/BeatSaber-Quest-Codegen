// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MonoBehaviour
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBF36C
  // [NativeHeaderAttribute] Offset: CBF36C
  // [ExtensionOfNativeClassAttribute] Offset: CBF36C
  // [RequiredByNativeCodeAttribute] Offset: CBF36C
  class MonoBehaviour : public UnityEngine::Behaviour {
    public:
    // Creating value type constructor for type: MonoBehaviour
    MonoBehaviour() noexcept {}
    // public System.Boolean IsInvoking()
    // Offset: 0x1B332DC
    bool IsInvoking();
    // public System.Void CancelInvoke()
    // Offset: 0x1B3335C
    void CancelInvoke();
    // public System.Void Invoke(System.String methodName, System.Single time)
    // Offset: 0x1B333DC
    void Invoke(::Il2CppString* methodName, float time);
    // public System.Void InvokeRepeating(System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1B334A8
    void InvokeRepeating(::Il2CppString* methodName, float time, float repeatRate);
    // public System.Void CancelInvoke(System.String methodName)
    // Offset: 0x1B33588
    void CancelInvoke(::Il2CppString* methodName);
    // public System.Boolean IsInvoking(System.String methodName)
    // Offset: 0x1B33628
    bool IsInvoking(::Il2CppString* methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName)
    // Offset: 0x1B336C8
    UnityEngine::Coroutine* StartCoroutine(::Il2CppString* methodName);
    // public UnityEngine.Coroutine StartCoroutine(System.String methodName, System.Object value)
    // Offset: 0x1B336D0
    UnityEngine::Coroutine* StartCoroutine(::Il2CppString* methodName, ::Il2CppObject* value);
    // public UnityEngine.Coroutine StartCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1B33888
    UnityEngine::Coroutine* StartCoroutine(System::Collections::IEnumerator* routine);
    // public UnityEngine.Coroutine StartCoroutine_Auto(System.Collections.IEnumerator routine)
    // Offset: 0x1B339E4
    UnityEngine::Coroutine* StartCoroutine_Auto(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(System.Collections.IEnumerator routine)
    // Offset: 0x1B339E8
    void StopCoroutine(System::Collections::IEnumerator* routine);
    // public System.Void StopCoroutine(UnityEngine.Coroutine routine)
    // Offset: 0x1B33B44
    void StopCoroutine(UnityEngine::Coroutine* routine);
    // public System.Void StopCoroutine(System.String methodName)
    // Offset: 0x1B33CA0
    void StopCoroutine(::Il2CppString* methodName);
    // public System.Void StopAllCoroutines()
    // Offset: 0x1B33CF0
    void StopAllCoroutines();
    // public System.Boolean get_useGUILayout()
    // Offset: 0x1B33D30
    bool get_useGUILayout();
    // public System.Void set_useGUILayout(System.Boolean value)
    // Offset: 0x1B33D70
    void set_useGUILayout(bool value);
    // static public System.Void print(System.Object message)
    // Offset: 0x1B33DC0
    static void print(::Il2CppObject* message);
    // static private System.Void Internal_CancelInvokeAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1B3339C
    static void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self);
    // static private System.Boolean Internal_IsInvokingAll(UnityEngine.MonoBehaviour self)
    // Offset: 0x1B3331C
    static bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self);
    // static private System.Void InvokeDelayed(UnityEngine.MonoBehaviour self, System.String methodName, System.Single time, System.Single repeatRate)
    // Offset: 0x1B33440
    static void InvokeDelayed(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName, float time, float repeatRate);
    // static private System.Void CancelInvoke(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1B335D8
    static void CancelInvoke(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName);
    // static private System.Boolean IsInvoking(UnityEngine.MonoBehaviour self, System.String methodName)
    // Offset: 0x1B33678
    static bool IsInvoking(UnityEngine::MonoBehaviour* self, ::Il2CppString* methodName);
    // static private System.Boolean IsObjectMonoBehaviour(UnityEngine.Object obj)
    // Offset: 0x1B337F0
    static bool IsObjectMonoBehaviour(UnityEngine::Object* obj);
    // private UnityEngine.Coroutine StartCoroutineManaged(System.String methodName, System.Object value)
    // Offset: 0x1B33830
    UnityEngine::Coroutine* StartCoroutineManaged(::Il2CppString* methodName, ::Il2CppObject* value);
    // private UnityEngine.Coroutine StartCoroutineManaged2(System.Collections.IEnumerator enumerator)
    // Offset: 0x1B33994
    UnityEngine::Coroutine* StartCoroutineManaged2(System::Collections::IEnumerator* enumerator);
    // private System.Void StopCoroutineManaged(UnityEngine.Coroutine routine)
    // Offset: 0x1B33C50
    void StopCoroutineManaged(UnityEngine::Coroutine* routine);
    // private System.Void StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator routine)
    // Offset: 0x1B33AF4
    void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator* routine);
    // System.String GetScriptClassName()
    // Offset: 0x1B33E28
    ::Il2CppString* GetScriptClassName();
    // public System.Void .ctor()
    // Offset: 0x1B33E68
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::MonoBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoBehaviour*, creationType>()));
    }
  }; // UnityEngine.MonoBehaviour
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MonoBehaviour*, "UnityEngine", "MonoBehaviour");
