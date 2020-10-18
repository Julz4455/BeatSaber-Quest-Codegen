// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.IO.FilterStream
#include "Org/BouncyCastle/Utilities/IO/FilterStream.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Forward declaring type: DefiniteLengthInputStream
  class DefiniteLengthInputStream;
  // Forward declaring type: DerSequence
  class DerSequence;
  // Forward declaring type: DerSet
  class DerSet;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1InputStream
  class Asn1InputStream : public Org::BouncyCastle::Utilities::IO::FilterStream {
    public:
    // private readonly System.Int32 limit
    // Offset: 0x30
    int limit;
    // private readonly System.Byte[][] tmpBuffers
    // Offset: 0x38
    ::Array<::Array<uint8_t>*>* tmpBuffers;
    // static System.Int32 FindLimit(System.IO.Stream input)
    // Offset: 0x153ADA0
    static int FindLimit(System::IO::Stream* input);
    // public System.Void .ctor(System.IO.Stream inputStream, System.Int32 limit)
    // Offset: 0x153AEF4
    static Asn1InputStream* New_ctor(System::IO::Stream* inputStream, int limit);
    // public System.Void .ctor(System.Byte[] input)
    // Offset: 0x153AF78
    static Asn1InputStream* New_ctor(::Array<uint8_t>* input);
    // private Org.BouncyCastle.Asn1.Asn1Object BuildObject(System.Int32 tag, System.Int32 tagNo, System.Int32 length)
    // Offset: 0x153AFFC
    Org::BouncyCastle::Asn1::Asn1Object* BuildObject(int tag, int tagNo, int length);
    // Org.BouncyCastle.Asn1.Asn1EncodableVector ReadVector(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x153C30C
    Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
    // Org.BouncyCastle.Asn1.DerSequence CreateDerSequence(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x153C838
    Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
    // Org.BouncyCastle.Asn1.DerSet CreateDerSet(Org.BouncyCastle.Asn1.DefiniteLengthInputStream dIn)
    // Offset: 0x153C960
    Org::BouncyCastle::Asn1::DerSet* CreateDerSet(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);
    // public Org.BouncyCastle.Asn1.Asn1Object ReadObject()
    // Offset: 0x153C3FC
    Org::BouncyCastle::Asn1::Asn1Object* ReadObject();
    // System.Int32 get_Limit()
    // Offset: 0x153D4DC
    int get_Limit();
    // static System.Int32 ReadTagNumber(System.IO.Stream s, System.Int32 tag)
    // Offset: 0x153CAA4
    static int ReadTagNumber(System::IO::Stream* s, int tag);
    // static System.Int32 ReadLength(System.IO.Stream s, System.Int32 limit, System.Boolean isParsing)
    // Offset: 0x153CBBC
    static int ReadLength(System::IO::Stream* s, int limit, bool isParsing);
    // static private System.Byte[] GetBuffer(Org.BouncyCastle.Asn1.DefiniteLengthInputStream defIn, System.Byte[][] tmpBuffers)
    // Offset: 0x153D4E4
    static ::Array<uint8_t>* GetBuffer(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn, ::Array<::Array<uint8_t>*>* tmpBuffers);
    // static private System.Char[] GetBmpCharBuffer(Org.BouncyCastle.Asn1.DefiniteLengthInputStream defIn)
    // Offset: 0x153D960
    static ::Array<::Il2CppChar>* GetBmpCharBuffer(Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn);
    // static Org.BouncyCastle.Asn1.Asn1Object CreatePrimitiveDerObject(System.Int32 tagNo, Org.BouncyCastle.Asn1.DefiniteLengthInputStream defIn, System.Byte[][] tmpBuffers)
    // Offset: 0x153BE5C
    static Org::BouncyCastle::Asn1::Asn1Object* CreatePrimitiveDerObject(int tagNo, Org::BouncyCastle::Asn1::DefiniteLengthInputStream* defIn, ::Array<::Array<uint8_t>*>* tmpBuffers);
    // public System.Void .ctor(System.IO.Stream inputStream)
    // Offset: 0x153AEC0
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream inputStream)
    static Asn1InputStream* New_ctor(System::IO::Stream* inputStream);
  }; // Org.BouncyCastle.Asn1.Asn1InputStream
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1InputStream*, "Org.BouncyCastle.Asn1", "Asn1InputStream");
#pragma pack(pop)
