// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.ManifestBuilder
#include "System/Diagnostics/Tracing/ManifestBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CAE774
  class ManifestBuilder::$$c__DisplayClass22_0 : public ::Il2CppObject {
    public:
    // public System.Text.StringBuilder stringBuilder
    // Size: 0x8
    // Offset: 0x10
    System::Text::StringBuilder* stringBuilder;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // public System.String eventMessage
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* eventMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 writtenSoFar
    // Size: 0x4
    // Offset: 0x20
    int writtenSoFar;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass22_0
    $$c__DisplayClass22_0(System::Text::StringBuilder* stringBuilder_ = {}, ::Il2CppString* eventMessage_ = {}, int writtenSoFar_ = {}) noexcept : stringBuilder{stringBuilder_}, eventMessage{eventMessage_}, writtenSoFar{writtenSoFar_} {}
    // public System.Void .ctor()
    // Offset: 0x12A5B00
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestBuilder::$$c__DisplayClass22_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestBuilder::$$c__DisplayClass22_0*, creationType>()));
    }
  }; // System.Diagnostics.Tracing.ManifestBuilder/<>c__DisplayClass22_0
  #pragma pack(pop)
  static check_size<sizeof(ManifestBuilder::$$c__DisplayClass22_0), 32 + sizeof(int)> __System_Diagnostics_Tracing_ManifestBuilder_$$c__DisplayClass22_0SizeCheck;
  static_assert(sizeof(ManifestBuilder::$$c__DisplayClass22_0) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0*, "System.Diagnostics.Tracing", "ManifestBuilder/<>c__DisplayClass22_0");
