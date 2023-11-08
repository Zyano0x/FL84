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
	 * Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.SetBindWidget
	 */
	struct UUI_TabControl_Vertical_C_SetBindWidget_Params
	{
	public:
		class UListView*                                           BindList;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.SetStyle
	 */
	struct UUI_TabControl_Vertical_C_SetStyle_Params
	{	};

	/**
	 * Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.PreConstruct
	 */
	struct UUI_TabControl_Vertical_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabControl_Vertical.UI_TabControl_Vertical_C.ExecuteUbergraph_UI_TabControl_Vertical
	 */
	struct UUI_TabControl_Vertical_C_ExecuteUbergraph_UI_TabControl_Vertical_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
