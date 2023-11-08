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
	 * Function UI_Settings_Basic_Injury.UI_Settings_Basic_Injury_C.SetType
	 */
	struct UUI_Settings_Basic_Injury_C_SetType_Params
	{
	public:
		bool                                                       _3D;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Basic_Injury.UI_Settings_Basic_Injury_C.SetState
	 */
	struct UUI_Settings_Basic_Injury_C_SetState_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Basic_Injury.UI_Settings_Basic_Injury_C.PreConstruct
	 */
	struct UUI_Settings_Basic_Injury_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Basic_Injury.UI_Settings_Basic_Injury_C.BndEvt__SolarCheckButton_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Settings_Basic_Injury_C_BndEvt__SolarCheckButton_Default_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Settings_Basic_Injury.UI_Settings_Basic_Injury_C.OnSelected
	 */
	struct UUI_Settings_Basic_Injury_C_OnSelected_Params
	{
	public:
		bool                                                       bSelected;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Basic_Injury.UI_Settings_Basic_Injury_C.ExecuteUbergraph_UI_Settings_Basic_Injury
	 */
	struct UUI_Settings_Basic_Injury_C_ExecuteUbergraph_UI_Settings_Basic_Injury_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
