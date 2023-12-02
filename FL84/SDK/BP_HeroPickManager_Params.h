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
	 * Function BP_HeroPickManager.BP_HeroPickManager_C.ReceiveAllHeroPickEnd
	 */
	struct ABP_HeroPickManager_C_ReceiveAllHeroPickEnd_Params
	{	};

	/**
	 * Function BP_HeroPickManager.BP_HeroPickManager_C.ReceiveTeamPickHeroEnd
	 */
	struct ABP_HeroPickManager_C_ReceiveTeamPickHeroEnd_Params
	{
	public:
		class FString                                              TeamName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeroPickManager.BP_HeroPickManager_C.ExecuteUbergraph_BP_HeroPickManager
	 */
	struct ABP_HeroPickManager_C_ExecuteUbergraph_BP_HeroPickManager_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E0UL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_HeroPickManager.BP_HeroPickManager_C.OnSideHeroPickEnd__DelegateSignature
	 */
	struct ABP_HeroPickManager_C_OnSideHeroPickEnd__DelegateSignature_Params
	{
	public:
		class FString                                              Side;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HeroPickManager.BP_HeroPickManager_C.OnAllHeroPickEnd__DelegateSignature
	 */
	struct ABP_HeroPickManager_C_OnAllHeroPickEnd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
