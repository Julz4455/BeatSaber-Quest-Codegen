// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Including type: System.Diagnostics.Tracing.EventProvider
#include "System/Diagnostics/Tracing/EventProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ControllerCommand
  struct ControllerCommand;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x68
  // Autogenerated type: System.Diagnostics.Tracing.EventSource/OverideEventProvider
  // [] Offset: FFFFFFFF
  class EventSource::OverideEventProvider : public System::Diagnostics::Tracing::EventProvider {
    public:
    // Writing base type padding for base size: 0x5D to desired offset: 0x60
    char ___base_padding[0x3] = {};
    // private System.Diagnostics.Tracing.EventSource m_eventSource
    // Size: 0x8
    // Offset: 0x60
    System::Diagnostics::Tracing::EventSource* m_eventSource;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventSource*) == 0x8);
    // Creating value type constructor for type: OverideEventProvider
    OverideEventProvider(System::Diagnostics::Tracing::EventSource* m_eventSource_ = {}) noexcept : m_eventSource{m_eventSource_} {}
    // Creating conversion operator: operator System::Diagnostics::Tracing::EventSource*
    constexpr operator System::Diagnostics::Tracing::EventSource*() const noexcept {
      return m_eventSource;
    }
    // public System.Void .ctor(System.Diagnostics.Tracing.EventSource eventSource)
    // Offset: 0x12D1858
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventSource::OverideEventProvider* New_ctor(System::Diagnostics::Tracing::EventSource* eventSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Diagnostics::Tracing").WithContext("OverideEventProvider").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventSource::OverideEventProvider*, creationType>(eventSource)));
    }
    // protected override System.Void OnControllerCommand(System.Diagnostics.Tracing.ControllerCommand command, System.Collections.Generic.IDictionary`2<System.String,System.String> arguments, System.Int32 perEventSourceSessionId, System.Int32 etwSessionId)
    // Offset: 0x12D8424
    // Implemented from: System.Diagnostics.Tracing.EventProvider
    // Base method: System.Void EventProvider::OnControllerCommand(System.Diagnostics.Tracing.ControllerCommand command, System.Collections.Generic.IDictionary`2<System.String,System.String> arguments, System.Int32 perEventSourceSessionId, System.Int32 etwSessionId)
    void OnControllerCommand(System::Diagnostics::Tracing::ControllerCommand command, System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppString*>* arguments, int perEventSourceSessionId, int etwSessionId);
  }; // System.Diagnostics.Tracing.EventSource/OverideEventProvider
  static check_size<sizeof(EventSource::OverideEventProvider), 96 + sizeof(System::Diagnostics::Tracing::EventSource*)> __System_Diagnostics_Tracing_EventSource_OverideEventProviderSizeCheck;
  static_assert(sizeof(EventSource::OverideEventProvider) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSource::OverideEventProvider*, "System.Diagnostics.Tracing", "EventSource/OverideEventProvider");
#pragma pack(pop)
