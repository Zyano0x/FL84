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
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.Destruct
	 */
	struct UUI_Component_Mouse_C_Destruct_Params
	{	};

	/**
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.Construct
	 */
	struct UUI_Component_Mouse_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.OnInitialized
	 */
	struct UUI_Component_Mouse_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.GetModuleName
	 */
	struct UUI_Component_Mouse_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.SetData
	 */
	struct UUI_Component_Mouse_C_SetData_Params
	{
	public:
		struct FKey                                                KeySetting;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		E_Type_Mouse                                               Type;                                                    // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Succeed;                                                 // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.UpdateImage
	 */
	struct UUI_Component_Mouse_C_UpdateImage_Params
	{	};

	/**
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.PreConstruct
	 */
	struct UUI_Component_Mouse_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Mouse.UI_Component_Mouse_C.ExecuteUbergraph_UI_Component_Mouse
	 */
	struct UUI_Component_Mouse_C_ExecuteUbergraph_UI_Component_Mouse_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
