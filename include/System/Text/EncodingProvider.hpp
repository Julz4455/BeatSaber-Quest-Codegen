// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
  // Forward declaring type: DecoderFallback
  class DecoderFallback;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  // Autogenerated type: System.Text.EncodingProvider
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37F64
  class EncodingProvider : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EncodingProvider
    EncodingProvider() noexcept {}
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // Get static field: static private System.Text.EncodingProvider[] s_providers
    static ::Array<System::Text::EncodingProvider*>* _get_s_providers();
    // Set static field: static private System.Text.EncodingProvider[] s_providers
    static void _set_s_providers(::Array<System::Text::EncodingProvider*>* value);
    // public System.Text.Encoding GetEncoding(System.String name)
    // Offset: 0xFFFFFFFF
    System::Text::Encoding* GetEncoding(::Il2CppString* name);
    // public System.Text.Encoding GetEncoding(System.Int32 codepage)
    // Offset: 0xFFFFFFFF
    System::Text::Encoding* GetEncoding(int codepage);
    // public System.Text.Encoding GetEncoding(System.Int32 codepage, System.Text.EncoderFallback encoderFallback, System.Text.DecoderFallback decoderFallback)
    // Offset: 0x15A47C4
    System::Text::Encoding* GetEncoding(int codepage, System::Text::EncoderFallback* encoderFallback, System::Text::DecoderFallback* decoderFallback);
    // static System.Text.Encoding GetEncodingFromProvider(System.Int32 codepage)
    // Offset: 0x159F854
    static System::Text::Encoding* GetEncodingFromProvider(int codepage);
    // static System.Text.Encoding GetEncodingFromProvider(System.String encodingName)
    // Offset: 0x15A08D8
    static System::Text::Encoding* GetEncodingFromProvider(::Il2CppString* encodingName);
    // static System.Text.Encoding GetEncodingFromProvider(System.Int32 codepage, System.Text.EncoderFallback enc, System.Text.DecoderFallback dec)
    // Offset: 0x15A0538
    static System::Text::Encoding* GetEncodingFromProvider(int codepage, System::Text::EncoderFallback* enc, System::Text::DecoderFallback* dec);
    // static private System.Void .cctor()
    // Offset: 0x15A48C8
    static void _cctor();
  }; // System.Text.EncodingProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncodingProvider*, "System.Text", "EncodingProvider");
#pragma pack(pop)
