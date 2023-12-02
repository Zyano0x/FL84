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
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Set Btn Vis
	 */
	struct UUI_BuyResurrectionPanel_C_SetBtnVis_Params
	{
	public:
		bool                                                       Show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Set Btna And Tip Visibility
	 */
	struct UUI_BuyResurrectionPanel_C_SetBtnaAndTipVisibility_Params
	{
	public:
		bool                                                       Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_023D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Event_Init
	 */
	struct UUI_BuyResurrectionPanel_C_Event_Init_Params
	{
	public:
		class UBPC_BuyResurrection_C*                              BuyComp;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.EventOnStateChange
	 */
	struct UUI_BuyResurrectionPanel_C_EventOnStateChange_Params
	{
	public:
		EResurrectionState                                         NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Tick
	 */
	struct UUI_BuyResurrectionPanel_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.OnReviveStateChange
	 */
	struct UUI_BuyResurrectionPanel_C_OnReviveStateChange_Params
	{
	public:
		class ASolarPlayerState*                                   RevivingMePlayer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.BndEvt__Panel_Interact_Progress_K2Node_ComponentBoundEvent_1_SimpleDynamicMulticastDelegate__DelegateSignature
	 */
	struct UUI_BuyResurrectionPanel_C_BndEvt__Panel_Interact_Progress_K2Node_ComponentBoundEvent_1_SimpleDynamicMulticastDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.Notify Teammate Revive
	 */
	struct UUI_BuyResurrectionPanel_C_NotifyTeammateRevive_Params
	{	};

	/**
	 * Function UI_BuyResurrectionPanel.UI_BuyResurrectionPanel_C.ExecuteUbergraph_UI_BuyResurrectionPanel
	 */
	struct UUI_BuyResurrectionPanel_C_ExecuteUbergraph_UI_BuyResurrectionPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CWI3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
