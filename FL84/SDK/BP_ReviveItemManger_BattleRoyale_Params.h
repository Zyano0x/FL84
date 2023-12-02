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
	 * Function BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C.GetSingleCruiseEndCenter
	 */
	struct ABP_ReviveItemManger_BattleRoyale_C_GetSingleCruiseEndCenter_Params
	{
	public:
		struct FVector                                             DeathBoxLocation;                                        // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ReviveItemManger_BattleRoyale.BP_ReviveItemManger_BattleRoyale_C.RevivePlayer
	 */
	struct ABP_ReviveItemManger_BattleRoyale_C_RevivePlayer_Params
	{
	public:
		unsigned char                                              UnknownData_5S3F[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          _;                                                       // 0x0010(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       _bool_;                                                  // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QDDC[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
