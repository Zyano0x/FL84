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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveBeginPlay
	 */
	struct ABP_Ability_UnlimitedAmmo_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ReceiveEndPlay
	 */
	struct ABP_Ability_UnlimitedAmmo_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.EndWhenUnhold
	 */
	struct ABP_Ability_UnlimitedAmmo_C_EndWhenUnhold_Params
	{	};

	/**
	 * Function BP_Ability_UnlimitedAmmo.BP_Ability_UnlimitedAmmo_C.ExecuteUbergraph_BP_Ability_UnlimitedAmmo
	 */
	struct ABP_Ability_UnlimitedAmmo_C_ExecuteUbergraph_BP_Ability_UnlimitedAmmo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
