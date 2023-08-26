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
	 * Function UI_TabControl_Horizontal_Slot.UI_TabControl_Horizontal_Slot_C.InitWidget
	 */
	struct UUI_TabControl_Horizontal_Slot_C_InitWidget_Params
	{
	public:
		class USolarRedHint_General_C*                             HintWidget;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USolarTextBlock*                                     Text;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              Icon;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Horizontal_Slot.UI_TabControl_Horizontal_Slot_C.SetStyle
	 */
	struct UUI_TabControl_Horizontal_Slot_C_SetStyle_Params
	{
	public:
		E_TabStyle                                                 Style;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Horizontal_Slot.UI_TabControl_Horizontal_Slot_C.SetSelected
	 */
	struct UUI_TabControl_Horizontal_Slot_C_SetSelected_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
