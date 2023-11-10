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
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.BPCalLuaInitDataCopy
	 */
	struct UUI_Target_Card_Medal_Item_C_BPCalLuaInitDataCopy_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.Destruct
	 */
	struct UUI_Target_Card_Medal_Item_C_Destruct_Params
	{	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.OnInitialized
	 */
	struct UUI_Target_Card_Medal_Item_C_OnInitialized_Params
	{	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.GetModuleName
	 */
	struct UUI_Target_Card_Medal_Item_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.BPCalLuaInitData
	 */
	struct UUI_Target_Card_Medal_Item_C_BPCalLuaInitData_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetSmallIcon
	 */
	struct UUI_Target_Card_Medal_Item_C_SetSmallIcon_Params
	{
	public:
		class UTexture2D*                                          NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewParam1;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.SetLargeIcon
	 */
	struct UUI_Target_Card_Medal_Item_C_SetLargeIcon_Params
	{
	public:
		class UTexture2D*                                          NewParam1;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NewParam;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.PreConstruct
	 */
	struct UUI_Target_Card_Medal_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ChangeTargetCardMedalView
	 */
	struct UUI_Target_Card_Medal_Item_C_ChangeTargetCardMedalView_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Target_Card_Medal_Item.UI_Target_Card_Medal_Item_C.ExecuteUbergraph_UI_Target_Card_Medal_Item
	 */
	struct UUI_Target_Card_Medal_Item_C_ExecuteUbergraph_UI_Target_Card_Medal_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
