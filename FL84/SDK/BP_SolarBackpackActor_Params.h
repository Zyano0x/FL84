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
	 * Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.LobbyForceSetLOD
	 */
	struct ABP_SolarBackpackActor_C_LobbyForceSetLOD_Params
	{	};

	/**
	 * Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.TryCreateDynamicMaterialInstance
	 */
	struct ABP_SolarBackpackActor_C_TryCreateDynamicMaterialInstance_Params
	{
	public:
		class UPrimitiveComponent*                                 Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ElementIndex;                                            // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HXKX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  SourceMaterial;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                OptionlName;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Idle
	 */
	struct ABP_SolarBackpackActor_C_FX_Idle_Params
	{	};

	/**
	 * Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Flying
	 */
	struct ABP_SolarBackpackActor_C_FX_Flying_Params
	{	};

	/**
	 * Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Charging
	 */
	struct ABP_SolarBackpackActor_C_FX_Charging_Params
	{	};

	/**
	 * Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_LowPower
	 */
	struct ABP_SolarBackpackActor_C_FX_LowPower_Params
	{	};

	/**
	 * Function BP_SolarBackpackActor.BP_SolarBackpackActor_C.FX_Default
	 */
	struct ABP_SolarBackpackActor_C_FX_Default_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
