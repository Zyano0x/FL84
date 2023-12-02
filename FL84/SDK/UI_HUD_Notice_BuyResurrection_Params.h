#pragma once

/**
 * Name: FL84
 * Version: 1.15.1.6
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
	 * Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.Construct
	 */
	struct UUI_HUD_Notice_BuyResurrection_C_Construct_Params
	{	};

	/**
	 * Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.ShowNotice
	 */
	struct UUI_HUD_Notice_BuyResurrection_C_ShowNotice_Params
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_HUD_Notice_BuyResurrection.UI_HUD_Notice_BuyResurrection_C.ExecuteUbergraph_UI_HUD_Notice_BuyResurrection
	 */
	struct UUI_HUD_Notice_BuyResurrection_C_ExecuteUbergraph_UI_HUD_Notice_BuyResurrection_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UP7B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
