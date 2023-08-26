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
	 * Function UI_LoadingBase.UI_LoadingBase_C.StartLoading
	 */
	struct UUI_LoadingBase_C_StartLoading_Params
	{	};

	/**
	 * Function UI_LoadingBase.UI_LoadingBase_C.FinishLoading
	 */
	struct UUI_LoadingBase_C_FinishLoading_Params
	{	};

	/**
	 * Function UI_LoadingBase.UI_LoadingBase_C.ExecuteUbergraph_UI_LoadingBase
	 */
	struct UUI_LoadingBase_C_ExecuteUbergraph_UI_LoadingBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
