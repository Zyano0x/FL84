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
	 * Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.GetModuleName
	 */
	struct UUI_HUD_Notice_VICTORY_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.CloseSelf
	 */
	struct UUI_HUD_Notice_VICTORY_C_CloseSelf_Params
	{	};

	/**
	 * Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.OnEndAnimFinish
	 */
	struct UUI_HUD_Notice_VICTORY_C_OnEndAnimFinish_Params
	{	};

	/**
	 * Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.PreConstruct
	 */
	struct UUI_HUD_Notice_VICTORY_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.OnSolarUIClosed
	 */
	struct UUI_HUD_Notice_VICTORY_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_HUD_Notice_VICTORY.UI_HUD_Notice_VICTORY_C.ExecuteUbergraph_UI_HUD_Notice_VICTORY
	 */
	struct UUI_HUD_Notice_VICTORY_C_ExecuteUbergraph_UI_HUD_Notice_VICTORY_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
