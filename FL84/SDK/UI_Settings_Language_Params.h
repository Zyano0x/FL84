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
	 * Function UI_Settings_Language.UI_Settings_Language_C.GetModuleName
	 */
	struct UUI_Settings_Language_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings_Language.UI_Settings_Language_C.SendEventLanguageChanged
	 */
	struct UUI_Settings_Language_C_SendEventLanguageChanged_Params
	{	};

	/**
	 * Function UI_Settings_Language.UI_Settings_Language_C.Construct
	 */
	struct UUI_Settings_Language_C_Construct_Params
	{	};

	/**
	 * Function UI_Settings_Language.UI_Settings_Language_C.ExecuteUbergraph_UI_Settings_Language
	 */
	struct UUI_Settings_Language_C_ExecuteUbergraph_UI_Settings_Language_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
