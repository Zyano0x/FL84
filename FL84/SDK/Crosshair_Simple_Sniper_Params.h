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
	 * Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.InitializeCrosshairSpread
	 */
	struct UCrosshair_Simple_Sniper_C_InitializeCrosshairSpread_Params
	{
	public:
		float                                                      Spread;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.SetCrosshairSprite
	 */
	struct UCrosshair_Simple_Sniper_C_SetCrosshairSprite_Params
	{
	public:
		class UPaperSprite*                                        InSprite;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Crosshair_Simple_Sniper.Crosshair_Simple_Sniper_C.ExecuteUbergraph_Crosshair_Simple_Sniper
	 */
	struct UCrosshair_Simple_Sniper_C_ExecuteUbergraph_Crosshair_Simple_Sniper_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L8OC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
