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
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.Destruct
	 */
	struct UUI_Component_Keyboard_C_Destruct_Params
	{	};

	/**
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.ConstructCopy
	 */
	struct UUI_Component_Keyboard_C_ConstructCopy_Params
	{	};

	/**
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.OnInitialized
	 */
	struct UUI_Component_Keyboard_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.GetModuleName
	 */
	struct UUI_Component_Keyboard_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.BP_RefreshKeyboardUI
	 */
	struct UUI_Component_Keyboard_C_BP_RefreshKeyboardUI_Params
	{
	public:
		class UTextBlock*                                          InTxtKey;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UImage*                                              InImgBg;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USizeBox*                                            InSizeBox;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.PreConstruct
	 */
	struct UUI_Component_Keyboard_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.Construct
	 */
	struct UUI_Component_Keyboard_C_Construct_Params
	{	};

	/**
	 * Function UI_Component_Keyboard.UI_Component_Keyboard_C.ExecuteUbergraph_UI_Component_Keyboard
	 */
	struct UUI_Component_Keyboard_C_ExecuteUbergraph_UI_Component_Keyboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
