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
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.MeerkatTriggerReport
	 */
	struct ABP_Controller_Framework_C_MeerkatTriggerReport_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.UpdateAiPalRate
	 */
	struct ABP_Controller_Framework_C_UpdateAiPalRate_Params
	{
	public:
		int32_t                                                    Rate;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.OnRep_EnableAiPalRate
	 */
	struct ABP_Controller_Framework_C_OnRep_EnableAiPalRate_Params
	{	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.OnNotifyLockPlayer
	 */
	struct ABP_Controller_Framework_C_OnNotifyLockPlayer_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.RequestNotifyLockPlayer
	 */
	struct ABP_Controller_Framework_C_RequestNotifyLockPlayer_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.InpActEvt_GMT_K2Node_InputActionEvent_1
	 */
	struct ABP_Controller_Framework_C_InpActEvt_GMT_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.InputReviveSelfReleased
	 */
	struct ABP_Controller_Framework_C_InputReviveSelfReleased_Params
	{	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.AssembleCustomAntiCheatData
	 */
	struct ABP_Controller_Framework_C_AssembleCustomAntiCheatData_Params
	{
	public:
		class ASolarWeapon*                                        ActiveWeapon;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASolarVehiclePawn*                                   BoardedVehicle;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.CustomAntiCheatDataExport
	 */
	struct ABP_Controller_Framework_C_CustomAntiCheatDataExport_Params
	{
	public:
		TArray<class FString>                                      DataName;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class FString>                                      DataContent;                                             // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.ClientNotifyLockPlayer
	 */
	struct ABP_Controller_Framework_C_ClientNotifyLockPlayer_Params
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.RpcClientRepAceStatusToServer
	 */
	struct ABP_Controller_Framework_C_RpcClientRepAceStatusToServer_Params
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Controller_Framework.BP_Controller_Framework_C.ExecuteUbergraph_BP_Controller_Framework
	 */
	struct ABP_Controller_Framework_C_ExecuteUbergraph_BP_Controller_Framework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U953[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
