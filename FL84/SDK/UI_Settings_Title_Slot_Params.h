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
	 * Function UI_Settings_Title_Slot.UI_Settings_Title_Slot_C.UpdateTitle
	 */
	struct UUI_Settings_Title_Slot_C_UpdateTitle_Params
	{	};

	/**
	 * Function UI_Settings_Title_Slot.UI_Settings_Title_Slot_C.SetSettingsTitle
	 */
	struct UUI_Settings_Title_Slot_C_SetSettingsTitle_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Settings_Title_Slot.UI_Settings_Title_Slot_C.PreConstruct
	 */
	struct UUI_Settings_Title_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings_Title_Slot.UI_Settings_Title_Slot_C.ExecuteUbergraph_UI_Settings_Title_Slot
	 */
	struct UUI_Settings_Title_Slot_C_ExecuteUbergraph_UI_Settings_Title_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
