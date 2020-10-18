// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberSwingRatingCounter
  class ISaberSwingRatingCounter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SwingSaberRatingDidFinishDelegate
  class SwingSaberRatingDidFinishDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x21BEA0C
    static SwingSaberRatingDidFinishDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ISaberSwingRatingCounter afterCutRating)
    // Offset: 0x21BEA20
    void Invoke(GlobalNamespace::ISaberSwingRatingCounter* afterCutRating);
    // public System.IAsyncResult BeginInvoke(ISaberSwingRatingCounter afterCutRating, System.AsyncCallback callback, System.Object object)
    // Offset: 0x21BEDD8
    System::IAsyncResult* BeginInvoke(GlobalNamespace::ISaberSwingRatingCounter* afterCutRating, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x21BEDFC
    void EndInvoke(System::IAsyncResult* result);
  }; // SwingSaberRatingDidFinishDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SwingSaberRatingDidFinishDelegate*, "", "SwingSaberRatingDidFinishDelegate");
#pragma pack(pop)
