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
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnRefreshFirebaseToken_D26330CF4A5C97D39ED4019104AB1CED
struct USolarGameInstance_C_OnRefreshFirebaseToken_D26330CF4A5C97D39ED4019104AB1CED_Params
{
public:
	class FString                                FirebaseToken;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnClearCommunityRedhint_CA7AD73F4695A3CA84A8B1A4B37BDBE3
struct USolarGameInstance_C_OnClearCommunityRedhint_CA7AD73F4695A3CA84A8B1A4B37BDBE3_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnGetCommunityRedhint_29CA0E08465BB67B379E3C9372923A34
struct USolarGameInstance_C_OnGetCommunityRedhint_29CA0E08465BB67B379E3C9372923A34_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnExitCommunity_97313330486EFD85E3699EA253488B31
struct USolarGameInstance_C_OnExitCommunity_97313330486EFD85E3699EA253488B31_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnInitCommunity_0DA9F6D14D84C412ACB88BB308FFEC66
struct USolarGameInstance_C_OnInitCommunity_0DA9F6D14D84C412ACB88BB308FFEC66_Params
{
public:
	class FString                                ResultStr;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnQueryThirdPartyUserInfo_91CD94704EE345E09768829F654CA0D0
struct USolarGameInstance_C_OnQueryThirdPartyUserInfo_91CD94704EE345E09768829F654CA0D0_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSDKSocialUserInfo>            SocialUserInfoList;                                // 0x8(0x10)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFailed_91DC53B9427B177E164AD7B40100BFD9
struct USolarGameInstance_C_OnSwitchAccountFailed_91DC53B9427B177E164AD7B40100BFD9_Params
{
public:
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x21 (0x21 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnSwitchAccountFinish_E3ED595249623D73F22AE8A7EB1D871F
struct USolarGameInstance_C_OnSwitchAccountFinish_E3ED595249623D73F22AE8A7EB1D871F_Params
{
public:
	class FString                                AppUid;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x29 (0x29 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnBindFinish_D15B146942898A4B0ABC16A3D3467930
struct USolarGameInstance_C_OnBindFinish_D15B146942898A4B0ABC16A3D3467930_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AppUid;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppToken;                                          // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELLHSDKLoginType                  LoginType;                                         // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamSDKPayApplied_3EFCFFBD4B3473EEF02CA1B667556C6D
struct USolarGameInstance_C_OnLSteamSDKPayApplied_3EFCFFBD4B3473EEF02CA1B667556C6D_Params
{
public:
	class FString                                Datas;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction SolarGameInstance.SolarGameInstance_C.OnLSteamQuerySkus_F2AB076C4AEA7BD472FBA18C46F5F4D1
struct USolarGameInstance_C_OnLSteamQuerySkus_F2AB076C4AEA7BD472FBA18C46F5F4D1_Params
{
public:
	class FString                                Datas;                                             // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddWeaponExpLua
struct USolarGameInstance_C_SolarGM_AddWeaponExpLua_Params
{
public:
	int32                                        Weaponid;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.CheckSavedDirFiles
struct USolarGameInstance_C_CheckSavedDirFiles_Params
{
public:
	TArray<class FString>                        Files;                                             // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_AddItemLua
struct USolarGameInstance_C_SolarGM_AddItemLua_Params
{
public:
	int32                                        ItemID;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Count;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.LuaGetBroadcastHeroNameCopy
struct USolarGameInstance_C_LuaGetBroadcastHeroNameCopy_Params
{
public:
	class FString                                SolarPlayerID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                BroadcastPlayerName;                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
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

// 0x2 (0x2 - 0x0)
// Function SolarGameInstance.SolarGameInstance_C.HandleNetworkError
struct USolarGameInstance_C_HandleNetworkError_Params
{
public:
	enum class ENetworkFailure                   FailureType;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsServer;                                         // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
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
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_TransmitGMLua
struct USolarGameInstance_C_SolarGM_TransmitGMLua_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        GmArray;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
// Function SolarGameInstance.SolarGameInstance_C.SolarGM_LobbyLua
struct USolarGameInstance_C_SolarGM_LobbyLua_Params
{
public:
	class FString                                CmdName;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Params;                                            // 0x10(0x10)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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


