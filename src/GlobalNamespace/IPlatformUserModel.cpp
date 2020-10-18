// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IPlatformUserModel
#include "GlobalNamespace/IPlatformUserModel.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: UserInfo
#include "GlobalNamespace/UserInfo.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IPlatformUserModel.GetUserInfo
System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo*>* GlobalNamespace::IPlatformUserModel::GetUserInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::UserInfo*>*>(this, "GetUserInfo"));
}
// Autogenerated method: IPlatformUserModel.GetUserFriendsUserIds
System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* GlobalNamespace::IPlatformUserModel::GetUserFriendsUserIds(bool cached) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>*>(this, "GetUserFriendsUserIds", cached));
}
// Autogenerated method: IPlatformUserModel.GetUserAuthToken
System::Threading::Tasks::Task_1<::Il2CppString*>* GlobalNamespace::IPlatformUserModel::GetUserAuthToken() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<::Il2CppString*>*>(this, "GetUserAuthToken"));
}
// Autogenerated method: IPlatformUserModel.GetUserNamesForUserIds
System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>* GlobalNamespace::IPlatformUserModel::GetUserNamesForUserIds(System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>* userIds) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*>*>(this, "GetUserNamesForUserIds", userIds));
}
