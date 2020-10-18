// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Unity.Jobs
namespace Unity::Jobs {
  // Autogenerated type: Unity.Jobs.JobHandle
  struct JobHandle : public System::ValueType {
    public:
    // System.IntPtr jobGroup
    // Offset: 0x0
    System::IntPtr jobGroup;
    // System.Int32 version
    // Offset: 0x8
    int version;
    // Creating value type constructor for type: JobHandle
    constexpr JobHandle(System::IntPtr jobGroup_ = {}, int version_ = {}) noexcept : jobGroup{jobGroup_}, version{version_} {}
    // static public System.Void ScheduleBatchedJobs()
    // Offset: 0x19DDC68
    static void ScheduleBatchedJobs();
  }; // Unity.Jobs.JobHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Unity::Jobs::JobHandle, "Unity.Jobs", "JobHandle");
#pragma pack(pop)
