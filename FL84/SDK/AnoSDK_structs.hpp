#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETssSDKEntryId : uint8
{
	QZONE                          = 0,
	MM                             = 1,
	FACEBOOK                       = 2,
	TWITTER                        = 3,
	LINE                           = 4,
	WHATSAPP                       = 5,
	GAMECENTER                     = 6,
	GOOGLEPLAY                     = 7,
	VK                             = 8,
	KUAISHOU                       = 9,
	APPLE                          = 10,
	NEXON                          = 11,
	NAVER                          = 12,
	GARENA                         = 13,
	HUAWEI                         = 14,
	RIOT                           = 15,
	NINTENDO                       = 16,
	PSN                            = 17,
	MICROSOFT                      = 18,
	EA                             = 19,
	FARLIGHT                       = 20,
	OTHERS                         = 21,
	ETssSDKEntryId_MAX             = 22,
};

enum class ETssSDKRequestCmdId : uint8
{
	IsEmulator                     = 0,
	CommQuery                      = 1,
	InitSwitchStr                  = 2,
	ETssSDKRequestCmdId_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct AnoSDK.AnoSDKAntiData
struct FAnoSDKAntiData
{
public:
	int32                                        Length;                                            // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1005[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AntiData;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


