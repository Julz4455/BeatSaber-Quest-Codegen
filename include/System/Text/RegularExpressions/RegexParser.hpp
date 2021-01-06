// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexNode
  class RegexNode;
  // Forward declaring type: RegexTree
  class RegexTree;
  // Forward declaring type: RegexCharClass
  class RegexCharClass;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArgumentException
  class ArgumentException;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x91
  // Autogenerated type: System.Text.RegularExpressions.RegexParser
  // [] Offset: FFFFFFFF
  class RegexParser : public ::Il2CppObject {
    public:
    // System.Text.RegularExpressions.RegexNode _stack
    // Size: 0x8
    // Offset: 0x10
    System::Text::RegularExpressions::RegexNode* stack;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexNode*) == 0x8);
    // System.Text.RegularExpressions.RegexNode _group
    // Size: 0x8
    // Offset: 0x18
    System::Text::RegularExpressions::RegexNode* group;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexNode*) == 0x8);
    // System.Text.RegularExpressions.RegexNode _alternation
    // Size: 0x8
    // Offset: 0x20
    System::Text::RegularExpressions::RegexNode* alternation;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexNode*) == 0x8);
    // System.Text.RegularExpressions.RegexNode _concatenation
    // Size: 0x8
    // Offset: 0x28
    System::Text::RegularExpressions::RegexNode* concatenation;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexNode*) == 0x8);
    // System.Text.RegularExpressions.RegexNode _unit
    // Size: 0x8
    // Offset: 0x30
    System::Text::RegularExpressions::RegexNode* unit;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexNode*) == 0x8);
    // System.String _pattern
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* pattern;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 _currentPos
    // Size: 0x4
    // Offset: 0x40
    int currentPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: currentPos and: culture
    char __padding6[0x4] = {};
    // System.Globalization.CultureInfo _culture
    // Size: 0x8
    // Offset: 0x48
    System::Globalization::CultureInfo* culture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // System.Int32 _autocap
    // Size: 0x4
    // Offset: 0x50
    int autocap;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _capcount
    // Size: 0x4
    // Offset: 0x54
    int capcount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _captop
    // Size: 0x4
    // Offset: 0x58
    int captop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 _capsize
    // Size: 0x4
    // Offset: 0x5C
    int capsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Collections.Hashtable _capnames
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Hashtable* capnames;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Int32[] _capnumlist
    // Size: 0x8
    // Offset: 0x70
    ::Array<int>* capnumlist;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Collections.Generic.List`1<System.String> _capnamelist
    // Size: 0x8
    // Offset: 0x78
    System::Collections::Generic::List_1<::Il2CppString*>* capnamelist;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // System.Text.RegularExpressions.RegexOptions _options
    // Size: 0x4
    // Offset: 0x80
    System::Text::RegularExpressions::RegexOptions options;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexOptions) == 0x4);
    // Padding between fields: options and: optionsStack
    char __padding16[0x4] = {};
    // System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexOptions> _optionsStack
    // Size: 0x8
    // Offset: 0x88
    System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexOptions>* optionsStack;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexOptions>*) == 0x8);
    // System.Boolean _ignoreNextParen
    // Size: 0x1
    // Offset: 0x90
    bool ignoreNextParen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: RegexParser
    RegexParser(System::Text::RegularExpressions::RegexNode* stack_ = {}, System::Text::RegularExpressions::RegexNode* group_ = {}, System::Text::RegularExpressions::RegexNode* alternation_ = {}, System::Text::RegularExpressions::RegexNode* concatenation_ = {}, System::Text::RegularExpressions::RegexNode* unit_ = {}, ::Il2CppString* pattern_ = {}, int currentPos_ = {}, System::Globalization::CultureInfo* culture_ = {}, int autocap_ = {}, int capcount_ = {}, int captop_ = {}, int capsize_ = {}, System::Collections::Hashtable* caps_ = {}, System::Collections::Hashtable* capnames_ = {}, ::Array<int>* capnumlist_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* capnamelist_ = {}, System::Text::RegularExpressions::RegexOptions options_ = {}, System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexOptions>* optionsStack_ = {}, bool ignoreNextParen_ = {}) noexcept : stack{stack_}, group{group_}, alternation{alternation_}, concatenation{concatenation_}, unit{unit_}, pattern{pattern_}, currentPos{currentPos_}, culture{culture_}, autocap{autocap_}, capcount{capcount_}, captop{captop_}, capsize{capsize_}, caps{caps_}, capnames{capnames_}, capnumlist{capnumlist_}, capnamelist{capnamelist_}, options{options_}, optionsStack{optionsStack_}, ignoreNextParen{ignoreNextParen_} {}
    // Get static field: static readonly System.Byte[] _category
    static ::Array<uint8_t>* _get__category();
    // Set static field: static readonly System.Byte[] _category
    static void _set__category(::Array<uint8_t>* value);
    // static System.Text.RegularExpressions.RegexTree Parse(System.String re, System.Text.RegularExpressions.RegexOptions op)
    // Offset: 0x1549BFC
    static System::Text::RegularExpressions::RegexTree* Parse(::Il2CppString* re, System::Text::RegularExpressions::RegexOptions op);
    // private System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x1549D6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexParser* New_ctor(System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Text::RegularExpressions").WithContext("RegexParser").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexParser*, creationType>(culture)));
    }
    // System.Void SetPattern(System.String Re)
    // Offset: 0x1549E30
    void SetPattern(::Il2CppString* Re);
    // System.Void Reset(System.Text.RegularExpressions.RegexOptions topopts)
    // Offset: 0x154A1FC
    void Reset(System::Text::RegularExpressions::RegexOptions topopts);
    // System.Text.RegularExpressions.RegexNode ScanRegex()
    // Offset: 0x154A294
    System::Text::RegularExpressions::RegexNode* ScanRegex();
    // System.Text.RegularExpressions.RegexCharClass ScanCharClass(System.Boolean caseInsensitive)
    // Offset: 0x154B640
    System::Text::RegularExpressions::RegexCharClass* ScanCharClass(bool caseInsensitive);
    // System.Text.RegularExpressions.RegexCharClass ScanCharClass(System.Boolean caseInsensitive, System.Boolean scanOnly)
    // Offset: 0x154CFBC
    System::Text::RegularExpressions::RegexCharClass* ScanCharClass(bool caseInsensitive, bool scanOnly);
    // System.Text.RegularExpressions.RegexNode ScanGroupOpen()
    // Offset: 0x154B73C
    System::Text::RegularExpressions::RegexNode* ScanGroupOpen();
    // System.Void ScanBlank()
    // Offset: 0x154ABCC
    void ScanBlank();
    // System.Text.RegularExpressions.RegexNode ScanBackslash()
    // Offset: 0x154C79C
    System::Text::RegularExpressions::RegexNode* ScanBackslash();
    // System.Text.RegularExpressions.RegexNode ScanBasicBackslash()
    // Offset: 0x154DE38
    System::Text::RegularExpressions::RegexNode* ScanBasicBackslash();
    // System.String ScanCapname()
    // Offset: 0x154D974
    ::Il2CppString* ScanCapname();
    // System.Char ScanOctal()
    // Offset: 0x154E468
    ::Il2CppChar ScanOctal();
    // System.Int32 ScanDecimal()
    // Offset: 0x154CE7C
    int ScanDecimal();
    // System.Char ScanHex(System.Int32 c)
    // Offset: 0x154E528
    ::Il2CppChar ScanHex(int c);
    // static System.Int32 HexDigit(System.Char ch)
    // Offset: 0x154E674
    static int HexDigit(::Il2CppChar ch);
    // System.Char ScanControl()
    // Offset: 0x154E6AC
    ::Il2CppChar ScanControl();
    // System.Boolean IsOnlyTopOption(System.Text.RegularExpressions.RegexOptions option)
    // Offset: 0x154E774
    bool IsOnlyTopOption(System::Text::RegularExpressions::RegexOptions option);
    // System.Void ScanOptions()
    // Offset: 0x154DBE0
    void ScanOptions();
    // System.Char ScanCharEscape()
    // Offset: 0x154D7B8
    ::Il2CppChar ScanCharEscape();
    // System.String ParseProperty()
    // Offset: 0x154D63C
    ::Il2CppString* ParseProperty();
    // System.Int32 TypeFromCode(System.Char ch)
    // Offset: 0x154DDA4
    int TypeFromCode(::Il2CppChar ch);
    // static System.Text.RegularExpressions.RegexOptions OptionFromCode(System.Char ch)
    // Offset: 0x154E79C
    static System::Text::RegularExpressions::RegexOptions OptionFromCode(::Il2CppChar ch);
    // System.Void CountCaptures()
    // Offset: 0x1549EA8
    void CountCaptures();
    // System.Void NoteCaptureSlot(System.Int32 i, System.Int32 pos)
    // Offset: 0x154E7FC
    void NoteCaptureSlot(int i, int pos);
    // System.Void NoteCaptureName(System.String name, System.Int32 pos)
    // Offset: 0x154E964
    void NoteCaptureName(::Il2CppString* name, int pos);
    // System.Void AssignNameSlots()
    // Offset: 0x154EAA4
    void AssignNameSlots();
    // System.Int32 CaptureSlotFromName(System.String capname)
    // Offset: 0x154DB44
    int CaptureSlotFromName(::Il2CppString* capname);
    // System.Boolean IsCaptureSlot(System.Int32 i)
    // Offset: 0x154DA84
    bool IsCaptureSlot(int i);
    // System.Boolean IsCaptureName(System.String capname)
    // Offset: 0x154DB28
    bool IsCaptureName(::Il2CppString* capname);
    // System.Boolean UseOptionN()
    // Offset: 0x154DA78
    bool UseOptionN();
    // System.Boolean UseOptionI()
    // Offset: 0x154B634
    bool UseOptionI();
    // System.Boolean UseOptionM()
    // Offset: 0x154CCA0
    bool UseOptionM();
    // System.Boolean UseOptionS()
    // Offset: 0x154CD2C
    bool UseOptionS();
    // System.Boolean UseOptionX()
    // Offset: 0x154AEC8
    bool UseOptionX();
    // System.Boolean UseOptionE()
    // Offset: 0x154D630
    bool UseOptionE();
    // static System.Boolean IsSpecial(System.Char ch)
    // Offset: 0x154B1A4
    static bool IsSpecial(::Il2CppChar ch);
    // static System.Boolean IsStopperX(System.Char ch)
    // Offset: 0x154AF2C
    static bool IsStopperX(::Il2CppChar ch);
    // static System.Boolean IsQuantifier(System.Char ch)
    // Offset: 0x154B258
    static bool IsQuantifier(::Il2CppChar ch);
    // System.Boolean IsTrueQuantifier()
    // Offset: 0x154AFE0
    bool IsTrueQuantifier();
    // static System.Boolean IsSpace(System.Char ch)
    // Offset: 0x154DCF0
    static bool IsSpace(::Il2CppChar ch);
    // System.Void AddConcatenate(System.Int32 pos, System.Int32 cch, System.Boolean isReplacement)
    // Offset: 0x154B30C
    void AddConcatenate(int pos, int cch, bool isReplacement);
    // System.Void PushGroup()
    // Offset: 0x154C1A4
    void PushGroup();
    // System.Void PopGroup()
    // Offset: 0x154C5AC
    void PopGroup();
    // System.Boolean EmptyStack()
    // Offset: 0x154C2F0
    bool EmptyStack();
    // System.Void StartGroup(System.Text.RegularExpressions.RegexNode openGroup)
    // Offset: 0x154AB04
    void StartGroup(System::Text::RegularExpressions::RegexNode* openGroup);
    // System.Void AddAlternate()
    // Offset: 0x154C210
    void AddAlternate();
    // System.Void AddConcatenate()
    // Offset: 0x154CE10
    void AddConcatenate();
    // System.Void AddConcatenate(System.Boolean lazy, System.Int32 min, System.Int32 max)
    // Offset: 0x154CF6C
    void AddConcatenate(bool lazy, int min, int max);
    // System.Text.RegularExpressions.RegexNode Unit()
    // Offset: 0x154F098
    System::Text::RegularExpressions::RegexNode* Unit();
    // System.Void AddUnitOne(System.Char ch)
    // Offset: 0x154B56C
    void AddUnitOne(::Il2CppChar ch);
    // System.Void AddUnitNotone(System.Char ch)
    // Offset: 0x154CD38
    void AddUnitNotone(::Il2CppChar ch);
    // System.Void AddUnitSet(System.String cc)
    // Offset: 0x154B64C
    void AddUnitSet(::Il2CppString* cc);
    // System.Void AddUnitNode(System.Text.RegularExpressions.RegexNode node)
    // Offset: 0x154F0A0
    void AddUnitNode(System::Text::RegularExpressions::RegexNode* node);
    // System.Void AddUnitType(System.Int32 type)
    // Offset: 0x154CCAC
    void AddUnitType(int type);
    // System.Void AddGroup()
    // Offset: 0x154C430
    void AddGroup();
    // System.Void PushOptions()
    // Offset: 0x154B6E0
    void PushOptions();
    // System.Void PopOptions()
    // Offset: 0x154C704
    void PopOptions();
    // System.Boolean EmptyOptionsStack()
    // Offset: 0x154E90C
    bool EmptyOptionsStack();
    // System.Void PopKeepOptions()
    // Offset: 0x154C144
    void PopKeepOptions();
    // System.ArgumentException MakeException(System.String message)
    // Offset: 0x154C300
    System::ArgumentException* MakeException(::Il2CppString* message);
    // System.Int32 Textpos()
    // Offset: 0x154F0A8
    int Textpos();
    // System.Void Textto(System.Int32 pos)
    // Offset: 0x154F0B0
    void Textto(int pos);
    // System.Char MoveRightGetChar()
    // Offset: 0x154CE50
    ::Il2CppChar MoveRightGetChar();
    // System.Void MoveRight()
    // Offset: 0x154AED4
    void MoveRight();
    // System.Void MoveRight(System.Int32 i)
    // Offset: 0x154DA68
    void MoveRight(int i);
    // System.Void MoveLeft()
    // Offset: 0x154CE00
    void MoveLeft();
    // System.Char CharAt(System.Int32 i)
    // Offset: 0x154B550
    ::Il2CppChar CharAt(int i);
    // System.Char RightChar()
    // Offset: 0x154AF08
    ::Il2CppChar RightChar();
    // System.Char RightChar(System.Int32 i)
    // Offset: 0x154DA40
    ::Il2CppChar RightChar(int i);
    // System.Int32 CharsRight()
    // Offset: 0x154AEE4
    int CharsRight();
    // static private System.Void .cctor()
    // Offset: 0x154F0B8
    static void _cctor();
  }; // System.Text.RegularExpressions.RegexParser
  static check_size<sizeof(RegexParser), 144 + sizeof(bool)> __System_Text_RegularExpressions_RegexParserSizeCheck;
  static_assert(sizeof(RegexParser) == 0x91);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexParser*, "System.Text.RegularExpressions", "RegexParser");
#pragma pack(pop)
