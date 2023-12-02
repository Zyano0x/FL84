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
	 * Function UI_Input_Device.UI_Input_Device_C.SetBlendPlatform
	 */
	struct UUI_Input_Device_C_SetBlendPlatform_Params
	{
	public:
		bool                                                       UseIcon;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Input_Device.UI_Input_Device_C.SetSizeState
	 */
	struct UUI_Input_Device_C_SetSizeState_Params
	{	};

	/**
	 * Function UI_Input_Device.UI_Input_Device_C.PreConstruct
	 */
	struct UUI_Input_Device_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Input_Device.UI_Input_Device_C.UpdateInputType
	 */
	struct UUI_Input_Device_C_UpdateInputType_Params
	{
	public:
		ECommonInputType                                           InputDevice;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Input_Device.UI_Input_Device_C.ExecuteUbergraph_UI_Input_Device
	 */
	struct UUI_Input_Device_C_ExecuteUbergraph_UI_Input_Device_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
