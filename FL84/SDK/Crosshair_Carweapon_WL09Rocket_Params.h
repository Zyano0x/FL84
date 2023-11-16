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
	 * Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoCounterChanged
	 */
	struct UCrosshair_Carweapon_WL09Rocket_C_OnAmmoCounterChanged_Params
	{
	public:
		int32_t                                                    Counter;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnAmmoChanged
	 */
	struct UCrosshair_Carweapon_WL09Rocket_C_OnAmmoChanged_Params
	{
	public:
		int32_t                                                    InReservedAmmo;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       InbFirst;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateReloadProgress
	 */
	struct UCrosshair_Carweapon_WL09Rocket_C_OnUpdateReloadProgress_Params
	{
	public:
		float                                                      InReloadProgress;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReservedAmmo;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnInitialized
	 */
	struct UCrosshair_Carweapon_WL09Rocket_C_OnInitialized_Params
	{	};

	/**
	 * Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnReloadFinished
	 */
	struct UCrosshair_Carweapon_WL09Rocket_C_OnReloadFinished_Params
	{
	public:
		bool                                                       InbReloadSuccess;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y8QE[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InReloadAmmo;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InReservedAmmo;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InMaxAmmo;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.OnUpdateAimTargetDistance
	 */
	struct UCrosshair_Carweapon_WL09Rocket_C_OnUpdateAimTargetDistance_Params
	{
	public:
		float                                                      InDistance;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_Carweapon_WL09Rocket.Crosshair_Carweapon_WL09Rocket_C.ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket
	 */
	struct UCrosshair_Carweapon_WL09Rocket_C_ExecuteUbergraph_Crosshair_Carweapon_WL09Rocket_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
