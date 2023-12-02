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
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetSelfInf
	 */
	struct UWarmupMatch_Result_Rank_C_SetSelfInf_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetTop3
	 */
	struct UWarmupMatch_Result_Rank_C_SetTop3_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.GetPNG＆Name
	 */
	struct UWarmupMatch_Result_Rank_C_GetPNGName_Params
	{
	public:
		class FString                                              PlayerId;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UTexture2D*                                          OutAvatar;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetRankList
	 */
	struct UWarmupMatch_Result_Rank_C_SetRankList_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.NaviList
	 */
	struct UWarmupMatch_Result_Rank_C_NaviList_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Construct List Item
	 */
	struct UWarmupMatch_Result_Rank_C_ConstructListItem_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VQDC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.SetIcon
	 */
	struct UWarmupMatch_Result_Rank_C_SetIcon_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Rank;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.OnDelayed
	 */
	struct UWarmupMatch_Result_Rank_C_OnDelayed_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.PreConstruct
	 */
	struct UWarmupMatch_Result_Rank_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Open
	 */
	struct UWarmupMatch_Result_Rank_C_Open_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Close
	 */
	struct UWarmupMatch_Result_Rank_C_Close_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWarmupMatch_Result_Rank_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__UI_Component_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWarmupMatch_Result_Rank_C_BndEvt__UI_Component_Close_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Construct
	 */
	struct UWarmupMatch_Result_Rank_C_Construct_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Rank
	 */
	struct UWarmupMatch_Result_Rank_C_Rank_Params
	{
	public:
		ESCMDataChangeType                                         ChangeType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3M13[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OldValue;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              NewValue;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.BndEvt__ListView_227_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
	 */
	struct UWarmupMatch_Result_Rank_C_BndEvt__ListView_227_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.Event_OpenLeaderboard
	 */
	struct UWarmupMatch_Result_Rank_C_Event_OpenLeaderboard_Params
	{	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.OnBackKey
	 */
	struct UWarmupMatch_Result_Rank_C_OnBackKey_Params
	{
	public:
		EWidgetBackKeyType                                         BackKeyType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WarmupMatch_Result_Rank.WarmupMatch_Result_Rank_C.ExecuteUbergraph_WarmupMatch_Result_Rank
	 */
	struct UWarmupMatch_Result_Rank_C_ExecuteUbergraph_WarmupMatch_Result_Rank_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
