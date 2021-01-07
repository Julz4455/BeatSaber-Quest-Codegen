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
  // Forward declaring type: StringBuilder
  class StringBuilder;
  // Forward declaring type: NormalizationCheck
  struct NormalizationCheck;
  // Forward declaring type: NormalizationForm
  struct NormalizationForm;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  // Autogenerated type: System.Text.Normalization
  // [] Offset: FFFFFFFF
  class Normalization : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Normalization
    Normalization() noexcept {}
    // Get static field: static private System.Byte* props
    static uint8_t* _get_props();
    // Set static field: static private System.Byte* props
    static void _set_props(uint8_t* value);
    // Get static field: static private System.Int32* mappedChars
    static int* _get_mappedChars();
    // Set static field: static private System.Int32* mappedChars
    static void _set_mappedChars(int* value);
    // Get static field: static private System.Int16* charMapIndex
    static int16_t* _get_charMapIndex();
    // Set static field: static private System.Int16* charMapIndex
    static void _set_charMapIndex(int16_t* value);
    // Get static field: static private System.Int16* helperIndex
    static int16_t* _get_helperIndex();
    // Set static field: static private System.Int16* helperIndex
    static void _set_helperIndex(int16_t* value);
    // Get static field: static private System.UInt16* mapIdxToComposite
    static uint16_t* _get_mapIdxToComposite();
    // Set static field: static private System.UInt16* mapIdxToComposite
    static void _set_mapIdxToComposite(uint16_t* value);
    // Get static field: static private System.Byte* combiningClass
    static uint8_t* _get_combiningClass();
    // Set static field: static private System.Byte* combiningClass
    static void _set_combiningClass(uint8_t* value);
    // Get static field: static private System.Object forLock
    static ::Il2CppObject* _get_forLock();
    // Set static field: static private System.Object forLock
    static void _set_forLock(::Il2CppObject* value);
    // Get static field: static public readonly System.Boolean isReady
    static bool _get_isReady();
    // Set static field: static public readonly System.Boolean isReady
    static void _set_isReady(bool value);
    // static private System.UInt32 PropValue(System.Int32 cp)
    // Offset: 0x15A5F90
    static uint PropValue(int cp);
    // static private System.Int32 CharMapIdx(System.Int32 cp)
    // Offset: 0x15A6030
    static int CharMapIdx(int cp);
    // static private System.Byte GetCombiningClass(System.Int32 c)
    // Offset: 0x15A60D0
    static uint8_t GetCombiningClass(int c);
    // static private System.Int32 GetPrimaryCompositeFromMapIndex(System.Int32 src)
    // Offset: 0x15A618C
    static int GetPrimaryCompositeFromMapIndex(int src);
    // static private System.Int32 GetPrimaryCompositeHelperIndex(System.Int32 cp)
    // Offset: 0x15A6248
    static int GetPrimaryCompositeHelperIndex(int cp);
    // static private System.String Compose(System.String source, System.Int32 checkType)
    // Offset: 0x15A6304
    static ::Il2CppString* Compose(::Il2CppString* source, int checkType);
    // static private System.Text.StringBuilder Combine(System.String source, System.Int32 start, System.Int32 checkType)
    // Offset: 0x15A6564
    static System::Text::StringBuilder* Combine(::Il2CppString* source, int start, int checkType);
    // static private System.Void Combine(System.Text.StringBuilder sb, System.Int32 i, System.Int32 checkType)
    // Offset: 0x15A66A4
    static void Combine(System::Text::StringBuilder* sb, int i, int checkType);
    // static private System.Int32 CombineHangul(System.Text.StringBuilder sb, System.String s, System.Int32 current)
    // Offset: 0x15A6934
    static int CombineHangul(System::Text::StringBuilder* sb, ::Il2CppString* s, int current);
    // static private System.Int32 Fetch(System.Text.StringBuilder sb, System.String s, System.Int32 i)
    // Offset: 0x15A6D50
    static int Fetch(System::Text::StringBuilder* sb, ::Il2CppString* s, int i);
    // static private System.Int32 TryComposeWithPreviousStarter(System.Text.StringBuilder sb, System.String s, System.Int32 current)
    // Offset: 0x15A6B00
    static int TryComposeWithPreviousStarter(System::Text::StringBuilder* sb, ::Il2CppString* s, int current);
    // static private System.Int32 TryCompose(System.Int32 i, System.Int32 starter, System.Int32 candidate)
    // Offset: 0x15A7010
    static int TryCompose(int i, int starter, int candidate);
    // static private System.String Decompose(System.String source, System.Int32 checkType)
    // Offset: 0x15A7160
    static ::Il2CppString* Decompose(::Il2CppString* source, int checkType);
    // static private System.Void Decompose(System.String source, ref System.Text.StringBuilder sb, System.Int32 checkType)
    // Offset: 0x15A640C
    static void Decompose(::Il2CppString* source, System::Text::StringBuilder*& sb, int checkType);
    // static private System.Void ReorderCanonical(System.String src, ref System.Text.StringBuilder sb, System.Int32 start)
    // Offset: 0x15A7578
    static void ReorderCanonical(::Il2CppString* src, System::Text::StringBuilder*& sb, int start);
    // static private System.Void DecomposeChar(ref System.Text.StringBuilder sb, ref System.Int32[] buf, System.String s, System.Int32 i, System.Int32 checkType, ref System.Int32 start)
    // Offset: 0x15A71FC
    static void DecomposeChar(System::Text::StringBuilder*& sb, ::Array<int>*& buf, ::Il2CppString* s, int i, int checkType, int& start);
    // static public System.Text.NormalizationCheck QuickCheck(System.Char c, System.Int32 type)
    // Offset: 0x15A67D0
    static System::Text::NormalizationCheck QuickCheck(::Il2CppChar c, int type);
    // static private System.Int32 GetCanonicalHangul(System.Int32 s, System.Int32[] buf, System.Int32 bufIdx)
    // Offset: 0x15A7A04
    static int GetCanonicalHangul(int s, ::Array<int>* buf, int bufIdx);
    // static private System.Int32 GetCanonical(System.Int32 c, System.Int32[] buf, System.Int32 bufIdx, System.Int32 checkType)
    // Offset: 0x15A7804
    static int GetCanonical(int c, ::Array<int>* buf, int bufIdx, int checkType);
    // static public System.String Normalize(System.String source, System.Text.NormalizationForm normalizationForm)
    // Offset: 0x15A7B08
    static ::Il2CppString* Normalize(::Il2CppString* source, System::Text::NormalizationForm normalizationForm);
    // static public System.String Normalize(System.String source, System.Int32 type)
    // Offset: 0x15A7BF4
    static ::Il2CppString* Normalize(::Il2CppString* source, int type);
    // static private System.Void load_normalization_resource(out System.IntPtr props, out System.IntPtr mappedChars, out System.IntPtr charMapIndex, out System.IntPtr helperIndex, out System.IntPtr mapIdxToComposite, out System.IntPtr combiningClass)
    // Offset: 0x15A7CAC
    static void load_normalization_resource(System::IntPtr& props, System::IntPtr& mappedChars, System::IntPtr& charMapIndex, System::IntPtr& helperIndex, System::IntPtr& mapIdxToComposite, System::IntPtr& combiningClass);
    // static private System.Void .cctor()
    // Offset: 0x15A7CB0
    static void _cctor();
  }; // System.Text.Normalization
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::Normalization*, "System.Text", "Normalization");
#pragma pack(pop)
