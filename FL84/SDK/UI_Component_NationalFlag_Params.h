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
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.IsExclusiveFlagId
	 */
	struct UUI_Component_NationalFlag_C_IsExclusiveFlagId_Params
	{
	public:
		int32_t                                                    InFlagID;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetDefaultClanFlag
	 */
	struct UUI_Component_NationalFlag_C_SetDefaultClanFlag_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Construct
	 */
	struct UUI_Component_NationalFlag_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnInitialized
	 */
	struct UUI_Component_NationalFlag_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnSolarUIClosed
	 */
	struct UUI_Component_NationalFlag_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.IsBroadCastMode
	 */
	struct UUI_Component_NationalFlag_C_IsBroadCastMode_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetDefaultNationalFlag
	 */
	struct UUI_Component_NationalFlag_C_SetDefaultNationalFlag_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Destruct
	 */
	struct UUI_Component_NationalFlag_C_Destruct_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.LoadClanFlagByUrl
	 */
	struct UUI_Component_NationalFlag_C_LoadClanFlagByUrl_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.OnSolarUIOpened
	 */
	struct UUI_Component_NationalFlag_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.GetModuleName
	 */
	struct UUI_Component_NationalFlag_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetEmptyClan
	 */
	struct UUI_Component_NationalFlag_C_SetEmptyClan_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetFlagType
	 */
	struct UUI_Component_NationalFlag_C_SetFlagType_Params
	{
	public:
		E_FlagType                                                 FlagType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VWSJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.Set UI State
	 */
	struct UUI_Component_NationalFlag_C_SetUIState_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.PreConstruct
	 */
	struct UUI_Component_NationalFlag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetNationalFlagType
	 */
	struct UUI_Component_NationalFlag_C_SetNationalFlagType_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.SetClanFlagType
	 */
	struct UUI_Component_NationalFlag_C_SetClanFlagType_Params
	{	};

	/**
	 * Function UI_Component_NationalFlag.UI_Component_NationalFlag_C.ExecuteUbergraph_UI_Component_NationalFlag
	 */
	struct UUI_Component_NationalFlag_C_ExecuteUbergraph_UI_Component_NationalFlag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
