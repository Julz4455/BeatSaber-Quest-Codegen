// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.CipherUtilities
#include "Org/BouncyCastle/Security/CipherUtilities.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm
  struct CipherUtilities::CipherAlgorithm : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CipherAlgorithm
    constexpr CipherAlgorithm(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm AES
    static constexpr const int AES = 0;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm AES
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_AES();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm AES
    static void _set_AES(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm ARC4
    static constexpr const int ARC4 = 1;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm ARC4
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_ARC4();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm ARC4
    static void _set_ARC4(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm BLOWFISH
    static constexpr const int BLOWFISH = 2;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm BLOWFISH
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_BLOWFISH();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm BLOWFISH
    static void _set_BLOWFISH(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAMELLIA
    static constexpr const int CAMELLIA = 3;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAMELLIA
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_CAMELLIA();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAMELLIA
    static void _set_CAMELLIA(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAST5
    static constexpr const int CAST5 = 4;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAST5
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_CAST5();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAST5
    static void _set_CAST5(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAST6
    static constexpr const int CAST6 = 5;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAST6
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_CAST6();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CAST6
    static void _set_CAST6(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA
    static constexpr const int CHACHA = 6;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_CHACHA();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA
    static void _set_CHACHA(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA20_POLY1305
    static constexpr const int CHACHA20_POLY1305 = 7;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA20_POLY1305
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_CHACHA20_POLY1305();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA20_POLY1305
    static void _set_CHACHA20_POLY1305(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA7539
    static constexpr const int CHACHA7539 = 8;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA7539
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_CHACHA7539();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm CHACHA7539
    static void _set_CHACHA7539(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm DES
    static constexpr const int DES = 9;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm DES
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_DES();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm DES
    static void _set_DES(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm DESEDE
    static constexpr const int DESEDE = 10;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm DESEDE
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_DESEDE();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm DESEDE
    static void _set_DESEDE(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm ELGAMAL
    static constexpr const int ELGAMAL = 11;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm ELGAMAL
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_ELGAMAL();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm ELGAMAL
    static void _set_ELGAMAL(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm GOST28147
    static constexpr const int GOST28147 = 12;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm GOST28147
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_GOST28147();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm GOST28147
    static void _set_GOST28147(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm HC128
    static constexpr const int HC128 = 13;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm HC128
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_HC128();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm HC128
    static void _set_HC128(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm HC256
    static constexpr const int HC256 = 14;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm HC256
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_HC256();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm HC256
    static void _set_HC256(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm IDEA
    static constexpr const int IDEA = 15;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm IDEA
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_IDEA();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm IDEA
    static void _set_IDEA(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm NOEKEON
    static constexpr const int NOEKEON = 16;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm NOEKEON
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_NOEKEON();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm NOEKEON
    static void _set_NOEKEON(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm PBEWITHSHAAND128BITRC4
    static constexpr const int PBEWITHSHAAND128BITRC4 = 17;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm PBEWITHSHAAND128BITRC4
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_PBEWITHSHAAND128BITRC4();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm PBEWITHSHAAND128BITRC4
    static void _set_PBEWITHSHAAND128BITRC4(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm PBEWITHSHAAND40BITRC4
    static constexpr const int PBEWITHSHAAND40BITRC4 = 18;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm PBEWITHSHAAND40BITRC4
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_PBEWITHSHAAND40BITRC4();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm PBEWITHSHAAND40BITRC4
    static void _set_PBEWITHSHAAND40BITRC4(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC2
    static constexpr const int RC2 = 19;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC2
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_RC2();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC2
    static void _set_RC2(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC5
    static constexpr const int RC5 = 20;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC5
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_RC5();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC5
    static void _set_RC5(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC5_64
    static constexpr const int RC5_64 = 21;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC5_64
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_RC5_64();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC5_64
    static void _set_RC5_64(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC6
    static constexpr const int RC6 = 22;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC6
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_RC6();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RC6
    static void _set_RC6(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RIJNDAEL
    static constexpr const int RIJNDAEL = 23;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RIJNDAEL
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_RIJNDAEL();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RIJNDAEL
    static void _set_RIJNDAEL(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RSA
    static constexpr const int RSA = 24;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RSA
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_RSA();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm RSA
    static void _set_RSA(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SALSA20
    static constexpr const int SALSA20 = 25;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SALSA20
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_SALSA20();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SALSA20
    static void _set_SALSA20(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SEED
    static constexpr const int SEED = 26;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SEED
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_SEED();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SEED
    static void _set_SEED(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SERPENT
    static constexpr const int SERPENT = 27;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SERPENT
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_SERPENT();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SERPENT
    static void _set_SERPENT(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SKIPJACK
    static constexpr const int SKIPJACK = 28;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SKIPJACK
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_SKIPJACK();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SKIPJACK
    static void _set_SKIPJACK(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SM4
    static constexpr const int SM4 = 29;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SM4
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_SM4();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm SM4
    static void _set_SM4(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TEA
    static constexpr const int TEA = 30;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TEA
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_TEA();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TEA
    static void _set_TEA(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_256
    static constexpr const int THREEFISH_256 = 31;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_256
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_THREEFISH_256();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_256
    static void _set_THREEFISH_256(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_512
    static constexpr const int THREEFISH_512 = 32;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_512
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_THREEFISH_512();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_512
    static void _set_THREEFISH_512(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_1024
    static constexpr const int THREEFISH_1024 = 33;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_1024
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_THREEFISH_1024();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm THREEFISH_1024
    static void _set_THREEFISH_1024(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TNEPRES
    static constexpr const int TNEPRES = 34;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TNEPRES
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_TNEPRES();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TNEPRES
    static void _set_TNEPRES(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TWOFISH
    static constexpr const int TWOFISH = 35;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TWOFISH
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_TWOFISH();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm TWOFISH
    static void _set_TWOFISH(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm VMPC
    static constexpr const int VMPC = 36;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm VMPC
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_VMPC();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm VMPC
    static void _set_VMPC(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm VMPC_KSA3
    static constexpr const int VMPC_KSA3 = 37;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm VMPC_KSA3
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_VMPC_KSA3();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm VMPC_KSA3
    static void _set_VMPC_KSA3(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm XTEA
    static constexpr const int XTEA = 38;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm XTEA
    static Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm _get_XTEA();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm XTEA
    static void _set_XTEA(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm value);
  }; // Org.BouncyCastle.Security.CipherUtilities/CipherAlgorithm
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::CipherUtilities::CipherAlgorithm, "Org.BouncyCastle.Security", "CipherUtilities/CipherAlgorithm");
#pragma pack(pop)
