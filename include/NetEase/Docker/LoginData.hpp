// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetEase.Docker.LoginData
  // [] Offset: FFFFFFFF
  struct LoginData/*, public System::ValueType*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xD24234
    // [CompilerGeneratedAttribute] Offset: 0xD24234
    // private System.Boolean <LoginSuccessful>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool LoginSuccessful;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: LoginSuccessful and: LoginCode
    char __padding0[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xD24270
    // [CompilerGeneratedAttribute] Offset: 0xD24270
    // private System.Int32 <LoginCode>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    int LoginCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xD242AC
    // [CompilerGeneratedAttribute] Offset: 0xD242AC
    // private System.String <UserName>k__BackingField
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* UserName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LoginData
    constexpr LoginData(bool LoginSuccessful_ = {}, int LoginCode_ = {}, ::Il2CppString* UserName_ = {}) noexcept : LoginSuccessful{LoginSuccessful_}, LoginCode{LoginCode_}, UserName{UserName_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Boolean get_LoginSuccessful()
    // Offset: 0xE32310
    bool get_LoginSuccessful();
    // public System.Void set_LoginSuccessful(System.Boolean value)
    // Offset: 0xE32318
    void set_LoginSuccessful(bool value);
    // public System.Void set_LoginCode(System.Int32 value)
    // Offset: 0xE32324
    void set_LoginCode(int value);
    // public System.String get_UserName()
    // Offset: 0xE3232C
    ::Il2CppString* get_UserName();
    // public System.Void set_UserName(System.String value)
    // Offset: 0xE32334
    void set_UserName(::Il2CppString* value);
  }; // NetEase.Docker.LoginData
  #pragma pack(pop)
  static check_size<sizeof(LoginData), 8 + sizeof(::Il2CppString*)> __NetEase_Docker_LoginDataSizeCheck;
  static_assert(sizeof(LoginData) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::LoginData, "NetEase.Docker", "LoginData");
