// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Including type: Org.BouncyCastle.Asn1.IAsn1Choice
#include "Org/BouncyCastle/Asn1/IAsn1Choice.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.Time
  class Time : public Org::BouncyCastle::Asn1::Asn1Encodable, public Org::BouncyCastle::Asn1::IAsn1Choice {
    public:
    // private readonly Org.BouncyCastle.Asn1.Asn1Object time
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Object* time;
    // Creating conversion operator: operator Org::BouncyCastle::Asn1::Asn1Object*
    constexpr operator Org::BouncyCastle::Asn1::Asn1Object*() const noexcept {
      return time;
    }
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Object time)
    // Offset: 0x186A0D4
    static Time* New_ctor(Org::BouncyCastle::Asn1::Asn1Object* time);
    // static public Org.BouncyCastle.Asn1.X509.Time GetInstance(System.Object obj)
    // Offset: 0x1864B5C
    static Org::BouncyCastle::Asn1::X509::Time* GetInstance(::Il2CppObject* obj);
    // public System.String GetTime()
    // Offset: 0x186A204
    ::Il2CppString* GetTime();
    // public System.DateTime ToDateTime()
    // Offset: 0x186A2F0
    System::DateTime ToDateTime();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x186A4C4
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x186A4CC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.X509.Time
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::Time*, "Org.BouncyCastle.Asn1.X509", "Time");
#pragma pack(pop)
