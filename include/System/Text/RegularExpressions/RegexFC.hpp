// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCharClass
  class RegexCharClass;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexFC
  class RegexFC : public ::Il2CppObject {
    public:
    // System.Text.RegularExpressions.RegexCharClass _cc
    // Offset: 0x10
    System::Text::RegularExpressions::RegexCharClass* cc;
    // System.Boolean _nullable
    // Offset: 0x18
    bool nullable;
    // System.Boolean _caseInsensitive
    // Offset: 0x19
    bool caseInsensitive;
    // System.Void .ctor(System.Boolean nullable)
    // Offset: 0x1800094
    static RegexFC* New_ctor(bool nullable);
    // System.Void .ctor(System.Char ch, System.Boolean not, System.Boolean nullable, System.Boolean caseInsensitive)
    // Offset: 0x1800120
    static RegexFC* New_ctor(::Il2CppChar ch, bool _not, bool nullable, bool caseInsensitive);
    // System.Void .ctor(System.String charClass, System.Boolean nullable, System.Boolean caseInsensitive)
    // Offset: 0x1800234
    static RegexFC* New_ctor(::Il2CppString* charClass, bool nullable, bool caseInsensitive);
    // System.Boolean AddFC(System.Text.RegularExpressions.RegexFC fc, System.Boolean concatenate)
    // Offset: 0x18002E8
    bool AddFC(System::Text::RegularExpressions::RegexFC* fc, bool concatenate);
    // System.String GetFirstChars(System.Globalization.CultureInfo culture)
    // Offset: 0x18003A0
    ::Il2CppString* GetFirstChars(System::Globalization::CultureInfo* culture);
    // System.Boolean IsCaseInsensitive()
    // Offset: 0x18003E4
    bool IsCaseInsensitive();
  }; // System.Text.RegularExpressions.RegexFC
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexFC*, "System.Text.RegularExpressions", "RegexFC");
#pragma pack(pop)
