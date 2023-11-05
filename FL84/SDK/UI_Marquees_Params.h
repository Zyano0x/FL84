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
	 * Function UI_Marquees.UI_Marquees_C.Construct
	 */
	struct UUI_Marquees_C_Construct_Params
	{	};

	/**
	 * Function UI_Marquees.UI_Marquees_C.OnSolarUIClosed
	 */
	struct UUI_Marquees_C_OnSolarUIClosed_Params
	{	};

	/**
	 * Function UI_Marquees.UI_Marquees_C.ReceiveTick
	 */
	struct UUI_Marquees_C_ReceiveTick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function UI_Marquees.UI_Marquees_C.OnSolarUIOpened
	 */
	struct UUI_Marquees_C_OnSolarUIOpened_Params
	{	};

	/**
	 * Function UI_Marquees.UI_Marquees_C.GetModuleName
	 */
	struct UUI_Marquees_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Marquees.UI_Marquees_C.Tick
	 */
	struct UUI_Marquees_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Marquees.UI_Marquees_C.ExecuteUbergraph_UI_Marquees
	 */
	struct UUI_Marquees_C_ExecuteUbergraph_UI_Marquees_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
