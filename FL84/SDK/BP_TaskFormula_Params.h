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
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeHoverCarInWaterDistance
	 */
	struct ABP_TaskFormula_C_SmallModeHoverCarInWaterDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeHoverCarInWaterDistance
	 */
	struct ABP_TaskFormula_C_BigModeHoverCarInWaterDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModePosionWalkDistance
	 */
	struct ABP_TaskFormula_C_SmallModePosionWalkDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeSwimDistance
	 */
	struct ABP_TaskFormula_C_SmallModeSwimDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModePosionWalkDistance
	 */
	struct ABP_TaskFormula_C_BigModePosionWalkDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeSwimDistance
	 */
	struct ABP_TaskFormula_C_BigModeSwimDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeAvatarKillNum
	 */
	struct ABP_TaskFormula_C_BigModeAvatarKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeWeaponTypeKillNum
	 */
	struct ABP_TaskFormula_C_BigModeWeaponTypeKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.GetCurWeaponType
	 */
	struct ABP_TaskFormula_C_GetCurWeaponType_Params
	{
	public:
		EWeaponType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_08FK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.Get Drive Vehicle ID
	 */
	struct ABP_TaskFormula_C_GetDriveVehicleID_Params
	{
	public:
		int32_t                                                    AssignedCharacterID;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YU05[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeTotalVehicleDamage
	 */
	struct ABP_TaskFormula_C_BigModeTotalVehicleDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeWeaponTypeDamage
	 */
	struct ABP_TaskFormula_C_SmallModeWeaponTypeDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeWeaponTypeDamage
	 */
	struct ABP_TaskFormula_C_BigModeWeaponTypeDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeWeaponDamage
	 */
	struct ABP_TaskFormula_C_SmallModeWeaponDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeWeaponDamage
	 */
	struct ABP_TaskFormula_C_BigModeWeaponDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeWeaponKillNum
	 */
	struct ABP_TaskFormula_C_SmallModeWeaponKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeWeaponKillNum
	 */
	struct ABP_TaskFormula_C_BigModeWeaponKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeLifeTime
	 */
	struct ABP_TaskFormula_C_SmallModeLifeTime_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeIntValuePlus
	 */
	struct ABP_TaskFormula_C_SmallModeIntValuePlus_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.BigModeIntValuePlus
	 */
	struct ABP_TaskFormula_C_BigModeIntValuePlus_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.AnyIntValuePlus
	 */
	struct ABP_TaskFormula_C_AnyIntValuePlus_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYBigModeLifeTime
	 */
	struct ABP_TaskFormula_C_TYBigModeLifeTime_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYAnyModeFlyCount
	 */
	struct ABP_TaskFormula_C_TYAnyModeFlyCount_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYBigModeAssistNum
	 */
	struct ABP_TaskFormula_C_TYBigModeAssistNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYAnyModeAssistNum
	 */
	struct ABP_TaskFormula_C_TYAnyModeAssistNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYBigModeHealSelf
	 */
	struct ABP_TaskFormula_C_TYBigModeHealSelf_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYAnyModeHealSelf
	 */
	struct ABP_TaskFormula_C_TYAnyModeHealSelf_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYBigModeSaveCount
	 */
	struct ABP_TaskFormula_C_TYBigModeSaveCount_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYModeCauseDamage
	 */
	struct ABP_TaskFormula_C_TYModeCauseDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYBigModeCauseDamage
	 */
	struct ABP_TaskFormula_C_TYBigModeCauseDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYAnyModeCauseDamage
	 */
	struct ABP_TaskFormula_C_TYAnyModeCauseDamage_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYBigModeKillDownNum
	 */
	struct ABP_TaskFormula_C_TYBigModeKillDownNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYAnyModeKillDownNum
	 */
	struct ABP_TaskFormula_C_TYAnyModeKillDownNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYModeSingleKillNum
	 */
	struct ABP_TaskFormula_C_TYModeSingleKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.GetWeaponTypeStartIndexPlus1
	 */
	struct ABP_TaskFormula_C_GetWeaponTypeStartIndexPlus1_Params
	{
	public:
		int32_t                                                    WeaponType;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.SmallModeWeaponTypeKillNum
	 */
	struct ABP_TaskFormula_C_SmallModeWeaponTypeKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.GetCurCharacterID
	 */
	struct ABP_TaskFormula_C_GetCurCharacterID_Params
	{
	public:
		int32_t                                                    AssignedCharacterID;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XHV2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYModeAvatarKillNum
	 */
	struct ABP_TaskFormula_C_TYModeAvatarKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.GetCurWeaponID
	 */
	struct ABP_TaskFormula_C_GetCurWeaponID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WS61[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYModeWeaponKillNum
	 */
	struct ABP_TaskFormula_C_TYModeWeaponKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYModeKillNum
	 */
	struct ABP_TaskFormula_C_TYModeKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYDriveAnyVechileDistance
	 */
	struct ABP_TaskFormula_C_TYDriveAnyVechileDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYUseAvatarKillNum
	 */
	struct ABP_TaskFormula_C_TYUseAvatarKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYDriveVechileDistance
	 */
	struct ABP_TaskFormula_C_TYDriveVechileDistance_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.GetSolarPlayerState
	 */
	struct ABP_TaskFormula_C_GetSolarPlayerState_Params
	{
	public:
		class ASolarPlayerState*                                   OutResult;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_TaskFormula.BP_TaskFormula_C.TYWeaponKillNum
	 */
	struct ABP_TaskFormula_C_TYWeaponKillNum_Params
	{
	public:
		int64_t                                                    TaskID;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
