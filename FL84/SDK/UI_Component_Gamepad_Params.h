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
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.Destruct
	 */
	struct UUI_Component_Gamepad_C_Destruct_Params
	{	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.Construct
	 */
	struct UUI_Component_Gamepad_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.OnInitialized
	 */
	struct UUI_Component_Gamepad_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetModuleName
	 */
	struct UUI_Component_Gamepad_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeySelection
	 */
	struct UUI_Component_Gamepad_C_SetMainKeySelection_Params
	{	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetMainKeyNormal
	 */
	struct UUI_Component_Gamepad_C_SetMainKeyNormal_Params
	{	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.GetGamepadIconByKey
	 */
	struct UUI_Component_Gamepad_C_GetGamepadIconByKey_Params
	{
	public:
		struct FKey                                                InKey;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		class UPaperSprite*                                        GamepadIcon;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.SetData
	 */
	struct UUI_Component_Gamepad_C_SetData_Params
	{
	public:
		struct FKey                                                ModifierKey;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		struct FKey                                                MainKey;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.PreConstruct
	 */
	struct UUI_Component_Gamepad_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Gamepad.UI_Component_Gamepad_C.ExecuteUbergraph_UI_Component_Gamepad
	 */
	struct UUI_Component_Gamepad_C_ExecuteUbergraph_UI_Component_Gamepad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
