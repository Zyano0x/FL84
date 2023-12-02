#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct S_WarmGameConfig.S_WarmGameConfig
	 * Size -> 0x0018
	 */
	struct FS_WarmGameConfig
	{
	public:
		class UClass*                                              WarmGameLogic_11_C4D3600041B8F0E806BDC09E30D6C1D0;       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FS_WarmGameAiConfig>                         AiTeammates_15_B5CA8DEC448F508FECCA08B77C240AFC;         // 0x0008(0x0010) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
