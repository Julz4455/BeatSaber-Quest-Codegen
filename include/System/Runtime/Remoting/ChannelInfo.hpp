// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.IChannelInfo
#include "System/Runtime/Remoting/IChannelInfo.hpp"
// Completed includes
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ChannelInfo
  class ChannelInfo : public ::Il2CppObject, public System::Runtime::Remoting::IChannelInfo {
    public:
    // private System.Object[] channelData
    // Offset: 0x10
    ::Array<::Il2CppObject*>* channelData;
    // Creating conversion operator: operator ::Array<::Il2CppObject*>*
    constexpr operator ::Array<::Il2CppObject*>*() const noexcept {
      return channelData;
    }
    // public System.Void .ctor(System.Object remoteChannelData)
    // Offset: 0x1297DA8
    static ChannelInfo* New_ctor(::Il2CppObject* remoteChannelData);
    // public System.Void .ctor()
    // Offset: 0x1297954
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ChannelInfo* New_ctor();
    // public System.Object[] get_ChannelData()
    // Offset: 0x1297E74
    // Implemented from: System.Runtime.Remoting.IChannelInfo
    // Base method: System.Object[] IChannelInfo::get_ChannelData()
    ::Array<::Il2CppObject*>* get_ChannelData();
  }; // System.Runtime.Remoting.ChannelInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelInfo*, "System.Runtime.Remoting", "ChannelInfo");
#pragma pack(pop)
