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
	 * Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetPercentText
	 */
	struct UUI_UpdateLoadingBase_C_SetPercentText_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.SetImgBgHidden
	 */
	struct UUI_UpdateLoadingBase_C_SetImgBgHidden_Params
	{	};

	/**
	 * Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.PreConstruct
	 */
	struct UUI_UpdateLoadingBase_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.Tick
	 */
	struct UUI_UpdateLoadingBase_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_UpdateLoadingBase.UI_UpdateLoadingBase_C.ExecuteUbergraph_UI_UpdateLoadingBase
	 */
	struct UUI_UpdateLoadingBase_C_ExecuteUbergraph_UI_UpdateLoadingBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
