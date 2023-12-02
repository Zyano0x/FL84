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
	 * Function FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C.[s]UpdateTeamCountMax
	 */
	struct UFL_Mode_BattleRoyale_C_sUpdateTeamCountMax_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L8KR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_Mode_BattleRoyale.FL_Mode_BattleRoyale_C.OutputLog
	 */
	struct UFL_Mode_BattleRoyale_C_OutputLog_Params
	{
	public:
		E_BattleLog_BattleRoyale                                   LogType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYAR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<class FString, class FString>                         InputPin;                                                // 0x0008(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
