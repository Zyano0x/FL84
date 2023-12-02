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
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[ A]BindOnBasicSystemReady
	 */
	struct UFL_NextGenCustomMode_C_ABindOnBasicSystemReady_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReady;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.UseNewAiComp
	 */
	struct UFL_NextGenCustomMode_C_UseNewAiComp_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6RC8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetAiComp
	 */
	struct UFL_NextGenCustomMode_C_GetAiComp_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBattleRoyaleGameModeAIComp*                        AiComp;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.SortMap
	 */
	struct UFL_NextGenCustomMode_C_SortMap_Params
	{
	public:
		TMap<class FString, float>                                 MapIn;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Ascending;                                               // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_39QX[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0058(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<class FString, float>                                 Sorted;                                                  // 0x0060(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]ShowWidget
	 */
	struct UFL_NextGenCustomMode_C_cShowWidget_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_UI_Root                                                  Layer;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KE0P[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]CreateWidget
	 */
	struct UFL_NextGenCustomMode_C_cCreateWidget_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_UI_Root                                                  Layer;                                                   // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9MN8[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUserWidget*                                         WidgetObject;                                            // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetRandomKeyInWidget
	 */
	struct UFL_NextGenCustomMode_C_GetRandomKeyInWidget_Params
	{
	public:
		TMap<int32_t, int32_t>                                     KeyWeight;                                               // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             __WorldContext;                                          // 0x0050(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HitKey;                                                  // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.SumOfIntArray
	 */
	struct UFL_NextGenCustomMode_C_SumOfIntArray_Params
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Sum;                                                     // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.GetTeamPlayerCount
	 */
	struct UFL_NextGenCustomMode_C_GetTeamPlayerCount_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumMode;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2RUE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetModeConfig
	 */
	struct UFL_NextGenCustomMode_C_AGetModeConfig_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCGMGameplayConfig*                                  ModeConfig;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]SetWidgetVisibility
	 */
	struct UFL_NextGenCustomMode_C_CSetWidgetVisibility_Params
	{
	public:
		E_BattleControlWidgets                                     Widget;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visibility;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N4Y0[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetDSTime
	 */
	struct UFL_NextGenCustomMode_C_AGetDSTime_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Time;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetBattleTime
	 */
	struct UFL_NextGenCustomMode_C_AGetBattleTime_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Time;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.ToBool
	 */
	struct UFL_NextGenCustomMode_C_ToBool_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _bool_;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]PrintLog
	 */
	struct UFL_NextGenCustomMode_C_APrintLog_Params
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TMap<class FString, class FString>                         InputPin;                                                // 0x0010(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetCharacters
	 */
	struct UFL_NextGenCustomMode_C_AGetCharacters_Params
	{
	public:
		bool                                                       OnlyRealPlayers;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LS07[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASolarCharacter*>                             Characters;                                              // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetTeamCountMax
	 */
	struct UFL_NextGenCustomMode_C_AGetTeamCountMax_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutValue;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]SetTeamCountMax
	 */
	struct UFL_NextGenCustomMode_C_SSetTeamCountMax_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_81BH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetPlayerCountMax
	 */
	struct UFL_NextGenCustomMode_C_AGetPlayerCountMax_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutValue;                                                // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]SetPlayerCountMax
	 */
	struct UFL_NextGenCustomMode_C_SSetPlayerCountMax_Params
	{
	public:
		int32_t                                                    InValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VFVO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c]FillInCanvas
	 */
	struct UFL_NextGenCustomMode_C_cFillInCanvas_Params
	{
	public:
		class UCanvasPanelSlot*                                    Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]UpdateTeamsCount
	 */
	struct UFL_NextGenCustomMode_C_SUpdateTeamsCount_Params
	{
	public:
		int32_t                                                    Change;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Set;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KOGL[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Current;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBigMapUI
	 */
	struct UFL_NextGenCustomMode_C_CRemoveAllWidgetsFromBigMapUI_Params
	{
	public:
		E_BigMapSlot                                               Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SHGC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AYPR[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBigMapUI
	 */
	struct UFL_NextGenCustomMode_C_CInsertWidgetToBigMapUI_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_BigMapSlot                                               Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReplaceOldWidget;                                       // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LAMG[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelSlot*                                          OutResultSlot;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZYIR[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBackpackUI
	 */
	struct UFL_NextGenCustomMode_C_CRemoveAllWidgetsFromBackpackUI_Params
	{
	public:
		E_BackPackSlot                                             Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SIG7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_I5K6[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBackpackUI
	 */
	struct UFL_NextGenCustomMode_C_CInsertWidgetToBackpackUI_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_BackPackSlot                                             Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReplaceOldWidget;                                       // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_120I[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelSlot*                                          OutResultSlot;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LWVB[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s]IsTesting
	 */
	struct UFL_NextGenCustomMode_C_sIsTesting_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Testing;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8Q8Z[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetAllRealPlayers
	 */
	struct UFL_NextGenCustomMode_C_AGetAllRealPlayers_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASCMPlayerState*>                             RealPlayers;                                             // 0x0008(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]PrintStringArray
	 */
	struct UFL_NextGenCustomMode_C_APrintStringArray_Params
	{
	public:
		class FString                                              Prefix;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class FString>                                      Array;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]DataInt++
	 */
	struct UFL_NextGenCustomMode_C_ADataInt_Params
	{
	public:
		ESCMHostType                                               HostType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4LZR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              HostID;                                                  // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              DataName;                                                // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    InValue;                                                 // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D9YF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetRandomLocationNearby
	 */
	struct UFL_NextGenCustomMode_C_AGetRandomLocationNearby_Params
	{
	public:
		struct FVector                                             Center;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             TargetLocation1;                                         // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.UpdatePlayerCount
	 */
	struct UFL_NextGenCustomMode_C_UpdatePlayerCount_Params
	{
	public:
		int32_t                                                    Change;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Set;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DT7G[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Current;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.BattleOver
	 */
	struct UFL_NextGenCustomMode_C_BattleOver_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.DeathReason2String
	 */
	struct UFL_NextGenCustomMode_C_DeathReason2String_Params
	{
	public:
		ESCMDamageType                                             DamageType;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HDFF[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              TraceString;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetPlayerType
	 */
	struct UFL_NextGenCustomMode_C_AGetPlayerType_Params
	{
	public:
		class ASCMPlayerState*                                     Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_PlayerType                                               PlayerType;                                              // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetOutcomIDByChestID
	 */
	struct UFL_NextGenCustomMode_C_SGetOutcomIDByChestID_Params
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PYCU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutcomeID;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2DArray2String
	 */
	struct UFL_NextGenCustomMode_C_Vector2DArray2String_Params
	{
	public:
		TArray<struct FVector2D>                                   Vector;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              str;                                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.VectorArray2String
	 */
	struct UFL_NextGenCustomMode_C_VectorArray2String_Params
	{
	public:
		TArray<struct FVector>                                     Vector;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              str;                                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2D2String
	 */
	struct UFL_NextGenCustomMode_C_Vector2D2String_Params
	{
	public:
		struct FVector2D                                           Vector;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              str;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.抽选随机数字
	 */
	struct UFL_NextGenCustomMode_C__Params_
	{
	public:
		int32_t                                                    _2;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            _3;                                                       // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Result;                                                  // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BTLT[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetBuildPackageType
	 */
	struct UFL_NextGenCustomMode_C_SGetBuildPackageType_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]Number2Letter
	 */
	struct UFL_NextGenCustomMode_C_SNumber2Letter_Params
	{
	public:
		int32_t                                                    Number;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V8T7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              Letter;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Valid;                                                   // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UIXE[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Vector2String
	 */
	struct UFL_NextGenCustomMode_C_Vector2String_Params
	{
	public:
		struct FVector                                             Vector;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SJ29[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              str;                                                     // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.Bool2String
	 */
	struct UFL_NextGenCustomMode_C_Bool2String_Params
	{
	public:
		bool                                                       _bool_;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PW9Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              String;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.获取地面高度
	 */
	struct UFL_NextGenCustomMode_C__Params
	{
	public:
		bool                                                       _2;                                                       // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YF4J[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             _3;                                                       // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       _4;                                                       // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.ToInt(StringArray)
	 */
	struct UFL_NextGenCustomMode_C_ToIntStringArray_Params
	{
	public:
		TArray<class FString>                                      str;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            Int;                                                     // 0x0018(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetMiniMapSize
	 */
	struct UFL_NextGenCustomMode_C_AGetMiniMapSize_Params
	{
	public:
		int32_t                                                    MapID;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4CBT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Size;                                                    // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetMapIDByName
	 */
	struct UFL_NextGenCustomMode_C_SGetMapIDByName_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MapID;                                                   // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PS76[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]GetModeMainLogic
	 */
	struct UFL_NextGenCustomMode_C_SGetModeMainLogic_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCGMLogicComponent*                                  ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]DeployPlayer
	 */
	struct UFL_NextGenCustomMode_C_SDeployPlayer_Params
	{
	public:
		class ASolarPlayerState*                                   TargetPlayer;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APlayerStart*                                        PlayerStart;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ClearPlayerItems;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KU22[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]WorldLocationToMiniMap
	 */
	struct UFL_NextGenCustomMode_C_AWorldLocationToMiniMap_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XHLR[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           MiniMapPosition;                                         // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]MiniMapToWorldLocation
	 */
	struct UFL_NextGenCustomMode_C_AMiniMapToWorldLocation_Params
	{
	public:
		struct FVector2D                                           MiniMapPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Z;                                                       // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_38WC[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7252[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[c] Create Widget And Display
	 */
	struct UFL_NextGenCustomMode_C_cCreateWidgetAndDisplay_Params
	{
	public:
		class UClass*                                              WidgetClass;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_UI_Root                                                  DisplayLayer;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_081O[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USolarUserWidget*                                    ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetMapManager
	 */
	struct UFL_NextGenCustomMode_C_AGetMapManager_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USolarMapManager*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]GetLocalCharacter
	 */
	struct UFL_NextGenCustomMode_C_CGetLocalCharacter_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASolarCharacter*                                     ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s]GetWarmGameInfo
	 */
	struct UFL_NextGenCustomMode_C_sGetWarmGameInfo_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsWarmGame;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W3UB[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSolarTablesData_WarmGameMode                       WarmGameInfo;                                            // 0x0010(0x0068)  (ConstParm, Parm, OutParm)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[S]PlayInEditor
	 */
	struct UFL_NextGenCustomMode_C_SPlayInEditor_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bIsEditor;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetBotTemplete
	 */
	struct UFL_NextGenCustomMode_C_AGetBotTemplete_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<int32_t, int32_t>                                     Templete;                                                // 0x0008(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[A]GetExcelTableReader
	 */
	struct UFL_NextGenCustomMode_C_AGetExcelTableReader_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USolarTables_TablesReader*                           TablesReader;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s] Set Global Damage Enable
	 */
	struct UFL_NextGenCustomMode_C_sSetGlobalDamageEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2KXK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[s] Get Logic Component
	 */
	struct UFL_NextGenCustomMode_C_sGetLogicComponent_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCGMLogicComponent*                                  LogicComponent;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]RemoveAllWidgetsFromBattleUI
	 */
	struct UFL_NextGenCustomMode_C_CRemoveAllWidgetsFromBattleUI_Params
	{
	public:
		E_BattleControllerSlot                                     Slot;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_A0EU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V11P[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FL_NextGenCustomMode.FL_NextGenCustomMode_C.[C]InsertWidgetToBattleUI
	 */
	struct UFL_NextGenCustomMode_C_CInsertWidgetToBattleUI_Params
	{
	public:
		class UUserWidget*                                         Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		E_BattleControllerSlot                                     Slot;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bReplaceOldWidget;                                       // 0x0009(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BG4R[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPanelSlot*                                          OutResultSlot;                                           // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P4LW[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
