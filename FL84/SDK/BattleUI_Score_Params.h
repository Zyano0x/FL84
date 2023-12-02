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
	 * Function BattleUI_Score.BattleUI_Score_C.GetModuleName
	 */
	struct UBattleUI_Score_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.CustomEvent_1
	 */
	struct UBattleUI_Score_C_CustomEvent_1_Params
	{	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.CustomEvent_2
	 */
	struct UBattleUI_Score_C_CustomEvent_2_Params
	{
	public:
		ESCMDataChangeType                                         ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KNN2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.CustomEvent_3
	 */
	struct UBattleUI_Score_C_CustomEvent_3_Params
	{
	public:
		ESCMDataChangeType                                         ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KDO3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.Construct
	 */
	struct UBattleUI_Score_C_Construct_Params
	{	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.OnSpectateInfoRep_Event
	 */
	struct UBattleUI_Score_C_OnSpectateInfoRep_Event_Params
	{
	public:
		class ASolarSpectateInfo*                                  SpectateInfo;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.OnSpectateTargetChanged_Event
	 */
	struct UBattleUI_Score_C_OnSpectateTargetChanged_Event_Params
	{
	public:
		class ASolarPlayerState*                                   OldTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASolarSpectateInfo*                                  SpectateInfo;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.OnSpectateTargetKillNumChanged
	 */
	struct UBattleUI_Score_C_OnSpectateTargetKillNumChanged_Params
	{
	public:
		ESCMDataChangeType                                         ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AKCE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OldValue;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewValue;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BattleUI_Score.BattleUI_Score_C.ExecuteUbergraph_BattleUI_Score
	 */
	struct UBattleUI_Score_C_ExecuteUbergraph_BattleUI_Score_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UG2Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
