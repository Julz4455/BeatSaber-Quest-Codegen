// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IAnalyticsModel
  // [] Offset: FFFFFFFF
  class IAnalyticsModel {
    public:
    // Creating value type constructor for type: IAnalyticsModel
    IAnalyticsModel() noexcept {}
    // public System.Boolean get_supportsOpenDataPrivacyPage()
    // Offset: 0xFFFFFFFF
    bool get_supportsOpenDataPrivacyPage();
    // public System.Void OpenDataPrivacyPage()
    // Offset: 0xFFFFFFFF
    void OpenDataPrivacyPage();
    // public System.Void LogEvent(System.String eventType, System.Collections.Generic.Dictionary`2<System.String,System.String> eventData)
    // Offset: 0xFFFFFFFF
    void LogEvent(::Il2CppString* eventType, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* eventData);
  }; // IAnalyticsModel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IAnalyticsModel*, "", "IAnalyticsModel");
