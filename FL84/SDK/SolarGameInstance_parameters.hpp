#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_621E0299461CEA370A1831B504104270
struct USolarGameInstance_C_OnRefreshFirebaseToken_621E0299461CEA370A1831B504104270_Params
{
public:
	class FString                                FirebaseToken;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_8BB4D7814B20E67649CD17AEDA337DE7
struct USolarGameInstance_C_OnClearCommunityRedhint_8BB4D7814B20E67649CD17AEDA337DE7_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_40DF37424B99C37CB85715830F6CB18B
struct USolarGameInstance_C_OnGetCommunityRedhint_40DF37424B99C37CB85715830F6CB18B_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_1A59F2F7403F2B37C9280A95C732B7A4
struct USolarGameInstance_C_OnExitCommunity_1A59F2F7403F2B37C9280A95C732B7A4_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_9E05EFE04B312BA7D4851796B95BA672
struct USolarGameInstance_C_OnInitCommunity_9E05EFE04B312BA7D4851796B95BA672_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_49364EA644970E82B95B4BA0887A8063
struct USolarGameInstance_C_OnQueryThirdPartyUserInfo_49364EA644970E82B95B4BA0887A8063_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSDKSocialUserInfo>            SocialUserInfoList;                                // 0x8(0x10)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_E24BA23E4FBBB28CA3CF539073DF99F0
struct USolarGameInstance_C_OnSwitchAccountFailed_E24BA23E4FBBB28CA3CF539073DF99F0_Params
{
public:
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F15[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x21 (0x21 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_E2F904F54301309EAF38E1B8F2CE8C49
struct USolarGameInstance_C_OnSwitchAccountFinish_E2F904F54301309EAF38E1B8F2CE8C49_Params
{
public:
	class FString                                AppUid;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x29 (0x29 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_02FFE6684C62791BB58028BE578ED4BB
struct USolarGameInstance_C_OnBindFinish_02FFE6684C62791BB58028BE578ED4BB_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F18[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AppUid;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_C8AAE6AA48716E13C24C5A8D858BCBF6
struct USolarGameInstance_C_OnLSteamSDKPayApplied_C8AAE6AA48716E13C24C5A8D858BCBF6_Params
{
public:
	class FString                                Datas;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_D53824DB445B32677B3020B13F104D90
struct USolarGameInstance_C_OnLSteamQuerySkus_D53824DB445B32677B3020B13F104D90_Params
{
public:
	class FString                                Datas;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua
struct USolarGameInstance_C_SolarGM_LobbyLua_Params
{
public:
	class FString                                CmdName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Params;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
struct USolarGameInstance_C_HandleNetworkError_Params
{
public:
	enum class ENetworkFailure                   FailureType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsServer;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
struct USolarGameInstance_C_CheckSavedDirFiles_Params
{
public:
	TArray<class FString>                        Files;                                             // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
struct USolarGameInstance_C_SolarGM_TransmitGMLua_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        GmArray;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall
struct USolarGameInstance_C_ExecuteChangeAudioModeLuaCall_Params
{
public:
	bool                                         bTurnOn;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy
struct USolarGameInstance_C_LuaGetBroadcastPlayerNameCopy_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
struct USolarGameInstance_C_SolarGM_AddItemLua_Params
{
public:
	int32                                        ItemID;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x15 (0x15 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.ReportLoadingInfoToBI
struct USolarGameInstance_C_ReportLoadingInfoToBI_Params
{
public:
	TArray<class FString>                        LoadingInfo;                                       // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LoadingTime;                                       // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFinished;                                       // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
struct USolarGameInstance_C_LuaGetBroadcastHeroNameCopy_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
struct USolarGameInstance_C_OnScopeChanged_Params
{
public:
	enum class EScope                            InLastScope;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScope                            InCurScope;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua
struct USolarGameInstance_C_SolarGM_AddWeaponExpLua_Params
{
public:
	int32                                        Weaponid;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerName
struct USolarGameInstance_C_LuaGetBroadcastPlayerName_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroName
struct USolarGameInstance_C_LuaGetBroadcastHeroName_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.ExecuteUbergraph_SolarGameInstance
struct USolarGameInstance_C_ExecuteUbergraph_SolarGameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


