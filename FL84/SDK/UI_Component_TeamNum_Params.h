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
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnSolarUIOpened
	 */
	struct UUI_Component_TeamNum_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnInitialized
	 */
	struct UUI_Component_TeamNum_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnShow
	 */
	struct UUI_Component_TeamNum_C_OnShow_Params
	{	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.OnSolarUIClosed
	 */
	struct UUI_Component_TeamNum_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.GetModuleName
	 */
	struct UUI_Component_TeamNum_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.Set Team Num
	 */
	struct UUI_Component_TeamNum_C_SetTeamNum_Params
	{
	public:
		E_Type_TeamNum                                             Index;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetSelected
	 */
	struct UUI_Component_TeamNum_C_SetSelected_Params
	{
	public:
		bool                                                       Selected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetColor
	 */
	struct UUI_Component_TeamNum_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        InColorAndOpacity;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.SetType
	 */
	struct UUI_Component_TeamNum_C_SetType_Params
	{	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.PreConstruct
	 */
	struct UUI_Component_TeamNum_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_TeamNum.UI_Component_TeamNum_C.ExecuteUbergraph_UI_Component_TeamNum
	 */
	struct UUI_Component_TeamNum_C_ExecuteUbergraph_UI_Component_TeamNum_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
