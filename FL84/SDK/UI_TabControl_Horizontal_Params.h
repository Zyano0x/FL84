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
	 * Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.SetBindWidget
	 */
	struct UUI_TabControl_Horizontal_C_SetBindWidget_Params
	{
	public:
		class UListView*                                           BindList;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.PreConstruct
	 */
	struct UUI_TabControl_Horizontal_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_TabControl_Horizontal.UI_TabControl_Horizontal_C.ExecuteUbergraph_UI_TabControl_Horizontal
	 */
	struct UUI_TabControl_Horizontal_C_ExecuteUbergraph_UI_TabControl_Horizontal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
