#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.5.503427
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AnoSDK.ETssSDKEntryId
	 */
	enum class ETssSDKEntryId : uint8_t
	{
		QZONE      = 0,
		MM         = 1,
		FACEBOOK   = 2,
		TWITTER    = 3,
		LINE       = 4,
		WHATSAPP   = 5,
		GAMECENTER = 6,
		GOOGLEPLAY = 7,
		VK         = 8,
		KUAISHOU   = 9,
		APPLE      = 10,
		NEXON      = 11,
		NAVER      = 12,
		GARENA     = 13,
		HUAWEI     = 14,
		RIOT       = 15,
		NINTENDO   = 16,
		PSN        = 17,
		MICROSOFT  = 18,
		EA         = 19,
		FARLIGHT   = 20,
		OTHERS     = 21,
		MAX        = 22
	};

	/**
	 * Enum AnoSDK.ETssSDKRequestCmdId
	 */
	enum class ETssSDKRequestCmdId : uint8_t
	{
		IsEmulator    = 0,
		CommQuery     = 1,
		InitSwitchStr = 2,
		MAX           = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnoSDK.AnoSDKAntiData
	 * Size -> 0x0018
	 */
	struct FAnoSDKAntiData
	{
	public:
		int32_t                                                    Length;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT4F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AntiData;                                                // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
