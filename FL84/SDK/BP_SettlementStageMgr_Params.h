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
	 * Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.SkipToTarget
	 */
	struct UBP_SettlementStageMgr_C_SkipToTarget_Params
	{	};

	/**
	 * Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.CloseDiePage
	 */
	struct UBP_SettlementStageMgr_C_CloseDiePage_Params
	{	};

	/**
	 * Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowDiePage
	 */
	struct UBP_SettlementStageMgr_C_ShowDiePage_Params
	{	};

	/**
	 * Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.GetClassRelativePathName
	 */
	struct UBP_SettlementStageMgr_C_GetClassRelativePathName_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.Init
	 */
	struct UBP_SettlementStageMgr_C_Init_Params
	{	};

	/**
	 * Function BP_SettlementStageMgr.BP_SettlementStageMgr_C.ShowNextStage
	 */
	struct UBP_SettlementStageMgr_C_ShowNextStage_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
