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
	 * Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXBegin
	 */
	struct ABP_PBagsOffgas_Common_C_BackpackSFXBegin_Params
	{
	public:
		EFXJetType                                                 InJetType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GroundDetected;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.BackpackSFXEnd
	 */
	struct ABP_PBagsOffgas_Common_C_BackpackSFXEnd_Params
	{	};

	/**
	 * Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.OnBackpackTrailAssembling
	 */
	struct ABP_PBagsOffgas_Common_C_OnBackpackTrailAssembling_Params
	{
	public:
		struct FBackpackTrailAssemblingParams                      Params;                                                  // 0x0000(0x00A8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		EBackpackPropellingMode                                    PropellingMode;                                          // 0x00A8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PBagsOffgas_Common.BP_PBagsOffgas_Common_C.ExecuteUbergraph_BP_PBagsOffgas_Common
	 */
	struct ABP_PBagsOffgas_Common_C_ExecuteUbergraph_BP_PBagsOffgas_Common_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
