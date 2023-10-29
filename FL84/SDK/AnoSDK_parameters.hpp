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

// 0x18 (0x18 - 0x0)
// DelegateFunction AnoSDK.AnoSDK.OnAnoSentAntiData__DelegateSignature
struct UAnoSDK_OnAnoSentAntiData__DelegateSignature_Params
{
public:
	struct FAnoSDKAntiData                       AntiData;                                          // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction AnoSDK.AnoSDK.OnAnoRecvAntiData__DelegateSignature
struct UAnoSDK_OnAnoRecvAntiData__DelegateSignature_Params
{
public:
	int32                                        Type;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AntiData;                                          // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AnoSDK.AnoSDK.GetInstance
struct UAnoSDK_GetInstance_Params
{
public:
	class UAnoSDK*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AnoSDK.AnoSDK.AnoUESDKSetUserInfo
struct UAnoSDK_AnoUESDKSetUserInfo_Params
{
public:
	enum class ETssSDKEntryId                    EntryId;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                OpenId;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AnoSDK.AnoSDK.AnoUESDKSetCSChannelDomain
struct UAnoSDK_AnoUESDKSetCSChannelDomain_Params
{
public:
	class FString                                DomainName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AnoSDK.AnoSDK.AnoUESDKSetChannelIP
struct UAnoSDK_AnoUESDKSetChannelIP_Params
{
public:
	class FString                                IP;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AnoSDK.AnoSDK.AnoUESDKOnRecvSignature
struct UAnoSDK_AnoUESDKOnRecvSignature_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Buf;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Len;                                               // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Crc;                                               // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AnoSDK.AnoSDK.AnoUESDKOnRecvData
struct UAnoSDK_AnoUESDKOnRecvData_Params
{
public:
	class FString                                Data;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AnoSDK.AnoSDK.AnoUESDKIoctl
struct UAnoSDK_AnoUESDKIoctl_Params
{
public:
	int32                                        Request;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Cmd;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AnoSDK.AnoSDK.AnoUESDKInit
struct UAnoSDK_AnoUESDKInit_Params
{
public:
	int32                                        GameID;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FFF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Appkey;                                            // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


