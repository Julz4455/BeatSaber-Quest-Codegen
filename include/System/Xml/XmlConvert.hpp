// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlCharType
#include "System/Xml/XmlCharType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: ExceptionType
  struct ExceptionType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlConvert
  class XmlConvert : public ::Il2CppObject {
    public:
    // Get static field: static private System.Xml.XmlCharType xmlCharType
    static System::Xml::XmlCharType _get_xmlCharType();
    // Set static field: static private System.Xml.XmlCharType xmlCharType
    static void _set_xmlCharType(System::Xml::XmlCharType value);
    // Get static field: static System.Char[] crt
    static ::Array<::Il2CppChar>* _get_crt();
    // Set static field: static System.Char[] crt
    static void _set_crt(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly System.Int32 c_EncodedCharLength
    static int _get_c_EncodedCharLength();
    // Set static field: static private readonly System.Int32 c_EncodedCharLength
    static void _set_c_EncodedCharLength(int value);
    // Get static field: static readonly System.Char[] WhitespaceChars
    static ::Array<::Il2CppChar>* _get_WhitespaceChars();
    // Set static field: static readonly System.Char[] WhitespaceChars
    static void _set_WhitespaceChars(::Array<::Il2CppChar>* value);
    // static System.String VerifyQName(System.String name, System.Xml.ExceptionType exceptionType)
    // Offset: 0x178FE2C
    static ::Il2CppString* VerifyQName(::Il2CppString* name, System::Xml::ExceptionType exceptionType);
    // static System.String TrimString(System.String value)
    // Offset: 0x17900AC
    static ::Il2CppString* TrimString(::Il2CppString* value);
    // static System.String TrimStringStart(System.String value)
    // Offset: 0x1790128
    static ::Il2CppString* TrimStringStart(::Il2CppString* value);
    // static System.String TrimStringEnd(System.String value)
    // Offset: 0x17901A4
    static ::Il2CppString* TrimStringEnd(::Il2CppString* value);
    // static System.Exception CreateException(System.String res, System.String arg, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1790220
    static System::Exception* CreateException(::Il2CppString* res, ::Il2CppString* arg, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateException(System.String res, System.String[] args, System.Xml.ExceptionType exceptionType)
    // Offset: 0x1790434
    static System::Exception* CreateException(::Il2CppString* res, ::Array<::Il2CppString*>* args, System::Xml::ExceptionType exceptionType);
    // static System.Exception CreateException(System.String res, System.String[] args, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x178FFDC
    static System::Exception* CreateException(::Il2CppString* res, ::Array<::Il2CppString*>* args, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateInvalidSurrogatePairException(System.Char low, System.Char hi)
    // Offset: 0x1785928
    static System::Exception* CreateInvalidSurrogatePairException(::Il2CppChar low, ::Il2CppChar hi);
    // static System.Exception CreateInvalidSurrogatePairException(System.Char low, System.Char hi, System.Xml.ExceptionType exceptionType)
    // Offset: 0x17904CC
    static System::Exception* CreateInvalidSurrogatePairException(::Il2CppChar low, ::Il2CppChar hi, System::Xml::ExceptionType exceptionType);
    // static System.Exception CreateInvalidSurrogatePairException(System.Char low, System.Char hi, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x1790550
    static System::Exception* CreateInvalidSurrogatePairException(::Il2CppChar low, ::Il2CppChar hi, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateInvalidHighSurrogateCharException(System.Char hi)
    // Offset: 0x1790710
    static System::Exception* CreateInvalidHighSurrogateCharException(::Il2CppChar hi);
    // static System.Exception CreateInvalidHighSurrogateCharException(System.Char hi, System.Xml.ExceptionType exceptionType)
    // Offset: 0x1790778
    static System::Exception* CreateInvalidHighSurrogateCharException(::Il2CppChar hi, System::Xml::ExceptionType exceptionType);
    // static System.Exception CreateInvalidHighSurrogateCharException(System.Char hi, System.Xml.ExceptionType exceptionType, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x17907F4
    static System::Exception* CreateInvalidHighSurrogateCharException(::Il2CppChar hi, System::Xml::ExceptionType exceptionType, int lineNo, int linePos);
    // static System.Exception CreateInvalidCharException(System.Char invChar, System.Char nextChar)
    // Offset: 0x17908E4
    static System::Exception* CreateInvalidCharException(::Il2CppChar invChar, ::Il2CppChar nextChar);
    // static System.Exception CreateInvalidCharException(System.Char invChar, System.Char nextChar, System.Xml.ExceptionType exceptionType)
    // Offset: 0x179095C
    static System::Exception* CreateInvalidCharException(::Il2CppChar invChar, ::Il2CppChar nextChar, System::Xml::ExceptionType exceptionType);
    // static private System.Void .cctor()
    // Offset: 0x1790CC8
    static void _cctor();
  }; // System.Xml.XmlConvert
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlConvert*, "System.Xml", "XmlConvert");
#pragma pack(pop)
