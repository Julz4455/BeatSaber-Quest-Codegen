// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Playables.PlayState
#include "UnityEngine/Playables/PlayState.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.Playables.PlayableTraversalMode
#include "UnityEngine/Playables/PlayableTraversalMode.hpp"
// Including type: UnityEngine.Playables.DirectorWrapMode
#include "UnityEngine/Playables/DirectorWrapMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: IPlayable because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Playables.PlayableExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class PlayableExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PlayableExtensions
    PlayableExtensions() noexcept {}
    // static public System.Boolean IsValid(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static bool IsValid(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("IsValid");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "IsValid", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public UnityEngine.Playables.PlayableGraph GetGraph(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::PlayableGraph GetGraph(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetGraph");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetGraph", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::PlayableGraph, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public UnityEngine.Playables.PlayState GetPlayState(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::PlayState GetPlayState(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetPlayState");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetPlayState", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::PlayState, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public System.Void Play(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void Play(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("Play");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "Play", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public System.Void Pause(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void Pause(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("Pause");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "Pause", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public System.Void SetSpeed(U playable, System.Double value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetSpeed(U playable, double value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetSpeed");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetSpeed", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, value);
    }
    // static public System.Void SetDuration(U playable, System.Double value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetDuration(U playable, double value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetDuration");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetDuration", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, value);
    }
    // static public System.Double GetDuration(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static double GetDuration(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetDuration");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetDuration", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<double, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public System.Void SetTime(U playable, System.Double value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetTime(U playable, double value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetTime");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetTime", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, value);
    }
    // static public System.Double GetTime(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static double GetTime(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetTime");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetTime", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<double, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public System.Double GetPreviousTime(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static double GetPreviousTime(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetPreviousTime");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetPreviousTime", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<double, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public System.Boolean IsDone(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static bool IsDone(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("IsDone");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "IsDone", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public System.Void SetPropagateSetTime(U playable, System.Boolean value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetPropagateSetTime(U playable, bool value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetPropagateSetTime");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetPropagateSetTime", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, value);
    }
    // static public System.Void SetInputCount(U playable, System.Int32 value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetInputCount(U playable, int value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetInputCount");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetInputCount", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, value);
    }
    // static public System.Int32 GetInputCount(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static int GetInputCount(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetInputCount");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetInputCount", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static public UnityEngine.Playables.Playable GetInput(U playable, System.Int32 inputPort)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::Playable GetInput(U playable, int inputPort) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetInput");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetInput", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, inputPort)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::Playable, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, inputPort);
    }
    // static public System.Void SetInputWeight(U playable, System.Int32 inputIndex, System.Single weight)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetInputWeight(U playable, int inputIndex, float weight) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetInputWeight");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetInputWeight", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, inputIndex, weight)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, inputIndex, weight);
    }
    // static public System.Void SetInputWeight(U playable, V input, System.Single weight)
    // Offset: 0xFFFFFFFF
    template<class U, class V>
    static void SetInputWeight(U playable, V input, float weight) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<V>> && is_value_type_v<V>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetInputWeight");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetInputWeight", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, ::il2cpp_utils::ExtractTypes(playable, input, weight))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, input, weight);
    }
    // static public System.Single GetInputWeight(U playable, System.Int32 inputIndex)
    // Offset: 0xFFFFFFFF
    template<class U>
    static float GetInputWeight(U playable, int inputIndex) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetInputWeight");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetInputWeight", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, inputIndex)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<float, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, inputIndex);
    }
    // static public System.Void SetTraversalMode(U playable, UnityEngine.Playables.PlayableTraversalMode mode)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetTraversalMode(U playable, UnityEngine::Playables::PlayableTraversalMode mode) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetTraversalMode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetTraversalMode", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, mode)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, mode);
    }
    // static UnityEngine.Playables.DirectorWrapMode GetTimeWrapMode(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("GetTimeWrapMode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "GetTimeWrapMode", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::Playables::DirectorWrapMode, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable);
    }
    // static System.Void SetTimeWrapMode(U playable, UnityEngine.Playables.DirectorWrapMode value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetTimeWrapMode(U playable, UnityEngine::Playables::DirectorWrapMode value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Playables").WithContext("PlayableExtensions").WithContext("SetTimeWrapMode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.Playables", "PlayableExtensions", "SetTimeWrapMode", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::il2cpp_utils::ExtractTypes(playable, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, playable, value);
    }
  }; // UnityEngine.Playables.PlayableExtensions
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableExtensions*, "UnityEngine.Playables", "PlayableExtensions");
#pragma pack(pop)
