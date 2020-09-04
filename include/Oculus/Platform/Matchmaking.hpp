// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: MatchmakingStatApproach
  struct MatchmakingStatApproach;
  // Forward declaring type: MatchmakingOptions
  class MatchmakingOptions;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingStats
  class MatchmakingStats;
  // Forward declaring type: MatchmakingBrowseResult
  class MatchmakingBrowseResult;
  // Forward declaring type: MatchmakingEnqueueResultAndRoom
  class MatchmakingEnqueueResultAndRoom;
  // Forward declaring type: Room
  class Room;
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: MatchmakingAdminSnapshot
  class MatchmakingAdminSnapshot;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Matchmaking
  class Matchmaking : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::Matchmaking::CustomQuery
    class CustomQuery;
    // static public Oculus.Platform.Request ReportResultsInsecure(System.UInt64 roomID, System.Collections.Generic.Dictionary`2<System.String,System.Int32> data)
    // Offset: 0xE9AFDC
    static Oculus::Platform::Request* ReportResultsInsecure(uint64_t roomID, System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* data);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingStats> GetStats(System.String pool, System.UInt32 maxLevel, Oculus.Platform.MatchmakingStatApproach approach)
    // Offset: 0xE9B298
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingStats*>* GetStats(::Il2CppString* pool, uint maxLevel, Oculus::Platform::MatchmakingStatApproach approach);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingBrowseResult> Browse(System.String pool, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xE9B3CC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingBrowseResult*>* Browse(::Il2CppString* pool, Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingBrowseResult> Browse2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xE9B83C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingBrowseResult*>* Browse2(::Il2CppString* pool, Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request Cancel(System.String pool, System.String requestHash)
    // Offset: 0xE9B9DC
    static Oculus::Platform::Request* Cancel(::Il2CppString* pool, ::Il2CppString* requestHash);
    // static public Oculus.Platform.Request Cancel()
    // Offset: 0xE9BAF8
    static Oculus::Platform::Request* Cancel();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom> CreateAndEnqueueRoom(System.String pool, System.UInt32 maxUsers, System.Boolean subscribeToUpdates, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xE9BBFC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* CreateAndEnqueueRoom(::Il2CppString* pool, uint maxUsers, bool subscribeToUpdates, Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResultAndRoom> CreateAndEnqueueRoom2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xE9BD48
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom*>* CreateAndEnqueueRoom2(::Il2CppString* pool, Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> CreateRoom(System.String pool, System.UInt32 maxUsers, System.Boolean subscribeToUpdates)
    // Offset: 0xE9BE98
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* CreateRoom(::Il2CppString* pool, uint maxUsers, bool subscribeToUpdates);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> CreateRoom2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xE9BFCC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* CreateRoom2(::Il2CppString* pool, Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> Enqueue(System.String pool, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xE9C11C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult*>* Enqueue(::Il2CppString* pool, Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> Enqueue2(System.String pool, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xE9C250
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult*>* Enqueue2(::Il2CppString* pool, Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> EnqueueRoom(System.UInt64 roomID, Oculus.Platform.Matchmaking/CustomQuery customQueryData)
    // Offset: 0xE9C3A0
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult*>* EnqueueRoom(uint64_t roomID, Oculus::Platform::Matchmaking::CustomQuery* customQueryData);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingEnqueueResult> EnqueueRoom2(System.UInt64 roomID, Oculus.Platform.MatchmakingOptions matchmakingOptions)
    // Offset: 0xE9C4D4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingEnqueueResult*>* EnqueueRoom2(uint64_t roomID, Oculus::Platform::MatchmakingOptions* matchmakingOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.MatchmakingAdminSnapshot> GetAdminSnapshot()
    // Offset: 0xE9C624
    static Oculus::Platform::Request_1<Oculus::Platform::Models::MatchmakingAdminSnapshot*>* GetAdminSnapshot();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.Room> JoinRoom(System.UInt64 roomID, System.Boolean subscribeToUpdates)
    // Offset: 0xE9C730
    static Oculus::Platform::Request_1<Oculus::Platform::Models::Room*>* JoinRoom(uint64_t roomID, bool subscribeToUpdates);
    // static public Oculus.Platform.Request StartMatch(System.UInt64 roomID)
    // Offset: 0xE9C854
    static Oculus::Platform::Request* StartMatch(uint64_t roomID);
    // static public System.Void SetMatchFoundNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.Room> callback)
    // Offset: 0xE9C968
    static void SetMatchFoundNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>::Callback* callback);
  }; // Oculus.Platform.Matchmaking
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Matchmaking*, "Oculus.Platform", "Matchmaking");
#pragma pack(pop)
