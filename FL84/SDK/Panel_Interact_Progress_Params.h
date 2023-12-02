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
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToNonCancellableInteracting
	 */
	struct UPanel_Interact_Progress_C_RefreshToNonCancellableInteracting_Params
	{	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToCancellableInteracting
	 */
	struct UPanel_Interact_Progress_C_RefreshToCancellableInteracting_Params
	{	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.RefreshToPreInteract
	 */
	struct UPanel_Interact_Progress_C_RefreshToPreInteract_Params
	{	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.PlayFadeInAnim
	 */
	struct UPanel_Interact_Progress_C_PlayFadeInAnim_Params
	{	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.HidePassiveBuff
	 */
	struct UPanel_Interact_Progress_C_HidePassiveBuff_Params
	{	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.ShowPassiveBuff
	 */
	struct UPanel_Interact_Progress_C_ShowPassiveBuff_Params
	{
	public:
		int32_t                                                    CharacterId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LocalTextId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.EnablePassiveBuffDisplay
	 */
	struct UPanel_Interact_Progress_C_EnablePassiveBuffDisplay_Params
	{
	public:
		int32_t                                                    CharacterId;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LocalTextId;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetProgressBarRatio
	 */
	struct UPanel_Interact_Progress_C_SetProgressBarRatio_Params
	{
	public:
		float                                                      Ratio;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetProgressBarVisiblity
	 */
	struct UPanel_Interact_Progress_C_SetProgressBarVisiblity_Params
	{
	public:
		bool                                                       bShow;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.SetInteractType
	 */
	struct UPanel_Interact_Progress_C_SetInteractType_Params
	{
	public:
		E_Interact_Type                                            InteractType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.UpdateStateView
	 */
	struct UPanel_Interact_Progress_C_UpdateStateView_Params
	{
	public:
		ECountDownState                                            InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.PreConstruct
	 */
	struct UPanel_Interact_Progress_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.Construct
	 */
	struct UPanel_Interact_Progress_C_Construct_Params
	{	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.BP_UpdateStateView
	 */
	struct UPanel_Interact_Progress_C_BP_UpdateStateView_Params
	{
	public:
		ECountDownState                                            InState;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.BndEvt__Btn_Interact_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
	 */
	struct UPanel_Interact_Progress_C_BndEvt__Btn_Interact_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.OnAnimationFinished
	 */
	struct UPanel_Interact_Progress_C_OnAnimationFinished_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.OnAnimationStarted
	 */
	struct UPanel_Interact_Progress_C_OnAnimationStarted_Params
	{
	public:
		class UWidgetAnimation*                                    Animation;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Panel_Interact_Progress.Panel_Interact_Progress_C.ExecuteUbergraph_Panel_Interact_Progress
	 */
	struct UPanel_Interact_Progress_C_ExecuteUbergraph_Panel_Interact_Progress_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
