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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass FL_NextGenCustomMode.FL_NextGenCustomMode_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UFL_NextGenCustomMode_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_ABindOnBasicSystemReady(const class FScriptDelegate& Event, class UObject* __WorldContext, bool* bReady);
		bool STATIC_UseNewAiComp(class UObject* __WorldContext);
		void STATIC_GetAiComp(class UObject* __WorldContext, class USBattleRoyaleGameModeAIComp** AiComp);
		void STATIC_SortMap(TMap<class FString, float> MapIn, bool Ascending, class UObject* __WorldContext, TMap<class FString, float>* Sorted);
		class UUserWidget* STATIC_cShowWidget(class UClass* WidgetClass, E_UI_Root Layer, class UObject* __WorldContext);
		void STATIC_cCreateWidget(class UClass* WidgetClass, E_UI_Root Layer, class UObject* __WorldContext, class UUserWidget** WidgetObject);
		void STATIC_GetRandomKeyInWidget(TMap<int32_t, int32_t> KeyWeight, class UObject* __WorldContext, int32_t* HitKey);
		void STATIC_SumOfIntArray(TArray<int32_t>* Array, class UObject* __WorldContext, int32_t* Sum);
		void STATIC_GetTeamPlayerCount(class UObject* __WorldContext, int32_t* NumMode);
		void STATIC_AGetModeConfig(class UObject* __WorldContext, class UCGMGameplayConfig** ModeConfig);
		void STATIC_CSetWidgetVisibility(E_BattleControlWidgets Widget, bool Visibility, class UObject* __WorldContext);
		void STATIC_AGetDSTime(class UObject* __WorldContext, int32_t* Time);
		void STATIC_AGetBattleTime(class UObject* __WorldContext, int32_t* Time);
		void STATIC_ToBool(const class FString& String, class UObject* __WorldContext, bool* _bool_);
		void STATIC_APrintLog(const class FString& Prefix, TMap<class FString, class FString> InputPin, class UObject* __WorldContext);
		void STATIC_AGetCharacters(bool OnlyRealPlayers, class UObject* __WorldContext, TArray<class ASolarCharacter*>* Characters);
		void STATIC_AGetTeamCountMax(class UObject* __WorldContext, int32_t* OutValue);
		void STATIC_SSetTeamCountMax(int32_t InValue, class UObject* __WorldContext);
		void STATIC_AGetPlayerCountMax(class UObject* __WorldContext, int32_t* OutValue);
		void STATIC_SSetPlayerCountMax(int32_t InValue, class UObject* __WorldContext);
		void STATIC_cFillInCanvas(class UCanvasPanelSlot* Slot, class UObject* __WorldContext);
		void STATIC_SUpdateTeamsCount(int32_t Change, bool Set, class UObject* __WorldContext, int32_t* Current);
		void STATIC_CRemoveAllWidgetsFromBigMapUI(E_BigMapSlot Slot, class UObject* __WorldContext, bool* Success);
		void STATIC_CInsertWidgetToBigMapUI(class UUserWidget* Widget, E_BigMapSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success);
		void STATIC_CRemoveAllWidgetsFromBackpackUI(E_BackPackSlot Slot, class UObject* __WorldContext, bool* Success);
		void STATIC_CInsertWidgetToBackpackUI(class UUserWidget* Widget, E_BackPackSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success);
		void STATIC_sIsTesting(class UObject* __WorldContext, bool* Testing);
		void STATIC_AGetAllRealPlayers(class UObject* __WorldContext, TArray<class ASCMPlayerState*>* RealPlayers);
		void STATIC_APrintStringArray(const class FString& Prefix, TArray<class FString>* Array, class UObject* __WorldContext);
		void STATIC_ADataInt(ESCMHostType HostType, const class FString& HostID, const class FString& DataName, int32_t InValue, class UObject* __WorldContext);
		void STATIC_AGetRandomLocationNearby(const struct FVector& Center, float Radius, class UObject* __WorldContext, struct FVector* TargetLocation1);
		void STATIC_UpdatePlayerCount(int32_t Change, bool Set, class UObject* __WorldContext, int32_t* Current);
		void STATIC_BattleOver(class UObject* __WorldContext);
		void STATIC_DeathReason2String(ESCMDamageType DamageType, class UObject* __WorldContext, class FString* TraceString);
		void STATIC_AGetPlayerType(class ASCMPlayerState* Player, class UObject* __WorldContext, E_PlayerType* PlayerType);
		void STATIC_SGetOutcomIDByChestID(int32_t Key, class UObject* __WorldContext, int32_t* OutcomeID);
		void STATIC_Vector2DArray2String(TArray<struct FVector2D>* Vector, class UObject* __WorldContext, class FString* str);
		void STATIC_VectorArray2String(TArray<struct FVector>* Vector, class UObject* __WorldContext, class FString* str);
		void STATIC_Vector2D2String(const struct FVector2D& Vector, class UObject* __WorldContext, class FString* str);
		void STATIC_(int32_t _, int32_t __, TArray<int32_t>* ___, class UObject* __WorldContext, int32_t* Result);
		void STATIC_SGetBuildPackageType(class UObject* __WorldContext, ESolarBuildConfiguration*);
		void STATIC_SNumber2Letter(int32_t Number, class UObject* __WorldContext, class FString* Letter, bool* Valid);
		void STATIC_Vector2String(const struct FVector& Vector, class UObject* __WorldContext, class FString* str);
		void STATIC_Bool2String(bool _bool_, class UObject* __WorldContext, class FString* String);
		void STATIC_(const struct FVector& _, bool __, class UObject* __WorldContext, struct FVector* ___, float* Z, bool* ____);
		void STATIC_ToIntStringArray(TArray<class FString>* str, class UObject* __WorldContext, TArray<int32_t>* Int);
		void STATIC_AGetMiniMapSize(int32_t MapId, class UObject* __WorldContext, struct FVector2D* Size);
		void STATIC_SGetMapIDByName(const class FString& LevelName, class UObject* __WorldContext, int32_t* MapId);
		class UCGMLogicComponent* STATIC_SGetModeMainLogic(class UObject* __WorldContext);
		void STATIC_SDeployPlayer(class ASolarPlayerState* TargetPlayer, class APlayerStart* PlayerStart, bool ClearPlayerItems, class UObject* __WorldContext);
		void STATIC_AWorldLocationToMiniMap(const struct FVector& WorldLocation, class UObject* __WorldContext, struct FVector2D* MiniMapPosition);
		void STATIC_AMiniMapToWorldLocation(const struct FVector2D& MiniMapPosition, float Z, class UObject* __WorldContext, struct FVector* WorldLocation);
		class USolarUserWidget* STATIC_cCreateWidgetAndDisplay(class UClass* WidgetClass, E_UI_Root DisplayLayer, class UObject* __WorldContext);
		class USolarMapManager* STATIC_AGetMapManager(class UObject* __WorldContext);
		class ASolarCharacter* STATIC_CGetLocalCharacter(class UObject* __WorldContext);
		void STATIC_sGetWarmGameInfo(class UObject* __WorldContext, bool* bIsWarmGame, const struct FSolarTablesData_WarmGameMode& WarmGameInfo);
		void STATIC_SPlayInEditor(class UObject* __WorldContext, bool* bIsEditor);
		void STATIC_AGetBotTemplete(class UObject* __WorldContext, TMap<int32_t, int32_t>* Templete);
		void STATIC_AGetExcelTableReader(class UObject* __WorldContext, class USolarTables_TablesReader** TablesReader);
		void STATIC_sSetGlobalDamageEnable(bool Enabled, class UObject* __WorldContext);
		void STATIC_sGetLogicComponent(class UObject* __WorldContext, class UCGMLogicComponent** LogicComponent);
		void STATIC_CRemoveAllWidgetsFromBattleUI(E_BattleControllerSlot Slot, class UObject* __WorldContext, bool* Success);
		void STATIC_CInsertWidgetToBattleUI(class UUserWidget* Widget, E_BattleControllerSlot Slot, bool bReplaceOldWidget, class UObject* __WorldContext, class UPanelSlot** OutResultSlot, bool* Success);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
#pragma pack(pop)
#endif
