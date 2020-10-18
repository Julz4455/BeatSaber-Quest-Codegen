// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519
#include "Org/BouncyCastle/Math/EC/Custom/Djb/Curve25519.hpp"
// Including type: Org.BouncyCastle.Math.EC.AbstractECLookupTable
#include "Org/BouncyCastle/Math/EC/AbstractECLookupTable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Djb
namespace Org::BouncyCastle::Math::EC::Custom::Djb {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519/Curve25519LookupTable
  class Curve25519::Curve25519LookupTable : public Org::BouncyCastle::Math::EC::AbstractECLookupTable {
    public:
    // private readonly Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519 m_outer
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519* m_outer;
    // private readonly System.UInt32[] m_table
    // Offset: 0x18
    ::Array<uint>* m_table;
    // private readonly System.Int32 m_size
    // Offset: 0x20
    int m_size;
    // System.Void .ctor(Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519 outer, System.UInt32[] table, System.Int32 size)
    // Offset: 0x1B2A2A0
    static Curve25519::Curve25519LookupTable* New_ctor(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519* outer, ::Array<uint>* table, int size);
    // private Org.BouncyCastle.Math.EC.ECPoint CreatePoint(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1B2A7FC
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(::Array<uint>* x, ::Array<uint>* y);
    // public override System.Int32 get_Size()
    // Offset: 0x1B2A6B8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: System.Int32 AbstractECLookupTable::get_Size()
    int get_Size();
    // public override Org.BouncyCastle.Math.EC.ECPoint Lookup(System.Int32 index)
    // Offset: 0x1B2A6C0
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::Lookup(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* Lookup(int index);
    // public override Org.BouncyCastle.Math.EC.ECPoint LookupVar(System.Int32 index)
    // Offset: 0x1B2A8F8
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractECLookupTable
    // Base method: Org.BouncyCastle.Math.EC.ECPoint AbstractECLookupTable::LookupVar(System.Int32 index)
    Org::BouncyCastle::Math::EC::ECPoint* LookupVar(int index);
  }; // Org.BouncyCastle.Math.EC.Custom.Djb.Curve25519/Curve25519LookupTable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Djb::Curve25519::Curve25519LookupTable*, "Org.BouncyCastle.Math.EC.Custom.Djb", "Curve25519/Curve25519LookupTable");
#pragma pack(pop)
