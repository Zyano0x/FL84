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
	 * Function UI_Component_Switch.UI_Component_Switch_C.SetType
	 */
	struct UUI_Component_Switch_C_SetType_Params
	{
	public:
		bool                                                       IsCircleType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Switch.UI_Component_Switch_C.InitValue
	 */
	struct UUI_Component_Switch_C_InitValue_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Switch.UI_Component_Switch_C.SetValue
	 */
	struct UUI_Component_Switch_C_SetValue_Params
	{
	public:
		bool                                                       InValue;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       CallChangeEvent;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       PlayAnimation;                                           // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Switch.UI_Component_Switch_C.PreConstruct
	 */
	struct UUI_Component_Switch_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Switch.UI_Component_Switch_C.BndEvt__TouchArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Component_Switch_C_BndEvt__TouchArea_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Switch.UI_Component_Switch_C.ExecuteUbergraph_UI_Component_Switch
	 */
	struct UUI_Component_Switch_C_ExecuteUbergraph_UI_Component_Switch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Switch.UI_Component_Switch_C.OnSwitchClicked__DelegateSignature
	 */
	struct UUI_Component_Switch_C_OnSwitchClicked__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Component_Switch.UI_Component_Switch_C.OnStateChanged__DelegateSignature
	 */
	struct UUI_Component_Switch_C_OnStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       NewValue;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
