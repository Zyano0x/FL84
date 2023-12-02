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
	 * Function BP_HUD_Framework.BP_HUD_Framework_C.RemoveInputActionFlagTeamDeath
	 */
	struct ABP_HUD_Framework_C_RemoveInputActionFlagTeamDeath_Params
	{	};

	/**
	 * Function BP_HUD_Framework.BP_HUD_Framework_C.AddInputActionFlagTeamDeath
	 */
	struct ABP_HUD_Framework_C_AddInputActionFlagTeamDeath_Params
	{	};

	/**
	 * Function BP_HUD_Framework.BP_HUD_Framework_C.BP_SCustomHUDBase_AutoGenFunc
	 */
	struct ABP_HUD_Framework_C_BP_SCustomHUDBase_AutoGenFunc_Params
	{
	public:
		class UObject*                                             Publisher;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      MetaData;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_Framework.BP_HUD_Framework_C.ReceiveBeginPlay
	 */
	struct ABP_HUD_Framework_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_HUD_Framework.BP_HUD_Framework_C.EventOnWindowVisibiltyChanged
	 */
	struct ABP_HUD_Framework_C_EventOnWindowVisibiltyChanged_Params
	{
	public:
		E_BattleUIType                                             UIType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_WidgetVisibility                                         Visibility;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_Framework.BP_HUD_Framework_C.ExecuteUbergraph_BP_HUD_Framework
	 */
	struct ABP_HUD_Framework_C_ExecuteUbergraph_BP_HUD_Framework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_HUD_Framework.BP_HUD_Framework_C.OnWindowVisibiltyChanged__DelegateSignature
	 */
	struct ABP_HUD_Framework_C_OnWindowVisibiltyChanged__DelegateSignature_Params
	{
	public:
		E_BattleUIType                                             UIType;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_WidgetVisibility                                         Visibility;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
