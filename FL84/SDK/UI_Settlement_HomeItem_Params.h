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
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnBackKey
	 */
	struct UUI_Settlement_HomeItem_C_OnBackKey_Params
	{
	public:
		EWidgetBackKeyType                                         BackKeyType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.EventCanContinueCopy
	 */
	struct UUI_Settlement_HomeItem_C_EventCanContinueCopy_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnSolarUIOpened
	 */
	struct UUI_Settlement_HomeItem_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnAnimationFinished
	 */
	struct UUI_Settlement_HomeItem_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnSolarUIClosed
	 */
	struct UUI_Settlement_HomeItem_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnInitialized
	 */
	struct UUI_Settlement_HomeItem_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.OnAnimationStarted
	 */
	struct UUI_Settlement_HomeItem_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PlayGoldAnimCopy
	 */
	struct UUI_Settlement_HomeItem_C_PlayGoldAnimCopy_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.GetModuleName
	 */
	struct UUI_Settlement_HomeItem_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_3
	 */
	struct UUI_Settlement_HomeItem_C_SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_3_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2
	 */
	struct UUI_Settlement_HomeItem_C_SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_2_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1
	 */
	struct UUI_Settlement_HomeItem_C_SequenceEvent__ENTRYPOINTUI_Settlement_HomeItem_1_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PreConstruct
	 */
	struct UUI_Settlement_HomeItem_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Construct
	 */
	struct UUI_Settlement_HomeItem_C_Construct_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.Tick
	 */
	struct UUI_Settlement_HomeItem_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.PlayGoldAnim
	 */
	struct UUI_Settlement_HomeItem_C_PlayGoldAnim_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.EventCanContinue
	 */
	struct UUI_Settlement_HomeItem_C_EventCanContinue_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.BP_EventSetBlur
	 */
	struct UUI_Settlement_HomeItem_C_BP_EventSetBlur_Params
	{	};

	/**
	 * Function UI_Settlement_HomeItem.UI_Settlement_HomeItem_C.ExecuteUbergraph_UI_Settlement_HomeItem
	 */
	struct UUI_Settlement_HomeItem_C_ExecuteUbergraph_UI_Settlement_HomeItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
