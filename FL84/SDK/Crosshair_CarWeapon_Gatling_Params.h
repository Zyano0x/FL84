#pragma once

/**
 * Name: FL84
 * Version: 15.1
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
	 * Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.CalculateRotAngle
	 */
	struct UCrosshair_CarWeapon_Gatling_C_CalculateRotAngle_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InSpeed;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFire;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_841K[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OutAngle;                                                // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnUpdateGatlingRoll
	 */
	struct UCrosshair_CarWeapon_Gatling_C_OnUpdateGatlingRoll_Params
	{
	public:
		float                                                      DeltaTmie;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InRollSpeedInterp;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bWantFire;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.OnCrosshairInNormalState
	 */
	struct UCrosshair_CarWeapon_Gatling_C_OnCrosshairInNormalState_Params
	{	};

	/**
	 * Function Crosshair_CarWeapon_Gatling.Crosshair_CarWeapon_Gatling_C.ExecuteUbergraph_Crosshair_CarWeapon_Gatling
	 */
	struct UCrosshair_CarWeapon_Gatling_C_ExecuteUbergraph_Crosshair_CarWeapon_Gatling_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
