// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x10
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.ErrorCodes
  // [] Offset: FFFFFFFF
  class ErrorCodes : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ErrorCodes
    ErrorCodes() noexcept {}
    // static field const value: static public System.String kUserVerificationError
    static constexpr const char* kUserVerificationError = "USER_VERIFICATION_ERROR";
    // Get static field: static public System.String kUserVerificationError
    static ::Il2CppString* _get_kUserVerificationError();
    // Set static field: static public System.String kUserVerificationError
    static void _set_kUserVerificationError(::Il2CppString* value);
    // static field const value: static public System.String kUserRegistrationError
    static constexpr const char* kUserRegistrationError = "USER_REGISTRATION_ERROR";
    // Get static field: static public System.String kUserRegistrationError
    static ::Il2CppString* _get_kUserRegistrationError();
    // Set static field: static public System.String kUserRegistrationError
    static void _set_kUserRegistrationError(::Il2CppString* value);
    // static field const value: static public System.String kCreateAccessTokenError
    static constexpr const char* kCreateAccessTokenError = "CREATE_ACCESS_TOKEN_ERROR";
    // Get static field: static public System.String kCreateAccessTokenError
    static ::Il2CppString* _get_kCreateAccessTokenError();
    // Set static field: static public System.String kCreateAccessTokenError
    static void _set_kCreateAccessTokenError(::Il2CppString* value);
    // static field const value: static public System.String kLeaderboardNotFound
    static constexpr const char* kLeaderboardNotFound = "LEADERBOARD_NOT_FOUND";
    // Get static field: static public System.String kLeaderboardNotFound
    static ::Il2CppString* _get_kLeaderboardNotFound();
    // Set static field: static public System.String kLeaderboardNotFound
    static void _set_kLeaderboardNotFound(::Il2CppString* value);
    // static field const value: static public System.String kWrongInput
    static constexpr const char* kWrongInput = "WRONG_INPUT";
    // Get static field: static public System.String kWrongInput
    static ::Il2CppString* _get_kWrongInput();
    // Set static field: static public System.String kWrongInput
    static void _set_kWrongInput(::Il2CppString* value);
    // static field const value: static public System.String kLoginError
    static constexpr const char* kLoginError = "LOGIN_ERROR";
    // Get static field: static public System.String kLoginError
    static ::Il2CppString* _get_kLoginError();
    // Set static field: static public System.String kLoginError
    static void _set_kLoginError(::Il2CppString* value);
    // static field const value: static public System.String kTokenError
    static constexpr const char* kTokenError = "TOKEN_ERROR";
    // Get static field: static public System.String kTokenError
    static ::Il2CppString* _get_kTokenError();
    // Set static field: static public System.String kTokenError
    static void _set_kTokenError(::Il2CppString* value);
    // static field const value: static public System.String kLoginTimeOut
    static constexpr const char* kLoginTimeOut = "LOGIN_TIME_OUT";
    // Get static field: static public System.String kLoginTimeOut
    static ::Il2CppString* _get_kLoginTimeOut();
    // Set static field: static public System.String kLoginTimeOut
    static void _set_kLoginTimeOut(::Il2CppString* value);
  }; // BeatSaberAPI.DataTransferObjects.ErrorCodes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::ErrorCodes*, "BeatSaberAPI.DataTransferObjects", "ErrorCodes");
#pragma pack(pop)
