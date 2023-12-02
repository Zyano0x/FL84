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
	 * Function BP_Character_Framework.BP_Character_Framework_C.GetWeaponLevelDamageBonus
	 */
	struct ABP_Character_Framework_C_GetWeaponLevelDamageBonus_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HMV7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.[A]GetHealthState
	 */
	struct ABP_Character_Framework_C_AGetHealthState_Params
	{
	public:
		E_CharacterHealthState                                     ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.[S]SkyDiveFly
	 */
	struct ABP_Character_Framework_C_SSkyDiveFly_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Height;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.[S]Set Sky Dive State
	 */
	struct ABP_Character_Framework_C_SSetSkyDiveState_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_84F20D844D539263D5B45F9EDF867241
	 */
	struct ABP_Character_Framework_C_OnCompleted_84F20D844D539263D5B45F9EDF867241_Params
	{
	public:
		class ASolarPlayerWeapon*                                  Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_C9B9AA40496B70A95EF897A2092C6753
	 */
	struct ABP_Character_Framework_C_OnCompleted_C9B9AA40496B70A95EF897A2092C6753_Params
	{
	public:
		class ASolarPlayerWeapon*                                  Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.OnCompleted_9F8149E84A6F3575574B32ADD8BF2960
	 */
	struct ABP_Character_Framework_C_OnCompleted_9F8149E84A6F3575574B32ADD8BF2960_Params
	{
	public:
		class ASolarPlayerWeapon*                                  Weapon;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.BeginPlayBlueprint
	 */
	struct ABP_Character_Framework_C_BeginPlayBlueprint_Params
	{	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.SetWeapon
	 */
	struct ABP_Character_Framework_C_SetWeapon_Params
	{
	public:
		EWeaponSlotType                                            Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MCW5[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    WeapoinId;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWeaponPartsData                                    Parts;                                                   // 0x0008(0x0014)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.BatchSetItem
	 */
	struct ABP_Character_Framework_C_BatchSetItem_Params
	{
	public:
		TArray<struct FS_AiItem>                                   ItemList;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.[s]GiveWeapon
	 */
	struct ABP_Character_Framework_C_sGiveWeapon_Params
	{
	public:
		bool                                                       bDestroyPrevWeapon;                                      // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWeaponSlotType                                            Slot;                                                    // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O77T[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ItemID;                                                  // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_Framework.BP_Character_Framework_C.ExecuteUbergraph_BP_Character_Framework
	 */
	struct ABP_Character_Framework_C_ExecuteUbergraph_BP_Character_Framework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
