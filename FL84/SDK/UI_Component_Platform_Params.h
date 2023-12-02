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
	 * Function UI_Component_Platform.UI_Component_Platform_C.SetBlendPlatform
	 */
	struct UUI_Component_Platform_C_SetBlendPlatform_Params
	{
	public:
		bool                                                       UseIcon;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Platform.UI_Component_Platform_C.SetSizeState
	 */
	struct UUI_Component_Platform_C_SetSizeState_Params
	{
	public:
		E_Platform                                                 Platform;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Component_Platform.UI_Component_Platform_C.PreConstruct
	 */
	struct UUI_Component_Platform_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Component_Platform.UI_Component_Platform_C.ExecuteUbergraph_UI_Component_Platform
	 */
	struct UUI_Component_Platform_C_ExecuteUbergraph_UI_Component_Platform_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
