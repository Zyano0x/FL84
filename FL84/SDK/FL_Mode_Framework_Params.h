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
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetItemIconPath
	 */
	struct UFL_Mode_Framework_C_GetItemIconPath_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KVP4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              BasePath;                                                // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleSkinList
	 */
	struct UFL_Mode_Framework_C_GetVehicleSkinList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleSkinData
	 */
	struct UFL_Mode_Framework_C_GetVehicleSkinData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LM64[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_VehicleSkin                        ReturnValue;                                             // 0x0010(0x0090)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleTypeList
	 */
	struct UFL_Mode_Framework_C_GetVehicleTypeList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetVehicleTypeData
	 */
	struct UFL_Mode_Framework_C_GetVehicleTypeData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S330[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_VehicleType                        ReturnValue;                                             // 0x0010(0x00F8)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponSkinList
	 */
	struct UFL_Mode_Framework_C_GetWeaponSkinList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponSkinData
	 */
	struct UFL_Mode_Framework_C_GetWeaponSkinData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S4GJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_WeaponSkin                         ReturnValue;                                             // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponList
	 */
	struct UFL_Mode_Framework_C_GetWeaponList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetWeaponData
	 */
	struct UFL_Mode_Framework_C_GetWeaponData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DS9R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_GunProperty                        ReturnValue;                                             // 0x0010(0x00B0)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetBroadcastPlayerName
	 */
	struct UFL_Mode_Framework_C_GetBroadcastPlayerName_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              BroadcastPlayerName;                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.BindBroadcastModeChanged
	 */
	struct UFL_Mode_Framework_C_BindBroadcastModeChanged_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetBroadcastHeroName
	 */
	struct UFL_Mode_Framework_C_GetBroadcastHeroName_Params
	{
	public:
		class FString                                              SolarPlayerID;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              BroadcastHeroName;                                       // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.IsTouchScreenLayout
	 */
	struct UFL_Mode_Framework_C_IsTouchScreenLayout_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetPositionOfCircle
	 */
	struct UFL_Mode_Framework_C_GetPositionOfCircle_Params
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Position;                                                // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.[s]SetCanBeSpectate
	 */
	struct UFL_Mode_Framework_C_sSetCanBeSpectate_Params
	{
	public:
		class ASolarPlayerState*                                   Target;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CanbeSpectate;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GAL6[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.[s]SetCharacterSkill
	 */
	struct UFL_Mode_Framework_C_sSetCharacterSkill_Params
	{
	public:
		class ASolarCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FS_SkillState                                       SkillConfig;                                             // 0x0008(0x0002)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0WOX[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.[a]GetCharacterIDBySkinID
	 */
	struct UFL_Mode_Framework_C_aGetCharacterIDBySkinID_Params
	{
	public:
		int32_t                                                    SkinId;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4WZT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CharacterId;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SZ1V[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.SetSkillState
	 */
	struct UFL_Mode_Framework_C_SetSkillState_Params
	{
	public:
		class ASolarCharacter*                                     Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_CharacterSkillType                                       SkillType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERoleSkillOperation                                        NewSate;                                                 // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PSR2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.HasTeammatesAI
	 */
	struct UFL_Mode_Framework_C_HasTeammatesAI_Params
	{
	public:
		class FString                                              Team;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.Set Skill State for Everybody
	 */
	struct UFL_Mode_Framework_C_SetSkillStateforEverybody_Params
	{
	public:
		E_CharacterSkillType                                       SkillType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ERoleSkillOperation                                        NewSate;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZF3W[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.SetWeaponPartByPartID
	 */
	struct UFL_Mode_Framework_C_SetWeaponPartByPartID_Params
	{
	public:
		class ASolarWeapon*                                        TargetWeapon;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PartID;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ES7J[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9HT1[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.Distribute Experience to Side
	 */
	struct UFL_Mode_Framework_C_DistributeExperiencetoSide_Params
	{
	public:
		int32_t                                                    InExp;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EExpBehaviorType                                           InType;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MH0R[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetRandomCharacter
	 */
	struct UFL_Mode_Framework_C_GetRandomCharacter_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Output;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RBI8[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.RandomIntInRange
	 */
	struct UFL_Mode_Framework_C_RandomIntInRange_Params
	{
	public:
		struct FInt32Range                                         Range;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetLocText
	 */
	struct UFL_Mode_Framework_C_GetLocText_Params
	{
	public:
		struct FSolarTablesLocalText                               InData;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		unsigned char                                              UnknownData_H9M0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterList
	 */
	struct UFL_Mode_Framework_C_GetCharacterList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetBackpackList
	 */
	struct UFL_Mode_Framework_C_GetBackpackList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetTrailList
	 */
	struct UFL_Mode_Framework_C_GetTrailList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterSkinList
	 */
	struct UFL_Mode_Framework_C_GetCharacterSkinList_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            OutKeys;                                                 // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetTrailData
	 */
	struct UFL_Mode_Framework_C_GetTrailData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NUFI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_BackpackTrailProperty              ReturnValue;                                             // 0x0010(0x0070)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetBackpackData
	 */
	struct UFL_Mode_Framework_C_GetBackpackData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UK7M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_BackpackProperty                   ReturnValue;                                             // 0x0010(0x0080)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterData
	 */
	struct UFL_Mode_Framework_C_GetCharacterData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ERM0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_UnitCharacter                      ReturnValue;                                             // 0x0010(0x0180)  (ConstParm, Parm, OutParm, ReturnParm)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetTextureByPath
	 */
	struct UFL_Mode_Framework_C_GetTextureByPath_Params
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_Mode_Framework.FL_Mode_Framework_C.GetCharacterSkinData
	 */
	struct UFL_Mode_Framework_C_GetCharacterSkinData_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3C0Q[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSolarTablesData_Skin                               ReturnValue;                                             // 0x0010(0x00E8)  (ConstParm, Parm, OutParm, ReturnParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
