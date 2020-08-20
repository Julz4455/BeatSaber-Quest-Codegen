// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: IPlayableBehaviour
  class IPlayableBehaviour;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ICloneable
  class ICloneable;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.ScriptPlayable`1
  template<typename T>
  struct ScriptPlayable_1 : public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Playables::ScriptPlayable_1<T>> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<T>> || std::is_base_of_v<UnityEngine::Playables::IPlayableBehaviour, std::remove_pointer_t<T>>));
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Autogenerated static field getter
    // Get static field: static private readonly UnityEngine.Playables.ScriptPlayable`1<T> m_NullPlayable
    static UnityEngine::Playables::ScriptPlayable_1<T> _get_m_NullPlayable() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Playables::ScriptPlayable_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "m_NullPlayable"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly UnityEngine.Playables.ScriptPlayable`1<T> m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Playables::ScriptPlayable_1<T> value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "m_NullPlayable", value));
    }
    // Creating value type constructor for type: ScriptPlayable_1
    ScriptPlayable_1(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static public UnityEngine.Playables.ScriptPlayable`1<T> get_Null()
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::ScriptPlayable_1<T> get_Null() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::ScriptPlayable_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "get_Null"));
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<T> Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::ScriptPlayable_1<T> Create(UnityEngine::Playables::PlayableGraph graph, int inputCount) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::ScriptPlayable_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "Create", graph, inputCount));
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<T> Create(UnityEngine.Playables.PlayableGraph graph, T template, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::ScriptPlayable_1<T> Create(UnityEngine::Playables::PlayableGraph graph, T _template, int inputCount) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::ScriptPlayable_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "Create", graph, _template, inputCount));
    }
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, T template, System.Int32 inputCount)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, T _template, int inputCount) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CreateHandle", graph, _template, inputCount));
    }
    // static private System.Object CreateScriptInstance()
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CreateScriptInstance() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CreateScriptInstance"));
    }
    // static private System.Object CloneScriptInstance(UnityEngine.Playables.IPlayableBehaviour source)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CloneScriptInstance(UnityEngine::Playables::IPlayableBehaviour* source) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CloneScriptInstance", source));
    }
    // static private System.Object CloneScriptInstanceFromEngineObject(UnityEngine.Object source)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CloneScriptInstanceFromEngineObject(UnityEngine::Object* source) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CloneScriptInstanceFromEngineObject", source));
    }
    // static private System.Object CloneScriptInstanceFromIClonable(System.ICloneable source)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* CloneScriptInstanceFromIClonable(System::ICloneable* source) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), "CloneScriptInstanceFromIClonable", source));
    }
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xFFFFFFFF
    static ScriptPlayable_1<T>* New_ctor(UnityEngine::Playables::PlayableHandle handle) {
      return (ScriptPlayable_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), handle));
    }
    // public T GetBehaviour()
    // Offset: 0xFFFFFFFF
    T GetBehaviour() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(*this, "GetBehaviour"));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptPlayable_1<T>>::get(), ".cctor"));
    }
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableHandle>(*this, "GetHandle"));
    }
    // public System.Boolean Equals(UnityEngine.Playables.ScriptPlayable`1<T> other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Playables.ScriptPlayable`1<T> other)
    bool Equals(UnityEngine::Playables::ScriptPlayable_1<T> other) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
    }
  }; // UnityEngine.Playables.ScriptPlayable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::Playables::ScriptPlayable_1, "UnityEngine.Playables", "ScriptPlayable`1");
#pragma pack(pop)
