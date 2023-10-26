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
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_43AD298B4D9AA53426215AAAA8F4AE8D
struct USolarGameInstance_C_OnRefreshFirebaseToken_43AD298B4D9AA53426215AAAA8F4AE8D_Params
{
public:
	class FString                                FirebaseToken;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_1E40B6C24E6081A20A059CAE5D73F90C
struct USolarGameInstance_C_OnClearCommunityRedhint_1E40B6C24E6081A20A059CAE5D73F90C_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_F536BFE243B680EC41C84E83E37271E0
struct USolarGameInstance_C_OnGetCommunityRedhint_F536BFE243B680EC41C84E83E37271E0_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_7AAFD51249B9CA1DF091AF9775F4EC3F
struct USolarGameInstance_C_OnExitCommunity_7AAFD51249B9CA1DF091AF9775F4EC3F_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_218E52FA4659652888D98AA6CAB701E8
struct USolarGameInstance_C_OnInitCommunity_218E52FA4659652888D98AA6CAB701E8_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_FFEF097A4F4731E6D58937BA9B1C545C
struct USolarGameInstance_C_OnQueryThirdPartyUserInfo_FFEF097A4F4731E6D58937BA9B1C545C_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSDKSocialUserInfo>            SocialUserInfoList;                                // 0x8(0x10)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_832F200344100743A868D4AEFA65D81F
struct USolarGameInstance_C_OnSwitchAccountFailed_832F200344100743A868D4AEFA65D81F_Params
{
public:
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18E9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x21 (0x21 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_7AC3331C433DDF22565CC89667595182
struct USolarGameInstance_C_OnSwitchAccountFinish_7AC3331C433DDF22565CC89667595182_Params
{
public:
	class FString                                AppUid;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x29 (0x29 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_86F02D61416335C191592983D17B87F7
struct USolarGameInstance_C_OnBindFinish_86F02D61416335C191592983D17B87F7_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AppUid;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_940506894F0595ACF1AAE8A7C169A764
struct USolarGameInstance_C_OnLSteamSDKPayApplied_940506894F0595ACF1AAE8A7C169A764_Params
{
public:
	class FString                                Datas;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_B2BBF52743882367CB5692AE0E63051D
struct USolarGameInstance_C_OnLSteamQuerySkus_B2BBF52743882367CB5692AE0E63051D_Params
{
public:
	class FString                                Datas;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
struct USolarGameInstance_C_SolarGM_AddItemLua_Params
{
public:
	int32                                        ItemID;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
struct USolarGameInstance_C_HandleNetworkError_Params
{
public:
	enum class ENetworkFailure                   FailureType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsServer;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
struct USolarGameInstance_C_LuaGetBroadcastHeroNameCopy_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua
struct USolarGameInstance_C_SolarGM_AddWeaponExpLua_Params
{
public:
	int32                                        Weaponid;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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

// 0x1 (0x1 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.ExecuteChangeAudioModeLuaCall
struct USolarGameInstance_C_ExecuteChangeAudioModeLuaCall_Params
{
public:
	bool                                         bTurnOn;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.OnScopeChanged
struct USolarGameInstance_C_OnScopeChanged_Params
{
public:
	enum class EScope                            InLastScope;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScope                            InCurScope;                                        // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastPlayerNameCopy
struct USolarGameInstance_C_LuaGetBroadcastPlayerNameCopy_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua
struct USolarGameInstance_C_SolarGM_LobbyLua_Params
{
public:
	class FString                                CmdName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Params;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
struct USolarGameInstance_C_SolarGM_TransmitGMLua_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        GmArray;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
struct USolarGameInstance_C_CheckSavedDirFiles_Params
{
public:
	TArray<class FString>                        Files;                                             // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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


