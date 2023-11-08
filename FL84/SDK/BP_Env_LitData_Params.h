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
	 * Function BP_Env_LitData.BP_Env_LitData_C.Toggle Env Lighting
	 */
	struct ABP_Env_LitData_C_ToggleEnvLighting_Params
	{
	public:
		bool                                                       bUseDefaultLight;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_HONQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.SetEdgeLightSetting
	 */
	struct ABP_Env_LitData_C_SetEdgeLightSetting_Params
	{
	public:
		struct FStr_EdgeLightSetting                               EdgeLightSetting;                                        // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.Add or Set Light Data Element
	 */
	struct ABP_Env_LitData_C_AddorSetLightDataElement_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.LoadSceneLightData
	 */
	struct ABP_Env_LitData_C_LoadSceneLightData_Params
	{
	public:
		class FString                                              Key;                                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.MakeLightData
	 */
	struct ABP_Env_LitData_C_MakeLightData_Params
	{	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.SaveLightData
	 */
	struct ABP_Env_LitData_C_SaveLightData_Params
	{	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.LoadLightData
	 */
	struct ABP_Env_LitData_C_LoadLightData_Params
	{	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.SetDirectionalLightSetting
	 */
	struct ABP_Env_LitData_C_SetDirectionalLightSetting_Params
	{
	public:
		class ADirectionalLight*                                   DirectionalLight;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStr_DirectionalLightSetting                        Str_DirectionalLightSetting;                             // 0x0008(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.SetSkyLightSetting
	 */
	struct ABP_Env_LitData_C_SetSkyLightSetting_Params
	{
	public:
		class ASkyLight*                                           SkyLight;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FStr_SkyLightSetting                                Str_SkyLightSetting;                                     // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.ReceiveBeginPlay
	 */
	struct ABP_Env_LitData_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Env_LitData.BP_Env_LitData_C.ExecuteUbergraph_BP_Env_LitData
	 */
	struct ABP_Env_LitData_C_ExecuteUbergraph_BP_Env_LitData_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
