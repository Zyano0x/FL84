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
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_TeammatesState
	 */
	struct ABP_PlayerState_Framework_C_OnRep_TeammatesState_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateAccountExp
	 */
	struct ABP_PlayerState_Framework_C_CalculateAccountExp_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_BattleVoiceId
	 */
	struct ABP_PlayerState_Framework_C_OnRep_BattleVoiceId_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveEndPlay
	 */
	struct ABP_PlayerState_Framework_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateZomborg
	 */
	struct ABP_PlayerState_Framework_C_CalculateZomborg_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.NotifyUpdateTeamMateLevelUI
	 */
	struct ABP_PlayerState_Framework_C_NotifyUpdateTeamMateLevelUI_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChangedCopy
	 */
	struct ABP_PlayerState_Framework_C_OnResurrectTimeChangedCopy_Params
	{
	public:
		int32_t                                                    ResurrectTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Cfg_ResurrectTime;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_RTCType
	 */
	struct ABP_PlayerState_Framework_C_OnRep_RTCType_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_UserId
	 */
	struct ABP_PlayerState_Framework_C_OnRep_UserId_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnReceiveExposedLocation
	 */
	struct ABP_PlayerState_Framework_C_OnReceiveExposedLocation_Params
	{
	public:
		class ASolarPlayerState*                                   OtherPS;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetWeaponSettlmentExp
	 */
	struct ABP_PlayerState_Framework_C_GetWeaponSettlmentExp_Params
	{
	public:
		int32_t                                                    weaponid;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveClientInitialize
	 */
	struct ABP_PlayerState_Framework_C_ReceiveClientInitialize_Params
	{
	public:
		class AController*                                         C;                                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceivePostInitializeComponents
	 */
	struct ABP_PlayerState_Framework_C_ReceivePostInitializeComponents_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveTalentStateSet
	 */
	struct ABP_PlayerState_Framework_C_ReceiveTalentStateSet_Params
	{
	public:
		ETalentState                                               InState;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveSideReplicatedAfter
	 */
	struct ABP_PlayerState_Framework_C_ReceiveSideReplicatedAfter_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpAddValueFromItem
	 */
	struct ABP_PlayerState_Framework_C_GetExpAddValueFromItem_Params
	{
	public:
		int32_t                                                    ItemID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnStopReceiveExposedLocation
	 */
	struct ABP_PlayerState_Framework_C_OnStopReceiveExposedLocation_Params
	{
	public:
		class ASolarPlayerState*                                   OtherPS;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpSettleModePunishRatio
	 */
	struct ABP_PlayerState_Framework_C_GetExpSettleModePunishRatio_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveTeamIdReplicated
	 */
	struct ABP_PlayerState_Framework_C_ReceiveTeamIdReplicated_Params
	{
	public:
		bool                                                       bRelatedToSelf;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.LuaGetExpFromWeaponImplementation
	 */
	struct ABP_PlayerState_Framework_C_LuaGetExpFromWeaponImplementation_Params
	{
	public:
		EExpBehaviorType                                           InBehaviorType;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1KZY[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParamOne;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InParamTwo;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InDamage;                                                // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.CalculateCharacterExp
	 */
	struct ABP_PlayerState_Framework_C_CalculateCharacterExp_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetModuleName
	 */
	struct ABP_PlayerState_Framework_C_GetModuleName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChanged
	 */
	struct ABP_PlayerState_Framework_C_OnResurrectTimeChanged_Params
	{
	public:
		int32_t                                                    ResurrectTime;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Cfg_ResurrectTime;                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetResurrectLocation
	 */
	struct ABP_PlayerState_Framework_C_GetResurrectLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Remove All Revive Mark
	 */
	struct ABP_PlayerState_Framework_C_RemoveAllReviveMark_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetDeathBoxLocation
	 */
	struct ABP_PlayerState_Framework_C_GetDeathBoxLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VEFE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.PlayerCanRebirthBlueprint
	 */
	struct ABP_PlayerState_Framework_C_PlayerCanRebirthBlueprint_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LC9J[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_CharacterHealthState
	 */
	struct ABP_PlayerState_Framework_C_OnRep_CharacterHealthState_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Handling Is Resurrecting
	 */
	struct ABP_PlayerState_Framework_C_HandlingIsResurrecting_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetSpecialHitTypeArray
	 */
	struct ABP_PlayerState_Framework_C_GetSpecialHitTypeArray_Params
	{
	public:
		TArray<int32_t>                                            NewParam;                                                // 0x0000(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Set Death Box Ref
	 */
	struct ABP_PlayerState_Framework_C_SetDeathBoxRef_Params
	{
	public:
		class ABP_DBox_Default_C*                                  InDeathBox;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_bIsReviveSkydiving
	 */
	struct ABP_PlayerState_Framework_C_OnRep_bIsReviveSkydiving_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Remove Punctuation
	 */
	struct ABP_PlayerState_Framework_C_RemovePunctuation_Params
	{
	public:
		bool                                                       bKeepRebornLine;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_588F[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetExpByBehavior
	 */
	struct ABP_PlayerState_Framework_C_GetExpByBehavior_Params
	{
	public:
		EExpBehaviorType                                           InBehaviorType;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WVG3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InParamOne;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InParamTwo;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InDamage;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.IsAiCompCdClear
	 */
	struct ABP_PlayerState_Framework_C_IsAiCompCdClear_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_bIsResurrecting
	 */
	struct ABP_PlayerState_Framework_C_OnRep_bIsResurrecting_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Create Punctuation
	 */
	struct ABP_PlayerState_Framework_C_CreatePunctuation_Params
	{
	public:
		struct FVector                                             InputPin;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MFQS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetLogicBase
	 */
	struct ABP_PlayerState_Framework_C_GetLogicBase_Params
	{
	public:
		class UBP_Logic_Framework_C*                               Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnRep_ResurrectTime
	 */
	struct ABP_PlayerState_Framework_C_OnRep_ResurrectTime_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Death Cleanup UI
	 */
	struct ABP_PlayerState_Framework_C_DeathCleanupUI_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Get Resurrect UI
	 */
	struct ABP_PlayerState_Framework_C_GetResurrectUI_Params
	{
	public:
		class UUI_Resurrect_C*                                     Output_Get;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.GetLastDeathLocation
	 */
	struct ABP_PlayerState_Framework_C_GetLastDeathLocation_Params
	{
	public:
		struct FVector                                             Output;                                                  // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnCharacterLanded
	 */
	struct ABP_PlayerState_Framework_C_OnCharacterLanded_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnPlayerInteract
	 */
	struct ABP_PlayerState_Framework_C_OnPlayerInteract_Params
	{
	public:
		E_Interact_Type                                            InteractType;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ReceiveBeginPlay
	 */
	struct ABP_PlayerState_Framework_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnCharacterEjectStateChanged
	 */
	struct ABP_PlayerState_Framework_C_OnCharacterEjectStateChanged_Params
	{
	public:
		E_CharacterEjectState                                      State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JPR5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ASolarCharacter*                                     TargetCharacter;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnTimeCut
	 */
	struct ABP_PlayerState_Framework_C_OnTimeCut_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[s]RequestResurrectInTime
	 */
	struct ABP_PlayerState_Framework_C_sRequestResurrectInTime_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ResurrectType                                            Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QBXK[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_ResurrectInfo                                    options;                                                 // 0x0014(0x0005)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bUseParamZ;                                              // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[c]ShowResurrectUI
	 */
	struct ABP_PlayerState_Framework_C_cShowResurrectUI_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ResurrectType                                            Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.DropPickableItem
	 */
	struct ABP_PlayerState_Framework_C_DropPickableItem_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.PickupPickableItem
	 */
	struct ABP_PlayerState_Framework_C_PickupPickableItem_Params
	{
	public:
		class UObject*                                             Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_CreateDeathBoxMark
	 */
	struct ABP_PlayerState_Framework_C_Event_CreateDeathBoxMark_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_OnResEnd
	 */
	struct ABP_PlayerState_Framework_C_Event_OnResEnd_Params
	{
	public:
		E_ResurrectType                                            ResurrectType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D6J5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerState_Framework_C*                         TargetPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.AiCompCountDown
	 */
	struct ABP_PlayerState_Framework_C_AiCompCountDown_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ResetAiCompTimer
	 */
	struct ABP_PlayerState_Framework_C_ResetAiCompTimer_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnPlayerGainExperience
	 */
	struct ABP_PlayerState_Framework_C_OnPlayerGainExperience_Params
	{
	public:
		int32_t                                                    GainedExp;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentExp;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalExp;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EExpBehaviorType                                           BehaviorType;                                            // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[C]OnPlayerGainExperience
	 */
	struct ABP_PlayerState_Framework_C_COnPlayerGainExperience_Params
	{
	public:
		int32_t                                                    GainedExp;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentExp;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TotalExp;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EExpBehaviorType                                           Type;                                                    // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.Event_EnterSkydiveFly
	 */
	struct ABP_PlayerState_Framework_C_Event_EnterSkydiveFly_Params
	{	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnInteractBtnHit
	 */
	struct ABP_PlayerState_Framework_C_OnInteractBtnHit_Params
	{
	public:
		class UObject*                                             Publisher;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class FString>                                      MetaData;                                                // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.[S] Request Actor Removal
	 */
	struct ABP_PlayerState_Framework_C_SRequestActorRemoval_Params
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnOtherPlayerStopSpectateMyTeam
	 */
	struct ABP_PlayerState_Framework_C_OnOtherPlayerStopSpectateMyTeam_Params
	{
	public:
		class ASolarSpectateInfo*                                  InSpectateInfo;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.ExecuteUbergraph_BP_PlayerState_Framework
	 */
	struct ABP_PlayerState_Framework_C_ExecuteUbergraph_BP_PlayerState_Framework_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectTimeChange__DelegateSignature
	 */
	struct ABP_PlayerState_Framework_C_OnResurrectTimeChange__DelegateSignature_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectionFinished__DelegateSignature
	 */
	struct ABP_PlayerState_Framework_C_OnResurrectionFinished__DelegateSignature_Params
	{
	public:
		E_ResurrectType                                            ResurrectType;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZPSA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABP_PlayerState_Framework_C*                         TargetPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerState_Framework.BP_PlayerState_Framework_C.OnResurrectionBegin__DelegateSignature
	 */
	struct ABP_PlayerState_Framework_C_OnResurrectionBegin__DelegateSignature_Params
	{
	public:
		int32_t                                                    Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_ResurrectType                                            Type;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1VP1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_ResurrectInfo                                    options;                                                 // 0x0014(0x0005)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
