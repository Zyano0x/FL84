#pragma once

/**
 * Name: FL84
 * Version: 1.14.4.6.511026
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
	 * Function Environment_Lighting.Environment_Lighting_C.GetModuleName
	 */
	struct AEnvironment_Lighting_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function Environment_Lighting.Environment_Lighting_C.SetLight
	 */
	struct AEnvironment_Lighting_C_SetLight_Params
	{
	public:
		class FString                                              SceneName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Environment_Lighting.Environment_Lighting_C.SetCardSkyLightData
	 */
	struct AEnvironment_Lighting_C_SetCardSkyLightData_Params
	{
	public:
		float                                                      Indensity;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Environment_Lighting.Environment_Lighting_C.ExecuteUbergraph_Environment_Lighting
	 */
	struct AEnvironment_Lighting_C_ExecuteUbergraph_Environment_Lighting_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S76B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
