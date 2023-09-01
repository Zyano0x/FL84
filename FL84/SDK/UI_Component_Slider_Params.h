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
	 * Function UI_Component_Slider.UI_Component_Slider_C.GetModuleName
	 */
	struct UUI_Component_Slider_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.SetDIsabled
	 */
	struct UUI_Component_Slider_C_SetDIsabled_Params
	{
	public:
		bool                                                       NewParam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.Get_ProgressBar_Percent_1
	 */
	struct UUI_Component_Slider_C_Get_ProgressBar_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.SetOnlySlider
	 */
	struct UUI_Component_Slider_C_SetOnlySlider_Params
	{	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.SetTitleIsChecked
	 */
	struct UUI_Component_Slider_C_SetTitleIsChecked_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.PreConstruct
	 */
	struct UUI_Component_Slider_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.Construct
	 */
	struct UUI_Component_Slider_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Component_Slider_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.BndEvt__CheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
	 */
	struct UUI_Component_Slider_C_BndEvt__CheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       bIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.BP_RefreshSliderUI
	 */
	struct UUI_Component_Slider_C_BP_RefreshSliderUI_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.ExecuteUbergraph_UI_Component_Slider
	 */
	struct UUI_Component_Slider_C_ExecuteUbergraph_UI_Component_Slider_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Slider.UI_Component_Slider_C.OnTitleCheckStateChanged__DelegateSignature
	 */
	struct UUI_Component_Slider_C_OnTitleCheckStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
