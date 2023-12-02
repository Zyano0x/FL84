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
	 * Function UI_AddFriend.UI_AddFriend_C.Construct
	 */
	struct UUI_AddFriend_C_Construct_Params
	{	};

	/**
	 * Function UI_AddFriend.UI_AddFriend_C.InitWidgetCopy
	 */
	struct UUI_AddFriend_C_InitWidgetCopy_Params
	{
	public:
		class FString                                              InPlayerID;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsBotAI;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BRLX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_AddFriend.UI_AddFriend_C.Destruct
	 */
	struct UUI_AddFriend_C_Destruct_Params
	{	};

	/**
	 * Function UI_AddFriend.UI_AddFriend_C.GetModuleName
	 */
	struct UUI_AddFriend_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_AddFriend.UI_AddFriend_C.InitWidget
	 */
	struct UUI_AddFriend_C_InitWidget_Params
	{
	public:
		class FString                                              InPlayerID;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsBotAI;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_07H3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_AddFriend.UI_AddFriend_C.PreConstruct
	 */
	struct UUI_AddFriend_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_AddFriend.UI_AddFriend_C.ExecuteUbergraph_UI_AddFriend
	 */
	struct UUI_AddFriend_C_ExecuteUbergraph_UI_AddFriend_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
