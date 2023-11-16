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
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.Destruct
	 */
	struct UUI_Shop_Result_Sp_C_Destruct_Params
	{	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.ConstructCopy
	 */
	struct UUI_Shop_Result_Sp_C_ConstructCopy_Params
	{	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.OnInitialized
	 */
	struct UUI_Shop_Result_Sp_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.OnSolarUIOpened
	 */
	struct UUI_Shop_Result_Sp_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.OnBackKey
	 */
	struct UUI_Shop_Result_Sp_C_OnBackKey_Params
	{
	public:
		EWidgetBackKeyType                                         BackKeyType;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.OnSolarUIClosed
	 */
	struct UUI_Shop_Result_Sp_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.PlayEnterAnim
	 */
	struct UUI_Shop_Result_Sp_C_PlayEnterAnim_Params
	{	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.GetModuleName
	 */
	struct UUI_Shop_Result_Sp_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.Construct
	 */
	struct UUI_Shop_Result_Sp_C_Construct_Params
	{	};

	/**
	 * Function UI_Shop_Result_Sp.UI_Shop_Result_Sp_C.ExecuteUbergraph_UI_Shop_Result_Sp
	 */
	struct UUI_Shop_Result_Sp_C_ExecuteUbergraph_UI_Shop_Result_Sp_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
