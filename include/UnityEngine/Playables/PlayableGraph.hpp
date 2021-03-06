// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: IPlayable
  class IPlayable;
  // Forward declaring type: PlayableHandle
  struct PlayableHandle;
  // Forward declaring type: PlayableOutputHandle
  struct PlayableOutputHandle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Playables.PlayableGraph
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CC0F9C
  // [NativeHeaderAttribute] Offset: CC0F9C
  // [NativeHeaderAttribute] Offset: CC0F9C
  // [UsedByNativeCodeAttribute] Offset: CC0F9C
  // [NativeHeaderAttribute] Offset: CC0F9C
  struct PlayableGraph/*, public System::ValueType*/ {
    public:
    // System.IntPtr m_Handle
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr m_Handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // System.UInt32 m_Version
    // Size: 0x4
    // Offset: 0x8
    uint m_Version;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: PlayableGraph
    constexpr PlayableGraph(System::IntPtr m_Handle_ = {}, uint m_Version_ = {}) noexcept : m_Handle{m_Handle_}, m_Version{m_Version_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public UnityEngine.Playables.Playable GetRootPlayable(System.Int32 index)
    // Offset: 0xE17E14
    UnityEngine::Playables::Playable GetRootPlayable(int index);
    // public System.Boolean Connect(U source, System.Int32 sourceOutputPort, V destination, System.Int32 destinationInputPort)
    // Offset: 0xFFFFFFFF
    template<class U, class V>
    bool Connect(U source, int sourceOutputPort, V destination, int destinationInputPort) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<V>> && is_value_type_v<V>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableGraph::Connect");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Connect", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, ::il2cpp_utils::ExtractTypes(source, sourceOutputPort, destination, destinationInputPort))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___generic__method, source, sourceOutputPort, destination, destinationInputPort);
    }
    // public System.Boolean IsValid()
    // Offset: 0xE17E1C
    bool IsValid();
    // public System.Boolean IsPlaying()
    // Offset: 0xE17E5C
    bool IsPlaying();
    // public UnityEngine.IExposedPropertyTable GetResolver()
    // Offset: 0xE17E9C
    UnityEngine::IExposedPropertyTable* GetResolver();
    // public System.Int32 GetPlayableCount()
    // Offset: 0xE17EDC
    int GetPlayableCount();
    // public System.Int32 GetRootPlayableCount()
    // Offset: 0xE17F1C
    int GetRootPlayableCount();
    // UnityEngine.Playables.PlayableHandle CreatePlayableHandle()
    // Offset: 0xE17F5C
    UnityEngine::Playables::PlayableHandle CreatePlayableHandle();
    // System.Boolean CreateScriptOutputInternal(System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0xE17F64
    bool CreateScriptOutputInternal(::Il2CppString* name, UnityEngine::Playables::PlayableOutputHandle& handle);
    // UnityEngine.Playables.PlayableHandle GetRootPlayableInternal(System.Int32 index)
    // Offset: 0xE17FBC
    UnityEngine::Playables::PlayableHandle GetRootPlayableInternal(int index);
    // private System.Boolean ConnectInternal(UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0xE17FC4
    bool ConnectInternal(UnityEngine::Playables::PlayableHandle source, int sourceOutputPort, UnityEngine::Playables::PlayableHandle destination, int destinationInputPort);
    // static private System.Boolean IsValid_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1B38638
    static bool IsValid_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Boolean IsPlaying_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1B386B8
    static bool IsPlaying_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private UnityEngine.IExposedPropertyTable GetResolver_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1B38738
    static UnityEngine::IExposedPropertyTable* GetResolver_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Int32 GetPlayableCount_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1B387B8
    static int GetPlayableCount_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Int32 GetRootPlayableCount_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self)
    // Offset: 0x1B38838
    static int GetRootPlayableCount_Injected(UnityEngine::Playables::PlayableGraph& _unity_self);
    // static private System.Void CreatePlayableHandle_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1B38878
    static void CreatePlayableHandle_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Boolean CreateScriptOutputInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, System.String name, out UnityEngine.Playables.PlayableOutputHandle handle)
    // Offset: 0x1B38920
    static bool CreateScriptOutputInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, ::Il2CppString* name, UnityEngine::Playables::PlayableOutputHandle& handle);
    // static private System.Void GetRootPlayableInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, System.Int32 index, out UnityEngine.Playables.PlayableHandle ret)
    // Offset: 0x1B38978
    static void GetRootPlayableInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, int index, UnityEngine::Playables::PlayableHandle& ret);
    // static private System.Boolean ConnectInternal_Injected(ref UnityEngine.Playables.PlayableGraph _unity_self, ref UnityEngine.Playables.PlayableHandle source, System.Int32 sourceOutputPort, ref UnityEngine.Playables.PlayableHandle destination, System.Int32 destinationInputPort)
    // Offset: 0x1B38A48
    static bool ConnectInternal_Injected(UnityEngine::Playables::PlayableGraph& _unity_self, UnityEngine::Playables::PlayableHandle& source, int sourceOutputPort, UnityEngine::Playables::PlayableHandle& destination, int destinationInputPort);
  }; // UnityEngine.Playables.PlayableGraph
  #pragma pack(pop)
  static check_size<sizeof(PlayableGraph), 8 + sizeof(uint)> __UnityEngine_Playables_PlayableGraphSizeCheck;
  static_assert(sizeof(PlayableGraph) == 0xC);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableGraph, "UnityEngine.Playables", "PlayableGraph");
