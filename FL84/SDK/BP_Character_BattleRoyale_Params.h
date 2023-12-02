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
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.GetWeaponLevelDamageBonus
	 */
	struct ABP_Character_BattleRoyale_C_GetWeaponLevelDamageBonus_Params
	{
	public:
		float                                                      Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Death Cleanup UI
	 */
	struct ABP_Character_BattleRoyale_C_DeathCleanupUI_Params
	{	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.TakeDamageResolve
	 */
	struct ABP_Character_BattleRoyale_C_TakeDamageResolve_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_335M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSolarPointDamageEvent                              DamageEvent;                                             // 0x0008(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class ASCMPlayerState*                                     EventInstigator;                                         // 0x0118(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0128(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnShouldTakeDamage
	 */
	struct ABP_Character_BattleRoyale_C_OnShouldTakeDamage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CB50[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSolarPointDamageEvent                              DamageEvent;                                             // 0x0008(0x0110)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		class ASCMPlayerState*                                     EventInstigator;                                         // 0x0118(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              DamageCauser;                                            // 0x0120(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.SetReviveCameraFade
	 */
	struct ABP_Character_BattleRoyale_C_SetReviveCameraFade_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.ReceiveBeginPlay
	 */
	struct ABP_Character_BattleRoyale_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Debug Set DayAndNightTime
	 */
	struct ABP_Character_BattleRoyale_C_DebugSetDayAndNightTime_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.SetMapID
	 */
	struct ABP_Character_BattleRoyale_C_SetMapID_Params
	{
	public:
		int32_t                                                    MapID;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.Event_OnResBegin
	 */
	struct ABP_Character_BattleRoyale_C_Event_OnResBegin_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ResurrectType                                            Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SSMJ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_ResurrectInfo                                    options;                                                 // 0x0014(0x0005)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.BeginPlayBlueprint
	 */
	struct ABP_Character_BattleRoyale_C_BeginPlayBlueprint_Params
	{	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnCharacterEjectStateChanged
	 */
	struct ABP_Character_BattleRoyale_C_OnCharacterEjectStateChanged_Params
	{
	public:
		E_CharacterEjectState                                      State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.ExecuteUbergraph_BP_Character_BattleRoyale
	 */
	struct ABP_Character_BattleRoyale_C_ExecuteUbergraph_BP_Character_BattleRoyale_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Character_BattleRoyale.BP_Character_BattleRoyale_C.OnPlayerRevive__DelegateSignature
	 */
	struct ABP_Character_BattleRoyale_C_OnPlayerRevive__DelegateSignature_Params
	{
	public:
		class ASolarCharacter*                                     TargetCharacter;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
