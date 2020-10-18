// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: TailoringInfo
  class TailoringInfo;
  // Forward declaring type: Contraction
  class Contraction;
  // Forward declaring type: Level2Map
  class Level2Map;
  // Forward declaring type: CodePointIndexer
  class CodePointIndexer;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.MSCompatUnicodeTable
  class MSCompatUnicodeTable : public ::Il2CppObject {
    public:
    // Nested type: Mono::Globalization::Unicode::MSCompatUnicodeTable::$$c
    class $$c;
    // Get static field: static public System.Int32 MaxExpansionLength
    static int _get_MaxExpansionLength();
    // Set static field: static public System.Int32 MaxExpansionLength
    static void _set_MaxExpansionLength(int value);
    // Get static field: static private readonly System.Byte* ignorableFlags
    static uint8_t* _get_ignorableFlags();
    // Set static field: static private readonly System.Byte* ignorableFlags
    static void _set_ignorableFlags(uint8_t* value);
    // Get static field: static private readonly System.Byte* categories
    static uint8_t* _get_categories();
    // Set static field: static private readonly System.Byte* categories
    static void _set_categories(uint8_t* value);
    // Get static field: static private readonly System.Byte* level1
    static uint8_t* _get_level1();
    // Set static field: static private readonly System.Byte* level1
    static void _set_level1(uint8_t* value);
    // Get static field: static private readonly System.Byte* level2
    static uint8_t* _get_level2();
    // Set static field: static private readonly System.Byte* level2
    static void _set_level2(uint8_t* value);
    // Get static field: static private readonly System.Byte* level3
    static uint8_t* _get_level3();
    // Set static field: static private readonly System.Byte* level3
    static void _set_level3(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHScategory
    static uint8_t* _get_cjkCHScategory();
    // Set static field: static private System.Byte* cjkCHScategory
    static void _set_cjkCHScategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHTcategory
    static uint8_t* _get_cjkCHTcategory();
    // Set static field: static private System.Byte* cjkCHTcategory
    static void _set_cjkCHTcategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkJAcategory
    static uint8_t* _get_cjkJAcategory();
    // Set static field: static private System.Byte* cjkJAcategory
    static void _set_cjkJAcategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkKOcategory
    static uint8_t* _get_cjkKOcategory();
    // Set static field: static private System.Byte* cjkKOcategory
    static void _set_cjkKOcategory(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHSlv1
    static uint8_t* _get_cjkCHSlv1();
    // Set static field: static private System.Byte* cjkCHSlv1
    static void _set_cjkCHSlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkCHTlv1
    static uint8_t* _get_cjkCHTlv1();
    // Set static field: static private System.Byte* cjkCHTlv1
    static void _set_cjkCHTlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkJAlv1
    static uint8_t* _get_cjkJAlv1();
    // Set static field: static private System.Byte* cjkJAlv1
    static void _set_cjkJAlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkKOlv1
    static uint8_t* _get_cjkKOlv1();
    // Set static field: static private System.Byte* cjkKOlv1
    static void _set_cjkKOlv1(uint8_t* value);
    // Get static field: static private System.Byte* cjkKOlv2
    static uint8_t* _get_cjkKOlv2();
    // Set static field: static private System.Byte* cjkKOlv2
    static void _set_cjkKOlv2(uint8_t* value);
    // Get static field: static private readonly System.Char[] tailoringArr
    static ::Array<::Il2CppChar>* _get_tailoringArr();
    // Set static field: static private readonly System.Char[] tailoringArr
    static void _set_tailoringArr(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly Mono.Globalization.Unicode.TailoringInfo[] tailoringInfos
    static ::Array<Mono::Globalization::Unicode::TailoringInfo*>* _get_tailoringInfos();
    // Set static field: static private readonly Mono.Globalization.Unicode.TailoringInfo[] tailoringInfos
    static void _set_tailoringInfos(::Array<Mono::Globalization::Unicode::TailoringInfo*>* value);
    // Get static field: static private System.Object forLock
    static ::Il2CppObject* _get_forLock();
    // Set static field: static private System.Object forLock
    static void _set_forLock(::Il2CppObject* value);
    // Get static field: static public readonly System.Boolean isReady
    static bool _get_isReady();
    // Set static field: static public readonly System.Boolean isReady
    static void _set_isReady(bool value);
    // static public Mono.Globalization.Unicode.TailoringInfo GetTailoringInfo(System.Int32 lcid)
    // Offset: 0x17D34E0
    static Mono::Globalization::Unicode::TailoringInfo* GetTailoringInfo(int lcid);
    // static public System.Void BuildTailoringTables(System.Globalization.CultureInfo culture, Mono.Globalization.Unicode.TailoringInfo t, ref Mono.Globalization.Unicode.Contraction[] contractions, ref Mono.Globalization.Unicode.Level2Map[] diacriticals)
    // Offset: 0x17D360C
    static void BuildTailoringTables(System::Globalization::CultureInfo* culture, Mono::Globalization::Unicode::TailoringInfo* t, ::Array<Mono::Globalization::Unicode::Contraction*>*& contractions, ::Array<Mono::Globalization::Unicode::Level2Map*>*& diacriticals);
    // static private System.Void SetCJKReferences(System.String name, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref System.Byte* catTable, ref System.Byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref System.Byte* lv2Table)
    // Offset: 0x17D3BEC
    static void SetCJKReferences(::Il2CppString* name, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, uint8_t*& lv2Table);
    // static public System.Byte Category(System.Int32 cp)
    // Offset: 0x17D3EA4
    static uint8_t Category(int cp);
    // static public System.Byte Level1(System.Int32 cp)
    // Offset: 0x17D3F5C
    static uint8_t Level1(int cp);
    // static public System.Byte Level2(System.Int32 cp)
    // Offset: 0x17D4014
    static uint8_t Level2(int cp);
    // static public System.Byte Level3(System.Int32 cp)
    // Offset: 0x17D40CC
    static uint8_t Level3(int cp);
    // static public System.Boolean IsIgnorable(System.Int32 cp, System.Byte flag)
    // Offset: 0x17D4184
    static bool IsIgnorable(int cp, uint8_t flag);
    // static public System.Boolean IsIgnorableNonSpacing(System.Int32 cp)
    // Offset: 0x17D42AC
    static bool IsIgnorableNonSpacing(int cp);
    // static public System.Int32 ToKanaTypeInsensitive(System.Int32 i)
    // Offset: 0x17D4314
    static int ToKanaTypeInsensitive(int i);
    // static public System.Int32 ToWidthCompat(System.Int32 i)
    // Offset: 0x17D4334
    static int ToWidthCompat(int i);
    // static public System.Boolean HasSpecialWeight(System.Char c)
    // Offset: 0x17D44CC
    static bool HasSpecialWeight(::Il2CppChar c);
    // static public System.Boolean IsHalfWidthKana(System.Char c)
    // Offset: 0x17D4560
    static bool IsHalfWidthKana(::Il2CppChar c);
    // static public System.Boolean IsHiragana(System.Char c)
    // Offset: 0x17D4574
    static bool IsHiragana(::Il2CppChar c);
    // static public System.Boolean IsJapaneseSmallLetter(System.Char c)
    // Offset: 0x17D458C
    static bool IsJapaneseSmallLetter(::Il2CppChar c);
    // static public System.Boolean get_IsReady()
    // Offset: 0x17D4678
    static bool get_IsReady();
    // static private System.IntPtr GetResource(System.String name)
    // Offset: 0x17D46E0
    static System::IntPtr GetResource(::Il2CppString* name);
    // static private System.UInt32 UInt32FromBytePtr(System.Byte* raw, System.UInt32 idx)
    // Offset: 0x17D475C
    static uint UInt32FromBytePtr(uint8_t* raw, uint idx);
    // static private System.Void .cctor()
    // Offset: 0x17D478C
    static void _cctor();
    // static public System.Void FillCJK(System.String culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref System.Byte* catTable, ref System.Byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer lv2Indexer, ref System.Byte* lv2Table)
    // Offset: 0x17D4C34
    static void FillCJK(::Il2CppString* culture, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& lv2Indexer, uint8_t*& lv2Table);
    // static private System.Void FillCJKCore(System.String culture, ref Mono.Globalization.Unicode.CodePointIndexer cjkIndexer, ref System.Byte* catTable, ref System.Byte* lv1Table, ref Mono.Globalization.Unicode.CodePointIndexer cjkLv2Indexer, ref System.Byte* lv2Table)
    // Offset: 0x17D4D90
    static void FillCJKCore(::Il2CppString* culture, Mono::Globalization::Unicode::CodePointIndexer*& cjkIndexer, uint8_t*& catTable, uint8_t*& lv1Table, Mono::Globalization::Unicode::CodePointIndexer*& cjkLv2Indexer, uint8_t*& lv2Table);
  }; // Mono.Globalization.Unicode.MSCompatUnicodeTable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::MSCompatUnicodeTable*, "Mono.Globalization.Unicode", "MSCompatUnicodeTable");
#pragma pack(pop)
