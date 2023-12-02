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
	 * Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.GetModuleName
	 */
	struct UUI_CreateRoom_HUD_Prize_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.SetPrizeType
	 */
	struct UUI_CreateRoom_HUD_Prize_C_SetPrizeType_Params
	{
	public:
		int32_t                                                    PrizeType;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.PreConstruct
	 */
	struct UUI_CreateRoom_HUD_Prize_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_CreateRoom_HUD_Prize.UI_CreateRoom_HUD_Prize_C.ExecuteUbergraph_UI_CreateRoom_HUD_Prize
	 */
	struct UUI_CreateRoom_HUD_Prize_C_ExecuteUbergraph_UI_CreateRoom_HUD_Prize_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
